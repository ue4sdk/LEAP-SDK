#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PerkSlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_PerkSlot.W_PerkSlot_C
// 0x0068 (0x02C8 - 0x0260)
class UW_PerkSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_TextElement_C*                            Number;                                                   // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_PerkButton_C*                             W_PerkButton;                                             // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                SlotNumber;                                               // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    SlotSelected;                                             // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UClass* /*AProjectXCharacter*/               Character_Class;                                          // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UClass* /*UWeaponInstance*/                  Weapon_Instance_Class;                                    // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	EPerkType                                          PerkSlot;                                                 // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	class UCosmeticAssetBase*                          Asset;                                                    // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       SlotName;                                                 // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_PerkSlot.W_PerkSlot_C"));
		return ptr;
	}


	void Construct();
	void UpdatePerk(const struct FString& ShortCode);
	void BndEvt__W_PerkButton_K2Node_ComponentBoundEvent_0_PerkSelected__DelegateSignature(class UPerkAssetBase* SelectedPerk, bool Owned, class UW_PerkButton_C* Widget);
	void Init(class UClass* /*AProjectXCharacter*/ Character_Class, class UClass* /*UWeaponInstance*/ Weapon_Instance_Class);
	void ExecuteUbergraph_W_PerkSlot(int EntryPoint);
	void SlotSelected__DelegateSignature(int SelectedSlot, EPerkType Type);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
