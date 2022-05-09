#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SK_GliderRigged_Skeleton_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_GliderRigged_Skeleton_AnimBlueprint.SK_GliderRigged_Skeleton_AnimBlueprint_C
// 0x0800 (0x0AC0 - 0x02C0)
class USK_GliderRigged_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x02F8(0x0018)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0310(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                               // 0x0330(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0438(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x0458(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x0560(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x0668(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x0770(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x0878(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0980(0x0108)
	struct FRotator                                    RootBoneRotation;                                         // 0x0A88(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    TurbineRotation;                                          // 0x0A94(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    FinRotation;                                              // 0x0AA0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              Time;                                                     // 0x0AAC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ShakeAmount;                                              // 0x0AB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     RootBonePosition;                                         // 0x0AB4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass SK_GliderRigged_Skeleton_AnimBlueprint.SK_GliderRigged_Skeleton_AnimBlueprint_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetRootBoneRotation(const struct FRotator& Rotation);
	void ExecuteUbergraph_SK_GliderRigged_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
