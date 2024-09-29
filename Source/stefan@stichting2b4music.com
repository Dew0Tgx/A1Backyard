#pragma once

#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include "Windows.h"
#endif

#include "Core.h"

#include "../../../A1Utility/Source/Utility/Collection/FlatHashMap.h"
#include "../../../A1Utility/ThirdParty/GSL/include/gsl/gsl_assert"
#include "../../../A1Utility/ThirdParty/GSL/include/gsl/gsl_util"
#include "../../../A1Utility/ThirdParty/GSL/include/gsl/multi_span"
#include "../../../A1Utility/Source/Utility/Handle/Handle.h"
#include "../../../A1Utility/Source/Utility/File/FileUtility.h"
#include "../../../A1Utility/Source/Utility/Hash/HashUtility.h"
#include "../../../A1Utility/Source/Utility/Network/NetworkLowLevelPublicTypes.h"
#include "../../../A1Utility/Source/Utility/RPC/RPCUtility.h"
#include "../../../A1Utility/Source/Utility/Network/NetworkLowLevelHandles.h"
#include "../../../A1Utility/Source/Utility/Network/NetworkLowLevelTypes.h"
#include "../../../A1Utility/Source/Utility/Network/NetworkLowLevelValues.h"
#include "../../../A1Backyard/Source/System/Backyard/BackyardTypes.h"
#include "../../../A1Utility/Source/Utility/Math/MathTypes.h"
#include "../../../A1Utility/ThirdParty/GameNetworkingSockets/include/steam/steamuniverse.h"


namespace FSerializationUtility
{
    //********************************* Generated for struct std::plus<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::plus<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::plus<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::minus<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::minus<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::minus<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::multiplies<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::multiplies<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::multiplies<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::equal_to<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::equal_to<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::equal_to<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::not_equal_to<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::not_equal_to<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::not_equal_to<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::greater<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::greater<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::greater<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::less<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::less<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::less<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::greater_equal<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::greater_equal<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::greater_equal<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::less_equal<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::less_equal<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::less_equal<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }

    //********************************* Generated for struct HHandle *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const HHandle& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Offset);
        Serialize(Out, Value.Class);
        Serialize(Out, Value.UID);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, HHandle& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Offset);
        Deserialize(InOutPointer, Out.Class);
        Deserialize(InOutPointer, Out.UID);
    }
    //********************************* Generated for struct FFileUtility::FFileCache *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FFileUtility::FFileCache& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Path);
        Serialize(Out, Value.Content);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FFileUtility::FFileCache& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Path);
        Deserialize(InOutPointer, Out.Content);
    }
    //********************************* Generated for struct THasherRaw<std::string> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const THasherRaw<std::string>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, THasherRaw<std::string>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct FNetworkAddress *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkAddress& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.IPV6);
        Serialize(Out, Value.Port);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkAddress& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.IPV6);
        Deserialize(InOutPointer, Out.Port);
    }
    //********************************* Generated for struct FRPCLifecycle *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FRPCLifecycle& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FRPCLifecycle& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct FNetworkAsyncData *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkAsyncData& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, Value.Mutex);
        Serialize(Out, Value.Messages);
        Serialize(Out, Value.Events);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkAsyncData& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, Out.Mutex);
        Deserialize(InOutPointer, Out.Messages);
        Deserialize(InOutPointer, Out.Events);
    }
    //********************************* Generated for struct FNetworkServer *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkServer& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.ListenSocket);
        Serialize(Out, Value.PollGroup);
        Serialize(Out, Value.ClientToDataMap);
        Serialize(Out, Value.AddressToConnectionMap);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkServer& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.ListenSocket);
        Deserialize(InOutPointer, Out.PollGroup);
        Deserialize(InOutPointer, Out.ClientToDataMap);
        Deserialize(InOutPointer, Out.AddressToConnectionMap);
    }

    //********************************* Generated for struct HNetworkInterface *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const HNetworkInterface& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const HHandle&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, HNetworkInterface& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<HHandle&>(Out));
    }
    //********************************* Generated for struct HNetworkServer *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const HNetworkServer& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const HHandle&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, HNetworkServer& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<HHandle&>(Out));
    }
    //********************************* Generated for struct HNetworkClient *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const HNetworkClient& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const HHandle&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, HNetworkClient& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<HHandle&>(Out));
    }
    //********************************* Generated for struct FNetworkServerClientData *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkServerClientData& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Address);
        Serialize(Out, Value.Nick);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkServerClientData& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Address);
        Deserialize(InOutPointer, Out.Nick);
    }
    //********************************* Generated for struct FNetworkMessage *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkMessage& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Address);
        Serialize(Out, Value.Bytes);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkMessage& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Address);
        Deserialize(InOutPointer, Out.Bytes);
    }
    //********************************* Generated for struct FNetworkEvent *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkEvent& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Address);
        Serialize(Out, Value.Type);
        Serialize(Out, Value.Description);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkEvent& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Address);
        Deserialize(InOutPointer, Out.Type);
        Deserialize(InOutPointer, Out.Description);
    }
    //********************************* Generated for struct FNetworkClient *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkClient& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.ServerAddress);
        Serialize(Out, Value.Connection);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkClient& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.ServerAddress);
        Deserialize(InOutPointer, Out.Connection);
    }
    //********************************* Generated for struct HPlayerState *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const HPlayerState& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const HHandle&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, HPlayerState& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<HHandle&>(Out));
    }
    //********************************* Generated for struct FPendingClient *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FPendingClient& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.ConnectTime);
        Serialize(Out, Value.Player);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FPendingClient& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.ConnectTime);
        Deserialize(InOutPointer, Out.Player);
    }
    //********************************* Generated for struct FServerState *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FServerState& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.ConnectedClients);
        Serialize(Out, Value.PendingClients);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FServerState& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.ConnectedClients);
        Deserialize(InOutPointer, Out.PendingClients);
    }
    //********************************* Generated for struct FClientState *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FClientState& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.ServerPlayerHandle);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FClientState& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.ServerPlayerHandle);
    }
    //********************************* Generated for struct FPlayerState *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FPlayerState& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Address);
        Serialize(Out, Value.State);
        Serialize(Out, Value.ServerState);
        Serialize(Out, Value.ClientState);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FPlayerState& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Address);
        Deserialize(InOutPointer, Out.State);
        Deserialize(InOutPointer, Out.ServerState);
        Deserialize(InOutPointer, Out.ClientState);
    }
}

