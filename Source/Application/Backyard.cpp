#include "CodeGenerator.h"

#include <sstream>

namespace FCodeGeneratorLocal
{
	static constexpr const char* const SourcePrefix = "F:/Source/A1/CMake/../Source";
	static ofstream DebugOut;

	static const string ForcePrefix = "#ifdef WIN32\n#define WIN32_LEAN_AND_MEAN\n#include \"Windows.h\"\n#endif\n\n";
	static const vector<string> ForceIncludes{"Core.h"};
	static const vector<string> IgnoredTypes{
		"integral_constant", "std::filesystem::_Directory_entry_proxy",
		"std::_Equal_memcmp_is_safe_helper<std::byte, std::byte, equal_to<> >", "gsl::dim_t<dynamic_range>",
		"FFontRenderContext", "_SCM_PD_FIRMWARE_SLOT_INFO", "std::true_type", "std::mutex",
		"std::integral_constant<unsigned long long, 0>", "std::integral_constant<long long, 1>", "std::locale::facet",
		"std::_UInt_is_zero",
		"std::logic_error", "std::exception", "std::filesystem::_File_status_and_error", "bx::simd256_ref_t",
		"std::ios_base::_Iosarray", "std::ios_base::_Fnarray", "FUIContainer", "std::filesystem::_Dir_enum_impl",
		"std::filesystem::_Dir_enum_impl::_Creator", "FFileWriterBX", "FPanel", "FTextField", "FButton", "FCheckbox",
		"FTextFieldCursor"
	};
	static const vector<string> IgnoredFiles{
		"steamclientpublic.h", "steamnetworkingtypes.h", "isteamnetworkingutils.h", "isteamnetworkingsockets.h"
	};
	static const vector<string> UsingNamespaces{}; // Template arguments full qualification is complex
}

using namespace FCodeGeneratorLocal;
using std::cout;

string GetCursorFile(CXCursor Cursor)
{
	const CXSourceLocation SourceLocation = clang_getCursorLocation(Cursor);
	CXFile File;
	unsigned Line;
	unsigned Column;
	unsigned Offset;
	clang_getFileLocation(SourceLocation, &File, &Line, &Column, &Offset);

	if (File)
	{
		string FileName = ToString(clang_getFileName(File));
		FStringUtility::Replace(FileName, "\\", "/");

		return FileName;
	}

	return "";
}

string GetCursorFilePath(CXCursor Cursor)
{
	const CXSourceLocation SourceLocation = clang_getCursorLocation(Cursor);
	CXFile File;
	unsigned Line;
	unsigned Column;
	unsigned Offset;
	clang_getFileLocation(SourceLocation, &File, &Line, &Column, &Offset);

	if (File)
	{
		string FileName = ToString(clang_getFileName(File));
		FStringUtility::Replace(FileName, "\\", "/");
		return FileName;
	}

	return "";
}

string GetCursorPath(CXCursor Cursor)
{
	const CXSourceLocation SourceLocation = clang_getCursorLocation(Cursor);
	CXFile File;
	unsigned Line;
	unsigned Column;
	unsigned Offset;
	clang_getFileLocation(SourceLocation, &File, &Line, &Column, &Offset);

	if (File)
	{
		string FileName = ToString(clang_getFileName(File));
		FStringUtility::Replace(FileName, "\\", "/");
		string FilePath = FileName + " " + FStringUtility::ToString(Line) + ":" +
			FStringUtility::ToString(Column) + "\n";

		return FilePath;
	}

	return "";
}

// This function is wrong (Result = instead of +=), but it somehow makes everything work.
string GetFullyQualified(CXCursor Cursor)
{
	string Result;
	if (clang_Cursor_isNull(Cursor)
		|| clang_isTranslationUnit(clang_getCursorKind(Cursor)))
	{
		return Result;
	}

	Result += GetFullyQualified(clang_getCursorSemanticParent(Cursor));
	if (!Result.empty())
	{
		Result = "::" + ToString(clang_getCursorSpelling(Cursor));
	}
	return Result;
}

