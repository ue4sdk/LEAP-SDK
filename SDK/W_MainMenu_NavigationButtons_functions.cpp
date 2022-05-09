// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_MainMenu_NavigationButtons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_MainMenu_NavigationButtons.W_MainMenu_NavigationButtons_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_MainMenu_NavigationButtons_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationButtons.W_MainMenu_NavigationButtons_C.PreConstruct"));

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


// Function W_MainMenu_NavigationButtons.W_MainMenu_NavigationButtons_C.BndEvt__btn_NavOption_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_NavigationButtons_C::BndEvt__btn_NavOption_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationButtons.W_MainMenu_NavigationButtons_C.BndEvt__btn_NavOption_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

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


// Function W_MainMenu_NavigationButtons.W_MainMenu_NavigationButtons_C.SetActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_MainMenu_NavigationButtons_C::SetActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationButtons.W_MainMenu_NavigationButtons_C.SetActive"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationButtons.W_MainMenu_NavigationButtons_C.ExecuteUbergraph_W_MainMenu_NavigationButtons
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_NavigationButtons_C::ExecuteUbergraph_W_MainMenu_NavigationButtons(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationButtons.W_MainMenu_NavigationButtons_C.ExecuteUbergraph_W_MainMenu_NavigationButtons"));

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


// Function W_MainMenu_NavigationButtons.W_MainMenu_NavigationButtons_C.NavClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_NavigationButtons_C::NavClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationButtons.W_MainMenu_NavigationButtons_C.NavClicked__DelegateSignature"));

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
