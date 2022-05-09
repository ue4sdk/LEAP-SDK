#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponVehicle_Bouncyball_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponVehicle_Bouncyball.BP_WeaponVehicle_Bouncyball_C
// 0x0000 (0x08A8 - 0x08A8)
class UBP_WeaponVehicle_Bouncyball_C : public UBP_WeaponVehicle_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WeaponVehicle_Bouncyball.BP_WeaponVehicle_Bouncyball_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
