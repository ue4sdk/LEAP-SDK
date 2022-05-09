#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EnableDisableToggle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass EnableDisableToggle.EnableDisableToggle_C
// 0x0568 (0x07C8 - 0x0260)
class UEnableDisableToggle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_Button_C*                                 btn_Disable;                                              // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_Button_C*                                 btn_Enable;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USlider*                                     Focusable_Slider;                                         // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               CurrentState;                                             // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    DisableEvent;                                             // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    EnableEvent;                                              // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FText                                       EnableLabel;                                              // 0x02A8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       DisableLabel;                                             // 0x02C0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FButtonStyle                                DisabledStyle;                                            // 0x02D8(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FButtonStyle                                EnabledStyle;                                             // 0x0550(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass EnableDisableToggle.EnableDisableToggle_C"));
		return ptr;
	}


	void IsEnabled(bool* CurrentState);
	void UpdateColor(bool Selected, class UW_Button_C* Target_New);
	void PreConstruct(bool IsDesignTime);
	void ToggleState(bool Enabled);
	void BndEvt__btn_Disable_New_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget);
	void BndEvt__btn_Enable_New_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget);
	void SetDisabledText(const struct FText& NewText);
	void SetEnabledText(const struct FText& NewText);
	void BndEvt__Focusable_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_EnableDisableToggle(int EntryPoint);
	void EnableEvent__DelegateSignature();
	void DisableEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