namespace FStringUtility
{

    //********************************* Generated for enum EDirection *********************************
    inline const char* ToString(const EDirection& Enum)
    {
        switch(Enum)
        {
            case EDirection::Left: return "Left";
            case EDirection::Top: return "Top";
            case EDirection::Right: return "Right";
            case EDirection::Bottom: return "Bottom";
            default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum EOctoDirection *********************************
    inline const char* ToString(const EOctoDirection& Enum)
    {
        switch(Enum)
        {
            case EOctoDirection::Left: return "Left";
            case EOctoDirection::TopLeft: return "TopLeft";
            case EOctoDirection::Top: return "Top";
            case EOctoDirection::TopRight: return "TopRight";
            case EOctoDirection::Right: return "Right";
            case EOctoDirection::BottomRight: return "BottomRight";
            case EOctoDirection::Bottom: return "Bottom";
            case EOctoDirection::BottomLeft: return "BottomLeft";
            default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum EDiagonalDirection *********************************
    inline const char* ToString(const EDiagonalDirection& Enum)
    {
        switch(Enum)
        {
            case EDiagonalDirection::TopLeft: return "TopLeft";
            case EDiagonalDirection::TopRight: return "TopRight";
            case EDiagonalDirection::BottomRight: return "BottomRight";
            case EDiagonalDirection::BottomLeft: return "BottomLeft";
            default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum EUniverse *********************************
    inline const char* ToString(const EUniverse& Enum)
    {
        switch(Enum)
        {
            case EUniverse::k_EUniverseInvalid: return "k_EUniverseInvalid";
            case EUniverse::k_EUniversePublic: return "k_EUniversePublic";
            case EUniverse::k_EUniverseBeta: return "k_EUniverseBeta";
            case EUniverse::k_EUniverseInternal: return "k_EUniverseInternal";
            case EUniverse::k_EUniverseDev: return "k_EUniverseDev";
            case EUniverse::k_EUniverseMax: return "k_EUniverseMax";
            default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum ENetworkEventType *********************************
    inline const char* ToString(const ENetworkEventType& Enum)
    {
        switch(Enum)
        {
            case ENetworkEventType::Connected: return "Connected";
            case ENetworkEventType::FailedToConnect: return "FailedToConnect";
            case ENetworkEventType::Disconnected: return "Disconnected";
            default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum EPlayerState *********************************
    inline const char* ToString(const EPlayerState& Enum)
    {
        switch(Enum)
        {
            case EPlayerState::BecomingIdle: return "BecomingIdle";
            case EPlayerState::Idle: return "Idle";
            case EPlayerState::BecomingGameServer: return "BecomingGameServer";
            case EPlayerState::GameServer: return "GameServer";
            case EPlayerState::BecomingGameClient: return "BecomingGameClient";
            case EPlayerState::GameClient: return "GameClient";
            case EPlayerState::GameServerStarted: return "GameServerStarted";
            default: Prevent();
        }
        return "";
    }

}
