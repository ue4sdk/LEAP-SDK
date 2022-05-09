#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_RocketLauncher_Ultimate_Pickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_RocketLauncher_Ultimate_Pickup.BP_Weapon_RocketLauncher_Ultimate_Pickup_C
// 0x0000 (0x09F0 - 0x09F0)
class UBP_Weapon_RocketLauncher_Ultimate_Pickup_C : public UBP_Weapon_RocketLauncher_Ultimate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_RocketLauncher_Ultimate_Pickup.BP_Weapon_RocketLauncher_Ultimate_Pickup_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
