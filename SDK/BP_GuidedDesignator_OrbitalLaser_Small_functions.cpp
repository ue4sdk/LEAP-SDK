// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GuidedDesignator_OrbitalLaser_Small_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GuidedDesignator_OrbitalLaser_Small.BP_GuidedDesignator_OrbitalLaser_Small_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_GuidedDesignator_OrbitalLaser_Small_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuidedDesignator_OrbitalLaser_Small.BP_GuidedDesignator_OrbitalLaser_Small_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GuidedDesignator_OrbitalLaser_Small.BP_GuidedDesignator_OrbitalLaser_Small_C.ExecuteUbergraph_BP_GuidedDesignator_OrbitalLaser_Small
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_GuidedDesignator_OrbitalLaser_Small_C::ExecuteUbergraph_BP_GuidedDesignator_OrbitalLaser_Small(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuidedDesignator_OrbitalLaser_Small.BP_GuidedDesignator_OrbitalLaser_Small_C.ExecuteUbergraph_BP_GuidedDesignator_OrbitalLaser_Small"));

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