string GetFullyQualifiedType(CXCursor Cursor)
{
	string Result;
	if (clang_Cursor_isNull(Cursor)
		|| clang_isTranslationUnit(clang_getCursorKind(Cursor)))
	{
		return Result;
	}

	Result += GetFullyQualified(clang_getCursorSemanticParent(Cursor));
	if (!Result.empty())
	{
		Result += "::";
	}
	return Result + ToString(clang_getTypeSpelling(clang_getCursorType(Cursor)));
}

void VisitChildren(CXCursor InCursor, callback<void(CXCursor Cursor)> Func)
{
	clang_visitChildren(
		InCursor,
		[](CXCursor Cursor, CXCursor Parent, CXClientData ClientData)
		{
			(void)Parent;
			callback<void(CXCursor)>& Func = *static_cast<callback<void(CXCursor)>*>(ClientData);
			Func(Cursor);
			return CXChildVisit_Continue;
		},
		&Func);
}

void FCodeGenerator::PrintDiagnostics(CXTranslationUnit ClangTranslationUnit)
{
	const uint32 NumDiagnosics = clang_getNumDiagnostics(ClangTranslationUnit);
	for (uint32 Index = 0; Index < NumDiagnosics; ++Index)
	{
		CXDiagnostic ClangDiagnostic = clang_getDiagnostic(ClangTranslationUnit, Index);

		CXString Category = clang_getDiagnosticCategoryText(ClangDiagnostic);
		CXString Spelling = clang_getDiagnosticSpelling(ClangDiagnostic);
		CXDiagnosticSeverity Severity = clang_getDiagnosticSeverity(ClangDiagnostic);

		CXSourceLocation SourceLocation = clang_getDiagnosticLocation(ClangDiagnostic);
		CXFile File;
		unsigned Line;
		unsigned Column;
		unsigned Offset;
		clang_getFileLocation(SourceLocation, &File, &Line, &Column, &Offset);

		if (File)
		{
			const string FileName = ToString(clang_getFileName(File));
			cout << "A1CodeGen diagnostic error [" << Index << "] " << Category << " (" << Severity << ") " << Spelling
				<< " at "
				<< FileName << " " << Line << ":" << Column << "\n";
		}
		clang_disposeDiagnostic(ClangDiagnostic);
	}
}

void FCodeGenerator::BuildContext(
	const CXCursor UnitCursor,
	FContext& Context)
{
	DebugOut << "... Collecting context ...\n";

	VisitChildren(
		UnitCursor,
		[this, &Context](CXCursor Cursor)
		{
			ParseCursor(Cursor, Context);
		});
}

