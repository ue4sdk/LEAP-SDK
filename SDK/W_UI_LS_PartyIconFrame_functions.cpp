// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_LS_PartyIconFrame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_LS_PartyIconFrame.W_UI_LS_PartyIconFrame_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_LS_PartyIconFrame_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_PartyIconFrame.W_UI_LS_PartyIconFrame_C.PreConstruct"));

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


// Function W_UI_LS_PartyIconFrame.W_UI_LS_PartyIconFrame_C.SetWarningLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          WarningLevel                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          WarningPulseSpeed              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_LS_PartyIconFrame_C::SetWarningLevel(float WarningLevel, float WarningPulseSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_PartyIconFrame.W_UI_LS_PartyIconFrame_C.SetWarningLevel"));

	struct
	{
		float                          WarningLevel;
		float                          WarningPulseSpeed;
	} params = {};

	params.WarningLevel = WarningLevel;
	params.WarningPulseSpeed = WarningPulseSpeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_LS_PartyIconFrame.W_UI_LS_PartyIconFrame_C.ExecuteUbergraph_W_UI_LS_PartyIconFrame
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_LS_PartyIconFrame_C::ExecuteUbergraph_W_UI_LS_PartyIconFrame(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_LS_PartyIconFrame.W_UI_LS_PartyIconFrame_C.ExecuteUbergraph_W_UI_LS_PartyIconFrame"));

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
