// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_LS_ServerInfo_Frame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.SelectedState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_LS_ServerInfo_Frame_C::SelectedState(bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.SelectedState"));

	struct
	{
		bool                           IsSelected;
	} params = {};

	params.IsSelected = IsSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.HoverState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_LS_ServerInfo_Frame_C::HoverState(bool IsHovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.HoverState"));

	struct
	{
		bool                           IsHovered;
	} params = {};

	params.IsHovered = IsHovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_LS_ServerInfo_Frame_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.PreConstruct"));

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


// Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.AnimateHighlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Start                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          End                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_LS_ServerInfo_Frame_C::AnimateHighlight(float Duration, float Start, float End)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.AnimateHighlight"));

	struct
	{
		float                          Duration;
		float                          Start;
		float                          End;
	} params = {};

	params.Duration = Duration;
	params.Start = Start;
	params.End = End;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.HighlightTransition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_LS_ServerInfo_Frame_C::HighlightTransition(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.HighlightTransition"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.ExecuteUbergraph_W_UI_LS_ServerInfo_Frame
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_LS_ServerInfo_Frame_C::ExecuteUbergraph_W_UI_LS_ServerInfo_Frame(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_ServerInfo_Frame.W_UI_LS_ServerInfo_Frame_C.ExecuteUbergraph_W_UI_LS_ServerInfo_Frame"));

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
