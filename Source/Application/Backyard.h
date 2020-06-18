#pragma once

#include "CodeGeneratorTypes.h"

class FCodeGenerator
{
public:

	
	int32 Process(const string& OutputPath,const string& TranslationUnitPath, char** Args, int32 Argc);
	
private:

	void PrintDiagnostics(CXTranslationUnit ClangTranslationUnit);
	void BuildContext(CXCursor UnitCursor, FContext& Context);
	void ParseCursor(CXCursor Cursor, FContext& Context);

	bool IsIgnored(const string& Name);
	FTreeNode* FindNode(FTree& Tree, const string& Name);
	FTreeNode* CreateNode(FTree& Tree, const FStruct* Struct, FTreeNode* Parent);
	vector<FTreeNode*> CollectTraverseQueue(FTree& Tree);
	vector<const FStruct*> ComputeStructOrder(FTree& Tree, const vector<FTreeNode*>& InTraverseQueue);
	const FStruct* FindStruct(FContext& Context, const string& Name);
	void BuildTree(FContext& Context, FTree& Tree);
	bool GenerateStructsSerialization(const string& OutputPath, vector<const FStruct*> StructOrder);
	bool GenerateRPCConstructor(
		const vector<const FMethod*>& Methods,
		const string& Path,
		const string& ClassName,
		string& Content);
	bool GenerateRPCBodies(
		const vector<const FMethod*>& Methods,
		const string& Path,
		string& Content);
	
};