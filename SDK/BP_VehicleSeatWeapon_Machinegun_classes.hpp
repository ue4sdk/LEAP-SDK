#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VehicleSeatWeapon_Machinegun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleSeatWeapon_Machinegun.BP_VehicleSeatWeapon_Machinegun_C
// 0x0000 (0x0A30 - 0x0A30)
class UBP_VehicleSeatWeapon_Machinegun_C : public UWeaponInstanceVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VehicleSeatWeapon_Machinegun.BP_VehicleSeatWeapon_Machinegun_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
