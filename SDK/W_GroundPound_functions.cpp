// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_GroundPound_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_GroundPound.W_GroundPound_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_GroundPound_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPound.W_GroundPound_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GroundPound.W_GroundPound_C.StartCharging
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GroundPound_C::StartCharging()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPound.W_GroundPound_C.StartCharging"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GroundPound.W_GroundPound_C.ChargeFinishedEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TotalTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeElapsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GroundPound_C::ChargeFinishedEvent_Event_1(float TotalTime, float TimeElapsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPound.W_GroundPound_C.ChargeFinishedEvent_Event_1"));

	struct
	{
		float                          TotalTime;
		float                          TimeElapsed;
	} params = {};

	params.TotalTime = TotalTime;
	params.TimeElapsed = TimeElapsed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GroundPound.W_GroundPound_C.ExecuteUbergraph_W_GroundPound
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GroundPound_C::ExecuteUbergraph_W_GroundPound(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPound.W_GroundPound_C.ExecuteUbergraph_W_GroundPound"));

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
