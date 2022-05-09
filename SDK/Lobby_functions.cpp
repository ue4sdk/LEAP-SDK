// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Lobby_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InPartyOwnerId                 (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerSetPartyOwner"));

	struct
	{
		struct FUniqueNetIdRepl        InUniqueId;
		struct FUniqueNetIdRepl        InPartyOwnerId;
	} params = {};

	params.InUniqueId = InUniqueId;
	params.InPartyOwnerId = InPartyOwnerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 InSessionId                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 UrlString                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerLoginPlayer"));

	struct
	{
		struct FString                 InSessionId;
		struct FUniqueNetIdRepl        InUniqueId;
		struct FString                 UrlString;
	} params = {};

	params.InSessionId = InSessionId;
	params.InUniqueId = InUniqueId;
	params.UrlString = UrlString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconClient.ServerKickPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        PlayerToKick                   (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   reason                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerKickPlayer"));

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


// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconClient.ServerCheat
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 Msg                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerCheat(const struct FString& Msg)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerCheat"));

	struct
	{
		struct FString                 Msg;
	} params = {};

	params.Msg = Msg;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconClient.ClientWasKicked
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FText                   KickReason                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientWasKicked(const struct FText& KickReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientWasKicked"));

	struct
	{
		struct FText                   KickReason;
	} params = {};

	params.KickReason = KickReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FJoinabilitySettings    Settings                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientSetInviteFlags(const struct FJoinabilitySettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientSetInviteFlags"));

	struct
	{
		struct FJoinabilitySettings    Settings;
	} params = {};

	params.Settings = Settings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientPlayerLeft"));

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


// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FText                   NewPlayerName                  (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientPlayerJoined"));

	struct
	{
		struct FText                   NewPlayerName;
		struct FUniqueNetIdRepl        InUniqueId;
	} params = {};

	params.NewPlayerName = NewPlayerName;
	params.InUniqueId = InUniqueId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconClient.ClientLoginComplete
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientLoginComplete"));

	struct
	{
		struct FUniqueNetIdRepl        InUniqueId;
		bool                           bWasSuccessful;
	} params = {};

	params.InUniqueId = InUniqueId;
	params.bWasSuccessful = bWasSuccessful;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconClient.ClientJoinGame
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void ALobbyBeaconClient::ClientJoinGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientJoinGame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)

void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientAckJoiningServer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconPlayerState::OnRep_UniqueId()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconState.OnRep_LobbyStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
