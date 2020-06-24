#include "Backyard.h"

#include "Generated/SerializationUtility.gen.inl"

namespace BackyardLocal
{
	static constexpr int32 UpdatePeriodMilliseconds = 100;
	thread BackyardThread;
}

SBackyard::SBackyard(SNetwork& Network)
	: Network(Network)
{
	// GENERATED CODE BEGIN
	FRPCUtility::RegisterSystem(this, Hash("SBackyard"));
	FRPCUtility::RegisterFunction(Hash("SBackyard"), Hash("BackyardRequestTest"), [](void* ThisPointer, const vector<byte>& Bytes, const FNetworkAddress& SourceAddress)
		{ 
			const byte * Pointer = Bytes.data(); 
			(void)Pointer;
			(void)SourceAddress;
			static_cast<SBackyard*>(ThisPointer)->BackyardRequestTest(SourceAddress);
		});
	FRPCUtility::RegisterFunction(Hash("SBackyard"), Hash("BackyardResponseTest"), [](void* ThisPointer, const vector<byte>& Bytes, const FNetworkAddress& SourceAddress)
		{ 
			const byte * Pointer = Bytes.data(); 
			(void)Pointer;
			(void)SourceAddress;
			static_cast<SBackyard*>(ThisPointer)->BackyardResponseTest(SourceAddress);
		});
	// GENERATED CODE END
}

void SBackyard::Initialize()
{
	ShowWindow(GetConsoleWindow(), SW_SHOW);

	Network.SetConnectDelegate(
		[this](const FNetworkAddress& Address)
		{
			Debugf("Player %s connected", FStringUtility::ToString(Address).c_str());

			FPlayerState& Player = Players[Players.Create()];
			Player.State = EPlayerState::None;
			Player.Address = Address;

			BackyardResponseTest(Address);
		});


	Network.SetDisconnectDelegate(
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

void SBackyard::BackyardRequestTest(const FNetworkAddress& Address)
{
	RPC_BODY(Network.BackyardRequest(Hash("BackyardRequestTest"), Address));
	const HPlayerState PlayerHandle = Players.Find(
		[&Address](const FPlayerState& Player)
		{
			return Player.Address == Address;
		});

	if (PlayerHandle)
	{
		//FPlayerState& Player = Players[PlayerHandle];
		Debugf("Received a backyard RPC from a registered player");
		BackyardResponseTest(Address);
	}
}

void SBackyard::BackyardResponseTest(const FNetworkAddress& Address)
{
	RPC_BODY(Network.BackyardResponse(Hash("BackyardResponseTest"), Address));
}

void SBackyard::Update()
{
	Network.Tick();
}
