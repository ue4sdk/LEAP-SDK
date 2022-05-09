#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_CosmeticItemListGrid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_CosmeticItemListGrid.W_CosmeticItemListGrid_C
// 0x00B9 (0x0319 - 0x0260)
class UW_CosmeticItemListGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UGridPanel*                                  ItemGridPanel;                                            // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_ArmoryIcon_C*                             W_ArmoryIcon;                                             // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_ArmoryIcon_C*                             W_ArmoryIcon_2;                                           // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_ArmoryIcon_C*                             W_ArmoryIcon_3;                                           // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_ArmoryIcon_C*                             W_ArmoryIcon_4;                                           // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    ItemClicked;                                              // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	ECosmeticType                                      Type;                                                     // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	struct FString                                     WeaponName;                                               // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	int                                                Row;                                                      // 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	class UClass* /*AProjectXCharacter*/               CharacterClass;                                           // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      SlotID;                                                   // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	int                                                ColourRows;                                               // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    UpdateEquipped;                                           // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<class UW_ArmoryIcon_C*>                     ItemIcons;                                                // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class UObject*>                             ColorIcons;                                               // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                Count;                                                    // 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    ItemHovered;                                              // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bCanPlayEquipSounds;                                      // 0x0318(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_CosmeticItemListGrid.W_CosmeticItemListGrid_C"));
		return ptr;
	}


	void UpdateEquippedTaunts();
	bool Is_Equipped(const struct FString& ShortCode);
	void SelectPadding(struct FMargin* Margin);
	void CreateStandardItemIcon(const struct FString& InputPin, const struct FScriptDelegate& ClickedEvent, const struct FScriptDelegate& HoveredEvent);
	void Construct();
	void CreateItemList(class UDataTable* Table, ECosmeticType Type, class UClass* /*AProjectXCharacter*/ PlayerClass, const struct FString& WeaponID, unsigned char SlotID);
	void ClearList();
	void UpdateEquip(class UW_ArmoryIcon_C* EquippedWidget);
	void OnItemClicked(const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* NewParam);
	void OnItemHovered(bool Hovered, const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, class UW_ArmoryIcon_C* Widget);
	void Next_Loop();
	void ExecuteUbergraph_W_CosmeticItemListGrid(int EntryPoint);
	void ItemHovered__DelegateSignature(bool bHovered, const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* Widget);
	void UpdateEquipped__DelegateSignature();
	void ItemClicked__DelegateSignature(const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
