#pragma once

#include "BackyardTypes.h"
#include "System/Network/Network.h"

/*
 * SM Draft
 * HPlayerState PlayerHandle = Players.Find([&Message](const FPlayerState& InState)
				{
					return InState.Address == Message.Address;
				});
			if (PlayerHandle)
			{
				FPlayerState& Player = Players[PlayerHandle];

				string String;
				String.insert(0, reinterpret_cast<const char* const>(Message.Bytes.data()), Message.Bytes.size());

				Debugf("String interpretation: %s", String.c_str());

				if (String == "Play")
				{
					Debugf("Player %s asks to Play", NetworkUtility::ToString(Message.Address).c_str());

					HPlayerState ServerPlayerStateHandle = Players.Find([](FPlayerState& InPlayer)
						{
							return InPlayer.State == EPlayerState::GameServer;
						});
					if (ServerPlayerStateHandle)
					{

						LowLevel.ServerSendMessage(ServerHandle, Player.Address, );
					}

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
				else if (String == "FailedToConnect")
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
				else if (String == "GameStarted") // TODO: server also lists all participants
				{
					// TODO: if state was GameServer, set state to GameServerStarted, remove server from server list
				}
				else if (String == "GameOver")
				{
					// TODO: if state was GameServerStarted, reset state to None for all participants
				}
				else if (String == "Disconnect")
				{
					// TODO: if state was GameServerStarted, reset state to None
					// TODO: if state was GameClient, remove it from server ConnectedClients, reset state to None
				}
			}
			else
			{
				Debugf("Unexpected message (PlayerState not found) dropped from %s", NetworkUtility::ToString(Message.Address).c_str());
			}
 */

class SBackyard
{
public:
	explicit SBackyard(SNetwork& Network);

	void Initialize();
	void Deinitialize();

	void BackyardRequestPlay(const FNetworkAddress& Address);
	void BackyardRequestBecameGameServer(const FNetworkAddress& Address);
	void BackyardResponseBecomeGameServer(const FNetworkAddress& Address);
	void BackyardResponseBecomeGameClient(const FNetworkAddress& Address, const FNetworkAddress& GameServerAddress);

private:
	SNetwork& Network;

	THandleStorage<HPlayerState, FPlayerState, 0> Players;

	bool ExitFlag{ false };

	void Update();

};
