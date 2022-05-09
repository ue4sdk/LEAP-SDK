// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_KillParticipation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_KillParticipation.W_KillParticipation_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillParticipation_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipation.W_KillParticipation_C.Fade"));

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


// Function W_KillParticipation.W_KillParticipation_C.Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillParticipation_C::Finished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipation.W_KillParticipation_C.Finished"));

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


// Function W_KillParticipation.W_KillParticipation_C.FadeTo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          From                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          To                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillParticipation_C::FadeTo(float From, float To)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipation.W_KillParticipation_C.FadeTo"));

	struct
	{
		float                          From;
		float                          To;
	} params = {};

	params.From = From;
	params.To = To;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillParticipation.W_KillParticipation_C.Apply Secondary Scaling
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_KillParticipation_C::Apply_Secondary_Scaling()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipation.W_KillParticipation_C.Apply Secondary Scaling"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillParticipation.W_KillParticipation_C.BndEvt__W_UI_XP_CalcEntry_K2Node_ComponentBoundEvent_1_OnHidden__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_KillParticipation_C::BndEvt__W_UI_XP_CalcEntry_K2Node_ComponentBoundEvent_1_OnHidden__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipation.W_KillParticipation_C.BndEvt__W_UI_XP_CalcEntry_K2Node_ComponentBoundEvent_1_OnHidden__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillParticipation.W_KillParticipation_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FExperienceAction       KillInfo                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// float                          InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillParticipation_C::Refresh(const struct FExperienceAction& KillInfo, float InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipation.W_KillParticipation_C.Refresh"));

	struct
	{
		struct FExperienceAction       KillInfo;
		float                          InputPin;
	} params = {};

	params.KillInfo = KillInfo;
	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillParticipation.W_KillParticipation_C.InitFromPool
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_KillParticipation_C::InitFromPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipation.W_KillParticipation_C.InitFromPool"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillParticipation.W_KillParticipation_C.ExecuteUbergraph_W_KillParticipation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillParticipation_C::ExecuteUbergraph_W_KillParticipation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipation.W_KillParticipation_C.ExecuteUbergraph_W_KillParticipation"));

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
