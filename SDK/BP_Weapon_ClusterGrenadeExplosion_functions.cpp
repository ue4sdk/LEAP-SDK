// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_ClusterGrenadeExplosion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_ClusterGrenadeExplosion.BP_Weapon_ClusterGrenadeExplosion_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Weapon_ClusterGrenadeExplosion_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_ClusterGrenadeExplosion.BP_Weapon_ClusterGrenadeExplosion_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_ClusterGrenadeExplosion.BP_Weapon_ClusterGrenadeExplosion_C.ExecuteUbergraph_BP_Weapon_ClusterGrenadeExplosion
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weapon_ClusterGrenadeExplosion_C::ExecuteUbergraph_BP_Weapon_ClusterGrenadeExplosion(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_ClusterGrenadeExplosion.BP_Weapon_ClusterGrenadeExplosion_C.ExecuteUbergraph_BP_Weapon_ClusterGrenadeExplosion"));

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
