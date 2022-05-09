#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_WeaponsList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_WeaponsList.W_WeaponsList_C
// 0x00D8 (0x0338 - 0x0260)
class UW_WeaponsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_WeaponsSlotButtonList_C*                  W_WeaponsSlotButtonList;                                  // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_WeaponsSlotButtonList_C*                  W_WeaponsSlotButtonList_2;                                // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_WeaponsSlotButtonList_C*                  W_WeaponsSlotButtonList_3;                                // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_WeaponsSlotButtonList_C*                  W_WeaponsSlotButtonList_4;                                // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_WeaponsSlotButtonList_C*                  W_WeaponsSlotButtonList_5;                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_WeaponsSlotButtonList_C*                  W_WeaponsSlotButtonList_6;                                // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                WeaponSlots;                                              // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UClass* /*AProjectXCharacter*/               Class;                                                    // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<EEquipSlot>                                 InvalidSLots;                                             // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FMulticastScriptDelegate                    OnWeaponSelected;                                         // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TMap<EEquipSlot, class UW_WeaponsSlotButtonList_C*> WeaponSlotLists;                                          // 0x02C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FMulticastScriptDelegate                    OnPerkSlotSelected;                                       // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnWeaponHovered;                                          // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_WeaponsList.W_WeaponsList_C"));
		return ptr;
	}


	void ClearSpecificSlot(EEquipSlot Key);
	bool IsValidSlot(EEquipSlot ItemToFind);
	void OnWeaponPressed(const struct FString& WeaponName, EEquipSlot EquipSlot, class UClass* /*UWeaponInstance*/ WeaponClass);
	void InitializeList(class UClass* /*AProjectXCharacter*/ Class, bool ShowAllWeapons, const struct FEquips& Loadout);
	void SetActive(const struct FString& InputPin);
	void ClearList();
	void OnWeaponPerkSlotSelected(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass);
	void UpdateWeaponSlot(EEquipSlot Key);
	void LoopNextEquipSlot();
	void WeaponHovered(class UClass* /*UWeaponInstance*/ Weapon, const struct FString& WeaponName, EEquipSlot Equip_Slot);
	void ExecuteUbergraph_W_WeaponsList(int EntryPoint);
	void OnWeaponHovered__DelegateSignature(const struct FString& WeaponID, EEquipSlot EquipSlot);
	void OnPerkSlotSelected__DelegateSignature(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass);
	void OnWeaponSelected__DelegateSignature(EEquipSlot Slot, const struct FString& WeaponID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
