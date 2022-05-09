#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_AutoTurret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Deployable_AutoTurret.BP_Deployable_AutoTurret_C
// 0x0058 (0x0588 - 0x0530)
class ABP_Deployable_AutoTurret_C : public ADeployableTurret
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBP_AimSphere_C*                             BP_AimSphere;                                             // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Outline;                                                  // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBP_DamageIndicatorWidgetComponent_C*        BP_DamageIndicatorWidgetComponent;                        // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                Team;                                                     // 0x0550(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              landTime;                                                 // 0x0554(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     StartLocation;                                            // 0x0558(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     EndLocation;                                              // 0x0564(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             IdleAudio;                                                // 0x0570(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    DeployTrail;                                              // 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundCue*                                   FiringSound;                                              // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Deployable_AutoTurret.BP_Deployable_AutoTurret_C"));
		return ptr;
	}


	void OnNotifyEnd_B2649E624DFC3FDAF5FAD88A3BFF4756(const struct FName& NotifyName);
	void OnNotifyBegin_B2649E624DFC3FDAF5FAD88A3BFF4756(const struct FName& NotifyName);
	void OnInterrupted_B2649E624DFC3FDAF5FAD88A3BFF4756(const struct FName& NotifyName);
	void OnBlendOut_B2649E624DFC3FDAF5FAD88A3BFF4756(const struct FName& NotifyName);
	void OnCompleted_B2649E624DFC3FDAF5FAD88A3BFF4756(const struct FName& NotifyName);
	void OnNotifyEnd_01D202764FF71892D67C93989687454B(const struct FName& NotifyName);
	void OnNotifyBegin_01D202764FF71892D67C93989687454B(const struct FName& NotifyName);
	void OnInterrupted_01D202764FF71892D67C93989687454B(const struct FName& NotifyName);
	void OnBlendOut_01D202764FF71892D67C93989687454B(const struct FName& NotifyName);
	void OnCompleted_01D202764FF71892D67C93989687454B(const struct FName& NotifyName);
	void OnNotifyEnd_E1DB77F14C742E692324CEA901712C5C(const struct FName& NotifyName);
	void OnNotifyBegin_E1DB77F14C742E692324CEA901712C5C(const struct FName& NotifyName);
	void OnInterrupted_E1DB77F14C742E692324CEA901712C5C(const struct FName& NotifyName);
	void OnBlendOut_E1DB77F14C742E692324CEA901712C5C(const struct FName& NotifyName);
	void OnCompleted_E1DB77F14C742E692324CEA901712C5C(const struct FName& NotifyName);
	void OnNotifyEnd_E03569B1445EC361DC223FA6AEFB387D(const struct FName& NotifyName);
	void OnNotifyBegin_E03569B1445EC361DC223FA6AEFB387D(const struct FName& NotifyName);
	void OnInterrupted_E03569B1445EC361DC223FA6AEFB387D(const struct FName& NotifyName);
	void OnBlendOut_E03569B1445EC361DC223FA6AEFB387D(const struct FName& NotifyName);
	void OnCompleted_E03569B1445EC361DC223FA6AEFB387D(const struct FName& NotifyName);
	void OnNotifyEnd_B236FDB848CDC932C8E645BBA592E416(const struct FName& NotifyName);
	void OnNotifyBegin_B236FDB848CDC932C8E645BBA592E416(const struct FName& NotifyName);
	void OnInterrupted_B236FDB848CDC932C8E645BBA592E416(const struct FName& NotifyName);
	void OnBlendOut_B236FDB848CDC932C8E645BBA592E416(const struct FName& NotifyName);
	void OnCompleted_B236FDB848CDC932C8E645BBA592E416(const struct FName& NotifyName);
	void OnDeployStart();
	void OnDeployComplete();
	void ReceiveBeginPlay();
	void OnDeployableDied();
	void OnFired();
	void Interpolate(float Value);
	void OnTargetAcquired(class AActor* Target);
	void OnDeployDeactivated();
	void InitializeForTeam(int Team);
	void OnDeployReActivated();
	void ExecuteUbergraph_BP_Deployable_AutoTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
