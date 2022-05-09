#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_KillCamVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_KillCamVehicle.BP_KillCamVehicle_C
// 0x0000 (0x02EC - 0x02EC)
class ABP_KillCamVehicle_C : public ABP_KillCamActor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_KillCamVehicle.BP_KillCamVehicle_C"));
		return ptr;
	}


	void InitializeKillCameraActor(class AProjectXCharacter* Killed, class AActor* Killer, class AProjectXPlayerState* KillerState, class UClass* /*UDamageType*/ DamageType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
