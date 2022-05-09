#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_BaseControlUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_BaseControlUI.W_BaseControlUI_C
// 0x00D0 (0x0348 - 0x0278)
class UW_BaseControlUI_C : public UHUDBasicUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_CapturingUI_C*                            BP_CapturingUI;                                           // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TicketCount_C*                            BP_TicketCount;                                           // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_MatchTimer_C*                             W_MatchTimer;                                             // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class ACapturePoint*>                       ControlPoints;                                            // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class ABP_ProjectXGameStateBaseControl_C*          GameState;                                                // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       AllyOwnedCapture;                                         // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       EnemyOwnedCapture;                                        // 0x02C8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AllyBlankCapture;                                         // 0x02E0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       EnemyBlankCapture;                                        // 0x02F8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AProjectXPlayerState*                        PlayerState;                                              // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       EnemyTicketsLow;                                          // 0x0318(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AllyTicketsLow;                                           // 0x0330(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_BaseControlUI.W_BaseControlUI_C"));
		return ptr;
	}


	void SelectUnformattedText(int CaptureTeam, const struct FText& EnemyText, const struct FText& AllyText, struct FText* TeamName);
	void GetNotificationText(class ACapturePoint* CapturePoint, int OwningTeam, int CaptureTeam, struct FText* Notification);
	void OnGameStateAcquired_9E9A8D844E809847D455099504A59B54(class AGameState* GameState);
	void OnControlPointEvent(class ACapturePoint* CapturePoint, int OwningTeam, int CaptureTeam);
	void Construct();
	void CustomEvent_1(const struct FName& NewMatchState, const struct FName& PreviousMatchState);
	void PreConstruct(bool IsDesignTime);
	void LowTicketCount(class AProjectXPlayerController* PlayerController, int Data);
	void ExecuteUbergraph_W_BaseControlUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
