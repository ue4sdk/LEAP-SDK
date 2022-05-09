#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Leaderboard_Dropdown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C
// 0x0134 (0x0394 - 0x0260)
class UW_Leaderboard_Dropdown_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_Button_C*                                 btn_DropDown;                                             // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      InputImage;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class Uw_ui_linesystem_element_C*                  line_divide;                                              // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    SB_List;                                                  // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            txt_CurrentSelection;                                     // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                VB_Options;                                               // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_UI_Play_GameModeMenu_deco_frame_C*        W_UI_Play_GameModeMenu_deco_frame;                        // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OptionSelected;                                           // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              ListHeight;                                               // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	TMap<struct FString, class UW_Leaderboard_Dropdown_Entry_C*> ListItems;                                                // 0x02B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FString                                     SelectedOption;                                           // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FText                                       BlankText;                                                // 0x0318(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              AnimationTime;                                            // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsExpanded;                                               // 0x0334(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               TestOpen;                                                 // 0x0335(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0336(0x0002) MISSED OFFSET
	TArray<struct FString>                             OPTIONS;                                                  // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FText                                       PlaceholderText;                                          // 0x0348(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       HintText;                                                 // 0x0360(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_ButtonStyles>                        Style;                                                    // 0x0378(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	TArray<class UW_Leaderboard_Dropdown_Entry_C*>     ItemList;                                                 // 0x0380(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	int                                                CurrentItemIndex;                                         // 0x0390(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_Leaderboard_Dropdown.W_Leaderboard_Dropdown_C"));
		return ptr;
	}


	class UWidget* Custom_Down_Navigation(EUINavigation Navigation);
	class UWidget* Custom_Up_Navigation(EUINavigation Navigation);
	void UpdateBackgroundImage();
	void GetSelectedOption(struct FString* OptionID);
	void GetOptionAtIndex(int Index, struct FString* OptionID);
	void SetSelection(const struct FString& OptionID);
	void ClearOptions();
	void AddOption(const struct FString& OptionID);
	void DebugOpen(bool Open);
	void SetCurrentModeText(const struct FString& OptionID);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Init();
	void ExpandList(float Value);
	void RetractList(float Value);
	void OptionClicked(class UW_Leaderboard_Dropdown_Entry_C* ButtonClicked);
	void BndEvt__btn_DropDown_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget);
	void ForceClicked(const struct FString& NewParam);
	void ControllerInUse(bool bUsingController);
	void ExecuteUbergraph_W_Leaderboard_Dropdown(int EntryPoint);
	void OptionSelected__DelegateSignature(const struct FString& OptionID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
