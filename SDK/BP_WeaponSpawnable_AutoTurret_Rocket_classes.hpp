#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponSpawnable_AutoTurret_Rocket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponSpawnable_AutoTurret_Rocket.BP_WeaponSpawnable_AutoTurret_Rocket_C
// 0x0000 (0x08B0 - 0x08B0)
class UBP_WeaponSpawnable_AutoTurret_Rocket_C : public UBP_WeaponSpawnable_AutoTurret_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WeaponSpawnable_AutoTurret_Rocket.BP_WeaponSpawnable_AutoTurret_Rocket_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif