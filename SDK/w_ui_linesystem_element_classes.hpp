#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "w_ui_linesystem_element_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_ui_linesystem_element.w_ui_linesystem_element_C
// 0x02C4 (0x0524 - 0x0260)
class Uw_ui_linesystem_element_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Image;                                                    // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      img_CapOne;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      img_CapTwo;                                               // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               UseCustomBrush;                                           // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	struct FSlateBrush                                 Brush;                                                    // 0x0288(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	float                                              LineThickness;                                            // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_ui_linesystem_LineTypes>             LineType;                                                 // 0x0314(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseCustomTexture;                                         // 0x0315(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0316(0x0002) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynMat;                                                   // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsBackground;                                             // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               OverrideFillColor;                                        // 0x0321(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0322(0x0002) MISSED OFFSET
	struct FLinearColor                                FillColor;                                                // 0x0324(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               OverrideGlowColor;                                        // 0x0334(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	struct FLinearColor                                GlowColor;                                                // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Opacity;                                                  // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class UMaterialParameterCollection*                MaterialParameters;                                       // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Rotation;                                                 // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ImageWidth;                                               // 0x035C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ImageHeight;                                              // 0x0360(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               EnableMask;                                               // 0x0364(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	float                                              RadialMaskBlend;                                          // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RadialMaskDensity;                                        // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               OverrideBackgroundColors;                                 // 0x0370(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	struct FLinearColor                                BackgroundColor;                                          // 0x0374(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BackgroundInnerGlowColor;                                 // 0x0384(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               FlipBackground;                                           // 0x0394(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	struct FLinearColor                                Fill_Channels;                                            // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector2D                                   RadialMaskOffset;                                         // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RadialMaskSize;                                           // 0x03B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LinearMaskBlend;                                          // 0x03B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LinearMaskOffset;                                         // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LinearMaskDensity;                                        // 0x03BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LinearMaskPower;                                          // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ReflectedMaskBlend;                                       // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ReflectedMaskDensity;                                     // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ReflectedMaskOffset;                                      // 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ReflectedMaskSize;                                        // 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BackgroundChannels;                                       // 0x03D4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                GlowChannels;                                             // 0x03E4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LinearMaskRotation;                                       // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ReflectedMaskRotation;                                    // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_ui_linesystem_Angles>                LineAngle;                                                // 0x03FC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_ui_linesystem_CornerStyles>          CornerStyle;                                              // 0x03FD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData08[0x2];                                       // 0x03FE(0x0002) MISSED OFFSET
	class UTexture2D*                                  Texture;                                                  // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Rotate;                                                   // 0x0408(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Flip_Horizontal;                                          // 0x0409(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Flip_Vertical;                                            // 0x040A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Resize;                                                   // 0x040B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector2D                                   Size;                                                     // 0x040C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Override_Material_Colors;                                 // 0x0414(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class UDataTable*                                  LineStyles;                                               // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RadialMaskInvert;                                         // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ReflectedMaskInvert;                                      // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AddCaps;                                                  // 0x0428(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CapOne;                                                   // 0x0429(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CapTwo;                                                   // 0x042A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x5];                                       // 0x042B(0x0005) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CapDynMat;                                                // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FAnchorData                                 AnchorLeft;                                               // 0x0438(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FAnchorData                                 AnchorRight;                                              // 0x0460(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FAnchorData                                 AnchorTop;                                                // 0x0488(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FAnchorData                                 AnchorBottom;                                             // 0x04B0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FVector2D                                   CurrentSize;                                              // 0x04D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ReflectedMaskPower;                                       // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                MatFillColor;                                             // 0x04E4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                MatGlowColor;                                             // 0x04F4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                MatBackgroundColor;                                       // 0x0504(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                MatBackgroundInnerGlowColor;                              // 0x0514(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass w_ui_linesystem_element.w_ui_linesystem_element_C"));
		return ptr;
	}


	void SetWarning(float WarningPercent, float WarningPulseSpeed);
	void UpdateCaps(bool AddCaps);
	void SetDefaults(class UMaterialInstanceDynamic* Material);
	void Update_Brush();
	void UpdateMask();
	void UpdateScale();
	void UpdateOrientation();
	void UpdateTexture(class UTexture2D* Texture);
	void UpdateColors(const struct FLinearColor& LineColorOverride, const struct FLinearColor& GlowColorOverride, const struct FLinearColor& BackgroundColorOverride);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Init();
	void UpdateMaterial(class UMaterialInstance* MaterialInstance);
	void ExecuteUbergraph_w_ui_linesystem_element(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
