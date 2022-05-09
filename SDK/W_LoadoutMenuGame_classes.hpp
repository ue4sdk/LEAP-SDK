#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_LoadoutMenuGame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_LoadoutMenuGame.W_LoadoutMenuGame_C
// 0x0038 (0x0320 - 0x02E8)
class UW_LoadoutMenuGame_C : public UAdvancedUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_Loadout_C*                                W_LoadoutMenu;                                            // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class AProjectXPlayerState*                        PlayerState;                                              // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ABP_ProjectXPlayerController_C*              PlayerController;                                         // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UClass* /*UWeaponInstance*/                  Weapon;                                                   // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnLoadoutClosedRequest;                                   // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_LoadoutMenuGame.W_LoadoutMenuGame_C"));
		return ptr;
	}


	void OnPlayerStateAcquired_91E4A6614589D613BD492E95F4F7C89A(class APlayerState* PlayerState);
	void Construct();
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_0_CloseLoadout__DelegateSignature();
	void OnVisible(class UObject* ContextObject);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_1_ItemSelected__DelegateSignature(bool bSelected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_2_WeaponSelected__DelegateSignature(class UClass* /*UWeaponInstance*/ Weapon, EEquipSlot Slot, class UClass* /*AProjectXCharacter*/ CharacterClass, unsigned char WeaponIDNumber);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_3_ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ Class);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_4_ActiveMenuChanged__DelegateSignature(TEnumAsByte<EArmoryMenus> ActiveMenuChanged, TEnumAsByte<EArmoryMenus> PreviousMenu);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_5_TypeSelected__DelegateSignature(ECosmeticType Type);
	void BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_6_PerkSelected__DelegateSignature(class UPerkAssetBase* Perk, int SlotNumber, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponInstance, EPerkType Type);
	void OnMenuBack();
	void Close_Loadout_Menu_Game();
	void ExecuteUbergraph_W_LoadoutMenuGame(int EntryPoint);
	void OnLoadoutClosedRequest__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
