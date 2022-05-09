// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponVehicle_MaverickRocket_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WeaponVehicle_MaverickRocket.BP_WeaponVehicle_MaverickRocket_C.GetSpawnTransform
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_WeaponVehicle_MaverickRocket_C::GetSpawnTransform(struct FTransform* SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponVehicle_MaverickRocket.BP_WeaponVehicle_MaverickRocket_C.GetSpawnTransform"));

	struct
	{
		struct FTransform              SpawnTransform;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
