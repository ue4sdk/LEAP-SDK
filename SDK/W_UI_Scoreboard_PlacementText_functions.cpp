// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_Scoreboard_PlacementText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_Scoreboard_PlacementText.W_UI_Scoreboard_PlacementText_C.SetStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLast                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_Scoreboard_PlacementText_C::SetStyle(bool IsLast, bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Scoreboard_PlacementText.W_UI_Scoreboard_PlacementText_C.SetStyle"));

	struct
	{
		bool                           IsLast;
		bool                           IsHighlighted;
	} params = {};

	params.IsLast = IsLast;
	params.IsHighlighted = IsHighlighted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Scoreboard_PlacementText.W_UI_Scoreboard_PlacementText_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           highlight                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsLast                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Number                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Scoreboard_PlacementText_C::Initialize(bool highlight, bool IsLast, int Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Scoreboard_PlacementText.W_UI_Scoreboard_PlacementText_C.Initialize"));

	struct
	{
		bool                           highlight;
		bool                           IsLast;
		int                            Number;
	} params = {};

	params.highlight = highlight;
	params.IsLast = IsLast;
	params.Number = Number;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Scoreboard_PlacementText.W_UI_Scoreboard_PlacementText_C.ExecuteUbergraph_W_UI_Scoreboard_PlacementText
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Scoreboard_PlacementText_C::ExecuteUbergraph_W_UI_Scoreboard_PlacementText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Scoreboard_PlacementText.W_UI_Scoreboard_PlacementText_C.ExecuteUbergraph_W_UI_Scoreboard_PlacementText"));

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
