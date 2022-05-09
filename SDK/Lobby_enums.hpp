#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Lobby.ELobbyBeaconJoinState
enum class ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None    = 0,
	ELobbyBeaconJoinState__SentJoinRequest = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged = 2,
	ELobbyBeaconJoinState__ELobbyBeaconJoinState_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