void FCodeGenerator::ParseCursor(CXCursor Cursor, FContext& Context)
{
	const string CursorPath = GetCursorPath(Cursor);
	const string CursorFilePath = GetCursorFilePath(Cursor);
	if (CursorPath.empty()) return;
	for (const string& IgnoredFile : IgnoredFiles)
	{
		if (FStringUtility::EndsWith(CursorFilePath, IgnoredFile))
		{
			//DebugOut << "Skipping cursor from file " << IgnoredFile << "\n";
			return;
		}
	}

	const bool ProjectA1 = FStringUtility::StartsWith(CursorPath, SourcePrefix);
	CXCursorKind Kind = clang_getCursorKind(Cursor);
	const string Spelling = ToString(clang_getCursorSpelling(Cursor));
	if (Spelling.empty()) return;

	//DebugOut << " - " << clang_getCursorSpelling(Cursor) << " : " << clang_getCursorKindSpelling(Kind) << "\n";

	switch (Kind)
	{
	case CXCursor_EnumDecl:
		if (!Spelling.empty()
			&& !FCollectionUtility::Contains(Context.Enums, Spelling))
		{
			//DebugOut << "Adding enum " << Spelling << "\n";
			FCollectionUtility::Add(Context.Enums, Spelling);
		}

		break;

	case CXCursor_StructDecl:
		{
			FStruct Struct;
			Struct.Name = GetFullyQualifiedType(Cursor);
			Struct.ProjectA1 = ProjectA1;
			Struct.File = GetCursorFile(Cursor);
			VisitChildren(
				Cursor,
				[&Struct](CXCursor Cursor)
				{
					const string CursorSpelling = ToString(clang_getCursorSpelling(Cursor));

					const CXCursorKind Kind = clang_getCursorKind(Cursor);
					if (Kind == CXCursor_FieldDecl)
					{
						Struct.Fields.emplace_back(
							FField{
								CursorSpelling, GetFullyQualifiedType(Cursor)
							});
					}
					else if (Kind == CXCursor_CXXBaseSpecifier)
					{
						Struct.ParentStructs.emplace_back(
							GetFullyQualifiedType(clang_getCursorDefinition(Cursor)));
					}
					else
					{
						// if (Struct.ProjectA1)
						// 	DebugOut << "Ignore A1 struct field " << CursorSpelling << " " <<
						// 		clang_getCursorKindSpelling(Kind) << "\n";
					}
				});

			//if(ProjectA1) 
			//DebugOut << "Adding struct " << ToString(Struct) << "\n";
			FCollectionUtility::Add(Context.Structs, Struct);

			VisitChildren(
				Cursor,
				[this, &Context](CXCursor Cursor)
				{
					ParseCursor(Cursor, Context);
				});
		}
		break;
	case CXCursor_ClassDecl:
		//DebugOut << "Passing by class " << Spelling << "\n";

		VisitChildren(
			Cursor,
			[this, &Context](CXCursor Cursor)
			{
				ParseCursor(Cursor, Context);
			});
		break;
	case CXCursor_TypedefDecl:
	case CXCursor_Namespace:
		VisitChildren(
			Cursor,
			[this, &Context](CXCursor Cursor)
			{
				ParseCursor(Cursor, Context);
			});
		break;
	case CXCursor_Constructor:
	case CXCursor_CXXMethod:
		if (ProjectA1)
		{
			//DebugOut << "Analyzing method " << Spelling << "\n";

			FMethod Method;
			Method.ReturnType = "void";
			Method.Name = Spelling;
			Method.Type = ERPCType::None;

			if (FStringUtility::StartsWith(Method.Name, "Multicast"))
			{
				Method.Type = ERPCType::Multicast;
			}
			else if (FStringUtility::StartsWith(Method.Name, "Servercast"))
			{
				Method.Type = ERPCType::Servercast;
			}
			else if (FStringUtility::StartsWith(Method.Name, "Clientcast"))
			{
				Method.Type = ERPCType::Clientcast;
			}
			Method.ClassName = GetFullyQualifiedType(clang_getCursorSemanticParent(Cursor));
			Method.File = GetCursorFile(Cursor);
			FStringUtility::TrimRight(Method.File, ".h");
			Method.File += ".cpp";
			VisitChildren(
				Cursor,
				[&Method](CXCursor Cursor)
				{
					const string CursorSpelling = ToString(clang_getCursorSpelling(Cursor));

					const CXCursorKind Kind = clang_getCursorKind(Cursor);


					// DebugOut << "Method field " << CursorSpelling << " (" <<
					// 	clang_getCursorKindSpelling(Kind) << ")\n";

					if (Kind == CXCursor_TypeRef)
					{
						Method.ReturnType = CursorSpelling;
						FStringUtility::TrimLeft(Method.ReturnType, "struct ");
						FStringUtility::TrimLeft(Method.ReturnType, "class ");
					}
					else if (Kind == CXCursor_ParmDecl)
					{
						string Type = GetFullyQualifiedType(clang_getCursorDefinition(Cursor));
						Method.Args.emplace_back(
							FField{CursorSpelling, Type});
					}
				});

			//DebugOut << "Adding method " << ToString(Method) << "\n";
			FCollectionUtility::Add(Context.Methods, Method);
		}
		else
		{
			//DebugOut << "Ignoring method " << Spelling << "\n";
		}
		break;
	default:
		break;
	}
}

