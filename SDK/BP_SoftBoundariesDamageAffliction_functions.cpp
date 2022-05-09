// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SoftBoundariesDamageAffliction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SoftBoundariesDamageAffliction_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.K2_Start
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_SoftBoundariesDamageAffliction_C::K2_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.K2_Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.Warning Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SoftBoundariesDamageAffliction_C::Warning_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.Warning Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.K2_End
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_SoftBoundariesDamageAffliction_C::K2_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.K2_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.ClearWarningWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SoftBoundariesDamageAffliction_C::ClearWarningWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.ClearWarningWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.ExecuteUbergraph_BP_SoftBoundariesDamageAffliction
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SoftBoundariesDamageAffliction_C::ExecuteUbergraph_BP_SoftBoundariesDamageAffliction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SoftBoundariesDamageAffliction.BP_SoftBoundariesDamageAffliction_C.ExecuteUbergraph_BP_SoftBoundariesDamageAffliction"));

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
