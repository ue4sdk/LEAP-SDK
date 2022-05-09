#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KeybindingEntry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass KeybindingEntry.KeybindingEntry_C
// 0x03C8 (0x0628 - 0x0260)
class UKeybindingEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_Button_C*                                 btn_bind_GamepadButton;                                   // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_Button_C*                                 btn_bind_KeyboardandMouse;                                // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            txt_Action;                                               // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class Uw_ui_linesystem_element_C*                  w_ui_linesystem_element;                                  // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FInputActionMappingStruct                   PCAction;                                                 // 0x0288(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FKey                                        PCBinding;                                                // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FKey                                        GamepadBinding;                                           // 0x02C8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    BindKey;                                                  // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    ButtonPressed;                                            // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TEnumAsByte<EInputDeviceType>                      BindableInputType;                                        // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0301(0x0007) MISSED OFFSET
	struct FInputActionMappingStruct                   GamepadAction;                                            // 0x0308(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FButtonStyle                                WaitingStyle;                                             // 0x0330(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       DisplayName;                                              // 0x05A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	TArray<struct FKey>                                HandledKeyDownEvents;                                     // 0x05C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               bIsBinding;                                               // 0x05D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	struct FInputAxisMappingStruct                     PCAxisAction;                                             // 0x05D8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FInputAxisMappingStruct                     GamepadAxisAction;                                        // 0x0600(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass KeybindingEntry.KeybindingEntry_C"));
		return ptr;
	}


	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void GetKeyBindings(struct FKey* PCBinding, struct FKey* GamepadBinding);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Construct();
	void UpdateVisuals();
	void BindKeyboard(const struct FKey& KeyPressed);
	void BindGamepad(const struct FKey& KeyPressed);
	void Update();
	void UpdateGaempadAction(const struct FInputActionMappingStruct& GamepadAction);
	void BndEvt__btn_bind_KeyboardandMouse_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget);
	void BndEvt__btn_bind_GamepadButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget);
	void Revert();
	void RevertGamepad();
	void RevertMKB();
	void ExecuteUbergraph_KeybindingEntry(int EntryPoint);
	void ButtonPressed__DelegateSignature(class UKeybindingEntry_C* OutBindWidget);
	void BindKey__DelegateSignature(const struct FKey& KeyPressed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
