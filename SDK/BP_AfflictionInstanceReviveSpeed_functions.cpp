// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceReviveSpeed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AfflictionInstanceReviveSpeed.BP_AfflictionInstanceReviveSpeed_C.K2_ApplyModifier
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_AfflictionInstanceReviveSpeed_C::K2_ApplyModifier()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AfflictionInstanceReviveSpeed.BP_AfflictionInstanceReviveSpeed_C.K2_ApplyModifier"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AfflictionInstanceReviveSpeed.BP_AfflictionInstanceReviveSpeed_C.ExecuteUbergraph_BP_AfflictionInstanceReviveSpeed
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AfflictionInstanceReviveSpeed_C::ExecuteUbergraph_BP_AfflictionInstanceReviveSpeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AfflictionInstanceReviveSpeed.BP_AfflictionInstanceReviveSpeed_C.ExecuteUbergraph_BP_AfflictionInstanceReviveSpeed"));

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
