#include <assert.h>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <clang-c/Index.h>

#include "CodeGenerator.h"

#include <Utility/Debug.h>
#include <Utility/Types.h>
#include <Utility/Utility.h>

using namespace std;

void PrepareArguments(int argc, char** argv, string& OutputPath, string& TranslationUnitPath, vector<string>& ArgVector)
{
	cout << "Command line args:\n";
	for (int32 i = 0; i < argc; ++i)
	{
		if(i >= 1)
		{
			cout << "\"" << argv[i] << "\" ";
		}
		
		if (i == 1)
		{
			TranslationUnitPath = argv[i];
		}
		else if (i == 2)
		{
			OutputPath = argv[i];
		}
		else if (i >= 3)
		{
			const string Path = argv[i];
			if (!Path.empty())
			{
				string IncludePath = "-I";
				IncludePath += Path;
				ArgVector.push_back(IncludePath);
			}
		}
	}
	cout << "\n";

	if (TranslationUnitPath.empty())
	{
		cout << "A1CodeGen error: Please provide source file as first command line argument." << endl;
		exit(-1);
	}

	if (OutputPath.empty())
	{
		cout << "A1CodeGen error: Please provide output file as seconds command line argument." << endl;
		exit(-1);
	}

	if (ArgVector.empty())
	{
		cout << "A1CodeGen error: Please provide at least one include path as third command line argument." << endl;
		exit(-1);
	}

	ArgVector.emplace_back("-x");
	ArgVector.emplace_back("c++");
	ArgVector.emplace_back("-std=c++17");
	ArgVector.emplace_back("-DA1_DEBUG=1");
	ArgVector.emplace_back("-DWIN32");
	ArgVector.emplace_back("-DUNICODE");
	ArgVector.emplace_back("-D_UNICODE");
	ArgVector.emplace_back("-DNOMINMAX=1");
	ArgVector.emplace_back("-DCAUDIO_STATIC_LIB=1");
	ArgVector.emplace_back("-DENTRY_CONFIG_IMPLEMENT_MAIN=1");
	ArgVector.emplace_back("-DSFML_STATIC");
	ArgVector.emplace_back("-DBGFX_CONFIG_DEBUG=1");
}

int main(const int argc, char* argv[])
{
	if(false)
	{
		cout << "CodeGen is disabled\n";
		return 0;
	}
	
	string OutputPath;
	string TranslationUnitPath;
	vector<string> ArgVector;
	PrepareArguments(argc, argv, OutputPath, TranslationUnitPath, ArgVector);

	//ArgVector = {"-x", "c++", "-std=c++17", "-IF:/Source/A1/ThirdParty/bgfx.cmake/bimg/include"};

	char** Args = new char*[ArgVector.size()];
	for (size_t Index = 0; Index != ArgVector.size(); ++Index)
	{
		const string& Arg = ArgVector[Index];
		Args[Index] = new char[Arg.size() + 1];
		strcpy_s(Args[Index], Arg.size() + 1, Arg.c_str());

		//cout << "Arg: " << Args[Index] << endl;
	}

	FCodeGenerator CodeGenerator;
	return CodeGenerator.Process(OutputPath, TranslationUnitPath, Args, static_cast<int32>(ArgVector.size()));
}
