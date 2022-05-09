// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Leaderboard_Dropdown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.Custom Down Navigation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_Leaderboard_Dropdown_C::Custom_Down_Navigation(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.Custom Down Navigation"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.Custom Up Navigation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_Leaderboard_Dropdown_C::Custom_Up_Navigation(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.Custom Up Navigation"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.UpdateBackgroundImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_Dropdown_C::UpdateBackgroundImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.UpdateBackgroundImage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.GetSelectedOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 OptionID                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::GetSelectedOption(struct FString* OptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.GetSelectedOption"));

	struct
	{
		struct FString                 OptionID;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OptionID != nullptr)
		*OptionID = params.OptionID;
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.GetOptionAtIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 OptionID                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::GetOptionAtIndex(int Index, struct FString* OptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.GetOptionAtIndex"));

	struct
	{
		int                            Index;
		struct FString                 OptionID;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OptionID != nullptr)
		*OptionID = params.OptionID;
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.SetSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OptionID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::SetSelection(const struct FString& OptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.SetSelection"));

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


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.ClearOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_Dropdown_C::ClearOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.ClearOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.AddOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OptionID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::AddOption(const struct FString& OptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.AddOption"));

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


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.DebugOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_Dropdown_C::DebugOpen(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.DebugOpen"));

	struct
	{
		bool                           Open;
	} params = {};

	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.SetCurrentModeText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OptionID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::SetCurrentModeText(const struct FString& OptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.SetCurrentModeText"));

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


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_Dropdown_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.PreConstruct"));

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


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Leaderboard_Dropdown_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_Dropdown_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.ExpandList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::ExpandList(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.ExpandList"));

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


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.RetractList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::RetractList(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.RetractList"));

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


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.OptionClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_Leaderboard_Dropdown_Entry_C* ButtonClicked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::OptionClicked(class UW_Leaderboard_Dropdown_Entry_C* ButtonClicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.OptionClicked"));

	struct
	{
		class UW_Leaderboard_Dropdown_Entry_C* ButtonClicked;
	} params = {};

	params.ButtonClicked = ButtonClicked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature"));

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


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.ForceClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::ForceClicked(const struct FString& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.ForceClicked"));

	struct
	{
		struct FString                 NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.ControllerInUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_Dropdown_C::ControllerInUse(bool bUsingController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.ControllerInUse"));

	struct
	{
		bool                           bUsingController;
	} params = {};

	params.bUsingController = bUsingController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.ExecuteUbergraph_W_Leaderboard_Dropdown
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::ExecuteUbergraph_W_Leaderboard_Dropdown(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.ExecuteUbergraph_W_Leaderboard_Dropdown"));

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


// Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.OptionSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OptionID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_C::OptionSelected__DelegateSignature(const struct FString& OptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C.OptionSelected__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