bool FCodeGenerator::IsIgnored(const string& Name)
{
	return FCollectionUtility::Contains(IgnoredTypes, Name);
}

FTreeNode* FCodeGenerator::FindNode(FTree& Tree, const string& Name)
{
	for (FTreeNode* Node : Tree.Nodes)
	{
		if (Node->StructPointer && Node->StructPointer->Name == Name) return Node;
	}

	return nullptr;
}

FTreeNode* FCodeGenerator::CreateNode(FTree& Tree, const FStruct* Struct, FTreeNode* Parent)
{
	Check(!FindNode(Tree, Struct->Name));
	FTreeNode* Result = new FTreeNode{Parent, Struct, {}};
	Tree.Nodes.emplace_back(Result);
	return Result;
}

vector<FTreeNode*> FCodeGenerator::CollectTraverseQueue(FTree& Tree)
{
	vector<FTreeNode*> Result;
	for (FTreeNode* Node : Tree.Nodes)
	{
		if (Node->Children.empty())
		{
			FCollectionUtility::AddUnique(Result, Node);
		}
	}
	return Result;
}

vector<const FStruct*> FCodeGenerator::ComputeStructOrder(FTree& Tree, const vector<FTreeNode*>& InTraverseQueue)
{
	vector<const FStruct*> Result;
	vector<FTreeNode*> Queue = InTraverseQueue;
	FTreeNode* LastChangedNode = Queue.back() ? nullptr : Queue.front();
	while (!Queue.empty())
	{
		FTreeNode* CurrentNode = Queue.front();

		bool Available = true;
		for (FTreeNode* Node : CurrentNode->Children)
		{
			if (!FCollectionUtility::Contains(Result, Node->StructPointer))
			{
				Available = false;
				break;
			}
		}

		if (Available)
		{
			if (CurrentNode->StructPointer)
			{
				//DebugOut << "Generating struct " << CurrentNode->StructPointer->Name << "\n";
				Result.emplace_back(CurrentNode->StructPointer);
			}

			if (CurrentNode->Parent
				&& !FCollectionUtility::Contains(Result, CurrentNode->Parent->StructPointer)
				&& !FCollectionUtility::Contains(Queue, CurrentNode->Parent))
			{
				bool ParentAvailable = true;
				for (FTreeNode* Node : CurrentNode->Parent->Children)
				{
					if (!FCollectionUtility::Contains(Result, Node->StructPointer))
					{
						ParentAvailable = false;
						break;
					}
				}
				if (ParentAvailable)
				{
					FCollectionUtility::Add(Queue, CurrentNode->Parent);
				}
			}
		}
		else if (CurrentNode == LastChangedNode)
		{
			// full loop without changes
			Preventf("Two-sided dependence");
		}
		else
		{
			Queue.push_back(CurrentNode);
		}

		Queue.erase(Queue.begin());
	}

	// Things like FTextureBatch member vector<FGroup> are not present (they are removed because no such struct was parsed from AST)
	// TODO: actualy extract types from template instantiations and make FStruct::Dependencies for type-only dependencies listing (fields remain the same)

	for (FTreeNode* Node : Tree.Nodes)
	{
		if (!FCollectionUtility::Contains(Result, Node->StructPointer))
		{
			// DebugOut << "Struct node " << Node->StructPointer->Name << " was not connected and has been automatically pushed\n";
			Result.emplace_back(Node->StructPointer);
		}
	}

	return Result;
}

