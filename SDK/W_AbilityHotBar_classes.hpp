#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_AbilityHotBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_AbilityHotBar.W_AbilityHotBar_C
// 0x003A (0x029A - 0x0260)
class UW_AbilityHotBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UHorizontalBox*                              AbilitiesHotbar;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_AbilityHotBar_Icon_C*                     BP_AbilityHotBar_Icon;                                    // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UObject*                                     InventoryComponent;                                       // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    EquipmentChanged;                                         // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UWeaponComponent*                            WeaponComponent;                                          // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasQuickSwitchIcon;                                       // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bInitializedAbilityIcons;                                 // 0x0299(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_AbilityHotBar.W_AbilityHotBar_C"));
		return ptr;
	}


	void OnPawnAcquired_D2E9AF624A307622476ECE9984226343(class APawn* Pawn);
	void OnPawnAcquired_8AAF61684D2B9526D9AB338F1A0A51BE(class APawn* Pawn);
	void OnPawnAcquired_EAD9E5214AC350B2E38F6C917FB2ED57(class APawn* Pawn);
	void Construct();
	void OnWeaponAdded(class UWeaponInstance* Weapon);
	void OnWeaponRemoved();
	void OnWeaponChanged(class UWeaponInstance* Weapon);
	void RefreshAbilities(class APawn* Pawn);
	void CreateAbilityHotBarIcon(int Index, class UWeaponInstance* Weapon, bool bRecreateUI);
	void AddSingleItem(class UWeaponInstance* NewWeapon);
	void RecreateAbilityHotbar();
	void ExecuteUbergraph_W_AbilityHotBar(int EntryPoint);
	void EquipmentChanged__DelegateSignature(class UWeaponInstance* EquipedWeapon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
