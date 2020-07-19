#include "Network.h"

#include "System/Backyard/Backyard.h"

#include "Generated/Generated.inl"

namespace NetworkLocal
{
	constexpr size UnderflowProtectedBufferSize = 1024;
}

void SNetwork::Initialize()
{
	LowLevel.Initialize();

	BackyardServerHandle = LowLevel.CreateServer(Network::BackyardServerPort);
}

SNetwork::SNetwork()
{
}

void SNetwork::BackyardResponseImpl(hash FunctionHash, FNetworkAddress Address, const vector<byte>& Bytes)
{
	vector<byte> SerializedMessage;
	FSerializationUtility::Serialize(SerializedMessage, FunctionHash, Bytes);
	LowLevel.ServerSendMessage(
		BackyardServerHandle,
		Address,
		SerializedMessage.data(),
		static_cast<uint32>(SerializedMessage.size()));
}

void SNetwork::ProcessBackyardRPC(const vector<byte>& InBytes, const FNetworkAddress& SourceAddress)
{
	byte UnderflowProtectedBytes[NetworkLocal::UnderflowProtectedBufferSize];
	const size Size = FMathUtility::Min(NetworkLocal::UnderflowProtectedBufferSize, InBytes.size());
	Warnf(Size == InBytes.size(), "RPC contains too much bytes");
	memcpy(UnderflowProtectedBytes, InBytes.data(), Size);

	hash FunctionHash;
	vector<byte> Bytes;

	const byte* Pointer = UnderflowProtectedBytes;
	FSerializationUtility::Deserialize(Pointer, FunctionHash);
	FSerializationUtility::Deserialize(Pointer, Bytes);

	FRPCUtility::ExecuteRemote(Hash("SBackyard"), FunctionHash, SourceAddress, Bytes);
}

void SNetwork::Tick()
{
	vector<FNetworkMessage> Messages;
	vector<FNetworkEvent> Events;

	LowLevel.AsyncMoveData(Messages, Events);

	for (const FNetworkEvent& Event : Events)
	{
		Debugf(
			"Event %s from Client %s with description %s",
			FStringUtility::ToString(Event.Type),
			FStringUtility::ToString(Event.Address).c_str(),
			Event.Description.c_str());

		switch (Event.Type)
		{
		case ENetworkEventType::Connected:
			if (OnBackyardServerClientConnectedDelegate) OnBackyardServerClientConnectedDelegate(Event.Address);
			break;
		case ENetworkEventType::FailedToConnect:
			break;
		case ENetworkEventType::Disconnected:
			if (OnBackyardServerClientDisconnectedDelegate) OnBackyardServerClientDisconnectedDelegate(Event.Address);
			break;
		default: Prevent();
		}
	}

	for (const FNetworkMessage& Message : Messages)
	{
		if (LowLevel.ServerHasConnection(BackyardServerHandle, Message.Address))
		{
			Debugf(
				"Message of size %u from Client %s",
				Message.Bytes.size(),
				FStringUtility::ToString(Message.Address).c_str());

			ProcessBackyardRPC(Message.Bytes, Message.Address);
		}
		else
		{
			Debugf(
				"Unexpected message (No existing connection) dropped from %s",
				FStringUtility::ToString(Message.Address).c_str());
		}
	}
}

void SNetwork::Deinitialize()
{
	LowLevel.Deinitialize();
}

void SNetwork::SetOnBackyardServerClientConnectedDelegate(delegate<void(const FNetworkAddress&)> Value)
{
	OnBackyardServerClientConnectedDelegate = Value;
}

void SNetwork::SetOnBackyardServerClientDisconnectedDelegate(delegate<void(const FNetworkAddress&)> Value)
{
	OnBackyardServerClientDisconnectedDelegate = Value;
}
