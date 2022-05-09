// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EnableDisableToggle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EnableDisableToggle.EnableDisableToggle_C.IsEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CurrentState                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEnableDisableToggle_C::IsEnabled(bool* CurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.IsEnabled"));

	struct
	{
		bool                           CurrentState;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function EnableDisableToggle.EnableDisableToggle_C.UpdateColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UW_Button_C*             Target_New                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnableDisableToggle_C::UpdateColor(bool Selected, class UW_Button_C* Target_New)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.UpdateColor"));

	struct
	{
		bool                           Selected;
		class UW_Button_C*             Target_New;
	} params = {};

	params.Selected = Selected;
	params.Target_New = Target_New;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EnableDisableToggle.EnableDisableToggle_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEnableDisableToggle_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.PreConstruct"));

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


// Function EnableDisableToggle.EnableDisableToggle_C.ToggleState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEnableDisableToggle_C::ToggleState(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.ToggleState"));

	struct
	{
		bool                           Enabled;
	} params = {};

	params.Enabled = Enabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EnableDisableToggle.EnableDisableToggle_C.BndEvt__btn_Disable_New_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnableDisableToggle_C::BndEvt__btn_Disable_New_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.BndEvt__btn_Disable_New_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EnableDisableToggle.EnableDisableToggle_C.BndEvt__btn_Enable_New_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnableDisableToggle_C::BndEvt__btn_Enable_New_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.BndEvt__btn_Enable_New_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EnableDisableToggle.EnableDisableToggle_C.SetDisabledText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UEnableDisableToggle_C::SetDisabledText(const struct FText& NewText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.SetDisabledText"));

	struct
	{
		struct FText                   NewText;
	} params = {};

	params.NewText = NewText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EnableDisableToggle.EnableDisableToggle_C.SetEnabledText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UEnableDisableToggle_C::SetEnabledText(const struct FText& NewText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.SetEnabledText"));

	struct
	{
		struct FText                   NewText;
	} params = {};

	params.NewText = NewText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EnableDisableToggle.EnableDisableToggle_C.BndEvt__Focusable_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnableDisableToggle_C::BndEvt__Focusable_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.BndEvt__Focusable_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature"));

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


// Function EnableDisableToggle.EnableDisableToggle_C.ExecuteUbergraph_EnableDisableToggle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnableDisableToggle_C::ExecuteUbergraph_EnableDisableToggle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.ExecuteUbergraph_EnableDisableToggle"));

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


// Function EnableDisableToggle.EnableDisableToggle_C.EnableEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEnableDisableToggle_C::EnableEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.EnableEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EnableDisableToggle.EnableDisableToggle_C.DisableEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEnableDisableToggle_C::DisableEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EnableDisableToggle.EnableDisableToggle_C.DisableEvent__DelegateSignature"));

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
