// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_Scoreboard_Notch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_Scoreboard_Notch.W_UI_Scoreboard_Notch_C.SetHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_Scoreboard_Notch_C::SetHighlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Scoreboard_Notch.W_UI_Scoreboard_Notch_C.SetHighlight"));

	struct
	{
		bool                           IsHighlighted;
	} params = {};

	params.IsHighlighted = IsHighlighted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Scoreboard_Notch.W_UI_Scoreboard_Notch_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           highlight                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsFirst                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsLastNotch                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_Scoreboard_Notch_C::Initialize(bool highlight, bool IsFirst, bool IsLastNotch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Scoreboard_Notch.W_UI_Scoreboard_Notch_C.Initialize"));

	struct
	{
		bool                           highlight;
		bool                           IsFirst;
		bool                           IsLastNotch;
	} params = {};

	params.highlight = highlight;
	params.IsFirst = IsFirst;
	params.IsLastNotch = IsLastNotch;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Scoreboard_Notch.W_UI_Scoreboard_Notch_C.ExecuteUbergraph_W_UI_Scoreboard_Notch
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Scoreboard_Notch_C::ExecuteUbergraph_W_UI_Scoreboard_Notch(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Scoreboard_Notch.W_UI_Scoreboard_Notch_C.ExecuteUbergraph_W_UI_Scoreboard_Notch"));

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
