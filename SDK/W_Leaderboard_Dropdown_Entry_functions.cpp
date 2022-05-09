// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Leaderboard_Dropdown_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_Dropdown_Entry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.PreConstruct"));

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


// Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Leaderboard_Dropdown_Entry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.BndEvt__Button_51_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Leaderboard_Dropdown_Entry_C::BndEvt__Button_51_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.BndEvt__Button_51_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.ForceClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_Dropdown_Entry_C::ForceClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.ForceClick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.ExecuteUbergraph_W_Leaderboard_Dropdown_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_Entry_C::ExecuteUbergraph_W_Leaderboard_Dropdown_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.ExecuteUbergraph_W_Leaderboard_Dropdown_Entry"));

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


// Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.IsClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_Leaderboard_Dropdown_Entry_C* ButtonClicked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_Dropdown_Entry_C::IsClicked__DelegateSignature(class UW_Leaderboard_Dropdown_Entry_C* ButtonClicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_Dropdown_Entry.W_Leaderboard_Dropdown_Entry_C.IsClicked__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
