// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GuidedDesignator_OrbitalLaser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GuidedDesignator_OrbitalLaser.BP_GuidedDesignator_OrbitalLaser_C.K2_OnDesignatorMarkerToggled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_GuidedDesignator_OrbitalLaser_C::K2_OnDesignatorMarkerToggled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuidedDesignator_OrbitalLaser.BP_GuidedDesignator_OrbitalLaser_C.K2_OnDesignatorMarkerToggled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GuidedDesignator_OrbitalLaser.BP_GuidedDesignator_OrbitalLaser_C.ExecuteUbergraph_BP_GuidedDesignator_OrbitalLaser
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_GuidedDesignator_OrbitalLaser_C::ExecuteUbergraph_BP_GuidedDesignator_OrbitalLaser(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GuidedDesignator_OrbitalLaser.BP_GuidedDesignator_OrbitalLaser_C.ExecuteUbergraph_BP_GuidedDesignator_OrbitalLaser"));

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
