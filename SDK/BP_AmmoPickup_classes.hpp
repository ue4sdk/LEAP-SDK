#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AmmoPickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AmmoPickup.BP_AmmoPickup_C
// 0x0068 (0x0318 - 0x02B0)
class ABP_AmmoPickup_C : public APickup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UStaticMeshComponent*                        SM_LootPickupOutline;                                     // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              AmmoToAdd;                                                // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EEquipSlot                                         WeaponSlot;                                               // 0x02C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	TMap<class UClass* /*UWeaponInstance*/, float>     PerWeaponClassAmmoToAdd;                                  // 0x02C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AmmoPickup.BP_AmmoPickup_C"));
		return ptr;
	}


	bool CanPickup(class AProjectXCharacter* Player);
	float GetAmmoToAdd(class AProjectXCharacter* Character, class UClass* /*UWeaponInstance*/ WeaponClass);
	void OnItemPickedUp(class AActor* OtherActor);
	void ExecuteUbergraph_BP_AmmoPickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
