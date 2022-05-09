// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SteamParty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SteamParty.CreateSessionGameCallbackProxy.CreateSessionGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PublicConnections              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InGameType                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           AutoStartSession               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCreateSessionGameCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCreateSessionGameCallbackProxy* UCreateSessionGameCallbackProxy::CreateSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.CreateSessionGameCallbackProxy.CreateSessionGame"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		int                            PublicConnections;
		bool                           bUseLAN;
		struct FString                 InGameType;
		bool                           AutoStartSession;
		class UCreateSessionGameCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;
	params.AutoStartSession = AutoStartSession;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.CreateSessionPartyCallbackProxy.CreateSessionParty
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PublicConnections              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InGameType                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           AutoStartSession               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCreateSessionPartyCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCreateSessionPartyCallbackProxy* UCreateSessionPartyCallbackProxy::CreateSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.CreateSessionPartyCallbackProxy.CreateSessionParty"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		int                            PublicConnections;
		bool                           bUseLAN;
		struct FString                 InGameType;
		bool                           AutoStartSession;
		class UCreateSessionPartyCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;
	params.AutoStartSession = AutoStartSession;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.DestroySessionGameCallbackProxy.DestroySessionGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDestroySessionGameCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UDestroySessionGameCallbackProxy* UDestroySessionGameCallbackProxy::DestroySessionGame(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.DestroySessionGameCallbackProxy.DestroySessionGame"));

	struct
	{
		class APlayerController*       PlayerController;
		class UDestroySessionGameCallbackProxy* ReturnValue;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.DestroySessionPartyCallbackProxy.DestroySessionParty
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDestroySessionPartyCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UDestroySessionPartyCallbackProxy* UDestroySessionPartyCallbackProxy::DestroySessionParty(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.DestroySessionPartyCallbackProxy.DestroySessionParty"));

	struct
	{
		class APlayerController*       PlayerController;
		class UDestroySessionPartyCallbackProxy* ReturnValue;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.EndSessionGameCallbackProxy.EndSessionGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UEndSessionGameCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UEndSessionGameCallbackProxy* UEndSessionGameCallbackProxy::EndSessionGame(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.EndSessionGameCallbackProxy.EndSessionGame"));

	struct
	{
		class APlayerController*       PlayerController;
		class UEndSessionGameCallbackProxy* ReturnValue;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.EndSessionPartyCallbackProxy.EndSessionParty
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UEndSessionPartyCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UEndSessionPartyCallbackProxy* UEndSessionPartyCallbackProxy::EndSessionParty(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.EndSessionPartyCallbackProxy.EndSessionParty"));

	struct
	{
		class APlayerController*       PlayerController;
		class UEndSessionPartyCallbackProxy* ReturnValue;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.FindSessionsGameCallbackProxy.GetGameType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UFindSessionsGameCallbackProxy::GetGameType(const struct FBlueprintSessionResult& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.FindSessionsGameCallbackProxy.GetGameType"));

	struct
	{
		struct FBlueprintSessionResult Result;
		struct FString                 ReturnValue;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.FindSessionsGameCallbackProxy.FindSessionsGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            MaxResults                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InGameType                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFindSessionsGameCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UFindSessionsGameCallbackProxy* UFindSessionsGameCallbackProxy::FindSessionsGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.FindSessionsGameCallbackProxy.FindSessionsGame"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		int                            MaxResults;
		bool                           bUseLAN;
		struct FString                 InGameType;
		class UFindSessionsGameCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.FindSessionsPartyCallbackProxy.GetGameType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UFindSessionsPartyCallbackProxy::GetGameType(const struct FBlueprintSessionResult& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.FindSessionsPartyCallbackProxy.GetGameType"));

	struct
	{
		struct FBlueprintSessionResult Result;
		struct FString                 ReturnValue;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.FindSessionsPartyCallbackProxy.FindSessionsParty
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            MaxResults                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InGameType                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFindSessionsPartyCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UFindSessionsPartyCallbackProxy* UFindSessionsPartyCallbackProxy::FindSessionsParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.FindSessionsPartyCallbackProxy.FindSessionsParty"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		int                            MaxResults;
		bool                           bUseLAN;
		struct FString                 InGameType;
		class UFindSessionsPartyCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.InviteSessionCallbackProxy.InviteSessionCallback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UInviteSessionCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UInviteSessionCallbackProxy* UInviteSessionCallbackProxy::InviteSessionCallback(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.InviteSessionCallbackProxy.InviteSessionCallback"));

	struct
	{
		class APlayerController*       PlayerController;
		class UInviteSessionCallbackProxy* ReturnValue;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.JoinSessionGameCallbackProxy.JoinSessionGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UJoinSessionGameCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UJoinSessionGameCallbackProxy* UJoinSessionGameCallbackProxy::JoinSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.JoinSessionGameCallbackProxy.JoinSessionGame"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FBlueprintSessionResult SearchResult;
		class UJoinSessionGameCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.JoinSessionPartyCallbackProxy.JoinSessionParty
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UJoinSessionPartyCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UJoinSessionPartyCallbackProxy* UJoinSessionPartyCallbackProxy::JoinSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.JoinSessionPartyCallbackProxy.JoinSessionParty"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FBlueprintSessionResult SearchResult;
		class UJoinSessionPartyCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.StartSessionGameCallbackProxy.StartSessionGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UStartSessionGameCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UStartSessionGameCallbackProxy* UStartSessionGameCallbackProxy::StartSessionGame(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.StartSessionGameCallbackProxy.StartSessionGame"));

	struct
	{
		class APlayerController*       PlayerController;
		class UStartSessionGameCallbackProxy* ReturnValue;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.StartSessionPartyCallbackProxy.StartSessionParty
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UStartSessionPartyCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UStartSessionPartyCallbackProxy* UStartSessionPartyCallbackProxy::StartSessionParty(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.StartSessionPartyCallbackProxy.StartSessionParty"));

	struct
	{
		class APlayerController*       PlayerController;
		class UStartSessionPartyCallbackProxy* ReturnValue;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconClient.ServerSetHandshakeComplete
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void ASteamBeaconClient::ServerSetHandshakeComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.ServerSetHandshakeComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconClient.OnRep_PlayerState
// (FUNC_Native, FUNC_Public)

void ASteamBeaconClient::OnRep_PlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.OnRep_PlayerState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconClient.OnRep_LobbyState
// (FUNC_Native, FUNC_Public)

void ASteamBeaconClient::OnRep_LobbyState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.OnRep_LobbyState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconClient.OnPartyDisbanded
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void ASteamBeaconClient::OnPartyDisbanded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.OnPartyDisbanded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconClient.LeaveParty
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ASteamBeaconClient::LeaveParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.LeaveParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconClient.KickFromParty
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerToKick                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   reason                         (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconClient::KickFromParty(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.KickFromParty"));

	struct
	{
		struct FUniqueNetIdRepl        PlayerToKick;
		struct FText                   reason;
	} params = {};

	params.PlayerToKick = PlayerToKick;
	params.reason = reason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconClient.GetPlayerState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ASteamBeaconPlayerState* ASteamBeaconClient::GetPlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.GetPlayerState"));

	struct
	{
		class ASteamBeaconPlayerState* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconClient.GetPartyState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ASteamBeaconState*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ASteamBeaconState* ASteamBeaconClient::GetPartyState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.GetPartyState"));

	struct
	{
		class ASteamBeaconState*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconClient.ClientJoinSteamSession
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FSteamBeaconSessionResult SteamBeaconSession             (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconClient::ClientJoinSteamSession(const struct FSteamBeaconSessionResult& SteamBeaconSession)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.ClientJoinSteamSession"));

	struct
	{
		struct FSteamBeaconSessionResult SteamBeaconSession;
	} params = {};

	params.SteamBeaconSession = SteamBeaconSession;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconClient.ClientJoinGameSessionID
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FString                 InSessionId                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconClient::ClientJoinGameSessionID(const struct FString& InSessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.ClientJoinGameSessionID"));

	struct
	{
		struct FString                 InSessionId;
	} params = {};

	params.InSessionId = InSessionId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconClient.ClientJoinGameSession
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FSteamBeaconSessionResult InSearchResult                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           bIsPartyHostCreatingServer     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconClient::ClientJoinGameSession(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.ClientJoinGameSession"));

	struct
	{
		struct FSteamBeaconSessionResult InSearchResult;
		bool                           bIsPartyHostCreatingServer;
	} params = {};

	params.InSearchResult = InSearchResult;
	params.bIsPartyHostCreatingServer = bIsPartyHostCreatingServer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconClient.ClientJoinGameServer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FString                 GameServerURL                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconClient::ClientJoinGameServer(const struct FString& GameServerURL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.ClientJoinGameServer"));

	struct
	{
		struct FString                 GameServerURL;
	} params = {};

	params.GameServerURL = GameServerURL;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconClient.ChatToPartyMember
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* InPlayer                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconClient::ChatToPartyMember(class ASteamBeaconPlayerState* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconClient.ChatToPartyMember"));

	struct
	{
		class ASteamBeaconPlayerState* InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.SendPartySessionInviteToFriend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGameInstance::SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.SendPartySessionInviteToFriend"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FUniqueNetIdRepl        FriendUniqueNetId;
		bool                           ReturnValue;
	} params = {};

	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.SavePartyInfo
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGameInstance::SavePartyInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.SavePartyInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.RestorePartyInfo
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGameInstance::RestorePartyInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.RestorePartyInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.RemoveSteamPlayerSession
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerState*            InPlayerState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGameInstance::RemoveSteamPlayerSession(class APlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.RemoveSteamPlayerSession"));

	struct
	{
		class APlayerState*            InPlayerState;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction SteamParty.SteamBeaconGameInstance.OnJoinGameSessionComplete__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGameInstance::OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction SteamParty.SteamBeaconGameInstance.OnJoinGameSessionComplete__DelegateSignature"));

	struct
	{
		bool                           bWasSuccessful;
	} params = {};

	params.bWasSuccessful = bWasSuccessful;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction SteamParty.SteamBeaconGameInstance.OnCreateGameSessionCompleted__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGameInstance::OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction SteamParty.SteamBeaconGameInstance.OnCreateGameSessionCompleted__DelegateSignature"));

	struct
	{
		bool                           bWasSuccessful;
	} params = {};

	params.bWasSuccessful = bWasSuccessful;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.JoinSessionFromSteamBeacon
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSteamBeaconSessionResult InSearchResult                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bIsPartyHostCreatingServer     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGameInstance::JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.JoinSessionFromSteamBeacon"));

	struct
	{
		struct FSteamBeaconSessionResult InSearchResult;
		bool                           bIsPartyHostCreatingServer;
		bool                           ReturnValue;
	} params = {};

	params.InSearchResult = InSearchResult;
	params.bIsPartyHostCreatingServer = bIsPartyHostCreatingServer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.JoinPartyToSessionBP
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult InSearchResult                 (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGameInstance::JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.JoinPartyToSessionBP"));

	struct
	{
		struct FBlueprintSessionResult InSearchResult;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InSearchResult != nullptr)
		*InSearchResult = params.InSearchResult;
}


// Function SteamParty.SteamBeaconGameInstance.JoinPartyToHostGameSession
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGameInstance::JoinPartyToHostGameSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.JoinPartyToHostGameSession"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.JoinFriendPartySession
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGameInstance::JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.JoinFriendPartySession"));

	struct
	{
		struct FUniqueNetIdRepl        FriendUniqueNetId;
	} params = {};

	params.FriendUniqueNetId = FriendUniqueNetId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.IsPartyLeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGameInstance::IsPartyLeader()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.IsPartyLeader"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.IsPartyFull
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGameInstance::IsPartyFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.IsPartyFull"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.IsInParty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGameInstance::IsInParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.IsInParty"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.HostParty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGameInstance::HostParty(int MaxPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.HostParty"));

	struct
	{
		int                            MaxPlayers;
		bool                           ReturnValue;
	} params = {};

	params.MaxPlayers = MaxPlayers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.HostGame
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGameInstance::HostGame(int MaxPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.HostGame"));

	struct
	{
		int                            MaxPlayers;
		bool                           ReturnValue;
	} params = {};

	params.MaxPlayers = MaxPlayers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetSteamFriendAvatar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESteamAvatarSize               InAvatarSize                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture2D* USteamBeaconGameInstance::GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.GetSteamFriendAvatar"));

	struct
	{
		struct FUniqueNetIdRepl        FriendUniqueNetId;
		ESteamAvatarSize               InAvatarSize;
		class UTexture2D*              ReturnValue;
	} params = {};

	params.FriendUniqueNetId = FriendUniqueNetId;
	params.InAvatarSize = InAvatarSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetPlayerIdString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString USteamBeaconGameInstance::GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.GetPlayerIdString"));

	struct
	{
		struct FUniqueNetIdRepl        UniqueNetId;
		struct FString                 ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetPartyCount
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USteamBeaconGameInstance::GetPartyCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.GetPartyCount"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetPartyAppendedConnectString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGameInstance::GetPartyAppendedConnectString(struct FString* URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.GetPartyAppendedConnectString"));

	struct
	{
		struct FString                 URL;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (URL != nullptr)
		*URL = params.URL;
}


// Function SteamParty.SteamBeaconGameInstance.GetMaxPartyCount
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USteamBeaconGameInstance::GetMaxPartyCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.GetMaxPartyCount"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetHostCurrentGameSessionId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString USteamBeaconGameInstance::GetHostCurrentGameSessionId()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.GetHostCurrentGameSessionId"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.DumpDebugParty
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGameInstance::DumpDebugParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.DumpDebugParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.DisbandParty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGameInstance::DisbandParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.DisbandParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.DirectTravelToGameSession
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ServerURL                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGameInstance::DirectTravelToGameSession(const struct FString& ServerURL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.DirectTravelToGameSession"));

	struct
	{
		struct FString                 ServerURL;
	} params = {};

	params.ServerURL = ServerURL;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.DestroyGameSession
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGameInstance::DestroyGameSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.DestroyGameSession"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.ClearPartyBeacons
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGameInstance::ClearPartyBeacons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.ClearPartyBeacons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.AddCustomPlayerStateData
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGameInstance::AddCustomPlayerStateData(class ASteamBeaconPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.AddCustomPlayerStateData"));

	struct
	{
		class ASteamBeaconPlayerState* InPlayerState;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGameInstance.AcceptPartyInvite
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGameInstance::AcceptPartyInvite()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGameInstance.AcceptPartyInvite"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGISubsystem.SendPartySessionInviteToFriend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGISubsystem::SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.SendPartySessionInviteToFriend"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FUniqueNetIdRepl        FriendUniqueNetId;
		bool                           ReturnValue;
	} params = {};

	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.SavePartyInfo
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGISubsystem::SavePartyInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.SavePartyInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGISubsystem.RestorePartyInfo
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGISubsystem::RestorePartyInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.RestorePartyInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGISubsystem.RemoveSteamPlayerSession
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerState*            InPlayerState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGISubsystem::RemoveSteamPlayerSession(class APlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.RemoveSteamPlayerSession"));

	struct
	{
		class APlayerState*            InPlayerState;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction SteamParty.SteamBeaconGISubsystem.OnJoinGameSessionComplete__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGISubsystem::OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction SteamParty.SteamBeaconGISubsystem.OnJoinGameSessionComplete__DelegateSignature"));

	struct
	{
		bool                           bWasSuccessful;
	} params = {};

	params.bWasSuccessful = bWasSuccessful;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction SteamParty.SteamBeaconGISubsystem.OnCreateGameSessionCompleted__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGISubsystem::OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction SteamParty.SteamBeaconGISubsystem.OnCreateGameSessionCompleted__DelegateSignature"));

	struct
	{
		bool                           bWasSuccessful;
	} params = {};

	params.bWasSuccessful = bWasSuccessful;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGISubsystem.JoinSessionFromSteamBeacon
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSteamBeaconSessionResult InSearchResult                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bIsPartyHostCreatingServer     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGISubsystem::JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.JoinSessionFromSteamBeacon"));

	struct
	{
		struct FSteamBeaconSessionResult InSearchResult;
		bool                           bIsPartyHostCreatingServer;
		bool                           ReturnValue;
	} params = {};

	params.InSearchResult = InSearchResult;
	params.bIsPartyHostCreatingServer = bIsPartyHostCreatingServer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.JoinPartyToSessionBP
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult InSearchResult                 (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGISubsystem::JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.JoinPartyToSessionBP"));

	struct
	{
		struct FBlueprintSessionResult InSearchResult;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InSearchResult != nullptr)
		*InSearchResult = params.InSearchResult;
}


// Function SteamParty.SteamBeaconGISubsystem.JoinPartyToHostGameSession
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGISubsystem::JoinPartyToHostGameSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.JoinPartyToHostGameSession"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.JoinFriendPartySession
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGISubsystem::JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.JoinFriendPartySession"));

	struct
	{
		struct FUniqueNetIdRepl        FriendUniqueNetId;
	} params = {};

	params.FriendUniqueNetId = FriendUniqueNetId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGISubsystem.IsPartyLeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGISubsystem::IsPartyLeader()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.IsPartyLeader"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.IsPartyFull
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGISubsystem::IsPartyFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.IsPartyFull"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.IsInParty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGISubsystem::IsInParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.IsInParty"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.HostParty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGISubsystem::HostParty(int MaxPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.HostParty"));

	struct
	{
		int                            MaxPlayers;
		bool                           ReturnValue;
	} params = {};

	params.MaxPlayers = MaxPlayers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.HostGame
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamBeaconGISubsystem::HostGame(int MaxPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.HostGame"));

	struct
	{
		int                            MaxPlayers;
		bool                           ReturnValue;
	} params = {};

	params.MaxPlayers = MaxPlayers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.GetSteamFriendAvatar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESteamAvatarSize               InAvatarSize                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture2D* USteamBeaconGISubsystem::GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.GetSteamFriendAvatar"));

	struct
	{
		struct FUniqueNetIdRepl        FriendUniqueNetId;
		ESteamAvatarSize               InAvatarSize;
		class UTexture2D*              ReturnValue;
	} params = {};

	params.FriendUniqueNetId = FriendUniqueNetId;
	params.InAvatarSize = InAvatarSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.GetPlayerIdString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        UniqueNetId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString USteamBeaconGISubsystem::GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.GetPlayerIdString"));

	struct
	{
		struct FUniqueNetIdRepl        UniqueNetId;
		struct FString                 ReturnValue;
	} params = {};

	params.UniqueNetId = UniqueNetId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.GetPartyCount
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USteamBeaconGISubsystem::GetPartyCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.GetPartyCount"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.GetMaxPartyCount
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USteamBeaconGISubsystem::GetMaxPartyCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.GetMaxPartyCount"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.GetHostCurrentGameSessionId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString USteamBeaconGISubsystem::GetHostCurrentGameSessionId()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.GetHostCurrentGameSessionId"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.DumpDebugParty
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGISubsystem::DumpDebugParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.DumpDebugParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGISubsystem.DisbandParty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGISubsystem::DisbandParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.DisbandParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGISubsystem.DirectTravelToGameSession
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ServerURL                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamBeaconGISubsystem::DirectTravelToGameSession(const struct FString& ServerURL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.DirectTravelToGameSession"));

	struct
	{
		struct FString                 ServerURL;
	} params = {};

	params.ServerURL = ServerURL;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGISubsystem.DestroyGameSession
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGISubsystem::DestroyGameSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.DestroyGameSession"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGISubsystem.ClearPartyBeacons
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGISubsystem::ClearPartyBeacons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.ClearPartyBeacons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconGISubsystem.AcceptPartyInvite
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamBeaconGISubsystem::AcceptPartyInvite()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconGISubsystem.AcceptPartyInvite"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconHost.GetPartyState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ASteamBeaconState*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ASteamBeaconState* ASteamBeaconHost::GetPartyState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconHost.GetPartyState"));

	struct
	{
		class ASteamBeaconState*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconHost.DisbandParty
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ASteamBeaconHost::DisbandParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconHost.DisbandParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.UnMutePlayerVoice
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.UnMutePlayerVoice"));

	struct
	{
		struct FUniqueNetIdRepl        PlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.StopPlayerTalking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ASteamBeaconPlayerController::StopPlayerTalking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.StopPlayerTalking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.StartPlayerTalking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ASteamBeaconPlayerController::StartPlayerTalking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.StartPlayerTalking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.MutePlayerVoice
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.MutePlayerVoice"));

	struct
	{
		struct FUniqueNetIdRepl        PlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.IsPlayerVoiceMuted
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ASteamBeaconPlayerController::IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.IsPlayerVoiceMuted"));

	struct
	{
		struct FUniqueNetIdRepl        PlayerID;
		bool                           ReturnValue;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerController.IsPlayerControllerUniqueIdMatch
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ASteamBeaconPlayerController::IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.IsPlayerControllerUniqueIdMatch"));

	struct
	{
		struct FUniqueNetIdRepl        PlayerID;
		bool                           ReturnValue;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerBeaconStateChanged     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::BPEvent_PlayerStateChanged(class ASteamBeaconPlayerState* InPlayerBeaconStateChanged)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerStateChanged"));

	struct
	{
		class ASteamBeaconPlayerState* InPlayerBeaconStateChanged;
	} params = {};

	params.InPlayerBeaconStateChanged = InPlayerBeaconStateChanged;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerLeftParty
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerStateLeft              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::BPEvent_PlayerLeftParty(class ASteamBeaconPlayerState* InPlayerStateLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerLeftParty"));

	struct
	{
		class ASteamBeaconPlayerState* InPlayerStateLeft;
	} params = {};

	params.InPlayerStateLeft = InPlayerStateLeft;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerJoinedParty
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerStateJoined            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::BPEvent_PlayerJoinedParty(class ASteamBeaconPlayerState* InPlayerStateJoined)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerJoinedParty"));

	struct
	{
		class ASteamBeaconPlayerState* InPlayerStateJoined;
	} params = {};

	params.InPlayerStateJoined = InPlayerStateJoined;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyStateChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyOwnerChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::BPEvent_PartyOwnerChanged(const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyOwnerChanged"));

	struct
	{
		struct FUniqueNetIdRepl        InUniqueId;
	} params = {};

	params.InUniqueId = InUniqueId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyJoiningGame
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyJoiningGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyJoiningGame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyInviteReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 FriendName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::BPEvent_PartyInviteReceived(const struct FString& FriendName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyInviteReceived"));

	struct
	{
		struct FString                 FriendName;
	} params = {};

	params.FriendName = FriendName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostReconnecting
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyHostReconnecting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostReconnecting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostConnectionFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyHostConnectionFailure()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostConnectionFailure"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_ChatMessageReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPartyMessage           InPartyMessage                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::BPEvent_ChatMessageReceived(const struct FPartyMessage& InPartyMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerController.BPEvent_ChatMessageReceived"));

	struct
	{
		struct FPartyMessage           InPartyMessage;
	} params = {};

	params.InPartyMessage = InPartyMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerState.SpawnConvertedPlayerState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerState*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class APlayerState* ASteamBeaconPlayerState::SpawnConvertedPlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.SpawnConvertedPlayerState"));

	struct
	{
		class APlayerState*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.ServerSetPlayerProfileLevel
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// int                            InPlayerProfileLevel           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerState::ServerSetPlayerProfileLevel(int InPlayerProfileLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.ServerSetPlayerProfileLevel"));

	struct
	{
		int                            InPlayerProfileLevel;
	} params = {};

	params.InPlayerProfileLevel = InPlayerProfileLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerState.ServerSendPartyMessage
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FPartyMessage           ChatMessage                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerState::ServerSendPartyMessage(const struct FPartyMessage& ChatMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.ServerSendPartyMessage"));

	struct
	{
		struct FPartyMessage           ChatMessage;
	} params = {};

	params.ChatMessage = ChatMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerState.SendPartyMessage
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPartyMessage           ChatMessage                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerState::SendPartyMessage(const struct FPartyMessage& ChatMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.SendPartyMessage"));

	struct
	{
		struct FPartyMessage           ChatMessage;
	} params = {};

	params.ChatMessage = ChatMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerState.OnPartyMessageReceived
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPartyMessage           InPartyMessage                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconPlayerState::OnPartyMessageReceived(const struct FPartyMessage& InPartyMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.OnPartyMessageReceived"));

	struct
	{
		struct FPartyMessage           InPartyMessage;
	} params = {};

	params.InPartyMessage = InPartyMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerState.IsPlayerPartyLeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerState*            InPlayerState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ASteamBeaconPlayerState::IsPlayerPartyLeader(class APlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.IsPlayerPartyLeader"));

	struct
	{
		class APlayerState*            InPlayerState;
		bool                           ReturnValue;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.IsPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerState*            InPlayerState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ASteamBeaconPlayerState::IsPlayer(class APlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.IsPlayer"));

	struct
	{
		class APlayerState*            InPlayerState;
		bool                           ReturnValue;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.IsPartyLeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ASteamBeaconPlayerState::IsPartyLeader()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.IsPartyLeader"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.InitializePlayerStateData
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ASteamBeaconPlayerState::InitializePlayerStateData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.InitializePlayerStateData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconPlayerState.GetUniqueIDAsString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString ASteamBeaconPlayerState::GetUniqueIDAsString()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.GetUniqueIDAsString"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.GetPlayerUniqueId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl ASteamBeaconPlayerState::GetPlayerUniqueId()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.GetPlayerUniqueId"));

	struct
	{
		struct FUniqueNetIdRepl        ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.GetDisplayName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText ASteamBeaconPlayerState::GetDisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconPlayerState.GetDisplayName"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconState.RemoveAllPlayers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ASteamBeaconState::RemoveAllPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconState.RemoveAllPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconState.OnRep_PartyOwnerUniqueId
// (FUNC_Native, FUNC_Public)

void ASteamBeaconState::OnRep_PartyOwnerUniqueId()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconState.OnRep_PartyOwnerUniqueId"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated_NetRefresh
// (FUNC_Native, FUNC_Public)

void ASteamBeaconState::OnLobbyStateInfoUpdated_NetRefresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated_NetRefresh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)

void ASteamBeaconState::OnLobbyStateInfoUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamBeaconState.GetPartyPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ASteamBeaconPlayerState* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ASteamBeaconPlayerState* ASteamBeaconState::GetPartyPlayer(const struct FUniqueNetIdRepl& UniqueId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconState.GetPartyPlayer"));

	struct
	{
		struct FUniqueNetIdRepl        UniqueId;
		class ASteamBeaconPlayerState* ReturnValue;
	} params = {};

	params.UniqueId = UniqueId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconState.GetPartyLeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ASteamBeaconPlayerState* ASteamBeaconState::GetPartyLeader()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconState.GetPartyLeader"));

	struct
	{
		class ASteamBeaconPlayerState* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconState.GetAllPartyMembers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class ASteamBeaconPlayerState*> InPlayerArray                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ASteamBeaconState::GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamBeaconState.GetAllPartyMembers"));

	struct
	{
		TArray<class ASteamBeaconPlayerState*> InPlayerArray;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InPlayerArray != nullptr)
		*InPlayerArray = params.InPlayerArray;
}


// Function SteamParty.SteamGetFriendsCallbackProxy.RequestSteamFriendsList
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USteamGetFriendsCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USteamGetFriendsCallbackProxy* USteamGetFriendsCallbackProxy::RequestSteamFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamGetFriendsCallbackProxy.RequestSteamFriendsList"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class USteamGetFriendsCallbackProxy* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.UnMutePlayerVoice
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamPartyComponent::UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyComponent.UnMutePlayerVoice"));

	struct
	{
		struct FUniqueNetIdRepl        PlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamPartyComponent.StopPlayerTalking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamPartyComponent::StopPlayerTalking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyComponent.StopPlayerTalking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamPartyComponent.StartPlayerTalking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamPartyComponent::StartPlayerTalking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyComponent.StartPlayerTalking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamPartyComponent.MutePlayerVoice
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamPartyComponent::MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyComponent.MutePlayerVoice"));

	struct
	{
		struct FUniqueNetIdRepl        PlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SteamParty.SteamPartyComponent.IsPlayerVoiceMuted
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamPartyComponent::IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyComponent.IsPlayerVoiceMuted"));

	struct
	{
		struct FUniqueNetIdRepl        PlayerID;
		bool                           ReturnValue;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.IsPlayerControllerUniqueIdMatch
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamPartyComponent::IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyComponent.IsPlayerControllerUniqueIdMatch"));

	struct
	{
		struct FUniqueNetIdRepl        PlayerID;
		bool                           ReturnValue;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.GetPartyPlayer
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ASteamBeaconPlayerState* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ASteamBeaconPlayerState* USteamPartyComponent::GetPartyPlayer(const struct FUniqueNetIdRepl& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyComponent.GetPartyPlayer"));

	struct
	{
		struct FUniqueNetIdRepl        PlayerID;
		class ASteamBeaconPlayerState* ReturnValue;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.GetPartyLeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ASteamBeaconPlayerState* USteamPartyComponent::GetPartyLeader()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyComponent.GetPartyLeader"));

	struct
	{
		class ASteamBeaconPlayerState* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.GetAllPartyMembers
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class ASteamBeaconPlayerState*> InPlayerArray                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void USteamPartyComponent::GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyComponent.GetAllPartyMembers"));

	struct
	{
		TArray<class ASteamBeaconPlayerState*> InPlayerArray;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InPlayerArray != nullptr)
		*InPlayerArray = params.InPlayerArray;
}


// Function SteamParty.SteamPartyFunctionLibrary.SendSessionInviteToFriend
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsParty                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamPartyFunctionLibrary::SendSessionInviteToFriend(const struct FUniqueNetIdRepl& FriendUniqueNetId, bool bIsParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyFunctionLibrary.SendSessionInviteToFriend"));

	struct
	{
		struct FUniqueNetIdRepl        FriendUniqueNetId;
		bool                           bIsParty;
		bool                           ReturnValue;
	} params = {};

	params.FriendUniqueNetId = FriendUniqueNetId;
	params.bIsParty = bIsParty;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.RequestUserInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamPartyFunctionLibrary::RequestUserInfo(const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyFunctionLibrary.RequestUserInfo"));

	struct
	{
		struct FUniqueNetIdRepl        FriendUniqueNetId;
		bool                           ReturnValue;
	} params = {};

	params.FriendUniqueNetId = FriendUniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.JoinFriendPartySession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamPartyFunctionLibrary::JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyFunctionLibrary.JoinFriendPartySession"));

	struct
	{
		struct FUniqueNetIdRepl        FriendUniqueNetId;
		bool                           ReturnValue;
	} params = {};

	params.FriendUniqueNetId = FriendUniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.IsUniqueIdEqual
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        FirstUniqueNetId               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        SecondUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamPartyFunctionLibrary::IsUniqueIdEqual(const struct FUniqueNetIdRepl& FirstUniqueNetId, const struct FUniqueNetIdRepl& SecondUniqueNetId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyFunctionLibrary.IsUniqueIdEqual"));

	struct
	{
		struct FUniqueNetIdRepl        FirstUniqueNetId;
		struct FUniqueNetIdRepl        SecondUniqueNetId;
		bool                           ReturnValue;
	} params = {};

	params.FirstUniqueNetId = FirstUniqueNetId;
	params.SecondUniqueNetId = SecondUniqueNetId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.GetUniqueNetId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl USteamPartyFunctionLibrary::GetUniqueNetId(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyFunctionLibrary.GetUniqueNetId"));

	struct
	{
		class APlayerState*            PlayerState;
		struct FUniqueNetIdRepl        ReturnValue;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.GetSteamFriendAvatar
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESteamAvatarSize               InAvatarSize                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture2D* USteamPartyFunctionLibrary::GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.SteamPartyFunctionLibrary.GetSteamFriendAvatar"));

	struct
	{
		struct FUniqueNetIdRepl        FriendUniqueNetId;
		ESteamAvatarSize               InAvatarSize;
		class UTexture2D*              ReturnValue;
	} params = {};

	params.FriendUniqueNetId = FriendUniqueNetId;
	params.InAvatarSize = InAvatarSize;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.UpdateSessionGameCallbackProxy.UpdateSessionGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           PublicSearchable               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           AllowInvites                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           JoinViaPresence                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           JoinViaPresenceFriendsOnly     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUpdateSessionGameCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUpdateSessionGameCallbackProxy* UUpdateSessionGameCallbackProxy::UpdateSessionGame(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.UpdateSessionGameCallbackProxy.UpdateSessionGame"));

	struct
	{
		int                            MaxPlayers;
		bool                           PublicSearchable;
		bool                           AllowInvites;
		bool                           JoinViaPresence;
		bool                           JoinViaPresenceFriendsOnly;
		class UUpdateSessionGameCallbackProxy* ReturnValue;
	} params = {};

	params.MaxPlayers = MaxPlayers;
	params.PublicSearchable = PublicSearchable;
	params.AllowInvites = AllowInvites;
	params.JoinViaPresence = JoinViaPresence;
	params.JoinViaPresenceFriendsOnly = JoinViaPresenceFriendsOnly;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SteamParty.UpdateSessionPartyCallbackProxy.UpdateSessionParty
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           PublicSearchable               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           AllowInvites                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           JoinViaPresence                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           JoinViaPresenceFriendsOnly     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUpdateSessionPartyCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUpdateSessionPartyCallbackProxy* UUpdateSessionPartyCallbackProxy::UpdateSessionParty(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamParty.UpdateSessionPartyCallbackProxy.UpdateSessionParty"));

	struct
	{
		int                            MaxPlayers;
		bool                           PublicSearchable;
		bool                           AllowInvites;
		bool                           JoinViaPresence;
		bool                           JoinViaPresenceFriendsOnly;
		class UUpdateSessionPartyCallbackProxy* ReturnValue;
	} params = {};

	params.MaxPlayers = MaxPlayers;
	params.PublicSearchable = PublicSearchable;
	params.AllowInvites = AllowInvites;
	params.JoinViaPresence = JoinViaPresence;
	params.JoinViaPresenceFriendsOnly = JoinViaPresenceFriendsOnly;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
