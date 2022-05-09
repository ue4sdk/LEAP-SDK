#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_Repairgun_Healing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C
// 0x0059 (0x0A91 - 0x0A38)
class UBP_Weapon_Repairgun_Healing_C : public UWeaponInstanceBeam
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A38(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	int                                                CachedTeam;                                               // 0x0A40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A44(0x0004) MISSED OFFSET
	class USplineMeshComponent*                        InnerSpline;                                              // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsRepairing;                                             // 0x0A50(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0A51(0x0007) MISSED OFFSET
	class USplineMeshComponent*                        OuterSpline;                                              // 0x0A58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             LoopingSound;                                             // 0x0A60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                BeamEndInterpolator;                                      // 0x0A68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                BeamStartInterpolator;                                    // 0x0A6C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             SearchingSound;                                           // 0x0A70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bHoldingTrigger;                                          // 0x0A78(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0A79(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnTargetSearching;                                        // 0x0A80(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bIsTargetSameTeam;                                        // 0x0A90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C"));
		return ptr;
	}


	void IsSameTeam(bool* IsSameTeam);
	void GetWeaponMesh(class USkeletalMeshComponent** WeaponMesh);
	void IsSplineValid(bool* IsValid);
	void OnBeamStartEvent(unsigned char Mode);
	void ReceiveBeginPlay();
	void OnBeamEndEvent(unsigned char Mode);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void RefreshBeamColor();
	void BeamLatch(float Value);
	void KillLoopingSound();
	void BeamLetGo(float Value);
	void beamEnd(float Value);
	void K2_SearchingForTarget();
	void K2_FireReleased(unsigned char Mode);
	void Cosmetically_Search_For_Target();
	void Toggle_CosmeticTarget_Seraching(bool bToggle);
	void K2_UnEquipComplete();
	void ExecuteUbergraph_BP_Weapon_Repairgun_Healing(int EntryPoint);
	void OnTargetSearching__DelegateSignature(bool IsSearching);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
