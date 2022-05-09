// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SquadContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SquadContainer.W_SquadContainer_C.GetCurrentSquad
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            CurrentSquad                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadContainer_C::GetCurrentSquad(int* CurrentSquad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.GetCurrentSquad"));

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


// Function W_SquadContainer.W_SquadContainer_C.GetSquadSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Current                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Max                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsFull                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SquadContainer_C::GetSquadSize(int* Current, int* Max, bool* IsFull)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.GetSquadSize"));

	struct
	{
		int                            Current;
		int                            Max;
		bool                           IsFull;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Current != nullptr)
		*Current = params.Current;
	if (Max != nullptr)
		*Max = params.Max;
	if (IsFull != nullptr)
		*IsFull = params.IsFull;
}


// Function W_SquadContainer.W_SquadContainer_C.PopulateSquadMembers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadContainer_C::PopulateSquadMembers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.PopulateSquadMembers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SquadContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.OnSquadChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadContainer_C::OnSquadChanged(int SquadID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.OnSquadChanged"));

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


// Function W_SquadContainer.W_SquadContainer_C.OnConfirmYes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadContainer_C::OnConfirmYes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.OnConfirmYes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.OnConfirmNo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadContainer_C::OnConfirmNo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.OnConfirmNo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_SquadContainer_C::BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.InitSquad
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SquadNum                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadContainer_C::InitSquad(int SquadID, int SquadNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.InitSquad"));

	struct
	{
		int                            SquadID;
		int                            SquadNum;
	} params = {};

	params.SquadID = SquadID;
	params.SquadNum = SquadNum;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_SquadContainer_C::BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_2_ButtonUnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_SquadContainer_C::BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_2_ButtonUnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_2_ButtonUnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_3_ButtonDoubleClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_SquadContainer_C::BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_3_ButtonDoubleClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.BndEvt__btn_SquadButton_K2Node_ComponentBoundEvent_3_ButtonDoubleClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.ExecuteUbergraph_W_SquadContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadContainer_C::ExecuteUbergraph_W_SquadContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.ExecuteUbergraph_W_SquadContainer"));

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


// Function W_SquadContainer.W_SquadContainer_C.SquadChangeConfirm__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadContainer_C::SquadChangeConfirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.SquadChangeConfirm__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.SquadChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SquadNumber                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadContainer_C::SquadChanged__DelegateSignature(int SquadID, int SquadNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.SquadChanged__DelegateSignature"));

	struct
	{
		int                            SquadID;
		int                            SquadNumber;
	} params = {};

	params.SquadID = SquadID;
	params.SquadNumber = SquadNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadContainer.W_SquadContainer_C.CurrentSquadClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadContainer_C::CurrentSquadClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadContainer.W_SquadContainer_C.CurrentSquadClicked__DelegateSignature"));

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
