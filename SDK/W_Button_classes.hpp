#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Button_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Button.W_Button_C
// 0x0931 (0x0B91 - 0x0260)
class UW_Button_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            hover;                                                    // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UButton*                                     btn_Button;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    Container;                                                // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      img_bg;                                                   // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      img_flare;                                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      img_icon;                                                 // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    SB_Button;                                                // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScaleBox*                                   ScB_Content;                                              // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            txt_Label;                                                // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Clicked;                                                  // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FText                                       Label_Text;                                               // 0x02C0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	TEnumAsByte<E_ButtonStyles>                        Style;                                                    // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x02DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 ColLabelHovered;                                          // 0x02E0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ColLabelNormal;                                           // 0x0308(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ColLabelPressed;                                          // 0x0330(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ColLabelBGHovered;                                        // 0x0358(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ColLabelFG;                                               // 0x0380(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ColLabelBG;                                               // 0x03A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                ColFlareGlowNormal;                                       // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                ColFlareNormal;                                           // 0x03E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynMat_Button_Active;                                     // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynMat_Button;                                            // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynMat_Button_Hovered;                                    // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                     // 0x0408(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	class UDataTable*                                  StyleGuide;                                               // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0468(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               Warning;                                                  // 0x04F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               Hovered;                                                  // 0x04F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04F2(0x0002) MISSED OFFSET
	struct FLinearColor                                ColLabelWarning;                                          // 0x04F4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               FlipY;                                                    // 0x0504(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	struct FString                                     ID;                                                       // 0x0508(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FString                                     Name;                                                     // 0x0518(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	ECosmeticType                                      Type;                                                     // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	int                                                FontSizeOverride;                                         // 0x052C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentSeparation;                                        // 0x0530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DefaultSeparation;                                        // 0x0534(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsBlank;                                                  // 0x0538(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	struct FSlateBrush                                 ButtonImage;                                              // 0x0540(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 HighlightImage;                                           // 0x05C8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 ActiveImage;                                              // 0x0650(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FSlateFontInfo                              DefaultFont;                                              // 0x06D8(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 DefaultFontColor;                                         // 0x0730(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 DefaultHoverFontColor;                                    // 0x0758(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 DefaultActiveFontColor;                                   // 0x0780(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<ETextJustify>                          TextAlignment;                                            // 0x07A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x3];                                       // 0x07A9(0x0003) MISSED OFFSET
	struct FVector2D                                   ButtonSize;                                               // 0x07AC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMargin                                     ButtonMargins;                                            // 0x07B4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FMargin                                     ButtonPadding;                                            // 0x07C4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector2D                                   ButtonShear;                                              // 0x07D4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsActive;                                                 // 0x07DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<EMinMaxAbsolute>                       SizeWidthRule;                                            // 0x07DD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EMinMaxAbsolute>                       SizeHeightRule;                                           // 0x07DE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x1];                                       // 0x07DF(0x0001) MISSED OFFSET
	class UClass* /*UUserWidget*/                      WidgetClass;                                              // 0x07E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               UseCustomStyle;                                           // 0x07E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x7];                                       // 0x07E9(0x0007) MISSED OFFSET
	struct FST_ButtonStyles                            CustomButtonStyle;                                        // 0x07F0(0x02B8) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Pressed;                                                  // 0x0AA8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Released;                                                 // 0x0AB8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               ShowIcon;                                                 // 0x0AC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0AC9(0x0007) MISSED OFFSET
	struct FSlateBrush                                 IconBrush;                                                // 0x0AD0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               HideText;                                                 // 0x0B58(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0B59(0x0003) MISSED OFFSET
	struct FMargin                                     ButtonImageCrop;                                          // 0x0B5C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0B6C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnHovered;                                                // 0x0B70(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnHoveredOff;                                             // 0x0B80(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               FlipX;                                                    // 0x0B90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_Button.W_Button_C"));
		return ptr;
	}


	void GetHoverDynamicMaterial();
	void SetIconBrushByMaterial(class UMaterialInterface* Material);
	void SetIconVisibility(bool ShowIcon);
	void SetIconBrushByTexture(class UTexture2D* Texture);
	void SetIconBrush(const struct FSlateBrush& IconBrush);
	void SetHeight(TEnumAsByte<EMinMaxAbsolute> HeightRule, class USizeBox* SizeBoxWidget, float Height);
	void SetWidth(TEnumAsByte<EMinMaxAbsolute> WidthRule, class USizeBox* SizeBoxWidget, float Width);
	void SetSize();
	void SetActive(bool IsActive);
	void GetDefaults();
	void UpdateFont(const struct FSlateFontInfo& SlateFontInfo, struct FSlateFontInfo* SlateFontInfo1);
	void Update_Style(TEnumAsByte<E_ButtonStyles> ButtonStyle, bool UseCustom, const struct FST_ButtonStyles& CustomStyle);
	void SetWarning(bool TRUE);
	void SetStyle();
	void SetText(const struct FText& Text);
	void ColorSplit(const struct FSlateColor& Color, struct FSlateColor* Red, struct FSlateColor* Green);
	void Construct();
	void highlight(bool IsHighlighted);
	void ToggleEnabled(bool IsEnabled);
	void ForceHoverState();
	void ForceButtonClicked();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__btn_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__btn_Button_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
	void Depressed(float Value);
	void Release(float Value);
	void Init();
	void ExecuteUbergraph_W_Button(int EntryPoint);
	void OnHoveredOff__DelegateSignature();
	void OnHovered__DelegateSignature();
	void Released__DelegateSignature();
	void Pressed__DelegateSignature();
	void Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
