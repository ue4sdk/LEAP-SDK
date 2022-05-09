#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VehicleWeapon_GrenadeLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleWeapon_GrenadeLauncher.BP_VehicleWeapon_GrenadeLauncher_C
// 0x0000 (0x0A30 - 0x0A30)
class UBP_VehicleWeapon_GrenadeLauncher_C : public UWeaponInstanceVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VehicleWeapon_GrenadeLauncher.BP_VehicleWeapon_GrenadeLauncher_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
