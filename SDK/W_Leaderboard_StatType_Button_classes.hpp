#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Leaderboard_StatType_Button_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Leaderboard_StatType_Button.W_Leaderboard_StatType_Button_C
// 0x00D2 (0x0332 - 0x0260)
class UW_Leaderboard_StatType_Button_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_TextElement_C*                            txt_Label;                                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_ButtonBase_C*                             W_ButtonBase;                                             // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_UI_ArmoryTypeButton_Background_C*         W_UI_ArmoryTypeButton_Background_C_8;                     // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_UI_ArmoryTypeButton_Frame_C*              W_UI_ArmoryTypeButton_Frame;                              // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FString                                     ButtonID;                                                 // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FText                                       LabelText;                                                // 0x0298(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	ECosmeticCategory                                  Category;                                                 // 0x02B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	TSet<struct FST_UI_ArmoryTypeCollection>           CosmeticTypes;                                            // 0x02B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FMulticastScriptDelegate                    StatTypeClicked;                                          // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               IsColour;                                                 // 0x0318(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               IsLast;                                                   // 0x0319(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x031A(0x0006) MISSED OFFSET
	struct FString                                     WeaponID;                                                 // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               IsActive;                                                 // 0x0330(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	EColourSlot                                        Colour_Slot;                                              // 0x0331(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_Leaderboard_StatType_Button.W_Leaderboard_StatType_Button_C"));
		return ptr;
	}


	void SetLast(bool Last);
	void SetActive(bool IsActive);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ForceClicked();
	void BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
	void BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_4_ButtonHovered__DelegateSignature();
	void BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_5_ButtonUnHovered__DelegateSignature();
	void ExecuteUbergraph_W_Leaderboard_StatType_Button(int EntryPoint);
	void StatTypeClicked__DelegateSignature(const struct FString& ID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
