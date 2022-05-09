// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Leaderboard_FriendsOnly_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Leaderboard_FriendsOnly_Button.W_Leaderboard_FriendsOnly_Button_C.BndEvt__CB_FriendsOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_FriendsOnly_Button_C::BndEvt__CB_FriendsOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_FriendsOnly_Button.W_Leaderboard_FriendsOnly_Button_C.BndEvt__CB_FriendsOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_FriendsOnly_Button.W_Leaderboard_FriendsOnly_Button_C.ControllerInUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_FriendsOnly_Button_C::ControllerInUse(bool bUsingController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_FriendsOnly_Button.W_Leaderboard_FriendsOnly_Button_C.ControllerInUse"));

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


// Function W_Leaderboard_FriendsOnly_Button.W_Leaderboard_FriendsOnly_Button_C.ToggleCheckedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_FriendsOnly_Button_C::ToggleCheckedState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_FriendsOnly_Button.W_Leaderboard_FriendsOnly_Button_C.ToggleCheckedState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_FriendsOnly_Button.W_Leaderboard_FriendsOnly_Button_C.ExecuteUbergraph_W_Leaderboard_FriendsOnly_Button
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_FriendsOnly_Button_C::ExecuteUbergraph_W_Leaderboard_FriendsOnly_Button(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_FriendsOnly_Button.W_Leaderboard_FriendsOnly_Button_C.ExecuteUbergraph_W_Leaderboard_FriendsOnly_Button"));

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


// Function W_Leaderboard_FriendsOnly_Button.W_Leaderboard_FriendsOnly_Button_C.FriendsOnlyStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           FriendsOnly                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_FriendsOnly_Button_C::FriendsOnlyStateChanged__DelegateSignature(bool FriendsOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_FriendsOnly_Button.W_Leaderboard_FriendsOnly_Button_C.FriendsOnlyStateChanged__DelegateSignature"));

	struct
	{
		bool                           FriendsOnly;
	} params = {};

	params.FriendsOnly = FriendsOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
