#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_ThrowingKnives_Explosion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_ThrowingKnives_Explosion.BP_Weapon_ThrowingKnives_Explosion_C
// 0x0000 (0x0848 - 0x0848)
class UBP_Weapon_ThrowingKnives_Explosion_C : public UWeaponInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_ThrowingKnives_Explosion.BP_Weapon_ThrowingKnives_Explosion_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
