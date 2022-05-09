// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PartySlotInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartySlotInfo.W_PartySlotInfo_C.ToggleOptionsDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartySlotInfo_C::ToggleOptionsDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.ToggleOptionsDisplay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.OptionsDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowOptions                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartySlotInfo_C::OptionsDisplay(bool ShowOptions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.OptionsDisplay"));

	struct
	{
		bool                           ShowOptions;
	} params = {};

	params.ShowOptions = ShowOptions;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.UpdatePosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartySlotInfo_C::UpdatePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.UpdatePosition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.UpdateTalkingDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartySlotInfo_C::UpdateTalkingDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.UpdateTalkingDisplay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.Get_Button_Slot_ToolTipWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_PartySlotInfo_C::Get_Button_Slot_ToolTipWidget_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.Get_Button_Slot_ToolTipWidget_1"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.OnPlayerTalkingStateChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTalking                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartySlotInfo_C::OnPlayerTalkingStateChanged_Event_1(bool IsTalking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.OnPlayerTalkingStateChanged_Event_1"));

	struct
	{
		bool                           IsTalking;
	} params = {};

	params.IsTalking = IsTalking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PartySlotInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PartySlotInfo_C::BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.Nakama User ID Found
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NakamaID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 SteamID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PartySlotInfo_C::Nakama_User_ID_Found(const struct FString& NakamaID, const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.Nakama User ID Found"));

	struct
	{
		struct FString                 NakamaID;
		struct FString                 SteamID;
	} params = {};

	params.NakamaID = NakamaID;
	params.SteamID = SteamID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.StatsLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartySlotInfo_C::StatsLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.StatsLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.ExecuteUbergraph_W_PartySlotInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartySlotInfo_C::ExecuteUbergraph_W_PartySlotInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.ExecuteUbergraph_W_PartySlotInfo"));

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


// Function W_PartySlotInfo.W_PartySlotInfo_C.OptionsOpened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* MemberID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartySlotInfo_C::OptionsOpened__DelegateSignature(class ASteamBeaconPlayerState* MemberID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartySlotInfo.W_PartySlotInfo_C.OptionsOpened__DelegateSignature"));

	struct
	{
		class ASteamBeaconPlayerState* MemberID;
	} params = {};

	params.MemberID = MemberID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
