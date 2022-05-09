// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ReviveScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ReviveScreen.W_ReviveScreen_C.StartProgressBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeTotal                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ReviveScreen_C::StartProgressBar(float TimeTotal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveScreen.W_ReviveScreen_C.StartProgressBar"));

	struct
	{
		float                          TimeTotal;
	} params = {};

	params.TimeTotal = TimeTotal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveScreen.W_ReviveScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ReviveScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveScreen.W_ReviveScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveScreen.W_ReviveScreen_C.OnGamepadStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ReviveScreen_C::OnGamepadStateChanged(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveScreen.W_ReviveScreen_C.OnGamepadStateChanged"));

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


// Function W_ReviveScreen.W_ReviveScreen_C.On Menu Toggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ReviveScreen_C::On_Menu_Toggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveScreen.W_ReviveScreen_C.On Menu Toggled"));

	struct
	{
		class UAdvancedUserWidget*     Widget;
		bool                           bToggle;
	} params = {};

	params.Widget = Widget;
	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveScreen.W_ReviveScreen_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ReviveScreen_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveScreen.W_ReviveScreen_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveScreen.W_ReviveScreen_C.OnMatchStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewMatchState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousMatchState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ReviveScreen_C::OnMatchStateChanged(const struct FName& NewMatchState, const struct FName& PreviousMatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveScreen.W_ReviveScreen_C.OnMatchStateChanged"));

	struct
	{
		struct FName                   NewMatchState;
		struct FName                   PreviousMatchState;
	} params = {};

	params.NewMatchState = NewMatchState;
	params.PreviousMatchState = PreviousMatchState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveScreen.W_ReviveScreen_C.OnWidgetVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ReviveScreen_C::OnWidgetVisible(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveScreen.W_ReviveScreen_C.OnWidgetVisible"));

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


// Function W_ReviveScreen.W_ReviveScreen_C.On Time Before Showing Map Expired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ReviveScreen_C::On_Time_Before_Showing_Map_Expired()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveScreen.W_ReviveScreen_C.On Time Before Showing Map Expired"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveScreen.W_ReviveScreen_C.ExecuteUbergraph_W_ReviveScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ReviveScreen_C::ExecuteUbergraph_W_ReviveScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveScreen.W_ReviveScreen_C.ExecuteUbergraph_W_ReviveScreen"));

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
