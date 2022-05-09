// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_VoteMapEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_VoteMapEntry.W_VoteMapEntry_C.SequenceEvent__ENTRYPOINTW_VoteMapEntry_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_VoteMapEntry_C::SequenceEvent__ENTRYPOINTW_VoteMapEntry_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.SequenceEvent__ENTRYPOINTW_VoteMapEntry_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteMapEntry.W_VoteMapEntry_C.SetCurrentVote
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsCurrentVote                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_VoteMapEntry_C::SetCurrentVote(bool IsCurrentVote)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.SetCurrentVote"));

	struct
	{
		bool                           IsCurrentVote;
	} params = {};

	params.IsCurrentVote = IsCurrentVote;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteMapEntry.W_VoteMapEntry_C.Self-Collapse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_VoteMapEntry_C::Self_Collapse()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.Self-Collapse"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteMapEntry.W_VoteMapEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_VoteMapEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteMapEntry.W_VoteMapEntry_C.UpdateVoteCount
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class APlayerState*>    VoterList                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_VoteMapEntry_C::UpdateVoteCount(TArray<class APlayerState*> VoterList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.UpdateVoteCount"));

	struct
	{
		TArray<class APlayerState*>    VoterList;
	} params = {};

	params.VoterList = VoterList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteMapEntry.W_VoteMapEntry_C.BndEvt__btn_MapEntry_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_VoteMapEntry_C::BndEvt__btn_MapEntry_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.BndEvt__btn_MapEntry_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteMapEntry.W_VoteMapEntry_C.BndEvt__btn_MapEntry_K2Node_ComponentBoundEvent_2_ButtonHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_VoteMapEntry_C::BndEvt__btn_MapEntry_K2Node_ComponentBoundEvent_2_ButtonHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.BndEvt__btn_MapEntry_K2Node_ComponentBoundEvent_2_ButtonHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteMapEntry.W_VoteMapEntry_C.BndEvt__btn_MapEntry_K2Node_ComponentBoundEvent_3_ButtonUnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_VoteMapEntry_C::BndEvt__btn_MapEntry_K2Node_ComponentBoundEvent_3_ButtonUnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.BndEvt__btn_MapEntry_K2Node_ComponentBoundEvent_3_ButtonUnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteMapEntry.W_VoteMapEntry_C.VoteHasEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsWinner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_VoteMapEntry_C::VoteHasEnded(bool bIsWinner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.VoteHasEnded"));

	struct
	{
		bool                           bIsWinner;
	} params = {};

	params.bIsWinner = bIsWinner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteMapEntry.W_VoteMapEntry_C.Increase Vote Count
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_VoteMapEntry_C::Increase_Vote_Count()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.Increase Vote Count"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteMapEntry.W_VoteMapEntry_C.ExecuteUbergraph_W_VoteMapEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VoteMapEntry_C::ExecuteUbergraph_W_VoteMapEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.ExecuteUbergraph_W_VoteMapEntry"));

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


// Function W_VoteMapEntry.W_VoteMapEntry_C.OnVoteEntryClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UW_VoteMapEntry_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VoteMapEntry_C::OnVoteEntryClicked__DelegateSignature(const struct FString& MapName, class UW_VoteMapEntry_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteMapEntry.W_VoteMapEntry_C.OnVoteEntryClicked__DelegateSignature"));

	struct
	{
		struct FString                 MapName;
		class UW_VoteMapEntry_C*       Button;
	} params = {};

	params.MapName = MapName;
	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
