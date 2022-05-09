#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_WeaponsSlotButtonList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C
// 0x0188 (0x03E8 - 0x0260)
class UW_WeaponsSlotButtonList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_WeaponButton_C*                           W_WeaponButton;                                           // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              WeaponButtons;                                            // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              WeaponsHorizontal;                                        // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                WeaponsVertical;                                          // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UObject*>                             ClassList;                                                // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    WeaponButtonPressed;                                      // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TMap<struct FString, class UW_WeaponButton_C*>     Buttons;                                                  // 0x02A8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	EEquipSlot                                         EquipSlot;                                                // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DisplayAllOptions;                                        // 0x02F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               ShowSlot;                                                 // 0x02FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               Vertical;                                                 // 0x02FB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	TMap<class UClass* /*UWeaponInstance*/, unsigned char> WeaponLevels;                                             // 0x0300(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    WeaponHovered;                                            // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UClass* /*AProjectXCharacter*/               CharacterClass;                                           // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Level;                                                    // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    WeaponPerkSlotSelected;                                   // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<class UClass* /*UWeaponInstance*/>          WeaponsList;                                              // 0x0380(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UClass* /*UWeaponInstance*/                  WeaponInstance;                                           // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsSubMenu;                                                // 0x0398(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    WeaponEquipButtonPressed;                                 // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    WeaponCustomizeButtonPressed;                             // 0x03B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bWantsCustomizeButton;                                    // 0x03C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnWeaponsListInitialized;                                 // 0x03C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnWeaponsListFirstOptionAvailable;                        // 0x03D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C"));
		return ptr;
	}


	void GetWeaponUnlockLevel(const struct FString& InputPin, int* Level);
	void UpdateSlotText(class UW_WeaponButton_C* InputPin);
	void GetWeaponUnlockLevels(class UClass* /*AProjectXCharacter*/ Class, TArray<class UClass* /*UWeaponInstance*/>* WeaponsIn);
	void IsLockedElement(class UClass* /*UWeaponInstance*/ WeaponClass, bool* Unlocked, int* Level, bool* Found);
	void AddToBox(class UWidget* Content);
	void GetWeaponList(TArray<class UClass* /*UWeaponInstance*/>* ClassList1);
	void InitializeWeaponsList(class UClass* /*AProjectXCharacter*/ ClassSpecifier, EEquipSlot EquipSlot, class UClass* /*UWeaponInstance*/ SpecificWeaponInstance, bool RebuildList);
	void ClearList();
	void OnWeaponPressed(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass);
	void CreateButtonWIdget(int Dimension_1, bool List);
	void ForceActive(const struct FString& InputPin);
	void OnWeaponHovered(class UClass* /*UWeaponInstance*/ Weapon, const struct FString& WeaponID);
	void ForceClicked(const struct FString& InputPin);
	void UpdateWeapon(class UClass* /*UWeaponInstance*/ WeaponClass);
	void Construct();
	void OnEquipWeaponPressed(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass);
	void OnCustomizeWeaponPressed(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass);
	void SetWeaponEquipped(class UClass* /*UWeaponInstance*/ Weapon);
	void SetWeaponEquippedByID(const struct FString& ID);
	void ExecuteUbergraph_W_WeaponsSlotButtonList(int EntryPoint);
	void OnWeaponsListFirstOptionAvailable__DelegateSignature();
	void OnWeaponsListInitialized__DelegateSignature();
	void WeaponCustomizeButtonPressed__DelegateSignature(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass);
	void WeaponEquipButtonPressed__DelegateSignature(const struct FString& WeaponName, EEquipSlot EquipSlot, class UClass* /*UWeaponInstance*/ WeaponClass);
	void WeaponPerkSlotSelected__DelegateSignature(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass);
	void WeaponHovered__DelegateSignature(class UClass* /*UWeaponInstance*/ Weapon, const struct FString& WeaponName, EEquipSlot Equip_Slot);
	void WeaponButtonPressed__DelegateSignature(const struct FString& WeaponName, EEquipSlot EquipSlot, class UClass* /*UWeaponInstance*/ WeaponClass);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