const FStruct* FCodeGenerator::FindStruct(FContext& Context, const string& Name)
{
	for (FStruct& Struct : Context.Structs)
	{
		if (Struct.Name == Name) return &Struct;
	}
	return nullptr;
}

void FCodeGenerator::BuildTree(FContext& Context, FTree& Tree)
{
	DebugOut << "... Building tree ...\n";

	for (const FStruct& StructRef : Context.Structs)
	{
		const FStruct* Struct = &StructRef;
		FTreeNode* Node = FindNode(Tree, Struct->Name);
		if (!Node) Node = CreateNode(Tree, Struct, nullptr);
		for (const string& Parent : Struct->ParentStructs)
		{
			FTreeNode* ParentNode = FindNode(Tree, Parent);
			if (ParentNode)
			{
				FCollectionUtility::AddUnique(Node->Children, ParentNode);
			}
			else if (const FStruct* ParentStruct = FindStruct(Context, Parent))
			{
				ParentNode = CreateNode(Tree, ParentStruct, Node);
				FCollectionUtility::Add(Node->Children, ParentNode);
			}
		}
		for (const FField& Field : Struct->Fields)
		{
			FTreeNode* FieldNode = FindNode(Tree, Field.Type);
			if (FieldNode)
			{
				FCollectionUtility::AddUnique(Node->Children, FieldNode);
			}
			else if (const FStruct* FieldStruct = FindStruct(Context, Field.Type))
			{
				FieldNode = CreateNode(Tree, FieldStruct, Node);
				FCollectionUtility::Add(Node->Children, FieldNode);
			}
			//DebugOut << "Connecting " << Field.Type << " to " << Struct->Name << "\n";
		}
	}
}

bool FCodeGenerator::GenerateStructsSerialization(const string& OutputPath, vector<const FStruct*> StructOrder)
{
	DebugOut << "... Generating Structs Serialization code ...\n";

	const string GenPath = OutputPath + "/SerializationUtility.gen.inl";
	const string OldContent = FFileUtility::TryReadFile(GenPath);

	std::stringstream GenOut;
	GenOut << "#pragma once\n\n";

	GenOut << ForcePrefix;

	if (!ForceIncludes.empty())
	{
		for (const string& ForceInclude : ForceIncludes)
		{
			GenOut << "#include \"" << ForceInclude << "\"\n";
		}
		GenOut << "\n";
	}

	vector<string> IncludedFiles;
	for (const FStruct* Struct : StructOrder)
	{
		FCollectionUtility::AddUnique(IncludedFiles, Struct->File);
	}

	for (const string& IncludedFile : IncludedFiles)
	{
		GenOut << "#include \"" << IncludedFile << "\"\n";
	}

	if (!UsingNamespaces.empty())
	{
		GenOut << "\n\n";

		for (const string& Namespace : UsingNamespaces)
		{
			GenOut << "using namespace " << Namespace << ";\n";
		}
	}

	GenOut << "\n\nnamespace FSerializationUtility\n{\n";

	for (const FStruct* Struct : StructOrder)
	{
		if (IsIgnored(Struct->Name))
		{
			GenOut << "\t// struct " << Struct->Name << " is ignored \n\n";
			continue;
		}

		GenOut << "\t//********************************* Generated for struct " << Struct->Name <<
			" *********************************\n";
		GenOut << "\ttemplate <>\n";
		GenOut << "\tinline void Serialize(vector<byte>& Out, const " << Struct->Name << "& Value)\n";
		GenOut << "\t{\n";
		GenOut << "\t\t(void)Out;\n";
		GenOut << "\t\t(void)Value;\n";
		for (const string& Parent : Struct->ParentStructs)
		{
			GenOut << "\t\t";
			if (IsIgnored(Parent)) GenOut << "// ";
			GenOut << "Serialize(Out, static_cast<const " << Parent << "&>(Value));\n";
		}
		for (const FField& Field : Struct->Fields)
		{
			GenOut << "\t\t";
			if (IsIgnored(Field.Type)) GenOut << "// ";
			GenOut << "Serialize(Out, Value." << Field.Name << ");\n";
		}
		GenOut << "\t}\n\n";

		GenOut << "\ttemplate <>\n";
		GenOut << "\tinline void Deserialize(const byte*& InOutPointer, " << Struct->Name << "& Out)\n";
		GenOut << "\t{\n";
		GenOut << "\t\t(void)InOutPointer;\n";
		GenOut << "\t\t(void)Out;\n";
		for (const string& Parent : Struct->ParentStructs)
		{
			GenOut << "\t\t";
			if (IsIgnored(Parent)) GenOut << "// ";
			GenOut << "Deserialize(InOutPointer, static_cast<" << Parent << "&>(Out));\n";
		}
		for (const FField& Field : Struct->Fields)
		{
			GenOut << "\t\t";
			if (IsIgnored(Field.Type)) GenOut << "// ";
			GenOut << "Deserialize(InOutPointer, Out." << Field.Name << ");\n";
		}
		GenOut << "\t}\n";
	}

	GenOut << "}\n";
	GenOut.flush();

	string GeneratedContent = GenOut.str();
	FStringUtility::Replace(GeneratedContent, "\t", "    ");
	FStringUtility::Replace(GeneratedContent, "\r", "");

	bool Result = false;

	if (GeneratedContent != OldContent)
	{
		cout << "A1CodeGen warning: updating code files\n";
		for (int32 Index = 0; Index < 32; ++ Index)
		{
			cout << "A1CodeGen error: solution must be rebuilt\n";
		}

		DebugOut << "Serialization code is outdated, rewriting " + OutputPath + "\n";

		Result = true;

		std::ofstream Out(GenPath);
		Out.write(GeneratedContent.data(), GeneratedContent.size());
		Out.flush();
	}
	else
	{
		DebugOut << "Serialization code is up to date\n";
		cout << "A1CodeGen: generated code is up to date\n";
	}

	return Result;
}

