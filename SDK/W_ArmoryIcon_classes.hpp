#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ArmoryIcon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_ArmoryIcon.W_ArmoryIcon_C
// 0x00A0 (0x0300 - 0x0260)
class UW_ArmoryIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_TextElement_C*                            CustomMessage;                                            // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScaleBox*                                   SB_CustomMessage;                                         // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScaleBox*                                   SB_ItemIcon;                                              // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_ItemIcon_New_C*                           W_ItemIcon_New;                                           // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    ItemPressed;                                              // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UClass* /*AProjectXCharacter*/               CharacterClass;                                           // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     ShortCode;                                                // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FText                                       ItemName;                                                 // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UCosmeticAssetBase*                          CosmeticAsset;                                            // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	ECosmeticType                                      Type;                                                     // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	struct FString                                     WeaponName;                                               // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UW_ItemIcon_New_C*                           ItemIcon;                                                 // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    ItemHovered;                                              // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_ArmoryIcon.W_ArmoryIcon_C"));
		return ptr;
	}


	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void GetEquippedStatus(bool* Equipped);
	void FindItemInfo(const struct FString& ShortCode, const struct FString& WeaponName, ECosmeticType Type);
	void Init(class UClass* /*AProjectXCharacter*/ CharacterClass);
	void UpdateIsEquipped();
	void ForceClick();
	void PlaySpawnAnimation();
	void Construct();
	void OnClick(class UW_ItemIcon_New_C* Button);
	void CustomEvent_1(class UW_ItemIcon_New_C* Button);
	void BndEvt__W_ItemIcon_New_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(bool Hovered);
	void Toggle_Custom_Message(bool bShowMessage, const struct FText& Message);
	void ForceUpdateIsEquipped(bool Equipped);
	void ExecuteUbergraph_W_ArmoryIcon(int EntryPoint);
	void ItemHovered__DelegateSignature(bool Hovered, const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, class UW_ArmoryIcon_C* Widget);
	void ItemPressed__DelegateSignature(const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
