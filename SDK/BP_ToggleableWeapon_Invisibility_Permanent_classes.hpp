#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ToggleableWeapon_Invisibility_Permanent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ToggleableWeapon_Invisibility_Permanent.BP_ToggleableWeapon_Invisibility_Permanent_C
// 0x0000 (0x0860 - 0x0860)
class UBP_ToggleableWeapon_Invisibility_Permanent_C : public UBP_ToggleableWeapon_Invisibility_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ToggleableWeapon_Invisibility_Permanent.BP_ToggleableWeapon_Invisibility_Permanent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
