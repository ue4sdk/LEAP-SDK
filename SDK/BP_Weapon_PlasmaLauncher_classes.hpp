#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_PlasmaLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_PlasmaLauncher.BP_Weapon_PlasmaLauncher_C
// 0x0000 (0x0A19 - 0x0A19)
class UBP_Weapon_PlasmaLauncher_C : public UBP_Weapon_DiscThrower_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_PlasmaLauncher.BP_Weapon_PlasmaLauncher_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
