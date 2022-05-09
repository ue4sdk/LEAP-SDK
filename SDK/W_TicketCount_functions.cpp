// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_TicketCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_TicketCount.W_TicketCount_C.UpdateObjectivesSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_TicketCount_C::UpdateObjectivesSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.UpdateObjectivesSize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TicketCount.W_TicketCount_C.GetTeamColors
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            TeamColor                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            TeamColorDark                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            TeamColorEmissive              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TicketCount_C::GetTeamColors(int Team, struct FLinearColor* TeamColor, struct FLinearColor* TeamColorDark, struct FLinearColor* TeamColorEmissive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.GetTeamColors"));

	struct
	{
		int                            Team;
		struct FLinearColor            TeamColor;
		struct FLinearColor            TeamColorDark;
		struct FLinearColor            TeamColorEmissive;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TeamColor != nullptr)
		*TeamColor = params.TeamColor;
	if (TeamColorDark != nullptr)
		*TeamColorDark = params.TeamColorDark;
	if (TeamColorEmissive != nullptr)
		*TeamColorEmissive = params.TeamColorEmissive;
}


// Function W_TicketCount.W_TicketCount_C.SetupDynMat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_TicketCount_C::SetupDynMat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.SetupDynMat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TicketCount.W_TicketCount_C.SetTeamStyles
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_TicketCount_C::SetTeamStyles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.SetTeamStyles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TicketCount.W_TicketCount_C.PlaceObjectives
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWidget*/      Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 WidgetOut                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TicketCount_C::PlaceObjectives(class UClass* /*UWidget*/ Widget, class UWidget** WidgetOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.PlaceObjectives"));

	struct
	{
		class UClass* /*UWidget*/      Widget;
		class UWidget*                 WidgetOut;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (WidgetOut != nullptr)
		*WidgetOut = params.WidgetOut;
}


// Function W_TicketCount.W_TicketCount_C.OnGameStateAcquired_5A4DDCB5418D28079D0CA4AA97975676
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TicketCount_C::OnGameStateAcquired_5A4DDCB5418D28079D0CA4AA97975676(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.OnGameStateAcquired_5A4DDCB5418D28079D0CA4AA97975676"));

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


// Function W_TicketCount.W_TicketCount_C.OnPlayerStateAcquired_CF72D8BE4F2781DB50E9169A42324492
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TicketCount_C::OnPlayerStateAcquired_CF72D8BE4F2781DB50E9169A42324492(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.OnPlayerStateAcquired_CF72D8BE4F2781DB50E9169A42324492"));

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


// Function W_TicketCount.W_TicketCount_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_TicketCount_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TicketCount.W_TicketCount_C.OnTicketsChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTeamTicketInfo> Tickets                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_TicketCount_C::OnTicketsChanged(TArray<struct FTeamTicketInfo> Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.OnTicketsChanged"));

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


// Function W_TicketCount.W_TicketCount_C.UpdateTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Tickets                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TicketCount_C::UpdateTeam(int Team, int Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.UpdateTeam"));

	struct
	{
		int                            Team;
		int                            Tickets;
	} params = {};

	params.Team = Team;
	params.Tickets = Tickets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TicketCount.W_TicketCount_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_TicketCount_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TicketCount.W_TicketCount_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_TicketCount_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TicketCount.W_TicketCount_C.OnObjectivesUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_TicketCount_C::OnObjectivesUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.OnObjectivesUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TicketCount.W_TicketCount_C.ExecuteUbergraph_W_TicketCount
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TicketCount_C::ExecuteUbergraph_W_TicketCount(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TicketCount.W_TicketCount_C.ExecuteUbergraph_W_TicketCount"));

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
