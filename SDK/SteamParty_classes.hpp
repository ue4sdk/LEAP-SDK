#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SteamParty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SteamParty.CreateSessionGameCallbackProxy
// 0x0080 (0x00B0 - 0x0030)
class UCreateSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0050(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.CreateSessionGameCallbackProxy"));
		return ptr;
	}


	static class UCreateSessionGameCallbackProxy* CreateSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession);
};


// Class SteamParty.CreateSessionPartyCallbackProxy
// 0x0080 (0x00B0 - 0x0030)
class UCreateSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0050(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.CreateSessionPartyCallbackProxy"));
		return ptr;
	}


	static class UCreateSessionPartyCallbackProxy* CreateSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession);
};


// Class SteamParty.DestroySessionGameCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UDestroySessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.DestroySessionGameCallbackProxy"));
		return ptr;
	}


	static class UDestroySessionGameCallbackProxy* DestroySessionGame(class APlayerController* PlayerController);
};


// Class SteamParty.DestroySessionPartyCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UDestroySessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.DestroySessionPartyCallbackProxy"));
		return ptr;
	}


	static class UDestroySessionPartyCallbackProxy* DestroySessionParty(class APlayerController* PlayerController);
};


// Class SteamParty.DummyPlayerController
// 0x0000 (0x0580 - 0x0580)
class ADummyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.DummyPlayerController"));
		return ptr;
	}

};


// Class SteamParty.EndSessionGameCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UEndSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.EndSessionGameCallbackProxy"));
		return ptr;
	}


	static class UEndSessionGameCallbackProxy* EndSessionGame(class APlayerController* PlayerController);
};


// Class SteamParty.EndSessionPartyCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UEndSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.EndSessionPartyCallbackProxy"));
		return ptr;
	}


	static class UEndSessionPartyCallbackProxy* EndSessionParty(class APlayerController* PlayerController);
};


// Class SteamParty.FindSessionsGameCallbackProxy
// 0x0070 (0x00A0 - 0x0030)
class UFindSessionsGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.FindSessionsGameCallbackProxy"));
		return ptr;
	}


	static struct FString GetGameType(const struct FBlueprintSessionResult& Result);
	static class UFindSessionsGameCallbackProxy* FindSessionsGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType);
};


// Class SteamParty.FindSessionsPartyCallbackProxy
// 0x0070 (0x00A0 - 0x0030)
class UFindSessionsPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.FindSessionsPartyCallbackProxy"));
		return ptr;
	}


	static struct FString GetGameType(const struct FBlueprintSessionResult& Result);
	static class UFindSessionsPartyCallbackProxy* FindSessionsParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType);
};


// Class SteamParty.InviteSessionCallbackProxy
// 0x0088 (0x00B8 - 0x0030)
class UInviteSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnInviteReceived;                                         // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0040(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.InviteSessionCallbackProxy"));
		return ptr;
	}


	static class UInviteSessionCallbackProxy* InviteSessionCallback(class APlayerController* PlayerController);
};


// Class SteamParty.JoinSessionGameCallbackProxy
// 0x0150 (0x0180 - 0x0030)
class UJoinSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x130];                                     // 0x0050(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.JoinSessionGameCallbackProxy"));
		return ptr;
	}


	static class UJoinSessionGameCallbackProxy* JoinSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};


// Class SteamParty.JoinSessionPartyCallbackProxy
// 0x0150 (0x0180 - 0x0030)
class UJoinSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x130];                                     // 0x0050(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.JoinSessionPartyCallbackProxy"));
		return ptr;
	}


	static class UJoinSessionPartyCallbackProxy* JoinSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};


// Class SteamParty.StartSessionGameCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UStartSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.StartSessionGameCallbackProxy"));
		return ptr;
	}


	static class UStartSessionGameCallbackProxy* StartSessionGame(class APlayerController* PlayerController);
};


// Class SteamParty.StartSessionPartyCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UStartSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.StartSessionPartyCallbackProxy"));
		return ptr;
	}


	static class UStartSessionPartyCallbackProxy* StartSessionParty(class APlayerController* PlayerController);
};


