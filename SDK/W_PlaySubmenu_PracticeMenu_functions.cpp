// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlaySubmenu_PracticeMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.SelectFirstOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_PlaySubmenu_PracticeMenu_C::SelectFirstOption(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.SelectFirstOption"));

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


// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_PlaySubmenu_PracticeMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.OnWidgetVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_PracticeMenu_C::OnWidgetVisible(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.OnWidgetVisible"));

	struct
	{
		class UObject*                 ContextObject;
	} params = {};

	params.ContextObject = ContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlaySubmenu_PracticeMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PlaySubmenu_PracticeMenu_C::BndEvt__btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.OnMenuBack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlaySubmenu_PracticeMenu_C::OnMenuBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.OnMenuBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.OnPlayModeHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PlayModeInfo_C*       PlayModeInfo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlaySubmenu_PracticeMenu_C::OnPlayModeHovered(class UW_PlayModeInfo_C* PlayModeInfo, bool bHovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.OnPlayModeHovered"));

	struct
	{
		class UW_PlayModeInfo_C*       PlayModeInfo;
		bool                           bHovered;
	} params = {};

	params.PlayModeInfo = PlayModeInfo;
	params.bHovered = bHovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.OnPlayModeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PlayModeInfo_C*       PlayModeInfo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSelected                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlaySubmenu_PracticeMenu_C::OnPlayModeSelected(class UW_PlayModeInfo_C* PlayModeInfo, bool bSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.OnPlayModeSelected"));

	struct
	{
		class UW_PlayModeInfo_C*       PlayModeInfo;
		bool                           bSelected;
	} params = {};

	params.PlayModeInfo = PlayModeInfo;
	params.bSelected = bSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.BndEvt__btn_FindMatch_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_PracticeMenu_C::BndEvt__btn_FindMatch_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.BndEvt__btn_FindMatch_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature"));

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


// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.ExecuteUbergraph_W_PlaySubmenu_PracticeMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_PracticeMenu_C::ExecuteUbergraph_W_PlaySubmenu_PracticeMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.ExecuteUbergraph_W_PlaySubmenu_PracticeMenu"));

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


// Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.StartingToCollapse__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_PracticeMenu_C::StartingToCollapse__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_PracticeMenu.W_PlaySubmenu_PracticeMenu_C.StartingToCollapse__DelegateSignature"));

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
