// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DropdownMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DropdownMenu.W_DropdownMenu_C.GetSelectedOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Option                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_DropdownMenu_C::GetSelectedOption(struct FString* Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.GetSelectedOption"));

	struct
	{
		struct FString                 Option;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Option != nullptr)
		*Option = params.Option;
}


// Function W_DropdownMenu.W_DropdownMenu_C.SetStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DropdownMenu_C::SetStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.SetStyle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DropdownMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.PreConstruct"));

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


// Function W_DropdownMenu.W_DropdownMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DropdownMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.OptionClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_DropdownMenu_C::OptionClicked(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.OptionClicked"));

	struct
	{
		struct FString                 ID;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DropdownMenu_C::BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

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


// Function W_DropdownMenu.W_DropdownMenu_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DropdownMenu_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UW_DropdownMenu_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.OnFocusLost"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_DropdownMenu_C::BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_2_Released__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_DropdownMenu_C::BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_2_Released__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_2_Released__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.BndEvt__btn_clickaway_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_DropdownMenu_C::BndEvt__btn_clickaway_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.BndEvt__btn_clickaway_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.SetDefaultOption
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OptionID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_DropdownMenu_C::SetDefaultOption(const struct FString& OptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.SetDefaultOption"));

	struct
	{
		struct FString                 OptionID;
	} params = {};

	params.OptionID = OptionID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.UpdateText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DropdownMenu_C::UpdateText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.UpdateText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.Disable Dropwdown's Navigation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DropdownMenu_C::Disable_Dropwdown_s_Navigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.Disable Dropwdown's Navigation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.Enable Dropdown's Navigation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DropdownMenu_C::Enable_Dropdown_s_Navigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.Enable Dropdown's Navigation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DropdownMenu.W_DropdownMenu_C.ExecuteUbergraph_W_DropdownMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DropdownMenu_C::ExecuteUbergraph_W_DropdownMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.ExecuteUbergraph_W_DropdownMenu"));

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


// Function W_DropdownMenu.W_DropdownMenu_C.OptionSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedOptionID               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_DropdownMenu_C::OptionSelected__DelegateSignature(const struct FString& SelectedOptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DropdownMenu.W_DropdownMenu_C.OptionSelected__DelegateSignature"));

	struct
	{
		struct FString                 SelectedOptionID;
	} params = {};

	params.SelectedOptionID = SelectedOptionID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
