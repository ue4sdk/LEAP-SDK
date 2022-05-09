// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Party_AddButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Party_AddButton.W_Party_AddButton_C.CloseList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Party_AddButton_C::CloseList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.CloseList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.OpenList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Party_AddButton_C::OpenList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.OpenList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.GetBackgroundMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* BackgroundDynMat               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Party_AddButton_C::GetBackgroundMaterial(class UMaterialInstanceDynamic** BackgroundDynMat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.GetBackgroundMaterial"));

	struct
	{
		class UMaterialInstanceDynamic* BackgroundDynMat;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BackgroundDynMat != nullptr)
		*BackgroundDynMat = params.BackgroundDynMat;
}


// Function W_Party_AddButton.W_Party_AddButton_C.HoverEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Party_AddButton_C::HoverEffect(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.HoverEffect"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.HoverAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AnimateTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Start                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          End                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Party_AddButton_C::HoverAnim(float AnimateTime, float Start, float End)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.HoverAnim"));

	struct
	{
		float                          AnimateTime;
		float                          Start;
		float                          End;
	} params = {};

	params.AnimateTime = AnimateTime;
	params.Start = Start;
	params.End = End;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.BndEvt__btn_ClickAway_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Party_AddButton_C::BndEvt__btn_ClickAway_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.BndEvt__btn_ClickAway_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.BndEvt__btn_PartyAdd_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Party_AddButton_C::BndEvt__btn_PartyAdd_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.BndEvt__btn_PartyAdd_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.BndEvt__btn_PartyAdd_K2Node_ComponentBoundEvent_6_ButtonHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Party_AddButton_C::BndEvt__btn_PartyAdd_K2Node_ComponentBoundEvent_6_ButtonHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.BndEvt__btn_PartyAdd_K2Node_ComponentBoundEvent_6_ButtonHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.BndEvt__btn_PartyAdd_K2Node_ComponentBoundEvent_7_ButtonUnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Party_AddButton_C::BndEvt__btn_PartyAdd_K2Node_ComponentBoundEvent_7_ButtonUnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.BndEvt__btn_PartyAdd_K2Node_ComponentBoundEvent_7_ButtonUnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Party_AddButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.PreConstruct"));

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


// Function W_Party_AddButton.W_Party_AddButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Party_AddButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.BndEvt__W_PartyFriends_K2Node_ComponentBoundEvent_0_FriendsFound__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           FoundFriends                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Party_AddButton_C::BndEvt__W_PartyFriends_K2Node_ComponentBoundEvent_0_FriendsFound__DelegateSignature(bool FoundFriends)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.BndEvt__W_PartyFriends_K2Node_ComponentBoundEvent_0_FriendsFound__DelegateSignature"));

	struct
	{
		bool                           FoundFriends;
	} params = {};

	params.FoundFriends = FoundFriends;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.TogglePartyList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UW_Party_AddButton_C::TogglePartyList(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.TogglePartyList"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_AddButton.W_Party_AddButton_C.ExecuteUbergraph_W_Party_AddButton
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Party_AddButton_C::ExecuteUbergraph_W_Party_AddButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.ExecuteUbergraph_W_Party_AddButton"));

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


// Function W_Party_AddButton.W_Party_AddButton_C.AddPartyClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Party_AddButton_C::AddPartyClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_AddButton.W_Party_AddButton_C.AddPartyClicked__DelegateSignature"));

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
