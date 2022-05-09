#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponAwardingInteractable_Pistol_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponAwardingInteractable_Pistol.BP_WeaponAwardingInteractable_Pistol_C
// 0x0000 (0x0300 - 0x0300)
class ABP_WeaponAwardingInteractable_Pistol_C : public ABP_EpicLoot_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WeaponAwardingInteractable_Pistol.BP_WeaponAwardingInteractable_Pistol_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
