#pragma once

#include "Core.h"

struct HPlayerState : public HHandle
{
};

enum class EPlayerState : uint32
{
	Idle,
	BecomingGameServer,
	GameServer,
	BecomingGameClient,
	GameClient,
	GameServerStarted
};

struct FPendingClient
{
	float ConnectTime;
	HPlayerState Player;
};

struct FServerState
{
	HPlayerState ConnectedClients;
	vector<FPendingClient> PendingClients;
};

struct FClientState
{
	HPlayerState Server;
};

struct FPlayerState
{
	FNetworkAddress Address;
	EPlayerState State;

	FServerState ServerState;
	FClientState ClientState;
};
