#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DropdownMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_DropdownMenu.W_DropdownMenu_C
// 0x0832 (0x0A92 - 0x0260)
class UW_DropdownMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UButton*                                     btn_ClickAway;                                            // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_Button_C*                                 btn_DropDown;                                             // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      img_Arrow;                                                // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBorder*                                     OptionPanel;                                              // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    SB_Options;                                               // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScrollBox*                                  Scroll_OptionList;                                        // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_DropdownMenu_OptionButton_C*              W_DropdownMenu_OptionButton;                              // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_DropdownMenu_OptionButton_C*              W_DropdownMenu_OptionButton_2;                            // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_DropdownMenu_OptionButton_C*              W_DropdownMenu_OptionButton_3;                            // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_DropdownMenu_OptionButton_C*              W_DropdownMenu_OptionButton_4;                            // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_DropdownMenu_OptionButton_C*              W_DropdownMenu_OptionButton_5;                            // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_DropdownMenu_OptionButton_C*              W_DropdownMenu_OptionButton_6;                            // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<struct FString>                             ListOptions;                                              // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     DefaultOption;                                            // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OptionSelected;                                           // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              OptionsPanelMaxHeight;                                    // 0x02F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              List_Item_Font;                                           // 0x0300(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 List_Item_Font_Color;                                     // 0x0358(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 List_Item_Font_Color_Hovered;                             // 0x0380(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FButtonStyle                                List_Item_Button_Style;                                   // 0x03A8(0x0278) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<ETextJustify>                          List_Item_Text_Align;                                     // 0x0620(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0621(0x0003) MISSED OFFSET
	struct FMargin                                     ListItemPadding;                                          // 0x0624(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FMargin                                     ContentPadding;                                           // 0x0634(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<E_ButtonStyles>                        ButtonStyle;                                              // 0x0644(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseCustomStyle;                                           // 0x0645(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0646(0x0002) MISSED OFFSET
	struct FST_ButtonStyles                            CustomButtonStyle;                                        // 0x0648(0x02B8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FSlateBrush                                 ArrowNormal;                                              // 0x0900(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 ArrowHovered;                                             // 0x0988(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LastIndex;                                                // 0x0A10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowList__Design_Time_Only_;                              // 0x0A14(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsOpen;                                                   // 0x0A15(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0A16(0x0002) MISSED OFFSET
	TMap<struct FString, class UW_DropdownMenu_OptionButton_C*> AllOptions;                                               // 0x0A18(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FText                                       PlaceholderText;                                          // 0x0A68(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     CurrentSelection;                                         // 0x0A80(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TEnumAsByte<EOrientation>                          New_Orientation;                                          // 0x0A90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               TriggerDefaultSelectionAutomatically;                     // 0x0A91(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_DropdownMenu.W_DropdownMenu_C"));
		return ptr;
	}


	void GetSelectedOption(struct FString* Option);
	void SetStyle();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OptionClicked(const struct FString& ID);
	void BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget);
	void Init();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature();
	void BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_2_Released__DelegateSignature();
	void BndEvt__btn_clickaway_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void SetDefaultOption(const struct FString& OptionID);
	void UpdateText();
	void Disable_Dropwdown_s_Navigation();
	void Enable_Dropdown_s_Navigation();
	void ExecuteUbergraph_W_DropdownMenu(int EntryPoint);
	void OptionSelected__DelegateSignature(const struct FString& SelectedOptionID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
