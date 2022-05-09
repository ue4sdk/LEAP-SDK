#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Weapon_RepairGun_1P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_RepairGun_1P.ABP_Weapon_RepairGun_1P_C
// 0x0401 (0x06C1 - 0x02C0)
class UABP_Weapon_RepairGun_1P_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0398(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x03C0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0440(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0470(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x04F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0520(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x05A0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x05D0(0x00B0)
	bool                                               bIsRepairing;                                             // 0x0680(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0681(0x000F) MISSED OFFSET
	struct FTransform                                  BeamStartSocket;                                          // 0x0690(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsTargetSearching;                                       // 0x06C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_Weapon_RepairGun_1P.ABP_Weapon_RepairGun_1P_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_Weapon_RepairGun_1P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
