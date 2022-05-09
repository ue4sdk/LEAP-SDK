#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_RocketLauncher_1P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_RocketLauncher_1P.ABP_RocketLauncher_1P_C
// 0x0080 (0x0340 - 0x02C0)
class UABP_RocketLauncher_1P_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x02F8(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_RocketLauncher_1P.ABP_RocketLauncher_1P_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_RocketLauncher_1P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
