#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MeleeWeapon_Bodycheck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MeleeWeapon_Bodycheck.BP_MeleeWeapon_Bodycheck_C
// 0x0048 (0x0960 - 0x0918)
class UBP_MeleeWeapon_Bodycheck_C : public UWeaponInstanceGroundPound
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0918(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_GroundPound_C*                            TargetingWidget;                                          // 0x0920(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             Sound;                                                    // 0x0928(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             LoopSound;                                                // 0x0930(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UW_GroundPoundAltitude_C*                    AltitudeWidget;                                           // 0x0938(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             JetSound;                                                 // 0x0940(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      Designator_Marker;                                        // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsDiving;                                                // 0x0950(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0951(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    DiveSmokeParticle;                                        // 0x0958(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MeleeWeapon_Bodycheck.BP_MeleeWeapon_Bodycheck_C"));
		return ptr;
	}


	void Died(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void K2_Fire(unsigned char Mode);
	void OnLandedGround(const struct FHitResult& Hit);
	void K2_UnEquip();
	void ExecuteUbergraph_BP_MeleeWeapon_Bodycheck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
