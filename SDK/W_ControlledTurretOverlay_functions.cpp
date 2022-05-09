// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ControlledTurretOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ControlledTurretOverlay.W_ControlledTurretOverlay_C.GetColorAndOpacity_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UW_ControlledTurretOverlay_C::GetColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledTurretOverlay.W_ControlledTurretOverlay_C.GetColorAndOpacity_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ControlledTurretOverlay.W_ControlledTurretOverlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ControlledTurretOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledTurretOverlay.W_ControlledTurretOverlay_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ControlledTurretOverlay.W_ControlledTurretOverlay_C.StartTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ControlledTurretOverlay_C::StartTimer(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledTurretOverlay.W_ControlledTurretOverlay_C.StartTimer"));

	struct
	{
		float                          Duration;
	} params = {};

	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ControlledTurretOverlay.W_ControlledTurretOverlay_C.ExecuteUbergraph_W_ControlledTurretOverlay
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ControlledTurretOverlay_C::ExecuteUbergraph_W_ControlledTurretOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledTurretOverlay.W_ControlledTurretOverlay_C.ExecuteUbergraph_W_ControlledTurretOverlay"));

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
