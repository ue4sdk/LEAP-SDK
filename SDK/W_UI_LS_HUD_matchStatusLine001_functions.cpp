// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_LS_HUD_matchStatusLine001_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_LS_HUD_matchStatusLine001.W_UI_LS_HUD_matchStatusLine001_C.Colorize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Colorize                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_LS_HUD_matchStatusLine001_C::Colorize(bool Colorize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_HUD_matchStatusLine001.W_UI_LS_HUD_matchStatusLine001_C.Colorize"));

	struct
	{
		bool                           Colorize;
		struct FLinearColor            Color;
	} params = {};

	params.Colorize = Colorize;
	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_LS_HUD_matchStatusLine001.W_UI_LS_HUD_matchStatusLine001_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_LS_HUD_matchStatusLine001_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_HUD_matchStatusLine001.W_UI_LS_HUD_matchStatusLine001_C.PreConstruct"));

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


// Function W_UI_LS_HUD_matchStatusLine001.W_UI_LS_HUD_matchStatusLine001_C.ExecuteUbergraph_W_UI_LS_HUD_matchStatusLine001
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_LS_HUD_matchStatusLine001_C::ExecuteUbergraph_W_UI_LS_HUD_matchStatusLine001(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_HUD_matchStatusLine001.W_UI_LS_HUD_matchStatusLine001_C.ExecuteUbergraph_W_UI_LS_HUD_matchStatusLine001"));

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