// Class SteamParty.SteamBeaconClient
// 0x0030 (0x0378 - 0x0348)
class ASteamBeaconClient : public ALobbyBeaconClient
{
public:
	bool                                               bHasHandShakeCompleted;                                   // 0x0348(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class ASteamBeaconState*                           BeaconLobbyState;                                         // 0x0350(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                        // 0x0358(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasRegisterComponentsCompleted;                          // 0x0360(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0361(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamBeaconClient"));
		return ptr;
	}


	void ServerSetHandshakeComplete();
	void OnRep_PlayerState();
	void OnRep_LobbyState();
	void OnPartyDisbanded();
	void LeaveParty();
	void KickFromParty(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& reason);
	class ASteamBeaconPlayerState* GetPlayerState();
	class ASteamBeaconState* GetPartyState();
	void ClientJoinSteamSession(const struct FSteamBeaconSessionResult& SteamBeaconSession);
	void ClientJoinGameSessionID(const struct FString& InSessionId);
	void ClientJoinGameSession(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer);
	void ClientJoinGameServer(const struct FString& GameServerURL);
	void ChatToPartyMember(class ASteamBeaconPlayerState* InPlayer);
};


// Class SteamParty.SteamBeaconGameInstance
// 0x0458 (0x0660 - 0x0208)
class USteamBeaconGameInstance : public UGameInstance
{
public:
	struct FMulticastScriptDelegate                    OnPreLoadMapSteamParty;                                   // 0x0208(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	int                                                MaxPartyCount;                                            // 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	class UClass* /*ALobbyBeaconPlayerState*/          LobbyBeaconPlayerStateClass;                              // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               VoiceChatEnabled;                                         // 0x0228(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsPartyHostCreatingServer;                                // 0x0229(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x022A(0x0002) MISSED OFFSET
	float                                              PartyHostGameTravelDelay;                                 // 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PartyHostGameTravelMaxRetries;                            // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CurrentTravelRetries;                                     // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EPartyStatus                                       PartyStatus;                                              // 0x0238(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class ASteamBeaconHost*                            BeaconHostObject;                                         // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ASteamBeaconListener*                        BeaconHostListener;                                       // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ASteamBeaconClient*                          BeaconClient;                                             // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x68];                                      // 0x0258(0x0068) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnCreateGameSessionCompleted;                             // 0x02C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnJoinGameSessionComplete;                                // 0x02D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x380];                                     // 0x02E0(0x0380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamBeaconGameInstance"));
		return ptr;
	}


	bool SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId);
	void SavePartyInfo();
	void RestorePartyInfo();
	void RemoveSteamPlayerSession(class APlayerState* InPlayerState);
	void OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful);
	void OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful);
	bool JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer);
	void JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult);
	bool JoinPartyToHostGameSession();
	void JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId);
	bool IsPartyLeader();
	bool IsPartyFull();
	bool IsInParty();
	bool HostParty(int MaxPlayers);
	bool HostGame(int MaxPlayers);
	class UTexture2D* GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize);
	struct FString GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId);
	int GetPartyCount();
	void GetPartyAppendedConnectString(struct FString* URL);
	int GetMaxPartyCount();
	struct FString GetHostCurrentGameSessionId();
	void DumpDebugParty();
	void DisbandParty();
	void DirectTravelToGameSession(const struct FString& ServerURL);
	void DestroyGameSession();
	void ClearPartyBeacons();
	void AddCustomPlayerStateData(class ASteamBeaconPlayerState* InPlayerState);
	void AcceptPartyInvite();
};


// Class SteamParty.SteamBeaconGameSession
// 0x0110 (0x0358 - 0x0248)
class ASteamBeaconGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0248(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamBeaconGameSession"));
		return ptr;
	}

};


