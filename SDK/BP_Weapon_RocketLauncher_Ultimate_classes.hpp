#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_RocketLauncher_Ultimate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_RocketLauncher_Ultimate.BP_Weapon_RocketLauncher_Ultimate_C
// 0x0010 (0x09F0 - 0x09E0)
class UBP_Weapon_RocketLauncher_Ultimate_C : public UWeaponInstanceProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UParticleSystemComponent*                    FireEffect;                                               // 0x09E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_RocketLauncher_Ultimate.BP_Weapon_RocketLauncher_Ultimate_C"));
		return ptr;
	}


	void K2_Equip();
	void K2_UnEquip();
	void ReceiveBeginPlay();
	void SetParticleVisibility(bool bToggleTaunt);
	void ExecuteUbergraph_BP_Weapon_RocketLauncher_Ultimate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
