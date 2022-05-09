#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AI_Turret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AI_Turret.BP_AI_Turret_C
// 0x0048 (0x0578 - 0x0530)
class ABP_AI_Turret_C : public ADeployableAutonomousTurret
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBP_AimSphere_C*                             BP_AimSphere;                                             // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBP_DamageIndicatorWidgetComponent_C*        BP_DamageIndicatorWidgetComponent;                        // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Outline;                                                  // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                Team;                                                     // 0x0550(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              landTime;                                                 // 0x0554(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     StartLocation;                                            // 0x0558(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     EndLocation;                                              // 0x0564(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             IdleAudio;                                                // 0x0570(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AI_Turret.BP_AI_Turret_C"));
		return ptr;
	}


	void GetDamageIndicatorWidget(class UUserWidget** NewParam);
	void OnNotifyEnd_6F68920E4574A09A503FE6B72CEBD73C(const struct FName& NotifyName);
	void OnNotifyBegin_6F68920E4574A09A503FE6B72CEBD73C(const struct FName& NotifyName);
	void OnInterrupted_6F68920E4574A09A503FE6B72CEBD73C(const struct FName& NotifyName);
	void OnBlendOut_6F68920E4574A09A503FE6B72CEBD73C(const struct FName& NotifyName);
	void OnCompleted_6F68920E4574A09A503FE6B72CEBD73C(const struct FName& NotifyName);
	void OnNotifyEnd_E4F0B7804967C4E0726131BF6422F3AC(const struct FName& NotifyName);
	void OnNotifyBegin_E4F0B7804967C4E0726131BF6422F3AC(const struct FName& NotifyName);
	void OnInterrupted_E4F0B7804967C4E0726131BF6422F3AC(const struct FName& NotifyName);
	void OnBlendOut_E4F0B7804967C4E0726131BF6422F3AC(const struct FName& NotifyName);
	void OnCompleted_E4F0B7804967C4E0726131BF6422F3AC(const struct FName& NotifyName);
	void OnNotifyEnd_FF8782C348FC710A88CFF6AADC2A9D11(const struct FName& NotifyName);
	void OnNotifyBegin_FF8782C348FC710A88CFF6AADC2A9D11(const struct FName& NotifyName);
	void OnInterrupted_FF8782C348FC710A88CFF6AADC2A9D11(const struct FName& NotifyName);
	void OnBlendOut_FF8782C348FC710A88CFF6AADC2A9D11(const struct FName& NotifyName);
	void OnCompleted_FF8782C348FC710A88CFF6AADC2A9D11(const struct FName& NotifyName);
	void OnPlayerStateAcquired_E18BBC7D4444B3095D73E08267617C7A(class APlayerState* PlayerState);
	void OnPlayerStateAcquired_25719E2844716592D33E15A81A96DBA0(class APlayerState* PlayerState);
	void OnDeployStart();
	void OnDeployComplete();
	void ReceiveBeginPlay();
	void OnDeployableDied();
	void OnFired();
	void OnTargetAcquired(class AActor* Target);
	void OnDeployDeactivated();
	void InitializeForTeam(int Team);
	void UpdateVisuals();
	void On_Local_Player_Changed_Teams(class AProjectXPlayerState* PlayerState, unsigned char Team);
	void ExecuteUbergraph_BP_AI_Turret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
