// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_Play_GameModeMenu_deco_frame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_Play_GameModeMenu_deco_frame.W_UI_Play_GameModeMenu_deco_frame_C.SetHintText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Hint_Text                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_UI_Play_GameModeMenu_deco_frame_C::SetHintText(const struct FText& Hint_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Play_GameModeMenu_deco_frame.W_UI_Play_GameModeMenu_deco_frame_C.SetHintText"));

	struct
	{
		struct FText                   Hint_Text;
	} params = {};

	params.Hint_Text = Hint_Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Play_GameModeMenu_deco_frame.W_UI_Play_GameModeMenu_deco_frame_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_Play_GameModeMenu_deco_frame_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Play_GameModeMenu_deco_frame.W_UI_Play_GameModeMenu_deco_frame_C.PreConstruct"));

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


// Function W_UI_Play_GameModeMenu_deco_frame.W_UI_Play_GameModeMenu_deco_frame_C.ExecuteUbergraph_W_UI_Play_GameModeMenu_deco_frame
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Play_GameModeMenu_deco_frame_C::ExecuteUbergraph_W_UI_Play_GameModeMenu_deco_frame(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Play_GameModeMenu_deco_frame.W_UI_Play_GameModeMenu_deco_frame_C.ExecuteUbergraph_W_UI_Play_GameModeMenu_deco_frame"));

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
