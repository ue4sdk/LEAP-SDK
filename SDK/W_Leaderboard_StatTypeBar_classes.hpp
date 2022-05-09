#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Leaderboard_StatTypeBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C
// 0x00AC (0x030C - 0x0260)
class UW_Leaderboard_StatTypeBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UHorizontalBox*                              VB_Nav;                                                   // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_Leaderboard_StatType_Button_C*            W_Leaderboard_StatType_Button;                            // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_Leaderboard_StatType_Button_C*            W_Leaderboard_StatType_Button_2;                          // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnTypeButtonPressed;                                      // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TMap<struct FString, class UW_Leaderboard_StatType_Button_C*> TypeButtons;                                              // 0x0290(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<struct FString>                             ButtonIDs;                                                // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FString                                     CurrentSelection;                                         // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UW_Leaderboard_StatType_Button_C*            CurrentActiveButton;                                      // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                CurrentNavPos;                                            // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C"));
		return ptr;
	}


	void Bumper_Left();
	void Bumper_Right();
	void SetSelection(const struct FString& ID);
	void GetCurrentSelection(struct FString* SelectionID);
	void ClearButtonOptions();
	void AddButtonOption(const struct FString& ButtonID);
	void SetLast();
	void Construct();
	void Init();
	void ForceTypeButtonPressed(const struct FString& Type, bool Default);
	void ClearList();
	void StatTypeClicked(const struct FString& ID);
	void ExecuteUbergraph_W_Leaderboard_StatTypeBar(int EntryPoint);
	void OnTypeButtonPressed__DelegateSignature(const struct FString& ID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
