#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_VehicleScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_VehicleScreen.W_VehicleScreen_C
// 0x0090 (0x02F0 - 0x0260)
class UW_VehicleScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_Button_C*                                 btn_Back;                                                 // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            ClassName;                                                // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_CosmeticItemListGrid_C*                   W_CosmeticItemListGrid;                                   // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UClass* /*UWeaponInstanceSpawnableVehicle*/  Weapon;                                                   // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     CosmeticTypeName;                                         // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UDataTable*                                  ItemTable;                                                // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*AProjectXCharacter*/               Player_Class;                                             // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	ECosmeticType                                      Type;                                                     // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    EquipButtonPressed;                                       // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FString                                     NewVar_1;                                                 // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    TypeSelected;                                             // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    ItemSelected;                                             // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_VehicleScreen.W_VehicleScreen_C"));
		return ptr;
	}


	void ValidCosmeticSlot(EEquipSlot RowName, bool* FoundCosmetics);
	void InitWeapon(class UClass* /*UWeaponInstance*/ Weapon, class UClass* /*AProjectXCharacter*/ Player_Class, EEquipSlot EquipSlot);
	void BndEvt__W_CosmeticItemListGrid_K2Node_ComponentBoundEvent_2_ItemClicked__DelegateSignature(const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* NewParam);
	void EquipCosmeticItem(class UClass* /*AProjectXCharacter*/ CharacterClass, ECosmeticType Type, const struct FString& CosmeticID, const struct FString& WeaponName, class UW_ArmoryIcon_C* Widget);
	void BndEvt__btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget);
	void BndEvt__W_CosmeticItemListGrid_K2Node_ComponentBoundEvent_0_ItemHovered__DelegateSignature(bool bHovered, const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* Widget);
	void ExecuteUbergraph_W_VehicleScreen(int EntryPoint);
	void ItemSelected__DelegateSignature(bool Selected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam);
	void TypeSelected__DelegateSignature(ECosmeticType CosmeticType);
	void EquipButtonPressed__DelegateSignature(bool NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
