#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_HealProjector_Affliction_Ultimate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Deployable_HealProjector_Affliction_Ultimate.BP_Deployable_HealProjector_Affliction_Ultimate_C
// 0x0010 (0x0278 - 0x0268)
class UBP_Deployable_HealProjector_Affliction_Ultimate_C : public UAfflictionInstanceHealProjector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_HealProjectorOverlay_C*                   Widget;                                                   // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Deployable_HealProjector_Affliction_Ultimate.BP_Deployable_HealProjector_Affliction_Ultimate_C"));
		return ptr;
	}


	void K2_Start();
	void K2_End();
	void ExecuteUbergraph_BP_Deployable_HealProjector_Affliction_Ultimate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
