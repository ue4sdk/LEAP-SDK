#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_ReviveBeacon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C
// 0x00A8 (0x0658 - 0x05B0)
class ABP_Deployable_ReviveBeacon_C : public APickupReviveBeacon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USphereComponent*                            Sphere1;                                                  // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Outline;                                                  // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Base;                                                     // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FVector                                     StartLocation;                                            // 0x05D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     EndLocation;                                              // 0x05DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Team;                                                     // 0x05E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05EC(0x0004) MISSED OFFSET
	class ABP_HologramCharacter_C*                     DisplayCharacter;                                         // 0x05F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_DeployabeHudInfoWidgetComponent_C*       Widget_Component;                                         // 0x05F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0600(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     RelativeStart;                                            // 0x0608(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     RelativeEnd;                                              // 0x0614(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ForwardsOccilation;                                       // 0x0620(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	class UParticleSystem*                             Emitter_Template;                                         // 0x0628(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              VerticalOffset;                                           // 0x0630(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    ReviveParticle;                                           // 0x0638(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                WaitingOnStateChangeTimer;                                // 0x0640(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Revive_Start_Time_Replicated;                             // 0x0648(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C"));
		return ptr;
	}


	void CreateHologram();
	void OnGameStateAcquired_E6CA78434408222AABA3EEAB9A1C94A0(class AGameState* GameState);
	void ReceiveBeginPlay();
	void Interpolate(float Value);
	void OnDeployStart();
	void OnDeployComplete();
	void InitializeForTeam(int Team);
	void OnHoldExited();
	void OnHoldStarted();
	void UpdateTeamColouring();
	void OnDeployableDied();
	void OnRequestHelp();
	void Occilate(bool Forwards);
	void UpdateLocation(float Value);
	void OccilationComplete(float Value);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void StartTimer(float NewTime);
	void OnReviveStartTimeReplicated(float InReviveStartTime);
	void OnReviveRespawnActive();
	void OnDeadPlayerCanRedeploy();
	void ExecuteUbergraph_BP_Deployable_ReviveBeacon(int EntryPoint);
	void Revive_Start_Time_Replicated__DelegateSignature(float InReviveStartTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