bool FCodeGenerator::GenerateRPCConstructor(
	const vector<const FMethod*>& Methods,
	const string& Path,
	const string& ClassName,
	string& Content)
{
	size ConstructorStart = Content.find(ClassName + "::" + ClassName);

	size ConstructorBodyBegin = Content.find("{\n", ConstructorStart);
	if (ConstructorBodyBegin != string::npos) ConstructorBodyBegin += 2;
	size ConstructorBodyEnd = Content.find("\n}", ConstructorBodyBegin);

	if (ConstructorBodyBegin == string::npos || ConstructorBodyEnd == string::npos)
	{
		DebugOut << "Error: Could not find constructor body at " + Path;
		return false;
	}

	size ConstructorGeneratedBegin = Content.find("// GENERATED CODE BEGIN\n", ConstructorBodyBegin);
	if (ConstructorGeneratedBegin != string::npos)
		ConstructorGeneratedBegin += string("// GENERATED CODE BEGIN\n").
			length();
	if (ConstructorGeneratedBegin > ConstructorBodyEnd) ConstructorGeneratedBegin = string::npos;
	size ConstructorGeneratedEnd = Content.find("\t// GENERATED CODE END", ConstructorBodyBegin);
	if (ConstructorGeneratedEnd > ConstructorBodyEnd) ConstructorGeneratedEnd = string::npos;

	string InsertedCode;

	const bool HasGeneratedBody =
		ConstructorGeneratedBegin != string::npos
		&& ConstructorGeneratedEnd != string::npos;

	if (!HasGeneratedBody)
	{
		if (ConstructorGeneratedBegin != string::npos
			|| ConstructorGeneratedEnd != string::npos)
		{
			InsertedCode += "FIXME: Something is wrong, please delete all generated code from constructor\n";
		}
		InsertedCode += "\t// GENERATED CODE BEGIN\n";
		ConstructorGeneratedBegin = ConstructorBodyBegin;
		ConstructorGeneratedEnd = ConstructorGeneratedBegin;
	}
	Content.erase(ConstructorGeneratedBegin, ConstructorGeneratedEnd - ConstructorGeneratedBegin);
	InsertedCode += "\tFRPCUtility::RegisterSystem(this, Hash(\"" + ClassName + "\"));\n";
	for (const FMethod* MethodPtr : Methods)
	{
		const FMethod& Method = *MethodPtr;
		InsertedCode += "\tFRPCUtility::RegisterFunction(Hash(\"" + ClassName + "\"), Hash(\"" + Method.Name +
			"\"), [](void* ThisPointer, const vector<byte>& Bytes)\n\t\t{\n\t\t\tconst byte* Pointer = Bytes.data();\n";
		for (size Index = 0; Index != Method.Args.size(); ++Index)
		{
			const FField& Arg = Method.Args[Index];
			InsertedCode += "\t\t\tstd::remove_const<std::remove_reference<" + Arg.Type + ">::type>::type " + Arg.
				Name + ";\n";
			InsertedCode += "\t\t\tFSerializationUtility::Deserialize(Pointer, " + Arg.Name + ");\n";
		}

		InsertedCode += "\t\t\tstatic_cast<" + ClassName + "*>(ThisPointer)->" + Method.Name + "(";
		for (size Index = 0; Index != Method.Args.size(); ++Index)
		{
			const FField& Arg = Method.Args[Index];
			InsertedCode += Arg.Name;
			if (Index + 1 < Method.Args.size()) InsertedCode += ", ";
		}
		InsertedCode += ");\n";
		InsertedCode += "\t\t});\n";
	}
	if (!HasGeneratedBody)
	{
		InsertedCode += "\t// GENERATED CODE END\n";
	}
	Content.insert(ConstructorGeneratedBegin, InsertedCode);
	return true;
}

