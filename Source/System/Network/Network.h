#pragma once

#include "NetworkHandles.h"
#include "NetworkValues.h"

namespace Network
{
	constexpr uint16 GameServerPort = 27020;
	constexpr uint16 BackyardServerPort = 27030;
}

class SNetwork
{
public:
	explicit SNetwork();

	void Initialize();
	void Tick();
	void Deinitialize();

	bool BackyardRequest(const hash FunctionHash)
	{
		(void)FunctionHash;
		return true;
	}

	template <typename... ValueTypes>
	bool BackyardRequest(const hash FunctionHash, [[maybe_unused]] const ValueTypes&... Args)
	{
		(void)FunctionHash;
		return true;
	}
	
	bool BackyardResponse(const hash FunctionHash, FNetworkAddress Address)
	{
		BackyardResponseImpl(FunctionHash, Address, {});

		return false;
	}

	template <typename... ValueTypes>
	bool BackyardResponse(const hash FunctionHash, FNetworkAddress Address, const ValueTypes&... Args)
	{
		vector<byte> Bytes;
		FSerializationUtility::Serialize(Bytes, Args...);

		BackyardResponseImpl(FunctionHash, Address, Bytes);

		return false;
	}

	void SetOnBackyardServerClientConnectedDelegate(delegate<void(const FNetworkAddress&)> Value);
	void SetOnBackyardServerClientDisconnectedDelegate(delegate<void(const FNetworkAddress&)> Value);

private:	
	SNetworkLowLevel LowLevel{};

	delegate<void(const FNetworkAddress&)> OnBackyardServerClientConnectedDelegate;
	delegate<void(const FNetworkAddress&)> OnBackyardServerClientDisconnectedDelegate;

	HNetworkServer BackyardServerHandle{ HHandle::Empty };

	void BackyardResponseImpl(hash FunctionHash, FNetworkAddress Address, const vector<byte> & Bytes);
	
	void ProcessBackyardRPC(const vector<byte>& InBytes, const FNetworkAddress& SourceAddress);
	
};
