#pragma once

#include "Core.h"

struct HPlayerState : HHandle
{
};

enum class EPlayerState : uint32
{
	BecomingIdle,
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
	HPlayerState ServerPlayerHandle;
};

struct FPlayerState
{
	FNetworkAddress Address;
	EPlayerState State;

	FServerState ServerState;
	FClientState ClientState;
};
