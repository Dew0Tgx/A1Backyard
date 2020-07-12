#include "Backyard.h"

#include "Windows.h"

#include "Generated/Generated.inl"

namespace BackyardLocal
{
	static constexpr int32 UpdatePeriodMilliseconds = 100;
	constexpr uint16 GameServerPort = 27020;
	thread BackyardThread;
}


SBackyard::SBackyard(SNetwork& Network)
	: Network(Network)
{
	// GENERATED CODE BEGIN
	FRPCUtility::RegisterSystem(this, Hash("SBackyard"));
	FRPCUtility::RegisterFunction(Hash("SBackyard"), Hash("BackyardRequestPlay"), [](void* ThisPointer, const vector<byte>& Bytes, const FNetworkAddress& SourceAddress)
		{ 
			const byte * Pointer = Bytes.data(); 
			(void)Pointer;
			(void)SourceAddress;
			static_cast<SBackyard*>(ThisPointer)->BackyardRequestPlay(SourceAddress);
		});
	FRPCUtility::RegisterFunction(Hash("SBackyard"), Hash("BackyardRequestBecameGameServer"), [](void* ThisPointer, const vector<byte>& Bytes, const FNetworkAddress& SourceAddress)
		{ 
			const byte * Pointer = Bytes.data(); 
			(void)Pointer;
			(void)SourceAddress;
			static_cast<SBackyard*>(ThisPointer)->BackyardRequestBecameGameServer(SourceAddress);
		});
	FRPCUtility::RegisterFunction(Hash("SBackyard"), Hash("BackyardResponseBecomeGameServer"), [](void* ThisPointer, const vector<byte>& Bytes, const FNetworkAddress& SourceAddress)
		{ 
			const byte * Pointer = Bytes.data(); 
			(void)Pointer;
			(void)SourceAddress;
			static_cast<SBackyard*>(ThisPointer)->BackyardResponseBecomeGameServer(SourceAddress);
		});
	FRPCUtility::RegisterFunction(Hash("SBackyard"), Hash("BackyardResponseBecomeGameClient"), [](void* ThisPointer, const vector<byte>& Bytes, const FNetworkAddress& SourceAddress)
		{ 
			const byte * Pointer = Bytes.data(); 
			(void)Pointer;
			(void)SourceAddress;
			std::remove_const<std::remove_reference<const FNetworkAddress &>::type>::type GameServerAddress;
			FSerializationUtility::Deserialize(Pointer, GameServerAddress);
			static_cast<SBackyard*>(ThisPointer)->BackyardResponseBecomeGameClient(SourceAddress, GameServerAddress);
		});
	// GENERATED CODE END
}

void SBackyard::Initialize()
{
	ShowWindow(GetConsoleWindow(), SW_SHOW);

	Network.SetOnConnectDelegate(
		[this](const FNetworkAddress& Address)
		{
			Debugf("Player %s connected", FStringUtility::ToString(Address).c_str());

			FPlayerState& Player = Players[Players.Create()];
			Player.State = EPlayerState::None;
			Player.Address = Address;
		});


	Network.SetOnDisconnectDelegate(
		[this](const FNetworkAddress& Address)
		{
			if (HPlayerState PlayerHandle = Players.Find(
				[&Address](const FPlayerState& Player)
				{
					return Player.Address == Address;
				}))
			{
				Debugf("Player %s disconnected", FStringUtility::ToString(Address).c_str());

				// FPlayerState& Player = Players[PlayerHandle];
				// TODO: execute Disconnect
				Players.Destroy(PlayerHandle);
			}
		});

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
}

void SBackyard::BackyardRequestPlay(const FNetworkAddress& Address)
{
	RPC_BODY(Network.BackyardRequest(Hash("BackyardRequestPlay"), Address));
	const HPlayerState PlayerHandle = Players.Find(
		[&Address](const FPlayerState& Player)
		{
			return Player.Address == Address;
		});

	if (PlayerHandle)
	{
		FPlayerState& Player = Players[PlayerHandle];
		Debugf("Player %s asked to play", FStringUtility::ToString(Address).c_str());

		const HPlayerState ServerPlayerHandle = Players.Find(
			[](const FPlayerState& Player)
			{
				return Player.State == EPlayerState::GameServer;
			});

		if (ServerPlayerHandle)
		{
			FPlayerState& GameServerPlayer = Players[ServerPlayerHandle];
			GameServerPlayer.ServerState.PendingClients.emplace_back(FPendingClient{ FTimeUtility::GetTime(), PlayerHandle });
			Player.State = EPlayerState::BecomingGameClient;
			FNetworkAddress GameServerAddress = GameServerPlayer.Address;
			GameServerAddress.Port = BackyardLocal::GameServerPort;
			BackyardResponseBecomeGameClient(Address, GameServerAddress);
		} else
		{
			Player.State = EPlayerState::BecomingGameServer;
			BackyardResponseBecomeGameServer(Address);
		}
	}
}

void SBackyard::BackyardRequestBecameGameServer(const FNetworkAddress& Address)
{
	RPC_BODY(Network.BackyardRequest(Hash("BackyardRequestBecameGameServer"), Address));
	const HPlayerState PlayerHandle = Players.Find(
		[&Address](const FPlayerState& Player)
		{
			return Player.Address == Address;
		});

	if (PlayerHandle)
	{
		FPlayerState& Player = Players[PlayerHandle];
		if(Player.State == EPlayerState::BecomingGameServer)
		{
			Debugf("Player %s became game server", FStringUtility::ToString(Address).c_str());

			Player.State = EPlayerState::GameServer;
		} else
		{
			Debugf("Player %s became game server, but was not in correct state on backyard, ignoring", FStringUtility::ToString(Address).c_str());
		}
	}
}

void SBackyard::BackyardResponseBecomeGameServer(const FNetworkAddress& Address)
{
	RPC_BODY(Network.BackyardResponse(Hash("BackyardResponseBecomeGameServer"), Address));
}

void SBackyard::BackyardResponseBecomeGameClient(
	const FNetworkAddress& Address,
	const FNetworkAddress& GameServerAddress)
{
	RPC_BODY(Network.BackyardResponse(Hash("BackyardResponseBecomeGameClient"), Address, GameServerAddress));
}

void SBackyard::Update()
{
	Network.Tick();
}
