#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DamageType_NoPrediction_AutoTurret_Rocket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DamageType_NoPrediction_AutoTurret_Rocket.BP_DamageType_NoPrediction_AutoTurret_Rocket_C
// 0x0000 (0x0160 - 0x0160)
class UBP_DamageType_NoPrediction_AutoTurret_Rocket_C : public UDamageType_DeployableRocketTurret
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DamageType_NoPrediction_AutoTurret_Rocket.BP_DamageType_NoPrediction_AutoTurret_Rocket_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
