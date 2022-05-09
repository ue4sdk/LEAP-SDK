#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Keybindings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Keybindings.W_Keybindings_C
// 0x0128 (0x0388 - 0x0260)
class UW_Keybindings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UApplySettingsButton_C*                      ApplySettingsButton;                                      // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                KeybindList;                                              // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            lbl_MouseKeyboard;                                        // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            lbl_MouseKeyboard_2;                                      // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScrollBox*                                  Scroll_box;                                               // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_KeybindList_C*                            W_KeybindList;                                            // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_KeybindList_C*                            W_KeybindList_2;                                          // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_KeybindList_C*                            W_KeybindList_3;                                          // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UKeybindingEntry_C*>                  KeybindingsList;                                          // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class UDataTable*                                  InputTable;                                               // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FInputActionMappingStruct>           KeyboardAndMouse;                                         // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FInputActionMappingStruct>           Gamepad;                                                  // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<EInputCategory, class UW_KeybindList_C*>      Categories;                                               // 0x02E0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FMulticastScriptDelegate                    ToggleConsumeBackInput;                                   // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UDataTable*                                  AxisInputTable;                                           // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FInputAxisMappingStruct>             GamepadAxis;                                              // 0x0348(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FInputAxisMappingStruct>             KeyboardAndMouseAxis;                                     // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class UKeybindingEntry_C*>                  AxisBindingList;                                          // 0x0368(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               bBinding;                                                 // 0x0378(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UKeybindingEntry_C*                          SelectedWidget;                                           // 0x0380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_Keybindings.W_Keybindings_C"));
		return ptr;
	}


	void OnClickBinding(class UKeybindingEntry_C* SelectedWidget);
	void FindAxisMapping(const struct FName& NewParam, float Scale, struct FInputAxisMappingStruct* KeyboardEntry1, struct FInputAxisMappingStruct* GamepadEntry1);
	void FindActionMapping(const struct FName& NewParam, struct FInputActionMappingStruct* KeyboardEntry1, struct FInputActionMappingStruct* GamepadEntry1);
	void PopulateGamePadInputs(TArray<struct FInputActionMappingStruct>* GamepadInputs, TArray<class UKeybindingEntry_C*>* KeybindingEntries);
	void FindActionMapEntry(const struct FInputActionMappingStruct& B, TArray<class UKeybindingEntry_C*>* Array, class UKeybindingEntry_C** Array_Element, bool* FoundElement);
	void ToggleEntryVisibility(ESlateVisibility Invisibility, bool bIsFocusable);
	void Construct();
	void ApplySettings();
	void SetDefaults();
	void InitValues();
	void CreateSubEntryBoxes();
	void OnButtonPressed(class UKeybindingEntry_C* OutBindWidget);
	void OnButtonBound(const struct FKey& KeyPressed);
	void OnMenuClosed();
	void OnButtonPushed(class UKeybindingEntry_C* OutBindWidget);
	void OnButtonBoundEvent(const struct FKey& KeyPressed);
	void ExecuteUbergraph_W_Keybindings(int EntryPoint);
	void ToggleConsumeBackInput__DelegateSignature(bool ConsumeBackInput);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