// Class SteamParty.SteamBeaconGISubsystem
// 0x0448 (0x0478 - 0x0030)
class USteamBeaconGISubsystem : public UGameInstanceSubsystem
{
public:
	struct FMulticastScriptDelegate                    OnPreLoadMapSteamParty;                                   // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	int                                                MaxPartyCount;                                            // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UClass* /*ALobbyBeaconPlayerState*/          LobbyBeaconPlayerStateClass;                              // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               VoiceChatEnabled;                                         // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsPartyHostCreatingServer;                                // 0x0051(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              PartyHostGameTravelDelay;                                 // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PartyHostGameTravelMaxRetries;                            // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CurrentTravelRetries;                                     // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EPartyStatus                                       PartyStatus;                                              // 0x0060(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class ASteamBeaconHost*                            BeaconHostObject;                                         // 0x0068(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ASteamBeaconListener*                        BeaconHostListener;                                       // 0x0070(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ASteamBeaconClient*                          BeaconClient;                                             // 0x0078(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x68];                                      // 0x0080(0x0068) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnCreateGameSessionCompleted;                             // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnJoinGameSessionComplete;                                // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x370];                                     // 0x0108(0x0370) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamBeaconGISubsystem"));
		return ptr;
	}


	bool SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId);
	void SavePartyInfo();
	void RestorePartyInfo();
	void RemoveSteamPlayerSession(class APlayerState* InPlayerState);
	void OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful);
	void OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful);
	bool JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer);
	void JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult);
	bool JoinPartyToHostGameSession();
	void JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId);
	bool IsPartyLeader();
	bool IsPartyFull();
	bool IsInParty();
	bool HostParty(int MaxPlayers);
	bool HostGame(int MaxPlayers);
	class UTexture2D* GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize);
	struct FString GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId);
	int GetPartyCount();
	int GetMaxPartyCount();
	struct FString GetHostCurrentGameSessionId();
	void DumpDebugParty();
	void DisbandParty();
	void DirectTravelToGameSession(const struct FString& ServerURL);
	void DestroyGameSession();
	void ClearPartyBeacons();
	void AcceptPartyInvite();
};


// Class SteamParty.SteamBeaconHost
// 0x0008 (0x0298 - 0x0290)
class ASteamBeaconHost : public ALobbyBeaconHost
{
public:
	bool                                               bIsDisbandingParty;                                       // 0x0290(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsJoiningGame;                                           // 0x0291(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsLevelChanging;                                         // 0x0292(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0293(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamBeaconHost"));
		return ptr;
	}


	class ASteamBeaconState* GetPartyState();
	void DisbandParty();
};


// Class SteamParty.SteamBeaconListener
// 0x0000 (0x0318 - 0x0318)
class ASteamBeaconListener : public AOnlineBeaconHost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamBeaconListener"));
		return ptr;
	}

};


// Class SteamParty.SteamBeaconPlayerController
// 0x0028 (0x05A8 - 0x0580)
class ASteamBeaconPlayerController : public APlayerController
{
public:
	class ASteamBeaconState*                           PartyBeaconState;                                         // 0x0580(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0588(0x0018) MISSED OFFSET
	bool                                               IsPushToTalk;                                             // 0x05A0(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamBeaconPlayerController"));
		return ptr;
	}


	void UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerID);
	void StopPlayerTalking();
	void StartPlayerTalking();
	void MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerID);
	bool IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerID);
	bool IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerID);
	void BPEvent_PlayerStateChanged(class ASteamBeaconPlayerState* InPlayerBeaconStateChanged);
	void BPEvent_PlayerLeftParty(class ASteamBeaconPlayerState* InPlayerStateLeft);
	void BPEvent_PlayerJoinedParty(class ASteamBeaconPlayerState* InPlayerStateJoined);
	void BPEvent_PartyStateChanged();
	void BPEvent_PartyOwnerChanged(const struct FUniqueNetIdRepl& InUniqueId);
	void BPEvent_PartyJoiningGame();
	void BPEvent_PartyInviteReceived(const struct FString& FriendName);
	void BPEvent_PartyHostReconnecting();
	void BPEvent_PartyHostConnectionFailure();
	void BPEvent_ChatMessageReceived(const struct FPartyMessage& InPartyMessage);
};


