// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_CircularTimer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_CircularTimer.W_CircularTimer_C.GetDynamicTimerMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* TimerMaterial                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CircularTimer_C::GetDynamicTimerMaterial(class UMaterialInstanceDynamic** TimerMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CircularTimer.W_CircularTimer_C.GetDynamicTimerMaterial"));

	struct
	{
		class UMaterialInstanceDynamic* TimerMaterial;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TimerMaterial != nullptr)
		*TimerMaterial = params.TimerMaterial;
}


// Function W_CircularTimer.W_CircularTimer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_CircularTimer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CircularTimer.W_CircularTimer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CircularTimer.W_CircularTimer_C.StartTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          StartTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CircularTimer_C::StartTimer(float StartTime, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CircularTimer.W_CircularTimer_C.StartTimer"));

	struct
	{
		float                          StartTime;
		float                          Duration;
	} params = {};

	params.StartTime = StartTime;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CircularTimer.W_CircularTimer_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CircularTimer_C::Update(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CircularTimer.W_CircularTimer_C.Update"));

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


// Function W_CircularTimer.W_CircularTimer_C.Complete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CircularTimer_C::Complete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CircularTimer.W_CircularTimer_C.Complete"));

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


// Function W_CircularTimer.W_CircularTimer_C.UpdateTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Alpha                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CircularTimer_C::UpdateTime(float Value, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CircularTimer.W_CircularTimer_C.UpdateTime"));

	struct
	{
		float                          Value;
		float                          Alpha;
	} params = {};

	params.Value = Value;
	params.Alpha = Alpha;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CircularTimer.W_CircularTimer_C.StartServerBasedTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Start_Time                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CircularTimer_C::StartServerBasedTimer(float Start_Time, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CircularTimer.W_CircularTimer_C.StartServerBasedTimer"));

	struct
	{
		float                          Start_Time;
		float                          Duration;
	} params = {};

	params.Start_Time = Start_Time;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CircularTimer.W_CircularTimer_C.ExecuteUbergraph_W_CircularTimer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CircularTimer_C::ExecuteUbergraph_W_CircularTimer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CircularTimer.W_CircularTimer_C.ExecuteUbergraph_W_CircularTimer"));

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
