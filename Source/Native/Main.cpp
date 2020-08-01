#include "System/Backyard/Backyard.h"
#include "System/Network/Network.h"

#include <iostream>

using std::cin;

bool ExitFlag = false;

int main(const int argc, char* argv[])
{
	(void)argc;
	(void)argv;

	FDebugUtility::Initialize("log.txt", true);
	FTimeUtility::Impl::InitializeTime();

	string HelpInfo;
	HelpInfo += "Available commands:\n";
	HelpInfo += "exit\n";

	SNetwork Network;
	Debugf("Initializing Network...");
	Network.Initialize();

	SBackyard Backyard(Network);
	Debugf("Initializing Backyard...");
	Backyard.Initialize();

	while (!ExitFlag)
	{
		char LineBuffer[1024] = {0};
		cin.getline(LineBuffer, sizeof(LineBuffer));

		string Line = LineBuffer;
		if (Line == "exit")
		{
			ExitFlag = true;
		}
		else
		{
			Debugf("%s", HelpInfo.c_str());
		}
	}

	Debugf("Deinitializing Backyard...");
	Backyard.Deinitialize();

	Debugf("Deinitializing Network...");
	Network.Deinitialize();


	return 0;
}
