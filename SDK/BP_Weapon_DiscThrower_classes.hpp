#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_DiscThrower_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C
// 0x0039 (0x0A19 - 0x09E0)
class UBP_Weapon_DiscThrower_C : public UWeaponInstanceProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class ABP_DiskThrowerDisk_C*                       CosmeticDisc;                                             // 0x09E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     DiskLocation;                                             // 0x09F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     DiskRelativeLocation;                                     // 0x09FC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             DiskSound;                                                // 0x0A08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  DiscReadyQue;                                             // 0x0A10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bSpawnCosmeticDisc;                                       // 0x0A18(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C"));
		return ptr;
	}


	void K2_Equip();
	void K2_UnEquip();
	void K2_Fire(unsigned char Mode);
	void DissolveDisk(float Value);
	void DissolveFinished(float Value);
	void CustomEvent(float Value);
	void OnReady();
	void OnTightAimStart_Event_1();
	void OnTightAimStop_Event_1();
	void CleanupEffects();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void K2_OwnerDied();
	void ExecuteUbergraph_BP_Weapon_DiscThrower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
