// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Deploy_Squad_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Deploy_Squad.W_Deploy_Squad_C.GetCurrentSquad
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            CurrentSquad                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_Squad_C::GetCurrentSquad(int* CurrentSquad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Squad.W_Deploy_Squad_C.GetCurrentSquad"));

	struct
	{
		int                            CurrentSquad;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CurrentSquad != nullptr)
		*CurrentSquad = params.CurrentSquad;
}


// Function W_Deploy_Squad.W_Deploy_Squad_C.OnPlayerStateAcquired_659DCF56482AA65ADC7765B829F54799
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_Squad_C::OnPlayerStateAcquired_659DCF56482AA65ADC7765B829F54799(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Squad.W_Deploy_Squad_C.OnPlayerStateAcquired_659DCF56482AA65ADC7765B829F54799"));

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


// Function W_Deploy_Squad.W_Deploy_Squad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Deploy_Squad_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Squad.W_Deploy_Squad_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_Squad.W_Deploy_Squad_C.BndEvt__W_SquadContainer_K2Node_ComponentBoundEvent_0_CurrentSquadClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Deploy_Squad_C::BndEvt__W_SquadContainer_K2Node_ComponentBoundEvent_0_CurrentSquadClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Squad.W_Deploy_Squad_C.BndEvt__W_SquadContainer_K2Node_ComponentBoundEvent_0_CurrentSquadClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_Squad.W_Deploy_Squad_C.OnSquadChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_Squad_C::OnSquadChanged_Event_1(int SquadID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Squad.W_Deploy_Squad_C.OnSquadChanged_Event_1"));

	struct
	{
		int                            SquadID;
	} params = {};

	params.SquadID = SquadID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_Squad.W_Deploy_Squad_C.Close Squad List
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Deploy_Squad_C::Close_Squad_List()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Squad.W_Deploy_Squad_C.Close Squad List"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_Squad.W_Deploy_Squad_C.SquadChangeConfirmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Deploy_Squad_C::SquadChangeConfirmed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Squad.W_Deploy_Squad_C.SquadChangeConfirmed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_Squad.W_Deploy_Squad_C.ExecuteUbergraph_W_Deploy_Squad
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_Squad_C::ExecuteUbergraph_W_Deploy_Squad(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_Squad.W_Deploy_Squad_C.ExecuteUbergraph_W_Deploy_Squad"));

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
