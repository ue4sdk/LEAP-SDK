#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_PowerSwordReflection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_PowerSwordReflection.BP_Weapon_PowerSwordReflection_C
// 0x0000 (0x09E0 - 0x09E0)
class UBP_Weapon_PowerSwordReflection_C : public UWeaponInstanceProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_PowerSwordReflection.BP_Weapon_PowerSwordReflection_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
