#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_Minigun_AutoShotgun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_Minigun_AutoShotgun.BP_Weapon_Minigun_AutoShotgun_C
// 0x0010 (0x0A08 - 0x09F8)
class UBP_Weapon_Minigun_AutoShotgun_C : public UBP_Weapon_Minigun_C
{
public:
	TArray<class UParticleSystemComponent*>            Particles_1;                                              // 0x09F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_Minigun_AutoShotgun.BP_Weapon_Minigun_AutoShotgun_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
