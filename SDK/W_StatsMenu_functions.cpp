// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_StatsMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_StatsMenu.W_StatsMenu_C.UpdateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ESlateVisibility               General                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ESlateVisibility               Vehicle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ESlateVisibility               Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_StatsMenu_C::UpdateVisibility(ESlateVisibility Class, ESlateVisibility General, ESlateVisibility Vehicle, ESlateVisibility Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_StatsMenu.W_StatsMenu_C.UpdateVisibility"));

	struct
	{
		ESlateVisibility               Class;
		ESlateVisibility               General;
		ESlateVisibility               Vehicle;
		ESlateVisibility               Weapon;
	} params = {};

	params.Class = Class;
	params.General = General;
	params.Vehicle = Vehicle;
	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_StatsMenu.W_StatsMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_StatsMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_StatsMenu.W_StatsMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_StatsMenu.W_StatsMenu_C.OnBackButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_StatsMenu_C::OnBackButtonPressed(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_StatsMenu.W_StatsMenu_C.OnBackButtonPressed"));

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


// Function W_StatsMenu.W_StatsMenu_C.OnMenuBack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_StatsMenu_C::OnMenuBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_StatsMenu.W_StatsMenu_C.OnMenuBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_StatsMenu.W_StatsMenu_C.OnRightBumper
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_StatsMenu_C::OnRightBumper()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_StatsMenu.W_StatsMenu_C.OnRightBumper"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_StatsMenu.W_StatsMenu_C.OnLeftBumper
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_StatsMenu_C::OnLeftBumper()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_StatsMenu.W_StatsMenu_C.OnLeftBumper"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_StatsMenu.W_StatsMenu_C.OnControllerInUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_StatsMenu_C::OnControllerInUse(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_StatsMenu.W_StatsMenu_C.OnControllerInUse"));

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


// Function W_StatsMenu.W_StatsMenu_C.ExecuteUbergraph_W_StatsMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_StatsMenu_C::ExecuteUbergraph_W_StatsMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_StatsMenu.W_StatsMenu_C.ExecuteUbergraph_W_StatsMenu"));

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
