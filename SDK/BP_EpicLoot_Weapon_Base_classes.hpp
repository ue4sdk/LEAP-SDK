#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_EpicLoot_Weapon_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EpicLoot_Weapon_Base.BP_EpicLoot_Weapon_Base_C
// 0x0010 (0x0300 - 0x02F0)
class ABP_EpicLoot_Weapon_Base_C : public ABP_EpicLoot_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UClass* /*UWeaponInstance*/                  Weapon_to_Award;                                          // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EpicLoot_Weapon_Base.BP_EpicLoot_Weapon_Base_C"));
		return ptr;
	}


	void BndEvt__Interactable_K2Node_ComponentBoundEvent_0_ActorSelectedSignature__DelegateSignature(class APlayerController* Sender, class UPrimitiveComponent* Component);
	void ExecuteUbergraph_BP_EpicLoot_Weapon_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
