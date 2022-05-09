#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Loadout_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Loadout.W_Loadout_C
// 0x00E8 (0x0348 - 0x0260)
class UW_Loadout_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_AppearanceScreen_C*                       W_AppearanceScreen;                                       // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_ArmoryMain_C*                             W_ArmoryMain;                                             // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_GeneralScreen_C*                          W_GeneralScreen;                                          // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_SubMenuTitle_C*                           W_MenuTitle;                                              // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_PerkScreen_C*                             W_PerkScreen;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_VehicleScreen_C*                          W_VehicleScreen;                                          // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_WeaponScreen_C*                           W_WeaponScreen;                                           // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               LoadoutsModified;                                         // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    CloseLoadout;                                             // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UUserWidget*                                 ActiveMenu;                                               // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EArmoryMenus>                          New_Active_Menu;                                          // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    WeaponSelected;                                           // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    ClassSelected;                                            // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    ItemSelected;                                             // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    TypeSelected;                                             // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    ActiveMenuChanged;                                        // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UClass* /*UWeaponInstance*/                  Weapon;                                                   // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    PerkSelected;                                             // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	EEquipSlot                                         EquipSlot;                                                // 0x0330(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      Weapon_IDNUmber;                                          // 0x0331(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0332(0x0006) MISSED OFFSET
	class ABP_ProjectXPlayercontrollerMainMenu_C*      MainMenuPlayerController;                                 // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAdvancedUserWidget*                         ParentWidget;                                             // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_Loadout.W_Loadout_C"));
		return ptr;
	}


	void MenuBack(bool* bConsumed);
	void ChangeActiveMenu(TEnumAsByte<EArmoryMenus> NewActiveMenu);
	void GetWeaponNumber(class UClass* /*AProjectXCharacter*/ Class, EEquipSlot Slot, const struct FString& WeaponName, int* Array_Index);
	void Construct();
	void BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_2_WeaponSelected__DelegateSignature(class UClass* /*UWeaponInstance*/ WeaponSelected, EEquipSlot Slot, unsigned char WeaponIDNumber);
	void BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_4_EquipButtonPressed__DelegateSignature(bool NewParam);
	void OnVisible();
	void BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_1_AppearanceButtonPressed__DelegateSignature(bool Weapon);
	void BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_3_EquipButtonPressed__DelegateSignature();
	void BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_5_ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ ClassSelected);
	void BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_6_TypeSelected__DelegateSignature(ECosmeticType CosmeticType);
	void BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_7_ItemSelected__DelegateSignature(bool Selected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam);
	void BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_8_ItemSelected__DelegateSignature(bool Selected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam);
	void BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_9_TypeSelected__DelegateSignature(ECosmeticType Type);
	void BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature();
	void BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_0_SlotSelected__DelegateSignature(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass);
	void BndEvt__W_PerkScreen_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature();
	void BndEvt__W_PerkScreen_K2Node_ComponentBoundEvent_12_OnPerkClicked__DelegateSignature(class UPerkAssetBase* Perk, int SlotNumber, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponInstance, EPerkType Type);
	void BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_13_ItemSelected__DelegateSignature(bool Selected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam);
	void BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_14_TypeSelected__DelegateSignature(ECosmeticType Type);
	void BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_15_EquipButtonPressed__DelegateSignature();
	void BndEvt__W_VehicleScreen_K2Node_ComponentBoundEvent_16_ItemSelected__DelegateSignature(bool Selected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam);
	void BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_18_ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ PlayerClass);
	void BndEvt__W_VehicleScreen_K2Node_ComponentBoundEvent_17_EquipButtonPressed__DelegateSignature(bool NewParam);
	void OnActiveMenuChanged(TEnumAsByte<EArmoryMenus> ActiveMenuChanged, TEnumAsByte<EArmoryMenus> PreviousMenu);
	void ExecuteUbergraph_W_Loadout(int EntryPoint);
	void PerkSelected__DelegateSignature(class UPerkAssetBase* Perk, int SlotNumber, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponInstance, EPerkType Type);
	void ActiveMenuChanged__DelegateSignature(TEnumAsByte<EArmoryMenus> ActiveMenuChanged, TEnumAsByte<EArmoryMenus> PreviousMenu);
	void TypeSelected__DelegateSignature(ECosmeticType Type);
	void ItemSelected__DelegateSignature(bool bSelected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam);
	void ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ Class);
	void WeaponSelected__DelegateSignature(class UClass* /*UWeaponInstance*/ Weapon, EEquipSlot Slot, class UClass* /*AProjectXCharacter*/ CharacterClass, unsigned char WeaponIDNumber);
	void CloseLoadout__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
