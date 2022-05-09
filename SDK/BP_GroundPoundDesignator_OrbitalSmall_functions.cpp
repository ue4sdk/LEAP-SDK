// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GroundPoundDesignator_OrbitalSmall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GroundPoundDesignator_OrbitalSmall.BP_GroundPoundDesignator_OrbitalSmall_C.K2_UpdateValidDesignator
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bValidDesignator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_GroundPoundDesignator_OrbitalSmall_C::K2_UpdateValidDesignator(bool bValidDesignator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator_OrbitalSmall.BP_GroundPoundDesignator_OrbitalSmall_C.K2_UpdateValidDesignator"));

	struct
	{
		bool                           bValidDesignator;
	} params = {};

	params.bValidDesignator = bValidDesignator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GroundPoundDesignator_OrbitalSmall.BP_GroundPoundDesignator_OrbitalSmall_C.ExecuteUbergraph_BP_GroundPoundDesignator_OrbitalSmall
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GroundPoundDesignator_OrbitalSmall_C::ExecuteUbergraph_BP_GroundPoundDesignator_OrbitalSmall(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator_OrbitalSmall.BP_GroundPoundDesignator_OrbitalSmall_C.ExecuteUbergraph_BP_GroundPoundDesignator_OrbitalSmall"));

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
