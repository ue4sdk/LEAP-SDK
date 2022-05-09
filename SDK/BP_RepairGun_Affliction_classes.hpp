#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_RepairGun_Affliction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RepairGun_Affliction.BP_RepairGun_Affliction_C
// 0x0020 (0x0280 - 0x0260)
class UBP_RepairGun_Affliction_C : public UAfflictionInstanceRepair
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UParticleSystemComponent*                    HealParticle;                                             // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UW_HealingOverlay_C*                         Widget;                                                   // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UW_HealingOverlay_C*                         NewVar_1;                                                 // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RepairGun_Affliction.BP_RepairGun_Affliction_C"));
		return ptr;
	}


	float TakeDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void SetHealDelay(float Damage);
	void K2_Start();
	void K2_End();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_RepairGun_Affliction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
