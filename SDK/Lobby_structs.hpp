#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Lobby_enums.hpp"
#include "OnlineSubsystemUtils_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// 0x000C (0x0018 - 0x000C)
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ALobbyBeaconPlayerState*                     LobbyPlayerState;                                         // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// 0x0018 (0x0120 - 0x0108)
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
	TArray<struct FLobbyPlayerStateActorInfo>          Players;                                                  // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	class ALobbyBeaconState*                           ParentState;                                              // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
