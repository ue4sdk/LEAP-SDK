// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXGameStateKing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXGameStateKing_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXGameStateKing_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.OnTicketCountChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTeamTicketInfo> Tickets                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_ProjectXGameStateKing_C::OnTicketCountChanged(TArray<struct FTeamTicketInfo> Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.OnTicketCountChanged"));

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


// Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.SendLowTicketWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXGameStateKing_C::SendLowTicketWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.SendLowTicketWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.SendGameEndingSoonWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXGameStateKing_C::SendGameEndingSoonWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.SendGameEndingSoonWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.UpdateTicketWarnings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXGameStateKing_C::UpdateTicketWarnings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.UpdateTicketWarnings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.OnPlayerPawnSpawned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXGameStateKing_C::OnPlayerPawnSpawned(class AProjectXCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.OnPlayerPawnSpawned"));

	struct
	{
		class AProjectXCharacter*      Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.OnWinnerDecided
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Winner                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXGameStateKing_C::OnWinnerDecided(int Winner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.OnWinnerDecided"));

	struct
	{
		int                            Winner;
	} params = {};

	params.Winner = Winner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.CheckGameEndingSoon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXGameStateKing_C::CheckGameEndingSoon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.CheckGameEndingSoon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.ExecuteUbergraph_BP_ProjectXGameStateKing
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXGameStateKing_C::ExecuteUbergraph_BP_ProjectXGameStateKing(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C.ExecuteUbergraph_BP_ProjectXGameStateKing"));

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
