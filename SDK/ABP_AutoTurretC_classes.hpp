#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_AutoTurretC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_AutoTurretC.ABP_AutoTurretC_C
// 0x05E0 (0x08A0 - 0x02C0)
class UABP_AutoTurretC_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x02F8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x0318(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0420(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x0440(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0488(0x0108)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                            // 0x0590(0x00C8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x0658(0x00C8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x0720(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0768(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x07B0(0x0080)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_2;                             // 0x0830(0x0018)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose;                               // 0x0848(0x0018)
	struct FRotator                                    LookRotationX;                                            // 0x0860(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    LookRotationY;                                            // 0x086C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    TargetRotationX;                                          // 0x0878(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0884(0x0004) MISSED OFFSET
	class UAudioComponent*                             RotationAudio;                                            // 0x0888(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    TargetRotationY;                                          // 0x0890(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              LastRotationSoundVol;                                     // 0x089C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_AutoTurretC.ABP_AutoTurretC_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void DeployableDied(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void ExecuteUbergraph_ABP_AutoTurretC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
