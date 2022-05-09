#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_CosmeticTypesButtonList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C
// 0x0191 (0x03F1 - 0x0260)
class UW_CosmeticTypesButtonList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UHorizontalBox*                              CosmeticTypeBox;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_ArmoryTypeButton_C*                       W_ArmoryTypeButton;                                       // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_ArmoryTypeButton_C*                       W_ArmoryTypeButton_2;                                     // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnTypeButtonPressed;                                      // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UDataTable*                                  MasterCosmeticTable;                                      // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FString, class UW_Button_C*>           Buttons;                                                  // 0x0298(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	ECosmeticCategory                                  Category;                                                 // 0x02E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnColourButtonPressed;                                    // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TSet<ECosmeticType>                                Type;                                                     // 0x0300(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TSet<struct FST_UI_ArmoryTypeCollection>           TypeCollection;                                           // 0x0350(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<struct FString, class UW_ArmoryTypeButton_C*> TypeButtons;                                              // 0x03A0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	EColourSlot                                        ColourSlot;                                               // 0x03F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_CosmeticTypesButtonList.W_CosmeticTypesButtonList_C"));
		return ptr;
	}


	void SetLast();
	void Construct();
	void CreateTypeList(ECosmeticCategory Category, TSet<struct FST_UI_ArmoryTypeCollection> TypeCollection);
	void ForceTypeButtonPressed(const struct FString& Type, bool Default);
	void ClearList();
	void TypeButtonClicked(const struct FString& ID, ECosmeticCategory Category, TSet<struct FST_UI_ArmoryTypeCollection> CosmeticTypes, bool Colour, EColourSlot ColourSlot, const struct FString& WeaponID);
	void ExecuteUbergraph_W_CosmeticTypesButtonList(int EntryPoint);
	void OnColourButtonPressed__DelegateSignature(const struct FString& ID, EColourSlot ColourSlot);
	void OnTypeButtonPressed__DelegateSignature(const struct FString& CosmeticType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
