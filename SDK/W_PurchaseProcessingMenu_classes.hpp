#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PurchaseProcessingMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C
// 0x013A (0x0422 - 0x02E8)
class UW_PurchaseProcessingMenu_C : public UAdvancedUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UOverlay*                                    Root;                                                     // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	ECosmeticType                                      Type;                                                     // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	struct FString                                     WeaponName;                                               // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     ItemId;                                                   // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    ProcessingComplete;                                       // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<struct FContextMenuOption>                  Context_Menu_Options;                                     // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UDataTable*                                  StyleGuide;                                               // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_PurchaseProcessingMenu_Events>       Event;                                                    // 0x0348(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class UW_GlobalMessageDialogue_C*                  DialogueWindow;                                           // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_GlobalMessageDialogue_Styles>        Dialogue_Style;                                           // 0x0358(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Waiting;                                                  // 0x0359(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x6];                                       // 0x035A(0x0006) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0360(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Message;                                                  // 0x0378(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FContextMenuOption                          Context_Menu_Option_1;                                    // 0x0390(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FContextMenuOption                          Context_Menu_Option_2;                                    // 0x03C8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FContextMenuOption>                  Context_Menu_Option_Array;                                // 0x0400(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FString                                     ClassName;                                                // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	unsigned char                                      Slot_ID;                                                  // 0x0420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EPerkType                                          Perk_Type;                                                // 0x0421(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C"));
		return ptr;
	}


	void CreateDialogue(TEnumAsByte<E_PurchaseProcessingMenu_Events> Event);
	void EquipGenericCosmetic(ECosmeticType Type, const struct FString& CosmeticID);
	void EquipWeaponCosmetic(ECosmeticType Type, const struct FString& CosmeticID, const struct FString& WeaponName);
	void Construct();
	void Complete(bool bSucess, const struct FString& ItemId);
	void InitProcessingPurchase(const struct FString& ClassID, ECosmeticType Type, const struct FString& ItemId, const struct FString& WeaponID);
	void Reset();
	void Option_1_Clicked();
	void Option_2_Clicked();
	void CreateSlotButtons();
	void EquipCosmetic();
	void OnSlotButtonSelected(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget);
	void ExecuteUbergraph_W_PurchaseProcessingMenu(int EntryPoint);
	void ProcessingComplete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
