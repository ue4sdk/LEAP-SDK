// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Scoreboard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Scoreboard.W_Scoreboard_C.UpdateTeamTickets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Scoreboard_C::UpdateTeamTickets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard.W_Scoreboard_C.UpdateTeamTickets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard.W_Scoreboard_C.GetTeamColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Scoreboard_C::GetTeamColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard.W_Scoreboard_C.GetTeamColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard.W_Scoreboard_C.GetTeamEntryContainer
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAdvancedVerticalBox*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAdvancedVerticalBox* UW_Scoreboard_C::GetTeamEntryContainer(unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard.W_Scoreboard_C.GetTeamEntryContainer"));

	struct
	{
		unsigned char                  Team;
		class UAdvancedVerticalBox*    ReturnValue;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_Scoreboard.W_Scoreboard_C.AddScoreboardEntry
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UUserWidget* UW_Scoreboard_C::AddScoreboardEntry(class AProjectXPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard.W_Scoreboard_C.AddScoreboardEntry"));

	struct
	{
		class AProjectXPlayerState*    PlayerState;
		class UUserWidget*             ReturnValue;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_Scoreboard.W_Scoreboard_C.OnGameStateAcquired_C2120294468FB8E9C42D348792B7D3FE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_C::OnGameStateAcquired_C2120294468FB8E9C42D348792B7D3FE(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard.W_Scoreboard_C.OnGameStateAcquired_C2120294468FB8E9C42D348792B7D3FE"));

	struct
	{
		class AGameState*              GameState;
	} params = {};

	params.GameState = GameState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard.W_Scoreboard_C.OnPlayerStateAcquired_738BD31F44672514D62A99AF58056F58
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_C::OnPlayerStateAcquired_738BD31F44672514D62A99AF58056F58(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard.W_Scoreboard_C.OnPlayerStateAcquired_738BD31F44672514D62A99AF58056F58"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard.W_Scoreboard_C.OnWorldReady
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UW_Scoreboard_C::OnWorldReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard.W_Scoreboard_C.OnWorldReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard.W_Scoreboard_C.UpdateTickets
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTeamTicketInfo> Tickets                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_Scoreboard_C::UpdateTickets(TArray<struct FTeamTicketInfo> Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard.W_Scoreboard_C.UpdateTickets"));

	struct
	{
		TArray<struct FTeamTicketInfo> Tickets;
	} params = {};

	params.Tickets = Tickets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard.W_Scoreboard_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_C::Init(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard.W_Scoreboard_C.Init"));

	struct
	{
		class AProjectXPlayerState*    PlayerState;
		unsigned char                  Team;
	} params = {};

	params.PlayerState = PlayerState;
	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard.W_Scoreboard_C.ExecuteUbergraph_W_Scoreboard
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_C::ExecuteUbergraph_W_Scoreboard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard.W_Scoreboard_C.ExecuteUbergraph_W_Scoreboard"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
