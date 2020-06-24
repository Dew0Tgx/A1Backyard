#include "Network.h"

#include "System/Backyard/Backyard.h"

namespace NerworkLocal
{
	constexpr uint16 BackyardServerPort = 27030;
}

void SNetwork::Initialize()
{
	LowLevel.Initialize();

	BackyardServerHandle = LowLevel.CreateServer(NerworkLocal::BackyardServerPort);
}

SNetwork::SNetwork()
{
}

void SNetwork::SetConnectDelegate(const delegate<void(const FNetworkAddress&)> Value)
{
	ConnectDelegate = Value;
}

void SNetwork::SetDisconnectDelegate(const delegate<void(const FNetworkAddress&)> Value)
{
	DisconnectDelegate = Value;
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
	hash FunctionHash;
	vector<byte> Bytes;

	const byte* Pointer = InBytes.data();
	FSerializationUtility::Deserialize(Pointer, FunctionHash);
	FSerializationUtility::Deserialize(Pointer, Bytes);

	FRPCUtility::Execute(Hash("SBackyard"), FunctionHash, SourceAddress, Bytes);
}

void SNetwork::Tick()
{
	vector<FNetworkMessage> Messages;
	vector<FNetworkEvent> Events;

	LowLevel.AsyncMoveData(Messages, Events);

	for (const FNetworkEvent& Event : Events)
	{
		if (LowLevel.ServerHasConnection(BackyardServerHandle, Event.Address))
		{
			Debugf(
				"Event %s from Client %s with description %s",
				NetworkLowLevelUtility::ToString(Event.Type).c_str(),
				FStringUtility::ToString(Event.Address).c_str(),
				Event.Description.c_str());

			switch (Event.Type)
			{
			case ENetworkEventType::Connected:
				if (ConnectDelegate) ConnectDelegate(Event.Address);
				break;
			case ENetworkEventType::FailedToConnect:
				break;
			case ENetworkEventType::Disconnected:
				if (DisconnectDelegate) DisconnectDelegate(Event.Address);
				break;
			default: Prevent();
			}
		}
		else
		{
			Debugf("Unexpected network event dropped from %s", FStringUtility::ToString(Event.Address).c_str());
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