bool FCodeGenerator::GenerateRPCBodies(
	const vector<const FMethod*>& Methods,
	const string& Path,
	string& Content)
{
	for (const FMethod* MethodPtr : Methods)
	{
		const FMethod& Method = *MethodPtr;

		const string StartSequence = Method.ReturnType + " " + Method.ClassName + "::" + Method.Name + "(";

		size MethodStartPosition = Content.find(StartSequence);
		size MethodBodyStartPosition = Content.find("{\n", MethodStartPosition);
		if (MethodBodyStartPosition != string::npos) MethodBodyStartPosition += 2;
		size MethodBodyEndPosition = Content.find("\n}", MethodStartPosition);

		if (MethodBodyStartPosition == string::npos || MethodBodyEndPosition == string::npos)
		{
			DebugOut << "Could not find method " + ToString(Method) + " body at " + Path + "\n";
			return false;
		}

		while (true)
		{
			size RPCBodyStart = Content.find("\tRPC_BODY", MethodBodyStartPosition);
			if (RPCBodyStart > MethodBodyEndPosition) RPCBodyStart = string::npos;
			size RPCBodyEnd = Content.find('\n', RPCBodyStart);
			if (RPCBodyEnd != string::npos) RPCBodyEnd += 1;
			if (RPCBodyStart != string::npos && RPCBodyEnd != string::npos)
			{
				Content.erase(RPCBodyStart, RPCBodyEnd - RPCBodyStart);
				MethodBodyEndPosition = Content.find("\n}", MethodStartPosition);
			}
			else
			{
				break;
			}
		}

		string Insertion = "\tRPC_BODY(Network." + ToString(Method.Type) + "(Hash(\"" + Method.ClassName + "\"), Hash(\""
			+ Method.Name + "\")";
		for (const FField& Arg : Method.Args)
		{
			Insertion += ", " + Arg.Name;
		}
		Insertion += "));\n";
		Content.insert(MethodBodyStartPosition, Insertion);
	}

	return true;
}

