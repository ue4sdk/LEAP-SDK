#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_HealProjector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Deployable_HealProjector.BP_Deployable_HealProjector_C
// 0x0088 (0x0598 - 0x0510)
class ABP_Deployable_HealProjector_C : public ADeployableHealProjector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBP_AimSphere_C*                             BP_AimSphere;                                             // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Outline;                                                  // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USphereComponent*                            SphereRoot;                                               // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAfflictionVolume*                           AfflictionVolumeHeal;                                     // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Funnel;                                                   // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                FadeId;                                                   // 0x0558(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Team;                                                     // 0x055C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SphereMaterial;                                           // 0x0560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              landTime;                                                 // 0x0568(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    DeployTrail;                                              // 0x0570(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             GeneratorLoop;                                            // 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    LoopingParticleSystem;                                    // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Deactivated;                                              // 0x0588(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	class UAudioComponent*                             ProjectileSound;                                          // 0x0590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Deployable_HealProjector.BP_Deployable_HealProjector_C"));
		return ptr;
	}


	void OnNotifyEnd_D58CC48440AFD69C46ECDDAFADB3A6B3(const struct FName& NotifyName);
	void OnNotifyBegin_D58CC48440AFD69C46ECDDAFADB3A6B3(const struct FName& NotifyName);
	void OnInterrupted_D58CC48440AFD69C46ECDDAFADB3A6B3(const struct FName& NotifyName);
	void OnBlendOut_D58CC48440AFD69C46ECDDAFADB3A6B3(const struct FName& NotifyName);
	void OnCompleted_D58CC48440AFD69C46ECDDAFADB3A6B3(const struct FName& NotifyName);
	void OnNotifyEnd_1C7176D64B7F69372358639C3DB0998D(const struct FName& NotifyName);
	void OnNotifyBegin_1C7176D64B7F69372358639C3DB0998D(const struct FName& NotifyName);
	void OnInterrupted_1C7176D64B7F69372358639C3DB0998D(const struct FName& NotifyName);
	void OnBlendOut_1C7176D64B7F69372358639C3DB0998D(const struct FName& NotifyName);
	void OnCompleted_1C7176D64B7F69372358639C3DB0998D(const struct FName& NotifyName);
	void InitializeForTeam(int Team);
	void OnDeployStart();
	void OnDeployableDied();
	void ReceiveBeginPlay();
	void InterpOut(float Value);
	void OnDeployDeactivated();
	void End(float Value);
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void OnDeployComplete();
	void Interp(float Value);
	void FunnelActive(float Value);
	void FadeSphere(float Value);
	void OnDeployReActivated();
	void ExecuteUbergraph_BP_Deployable_HealProjector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
