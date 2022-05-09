// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXGameStateBaseControl_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXGameStateBaseControl_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.OnTicketCountChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTeamTicketInfo> Tickets                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_ProjectXGameStateBaseControl_C::OnTicketCountChanged(TArray<struct FTeamTicketInfo> Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.OnTicketCountChanged"));

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


// Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.SendLowTicketWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXGameStateBaseControl_C::SendLowTicketWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.SendLowTicketWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.OnTicketCountUpdate_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXGameStateBaseControl_C::OnTicketCountUpdate_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.OnTicketCountUpdate_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.OnWinnerDecided
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Winner                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXGameStateBaseControl_C::OnWinnerDecided(int Winner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.OnWinnerDecided"));

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


// Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.OnPlayerPawnSpawned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXGameStateBaseControl_C::OnPlayerPawnSpawned(class AProjectXCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.OnPlayerPawnSpawned"));

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


// Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.CheckMatchEndingSoon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXGameStateBaseControl_C::CheckMatchEndingSoon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.CheckMatchEndingSoon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.CheckMatchHalfwayMark
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXGameStateBaseControl_C::CheckMatchHalfwayMark()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.CheckMatchHalfwayMark"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.ExecuteUbergraph_BP_ProjectXGameStateBaseControl
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXGameStateBaseControl_C::ExecuteUbergraph_BP_ProjectXGameStateBaseControl(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C.ExecuteUbergraph_BP_ProjectXGameStateBaseControl"));

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
