#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_KingOfTheHillUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_KingOfTheHillUI.W_KingOfTheHillUI_C
// 0x0130 (0x03A8 - 0x0278)
class UW_KingOfTheHillUI_C : public UHUDBasicUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_CapturingUI_C*                            BP_CapturingUI;                                           // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TicketCount_C*                            BP_TicketCount;                                           // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_MatchTimer_C*                             W_MatchTimer;                                             // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class ACapturePoint*>                       ControlPoints;                                            // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FText                                       TimeString;                                               // 0x02A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class ABP_ProjectXGameStateKing_C*                 GameState;                                                // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<EKingOfTheHillPhase, struct FText>            PhaseText;                                                // 0x02C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       EnemyOwnedCapture;                                        // 0x0318(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AllyOwnedCapture;                                         // 0x0330(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AllyBlankCapture;                                         // 0x0348(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       EnemyBlankCapture;                                        // 0x0360(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       EnemyTicketsLow;                                          // 0x0378(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AllyTicketsLow;                                           // 0x0390(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_KingOfTheHillUI.W_KingOfTheHillUI_C"));
		return ptr;
	}


	void SelectUnformattedText(int CaptureTeam, const struct FText& EnemyText, const struct FText& AllyText, struct FText* TeamName);
	void GetNotificationText(class ACapturePoint* CapturePoint, int OwningTeam, int CaptureTeam, struct FText* Notification);
	void Get_King_Of_the_Hill_Notification_Text(EKingOfTheHillPhase Phase, TArray<class ACapturePoint*>* Points, struct FText* Result);
	void OnGameStateAcquired_E9C754964FDB378424B5748B7FDAF92C(class AGameState* GameState);
	void Construct();
	void OnControlPointEvent(class ACapturePoint* CapturePoint, int OwningTeam, int CaptureTeam);
	void OnMatchStateEvent(const struct FName& NewMatchState, const struct FName& PreviousMatchState);
	void OnPhaseChanged(const struct FKingOfTheHillPhaseInfo& PhaseInfo);
	void PreConstruct(bool IsDesignTime);
	void OnIconsUpdated();
	void LowOnTickets(class AProjectXPlayerController* PlayerController, int Data);
	void ExecuteUbergraph_W_KingOfTheHillUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