int32 FCodeGenerator::Process(const string& OutputPath, const string& TranslationUnitPath, char** Args, int32 Argc)
{
	const string DebugPath = OutputPath + "/Debug.txt";
	DebugOut.open(DebugPath.c_str());

	CXIndex ClangIndex = clang_createIndex(0, 0);
	CXTranslationUnit ClangTranslationUnit = clang_parseTranslationUnit(
		ClangIndex,
		TranslationUnitPath.c_str(),
		Args,
		Argc,
		nullptr,
		0,
		CXTranslationUnit_None);
	if (ClangTranslationUnit == nullptr)
	{
		cout << "A1CodeGen error: Unable to parse translation unit. Quitting. \n";
		DebugOut << "A1CodeGen error: Unable to parse translation unit. Quitting. \n";
		exit(-1);
	}

	PrintDiagnostics(ClangTranslationUnit);

	const CXCursor UnitCursor = clang_getTranslationUnitCursor(ClangTranslationUnit);


	FContext Context;

	BuildContext(UnitCursor, Context);

	FTree Tree;

	//vector<const FStruct*> ProcessQueue = FCollectionUtility::Copy<FStruct, const FStruct*>(Context.Structs, [](const FStruct& Struct) {return &Struct; });
	BuildTree(Context, Tree);
	vector<FTreeNode*> TraverseQueue = CollectTraverseQueue(Tree);

	// DebugOut << "Traverse Queue:\n";
	// for (const FTreeNode* Node : TraverseQueue)
	// {
	// 	DebugOut << Node->StructPointer->Name << "\n";
	// }

	vector<const FStruct*> StructOrder = ComputeStructOrder(Tree, TraverseQueue);

	// TODO:
	// 1. parse methods to generate RPC stuff
	/*
	 *	Parse methods (to find InitializeRPC and Multicast/Server RPCs)
	 *	Parse methods code to
	 *		1. Find if first line of code of method contains generated macros call
	 *			Also remove macros calls not on the first line,
	 *			and ensure one exists at first line and is correct.
	 *		2. Check if InitializeRPC is up to date
	 *	Generate/Update InitializeRPC func in systems
	 *	Update methods body to contain macro call
	 */

	bool NeedsRebuild = false;
	NeedsRebuild |= GenerateStructsSerialization(OutputPath, StructOrder);

	DebugOut << "... Generating RPC code ...\n";

	map<string, vector<const FMethod*>, THasherRaw<string>> FileToRPCMethods;

	for (const FMethod& Method : Context.Methods)
	{
		if (Method.Type != ERPCType::None
			&& Method.ClassName != "SNetwork")
		{
			if (Method.ReturnType != "void")
			{
				DebugOut << "Ignoring unexpected return type " + Method.ReturnType + " at RPC method " + ToString(
					Method);
			}

			FileToRPCMethods[Method.File].emplace_back(&Method);
		}
	}

	for (auto Pair : FileToRPCMethods)
	{
		const string Path = Pair.first;
		const string ClassName = Pair.second.back()->ClassName;

		string Content = FFileUtility::ReadFile(Path);

		string NewContent = Content;
		if (!GenerateRPCConstructor(Pair.second, Path, ClassName, NewContent))
		{
			NeedsRebuild = true;
			continue;
		}
		if (!GenerateRPCBodies(Pair.second, Path, NewContent))
		{
			NeedsRebuild = true;
			continue;
		}

		if (Content != NewContent)
		{
			DebugOut << "Updating RPC code for " + Path + "\n";
			FFileUtility::WriteFile(Path, NewContent);
			NeedsRebuild = true;
		}
	}

	clang_disposeTranslationUnit(ClangTranslationUnit);
	clang_disposeIndex(ClangIndex);

	return NeedsRebuild ? -1 : 0;
}
