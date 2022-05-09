#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LineSystemWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LineSystemWidget.LineSystemWidget_C
// 0x0310 (0x0570 - 0x0260)
class ULineSystemWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<class UWidget*>                             AllWidgets;                                               // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_AdvancedDisplay)
	TArray<class Uw_ui_linesystem_element_C*>          LineElements;                                             // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_AdvancedDisplay)
	class UPanelWidget*                                Root;                                                     // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	struct FSlateBrush                                 Brush;                                                    // 0x0290(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 Brush_Background;                                         // 0x0318(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                Color;                                                    // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                ColBackground;                                            // 0x03B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RecolorBackground;                                        // 0x03C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Recolor;                                                  // 0x03C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03C2(0x0002) MISSED OFFSET
	struct FLinearColor                                DefaultBackgroundColor;                                   // 0x03C4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                DefaultFillColor;                                         // 0x03D4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                DefaultGlowColor;                                         // 0x03E4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                ColGlow;                                                  // 0x03F4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                ColInnerGlow;                                             // 0x0404(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	TArray<class Uw_ui_linesystem_element_C*>          BackgroundElements;                                       // 0x0418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_AdvancedDisplay)
	struct FLinearColor                                DefaultInnerGlowColor;                                    // 0x0428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RecolorInnerGlow;                                         // 0x0438(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               RecolorGlow;                                              // 0x0439(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x6];                                       // 0x043A(0x0006) MISSED OFFSET
	struct FSlateBrush                                 DefaultBrush;                                             // 0x0440(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 DefaultBrushBackground;                                   // 0x04C8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UMaterialInstance*                           DefaultLineMat;                                           // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstance*                           DefaultBackgroundMat;                                     // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                ColBlank;                                                 // 0x0560(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass LineSystemWidget.LineSystemWidget_C"));
		return ptr;
	}


	void ClearColors();
	void GetBrushDefaults(bool IsBackground, const struct FSlateBrush& Brush);
	void UpdateMaterial(class UMaterialInstance* Material, class UMaterialInstance* BackgroundMaterial);
	void UpdateBrush(class Uw_ui_linesystem_element_C* LineElement, const struct FSlateBrush& Brush, bool IsBackground);
	void GetBrushMaterialDefaults(bool IsBackground, const struct FSlateBrush& Brush);
	void Set_Colors();
	void UpdateStyles();
	void Init(class UPanelWidget* RootPanel);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_LineSystemWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