// Class SteamParty.SteamBeaconPlayerState
// 0x0030 (0x0320 - 0x02F0)
class ASteamBeaconPlayerState : public ALobbyBeaconPlayerState
{
public:
	int                                                PlayerProfileLevel;                                       // 0x02F0(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x02F4(0x001C) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnPlayerTalkingStateChanged;                              // 0x0310(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamBeaconPlayerState"));
		return ptr;
	}


	class APlayerState* SpawnConvertedPlayerState();
	void ServerSetPlayerProfileLevel(int InPlayerProfileLevel);
	void ServerSendPartyMessage(const struct FPartyMessage& ChatMessage);
	void SendPartyMessage(const struct FPartyMessage& ChatMessage);
	void OnPartyMessageReceived(const struct FPartyMessage& InPartyMessage);
	bool IsPlayerPartyLeader(class APlayerState* InPlayerState);
	bool IsPlayer(class APlayerState* InPlayerState);
	bool IsPartyLeader();
	void InitializePlayerStateData();
	struct FString GetUniqueIDAsString();
	struct FUniqueNetIdRepl GetPlayerUniqueId();
	struct FText GetDisplayName();
};


// Class SteamParty.SteamBeaconState
// 0x0058 (0x0430 - 0x03D8)
class ASteamBeaconState : public ALobbyBeaconState
{
public:
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                       // 0x03D8(0x0028) (CPF_Net, CPF_RepNotify, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0400(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamBeaconState"));
		return ptr;
	}


	void RemoveAllPlayers();
	void OnRep_PartyOwnerUniqueId();
	void OnLobbyStateInfoUpdated_NetRefresh();
	void OnLobbyStateInfoUpdated();
	class ASteamBeaconPlayerState* GetPartyPlayer(const struct FUniqueNetIdRepl& UniqueId);
	class ASteamBeaconPlayerState* GetPartyLeader();
	void GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray);
};


// Class SteamParty.SteamGetFriendsCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class USteamGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamGetFriendsCallbackProxy"));
		return ptr;
	}


	static class USteamGetFriendsCallbackProxy* RequestSteamFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class SteamParty.SteamPartyComponent
// 0x00C8 (0x0190 - 0x00C8)
class USteamPartyComponent : public UActorComponent
{
public:
	class ASteamBeaconState*                           PartyBeaconState;                                         // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerJoinedSteamParty;                                 // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerLeftSteamParty;                                   // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerChangedSteamParty;                                // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPartyStateChangedSteamParty;                            // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPartyOwnerChangedSteamParty;                            // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPartyMessageSteamParty;                                 // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPartyJoiningGameSteamParty;                             // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPartyHostConnectionFailureSteamParty;                   // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPartyHostReconnectingSteamParty;                        // 0x0150(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPartyInviteReceivedSteamParty;                          // 0x0160(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               IsPushToTalk;                                             // 0x0170(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0171(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamPartyComponent"));
		return ptr;
	}


	void UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerID);
	void StopPlayerTalking();
	void StartPlayerTalking();
	void MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerID);
	bool IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerID);
	bool IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerID);
	class ASteamBeaconPlayerState* GetPartyPlayer(const struct FUniqueNetIdRepl& PlayerID);
	class ASteamBeaconPlayerState* GetPartyLeader();
	void GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray);
};


// Class SteamParty.SteamPartyFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USteamPartyFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamPartyFunctionLibrary"));
		return ptr;
	}


	static bool SendSessionInviteToFriend(const struct FUniqueNetIdRepl& FriendUniqueNetId, bool bIsParty);
	static bool RequestUserInfo(const struct FUniqueNetIdRepl& FriendUniqueNetId);
	static bool JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId);
	static bool IsUniqueIdEqual(const struct FUniqueNetIdRepl& FirstUniqueNetId, const struct FUniqueNetIdRepl& SecondUniqueNetId);
	static struct FUniqueNetIdRepl GetUniqueNetId(class APlayerState* PlayerState);
	static class UTexture2D* GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize);
};


// Class SteamParty.SteamPartyNetDriver
// 0x0000 (0x07C0 - 0x07C0)
class USteamPartyNetDriver : public UIpNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.SteamPartyNetDriver"));
		return ptr;
	}

};


// Class SteamParty.UpdateSessionGameCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UUpdateSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.UpdateSessionGameCallbackProxy"));
		return ptr;
	}


	static class UUpdateSessionGameCallbackProxy* UpdateSessionGame(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly);
};


// Class SteamParty.UpdateSessionPartyCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UUpdateSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamParty.UpdateSessionPartyCallbackProxy"));
		return ptr;
	}


	static class UUpdateSessionPartyCallbackProxy* UpdateSessionParty(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
