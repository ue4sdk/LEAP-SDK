// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceFlagCarrier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AfflictionInstanceFlagCarrier.BP_AfflictionInstanceFlagCarrier_C.K2_Start
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_AfflictionInstanceFlagCarrier_C::K2_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AfflictionInstanceFlagCarrier.BP_AfflictionInstanceFlagCarrier_C.K2_Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AfflictionInstanceFlagCarrier.BP_AfflictionInstanceFlagCarrier_C.K2_End
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_AfflictionInstanceFlagCarrier_C::K2_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AfflictionInstanceFlagCarrier.BP_AfflictionInstanceFlagCarrier_C.K2_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AfflictionInstanceFlagCarrier.BP_AfflictionInstanceFlagCarrier_C.ExecuteUbergraph_BP_AfflictionInstanceFlagCarrier
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AfflictionInstanceFlagCarrier_C::ExecuteUbergraph_BP_AfflictionInstanceFlagCarrier(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AfflictionInstanceFlagCarrier.BP_AfflictionInstanceFlagCarrier_C.ExecuteUbergraph_BP_AfflictionInstanceFlagCarrier"));

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
