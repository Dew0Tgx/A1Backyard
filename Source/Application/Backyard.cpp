#include "Backyard.h"

namespace BackyardLocal
{
	constexpr uint16 BackyardServerPort = 27030;

	static constexpr int32 UpdatePeriodMilliseconds = 5;
	thread BackyardThread;
}

void SBackyard::Initialize()
{
	LowLevel.Initialize();

	ServerHandle = LowLevel.CreateServer(BackyardLocal::BackyardServerPort);

	BackyardLocal::BackyardThread = thread(
		[this]()
		{
			while (!ExitFlag)
			{
				Update();
				sleep_for(std::chrono::milliseconds(BackyardLocal::UpdatePeriodMilliseconds));
			}
		});
}

void SBackyard::Deinitialize()
{
	ExitFlag = true;

	BackyardLocal::BackyardThread.join();
	
	LowLevel.Deinitialize();
}

void SBackyard::Update()
{
	vector<FNetworkMessage> Messages;
	vector<FNetworkEvent> Events;

	LowLevel.AsyncMoveData(Messages, Events);

	for (const FNetworkEvent& Event : Events)
	{
		if (LowLevel.ServerHasConnection(ServerHandle, Event.Address))
		{
			Debugf(
				"Event %s from Client %s with description %s",
				NetworkLowLevelUtility::ToString(Event.Type).c_str(),
				NetworkUtility::ToString(Event.Address).c_str(),
				Event.Description.c_str());

			switch(Event.Type)
			{
			case ENetworkEventType::Connected:

				break;
			case ENetworkEventType::FailedToConnect:

				break;
			case ENetworkEventType::Disconnected:
				//TODO: do the Disconnect for the player
				break;
			default: Prevent();
			}
		}
		else
		{
			Debugf("Unexpected network event dropped from %s", NetworkUtility::ToString(Event.Address).c_str());
		}
	}

	for (const FNetworkMessage& Message : Messages)
	{
		if (LowLevel.ServerHasConnection(ServerHandle, Message.Address))
		{
			Debugf("Message of size %ull from Client %s", Message.Bytes.size(), NetworkUtility::ToString(Message.Address).c_str());

			string String;
			String.insert(0, reinterpret_cast<const char* const>(Message.Bytes.data()), Message.Bytes.size());

			Debugf("String interpretation: %s", String.c_str());

			if(String == "Play")
			{
				Debugf("Player %s asks to Play", NetworkUtility::ToString(Message.Address).c_str());
				// TODO: if state was None, try to find server and send its IP, set state to BecomingGameClient, add PendingClient to state so others do not try connecting
				// TODO: if no server found send message "You are the server", set state to BecomingGameServer
			}
			else if (String == "Server")
			{
				// TODO: if state was BecomingGameServer, add him to server list, set state to GameServer
			}
			else if (String == "CouldNotBecomeServer")
			{
				// TODO: if state was BecomingGameServer, temporarily blacklist server option from him, set state to None, do the Play
			}
			else if(String == "FailedToConnect")
			{
				// TODO: if state was BecomingGameClient, temporarily blacklist the server for the client, reset client state to None, do the Play for the client
			}
			else if (String == "Client")
			{
				// TODO: if state was BecomingGameClient, set state to GameClient
			}
			else if (String == "ClientConnected")
			{
				// TODO: if state was GameServer, add client to ConnectedClients
			}
			else if(String == "GameStarted") // TODO: server also lists all participants
			{
				// TODO: if state was GameServer, set state to GameServerStarted, remove server from server list
			} else if(String == "GameOver")
			{
				// TODO: if state was GameServerStarted, reset state to None for all participants
			} else if(String == "Disconnect")
			{
				// TODO: if state was GameServerStarted, reset state to None
				// TODO: if state was GameClient, remove it from server ConnectedClients, reset state to None
			}
			
		}
		else
		{
			Debugf("Unexpected message dropped from %s", NetworkUtility::ToString(Message.Address).c_str());
		}
	}
}
