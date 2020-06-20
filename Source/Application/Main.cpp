#include "Backyard.h"

#include <iostream>

using std::cin;

bool ExitFlag = false;

int main(const int argc, char* argv[])
{
	(void)argc;
	(void)argv;

	string HelpInfo;
	HelpInfo += "Available commands:\n";
	HelpInfo += "exit\n";

	SBackyard Backyard;
	Debugf("Initializing Backyard...");
	Backyard.Initialize();

	while(!ExitFlag)
	{
		char LineBuffer[1024] = { 0 };
		cin.getline(LineBuffer, sizeof(LineBuffer));

		string Line = LineBuffer;
		if(Line == "exit")
		{
			ExitFlag = true;
		} else
		{
			Debugf("%s", HelpInfo.c_str());
		}
	}

	Debugf("Deinitializing Backyard...");
	Backyard.Deinitialize();
	
	return 0;
}
