#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MeleeWeapon_PowerSword_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C
// 0x00B0 (0x09C0 - 0x0910)
class UBP_MeleeWeapon_PowerSword_C : public UWeaponInstancePowerSword
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FVector                                     ParticleLocation;                                         // 0x0918(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	class UAudioComponent*                             DroneSound;                                               // 0x0928(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UABP_Character_FirstPerson_V3_C*             CachedAnimInstance;                                       // 0x0930(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                BattleInstanceTimerHandle;                                // 0x0938(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UAnimMontage*>                        CustomFireAnimMontages;                                   // 0x0940(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               ToggledInstance;                                          // 0x0950(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0951(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    SwordParticles;                                           // 0x0958(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UAnimMontage*>                        CustomFireAnimMontages3P;                                 // 0x0960(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      AnimCounter;                                              // 0x0970(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	class UNiagaraComponent*                           ReflectSystem;                                            // 0x0978(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MeleeExtent;                                              // 0x0980(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            BeamParticles;                                            // 0x0988(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FVector                                     CachedSourcelocation;                                     // 0x0998(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     CachedTargetLocation;                                     // 0x09A4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UAnimMontage*>                        CustomClamberMontages;                                    // 0x09B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C"));
		return ptr;
	}


	int GetAnimState();
	void K2_Fire(unsigned char Mode);
	void K2_Equip();
	void K2_UnEquip();
	void ToggleBattleInstance(bool bToggle);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnWeaponParticleLoaded(class UParticleSystem* Particle);
	void SpawnWeaponParticles();
	void K2_FireReleased(unsigned char Mode);
	void ReceiveBeginPlay();
	void ReflectionToggled(bool bToggle);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_MeleeWeapon_PowerSword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
