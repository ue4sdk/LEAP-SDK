#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_LoadoutMainMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_LoadoutMainMenu.W_LoadoutMainMenu_C
// 0x0030 (0x0318 - 0x02E8)
class UW_LoadoutMainMenu_C : public UAdvancedUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UImage*                                      BGVignette;                                               // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      BGVignette_2;                                             // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_Loadout_C*                                W_LoadoutMenu;                                            // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ABP_ProjectXPlayercontrollerMainMenu_C*      PlayerController;                                         // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UW_FavouriteBtn_C*                           FavouriteButton;                                          // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_LoadoutMainMenu.W_LoadoutMainMenu_C"));
		return ptr;
	}


	void Construct();
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_0_CloseLoadout__DelegateSignature();
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility Invisibility);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_2_WeaponSelected__DelegateSignature(class UClass* /*UWeaponInstance*/ Weapon, EEquipSlot Slot, class UClass* /*AProjectXCharacter*/ CharacterClass, unsigned char WeaponIDNumber);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_3_ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ Class);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_4_TypeSelected__DelegateSignature(ECosmeticType Type);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_5_ItemSelected__DelegateSignature(bool bSelected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_6_ActiveMenuChanged__DelegateSignature(TEnumAsByte<EArmoryMenus> ActiveMenuChanged, TEnumAsByte<EArmoryMenus> PreviousMenu);
	void OnMenuBack();
	void CollapseWidget();
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_7_PerkSelected__DelegateSignature(class UPerkAssetBase* Perk, int SlotNumber, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponInstance, EPerkType Type);
	void OnWidgetVisible(class UObject* ContextObject);
	void OnLeftBumper();
	void OnRightBumper();
	void ExecuteUbergraph_W_LoadoutMainMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
