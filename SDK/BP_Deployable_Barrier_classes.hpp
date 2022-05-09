#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_Barrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Deployable_Barrier.BP_Deployable_Barrier_C
// 0x0060 (0x0570 - 0x0510)
class ABP_Deployable_Barrier_C : public ADeployable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UStaticMeshComponent*                        Outline;                                                  // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAfflictionVolume*                           AfflictionVolume;                                         // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_ShieldTower_Funnel;                                    // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        shieldcollision;                                          // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USphereComponent*                            ClosestPointOnCollisionHelper;                            // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        shield;                                                   // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Generator;                                                // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                   // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                ShimmerInterpID;                                          // 0x0560(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	class UAudioComponent*                             AudioComponent;                                           // 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Deployable_Barrier.BP_Deployable_Barrier_C"));
		return ptr;
	}


	void OnNotifyEnd_439FAB59411568D4DE2F6B877D73993D(const struct FName& NotifyName);
	void OnNotifyBegin_439FAB59411568D4DE2F6B877D73993D(const struct FName& NotifyName);
	void OnInterrupted_439FAB59411568D4DE2F6B877D73993D(const struct FName& NotifyName);
	void OnBlendOut_439FAB59411568D4DE2F6B877D73993D(const struct FName& NotifyName);
	void OnCompleted_439FAB59411568D4DE2F6B877D73993D(const struct FName& NotifyName);
	void OnNotifyEnd_4BA985B242F8D722401BB6A67EEBDF85(const struct FName& NotifyName);
	void OnNotifyBegin_4BA985B242F8D722401BB6A67EEBDF85(const struct FName& NotifyName);
	void OnInterrupted_4BA985B242F8D722401BB6A67EEBDF85(const struct FName& NotifyName);
	void OnBlendOut_4BA985B242F8D722401BB6A67EEBDF85(const struct FName& NotifyName);
	void OnCompleted_4BA985B242F8D722401BB6A67EEBDF85(const struct FName& NotifyName);
	void OnDeployStart();
	void FadeIn(float Value);
	void OnDeployComplete();
	void InitializeForTeam(int Team);
	void FadeOut(float Value);
	void OnDeployableDied();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Shimmer(float Value);
	void ReceiveBeginPlay();
	void OnDeployDeactivated();
	void ForceAnim();
	void ExecuteUbergraph_BP_Deployable_Barrier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
