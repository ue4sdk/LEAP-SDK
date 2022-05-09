#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ToggleableWeapon_Invisibility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ToggleableWeapon_Invisibility.BP_ToggleableWeapon_Invisibility_C
// 0x0000 (0x0860 - 0x0860)
class UBP_ToggleableWeapon_Invisibility_C : public UWeaponInstanceStealth
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ToggleableWeapon_Invisibility.BP_ToggleableWeapon_Invisibility_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
