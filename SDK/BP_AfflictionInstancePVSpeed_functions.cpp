// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstancePVSpeed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AfflictionInstancePVSpeed.BP_AfflictionInstancePVSpeed_C.K2_ApplyModifier
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_AfflictionInstancePVSpeed_C::K2_ApplyModifier()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AfflictionInstancePVSpeed.BP_AfflictionInstancePVSpeed_C.K2_ApplyModifier"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AfflictionInstancePVSpeed.BP_AfflictionInstancePVSpeed_C.ExecuteUbergraph_BP_AfflictionInstancePVSpeed
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AfflictionInstancePVSpeed_C::ExecuteUbergraph_BP_AfflictionInstancePVSpeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AfflictionInstancePVSpeed.BP_AfflictionInstancePVSpeed_C.ExecuteUbergraph_BP_AfflictionInstancePVSpeed"));

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
