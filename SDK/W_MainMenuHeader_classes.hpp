#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_MainMenuHeader_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_MainMenuHeader.W_MainMenuHeader_C
// 0x0110 (0x0370 - 0x0260)
class UW_MainMenuHeader_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            ShowPlayBtn;                                              // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_58;                                                 // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Tutorial1;                                                // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_btnPlay_C*                                W_btnPlay;                                                // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_MainMenu_NavigationList_C*                W_MainMenu_NavigationList;                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Play_Button_Clicked;                                      // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Store_Button_Clicked;                                     // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Stats_Button_Clicked;                                     // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Armory_Button_Clicked;                                    // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UAdvancedUserWidget*                         ParentWidget;                                             // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Challenges_Button_Clicked;                                // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TMap<TEnumAsByte<EMainMenuOptions>, class UW_Button_C*> Buttons;                                                  // 0x02E8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FMulticastScriptDelegate                    LeaderboardButtonClicked;                                 // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    AnyNavButtonClicked;                                      // 0x0348(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    LoadoutButtonClicked;                                     // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UW_PlaySubmenu_C*                            Play_Submenu;                                             // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_MainMenuHeader.W_MainMenuHeader_C"));
		return ptr;
	}


	void UpdateCurrency(const struct FText& Currency);
	void UpdateParentWidget(class UAdvancedUserWidget* ParentWidget);
	void OnPartyStatusUpdated(EPartyStatus OutPartyStatus);
	void SetActiveButton(TEnumAsByte<EMainMenuOptions> MenuOption);
	void BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_3_ArmoryButtonClicked__DelegateSignature();
	void BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_4_LeaderboardButtonClicked__DelegateSignature();
	void BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_5_StatsButtonClicked__DelegateSignature();
	void BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_10_StoreButtonClicked__DelegateSignature();
	void BndEvt__W_btnPlay_K2Node_ComponentBoundEvent_0_PlayClicked__DelegateSignature();
	void OnMatchmakingInfoupdated(const struct FString& GameType);
	void DisableButtons();
	void ExecuteUbergraph_W_MainMenuHeader(int EntryPoint);
	void LoadoutButtonClicked__DelegateSignature();
	void AnyNavButtonClicked__DelegateSignature(class UClass* /*UAdvancedUserWidget*/ AdvancedUserWidgetClass);
	void LeaderboardButtonClicked__DelegateSignature();
	void Challenges_Button_Clicked__DelegateSignature();
	void Armory_Button_Clicked__DelegateSignature();
	void Stats_Button_Clicked__DelegateSignature();
	void Store_Button_Clicked__DelegateSignature();
	void Play_Button_Clicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
