// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI__scoreboard_placement_Notches_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI__scoreboard_placement_Notches.W_UI__scoreboard_placement_Notches_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_UI__scoreboard_placement_Notches_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI__scoreboard_placement_Notches.W_UI__scoreboard_placement_Notches_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI__scoreboard_placement_Notches.W_UI__scoreboard_placement_Notches_C.UpdatePlayerCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Player_Count                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI__scoreboard_placement_Notches_C::UpdatePlayerCount(int Player_Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI__scoreboard_placement_Notches.W_UI__scoreboard_placement_Notches_C.UpdatePlayerCount"));

	struct
	{
		int                            Player_Count;
	} params = {};

	params.Player_Count = Player_Count;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI__scoreboard_placement_Notches.W_UI__scoreboard_placement_Notches_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI__scoreboard_placement_Notches_C::CustomEvent(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI__scoreboard_placement_Notches.W_UI__scoreboard_placement_Notches_C.CustomEvent"));

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


// Function W_UI__scoreboard_placement_Notches.W_UI__scoreboard_placement_Notches_C.ExecuteUbergraph_W_UI__scoreboard_placement_Notches
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI__scoreboard_placement_Notches_C::ExecuteUbergraph_W_UI__scoreboard_placement_Notches(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI__scoreboard_placement_Notches.W_UI__scoreboard_placement_Notches_C.ExecuteUbergraph_W_UI__scoreboard_placement_Notches"));

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
