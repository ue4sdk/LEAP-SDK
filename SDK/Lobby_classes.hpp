#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Lobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Lobby.LobbyBeaconClient
// 0x0088 (0x0348 - 0x02C0)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                           LobbyState;                                               // 0x02C0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*                     PlayerState;                                              // 0x02C8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02D0(0x0001) MISSED OFFSET
	ELobbyBeaconJoinState                              LobbyJoinServerState;                                     // 0x02D1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x76];                                      // 0x02D2(0x0076) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Lobby.LobbyBeaconClient"));
		return ptr;
	}


	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString);
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const struct FString& Msg);
	void ClientWasKicked(const struct FText& KickReason);
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};


// Class Lobby.LobbyBeaconHost
// 0x0038 (0x0290 - 0x0258)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	TSoftClassPtr<class UClass>                        LobbyStateClass;                                          // 0x0260(0x0028) (CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ALobbyBeaconState*                           LobbyState;                                               // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Lobby.LobbyBeaconHost"));
		return ptr;
	}

};


// Class Lobby.LobbyBeaconPlayerState
// 0x00C0 (0x02F0 - 0x0230)
class ALobbyBeaconPlayerState : public AInfo
{
public:
	struct FText                                       DisplayName;                                              // 0x0230(0x0018) (CPF_Net, CPF_NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0248(0x0028) (CPF_Net, CPF_RepNotify, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                       // 0x0270(0x0028) (CPF_Net, CPF_RepNotify, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInLobby;                                                 // 0x0298(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class AOnlineBeaconClient*                         ClientActor;                                              // 0x02A0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x48];                                      // 0x02A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Lobby.LobbyBeaconPlayerState"));
		return ptr;
	}


	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};


// Class Lobby.LobbyBeaconState
// 0x01A8 (0x03D8 - 0x0230)
class ALobbyBeaconState : public AInfo
{
public:
	struct FLobbyPlayerStateInfoArray                  Players;                                                  // 0x0230(0x0120) (CPF_Net, CPF_NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                               // 0x0350(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class UClass* /*ALobbyBeaconPlayerState*/          LobbyBeaconPlayerStateClass;                              // 0x0358(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0360(0x0008) MISSED OFFSET
	bool                                               bLobbyStarted;                                            // 0x0368(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	float                                              WaitForPlayersTimeRemaining;                              // 0x036C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Lobby.LobbyBeaconState"));
		return ptr;
	}


	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
