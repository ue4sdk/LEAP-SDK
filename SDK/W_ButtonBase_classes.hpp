#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ButtonBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_ButtonBase.W_ButtonBase_C
// 0x0400 (0x0660 - 0x0260)
class UW_ButtonBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UButton*                                     btn_Button;                                               // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            W_TextElement;                                            // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Text;                                                     // 0x0278(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FSlateFontInfo                              TextFont;                                                 // 0x0290(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 TextColor;                                                // 0x02E8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FButtonStyle                                ButtonStyle;                                              // 0x0310(0x0278) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 TextColorHovered;                                         // 0x0588(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 TextColorPressed;                                         // 0x05B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 TextColorDisabled;                                        // 0x05D8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FMargin                                     TextPadding;                                              // 0x0600(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    ButtonClicked;                                            // 0x0610(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               AllCaps;                                                  // 0x0620(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               SpacedText;                                               // 0x0621(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	TEnumAsByte<EHorizontalAlignment>                  Text_Alignment;                                           // 0x0622(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0623(0x0005) MISSED OFFSET
	struct FMulticastScriptDelegate                    ButtonDoubleClicked;                                      // 0x0628(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    ButtonHovered;                                            // 0x0638(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    ButtonUnHovered;                                          // 0x0648(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              DoubleClickTimer;                                         // 0x0658(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DoubleClickTime;                                          // 0x065C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_ButtonBase.W_ButtonBase_C"));
		return ptr;
	}


	void Set_Styles(const struct FText& Label_Text);
	void Construct();
	void BndEvt__btn_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void UpdateDoubleClickTimer(float Value);
	void ExecuteUbergraph_W_ButtonBase(int EntryPoint);
	void ButtonDoubleClicked__DelegateSignature();
	void ButtonUnHovered__DelegateSignature();
	void ButtonHovered__DelegateSignature();
	void ButtonClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
