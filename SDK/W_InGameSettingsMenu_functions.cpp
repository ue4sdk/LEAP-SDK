// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_InGameSettingsMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.OnWidgetDelayedCollapseStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InGameSettingsMenu_C::OnWidgetDelayedCollapseStart(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.OnWidgetDelayedCollapseStart"));

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


// Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.OnLeftBumper
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_InGameSettingsMenu_C::OnLeftBumper()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.OnLeftBumper"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.OnRightBumper
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_InGameSettingsMenu_C::OnRightBumper()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.OnRightBumper"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InGameSettingsMenu_C::BndEvt__btn_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

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


// Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.NavigatePage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  SubPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InGameSettingsMenu_C::NavigatePage(const struct FString& ID, class UClass* /*UUserWidget*/ SubPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.NavigatePage"));

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


// Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_InGameSettingsMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.ExecuteUbergraph_W_InGameSettingsMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InGameSettingsMenu_C::ExecuteUbergraph_W_InGameSettingsMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InGameSettingsMenu.W_InGameSettingsMenu_C.ExecuteUbergraph_W_InGameSettingsMenu"));

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
