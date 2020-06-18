#pragma once

#include <Utility/Debug.h>
#include <Utility/Utility.h>
#include <Utility/Types.h>
#include <clang-c/Index.h>
#include <iostream>

inline string ToString(const CXString& String)
{
	string Result = clang_getCString(String);
	clang_disposeString(String);
	return Result;
}

inline std::ostream& operator<<(std::ostream& Stream, const CXString& String)
{
	Stream << ToString(String);
	return Stream;
}

struct FEnum
{
	string Name;
};

struct FField
{
	string Name;
	string Type;
};

enum class ERPCType : uint32 { None, Servercast, Multicast, Clientcast };
inline string ToString(ERPCType Type)
{
	switch(Type)
	{
	case ERPCType::None: return "None";
	case ERPCType::Servercast: return "Servercast";
	case ERPCType::Multicast: return "Multicast";
	case ERPCType::Clientcast: return "Clientcast";
	default: Prevent();
	}
	return "";
}

struct FMethod
{
	ERPCType Type;
	string Name;
	string ClassName;
	string ReturnType;
	vector<FField> Args;
	string File;
};

struct FStruct
{
	bool ProjectA1;
	string Name;
	string File;
	vector<string> ParentStructs;
	vector<FField> Fields;
};

inline string ToString(const FStruct& Struct)
{
	string Result = Struct.Name;
	if(!Struct.ParentStructs.empty())
	{
		Result += " : ";
		for (size Index = 0, End = Struct.ParentStructs.size(); Index != End; ++Index)
		{
			Result += Struct.ParentStructs[Index];
			if(Index + 1 != End)
			{
				Result += ", ";
			}
		}
		Result += " ";
	}
	Result += "{ ";
	for(size Index = 0, End = Struct.Fields.size(); Index != End; ++Index)
	{
		Result += Struct.Fields[Index].Type + "(" + Struct.Fields[Index].Name + ")";
		if(Index + 1 != End)
		{
			Result += ", ";
		}
	}
	return Result + " };";
}


inline string ToString(const FMethod& Method)
{
	string Result = Method.ReturnType + " " + Method.ClassName + "::" + Method.Name + "(";

	for(size Index = 0; Index != Method.Args.size(); ++Index)
	{
		const FField& Arg = Method.Args[Index];
		Result += Arg.Type + " " + Arg.Name;
		if(Index + 1 < Method.Args.size())
		{
			Result += ", ";
		}
	}
	
	Result += ");";
	
	return Result;
}

struct FUsing
{
	string Name;
	string Type;
};

struct FTemplateFieldType
{
	string Name;
	bool IsTemplateParam;
};

struct FTemplateField
{
	string Name;
	FTemplateFieldType Type;
};

struct FTemplateStruct
{
	string Name;
	vector<FTemplateField> Fields;
};

struct FContext
{
	vector<FUsing> Usings;
	vector<string> Enums;
	// vector<FTemplateStruct> TemplateStructs;
	vector<FStruct> Structs;
	vector<FMethod> Methods;
};
//todo: find nodes without children and walk up
struct FTreeNode
{
	FTreeNode* Parent;
	const FStruct* StructPointer;
	vector<FTreeNode*> Children;
};

struct FTree
{
	vector<FTreeNode*> Nodes;
};

