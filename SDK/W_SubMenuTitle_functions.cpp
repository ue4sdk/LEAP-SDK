// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SubMenuTitle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SubMenuTitle.W_SubMenuTitle_C.BumperLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SubMenuTitle_C::BumperLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.BumperLeft"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.BumperRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SubMenuTitle_C::BumperRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.BumperRight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.ToggleAugment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HideAugment                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SubMenuTitle_C::ToggleAugment(bool HideAugment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.ToggleAugment"));

	struct
	{
		bool                           HideAugment;
	} params = {};

	params.HideAugment = HideAugment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.SetActiveButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_SubMenuTitle_C::SetActiveButton(const struct FString& ButtonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.SetActiveButton"));

	struct
	{
		struct FString                 ButtonID;
	} params = {};

	params.ButtonID = ButtonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.AddNavButtonLoop
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FStruct_SubNavButtons> SubNavButtonArray              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UW_SubMenuTitle_C::AddNavButtonLoop(TArray<struct FStruct_SubNavButtons>* SubNavButtonArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.AddNavButtonLoop"));

	struct
	{
		TArray<struct FStruct_SubNavButtons> SubNavButtonArray;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SubNavButtonArray != nullptr)
		*SubNavButtonArray = params.SubNavButtonArray;
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.AddAugment
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWidget*/      Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 AugmentWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuTitle_C::AddAugment(class UClass* /*UWidget*/ Widget, class UWidget** AugmentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.AddAugment"));

	struct
	{
		class UClass* /*UWidget*/      Widget;
		class UWidget*                 AugmentWidget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AugmentWidget != nullptr)
		*AugmentWidget = params.AugmentWidget;
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.UpdateText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   DisplayText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_SubMenuTitle_C::UpdateText(const struct FText& DisplayText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.UpdateText"));

	struct
	{
		struct FText                   DisplayText;
	} params = {};

	params.DisplayText = DisplayText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.SetStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SubMenuTitle_C::SetStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.SetStyle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SubMenus>        Menu_Selection                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuTitle_C::Initialize(TEnumAsByte<E_SubMenus> Menu_Selection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.Initialize"));

	struct
	{
		TEnumAsByte<E_SubMenus>        Menu_Selection;
	} params = {};

	params.Menu_Selection = Menu_Selection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SubMenuTitle_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.PreConstruct"));

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


// Function W_SubMenuTitle.W_SubMenuTitle_C.ChangeContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  SubPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuTitle_C::ChangeContent(class UClass* /*UUserWidget*/ SubPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.ChangeContent"));

	struct
	{
		class UClass* /*UUserWidget*/  SubPage;
	} params = {};

	params.SubPage = SubPage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.NavButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuTitle_C::NavButtonClicked(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.NavButtonClicked"));

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


// Function W_SubMenuTitle.W_SubMenuTitle_C.OnControllerUsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SubMenuTitle_C::OnControllerUsed(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.OnControllerUsed"));

	struct
	{
		bool                           bIsUsingGamepad;
	} params = {};

	params.bIsUsingGamepad = bIsUsingGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SubMenuTitle_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.ExecuteUbergraph_W_SubMenuTitle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuTitle_C::ExecuteUbergraph_W_SubMenuTitle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.ExecuteUbergraph_W_SubMenuTitle"));

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


// Function W_SubMenuTitle.W_SubMenuTitle_C.ControllerInputUsed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SubMenuTitle_C::ControllerInputUsed__DelegateSignature(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.ControllerInputUsed__DelegateSignature"));

	struct
	{
		bool                           bIsUsingGamepad;
	} params = {};

	params.bIsUsingGamepad = bIsUsingGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.NavigatePage__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  SubPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuTitle_C::NavigatePage__DelegateSignature(const struct FString& ID, class UClass* /*UUserWidget*/ SubPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.NavigatePage__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		class UClass* /*UUserWidget*/  SubPage;
	} params = {};

	params.ID = ID;
	params.SubPage = SubPage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuTitle.W_SubMenuTitle_C.ChangePage__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  SubPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuTitle_C::ChangePage__DelegateSignature(class UClass* /*UUserWidget*/ SubPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuTitle.W_SubMenuTitle_C.ChangePage__DelegateSignature"));

	struct
	{
		class UClass* /*UUserWidget*/  SubPage;
	} params = {};

	params.SubPage = SubPage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
