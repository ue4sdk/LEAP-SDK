#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_TeamDeathmatchUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_TeamDeathmatchUI.W_TeamDeathmatchUI_C
// 0x00A0 (0x0318 - 0x0278)
class UW_TeamDeathmatchUI_C : public UHUDBasicUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UW_TicketCount_C*                            BP_TicketCount;                                           // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_MatchTimer_C*                             W_MatchTimer;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class AProjectXGameStateAssault*                   GameState;                                                // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<EAssaultRole, struct FText>                   RoleBaseText;                                             // 0x0298(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AllyTicketsLow;                                           // 0x02E8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       EnemyTicketsLow;                                          // 0x0300(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_TeamDeathmatchUI.W_TeamDeathmatchUI_C"));
		return ptr;
	}


	void CreatePointMessage(TEnumAsByte<EAssaultEventEnum> Selection, class AAssaultPoint* AssaultPoint, struct FText* FormattedMessage);
	void CreateActivePointMessage(struct FText* Result);
	void OnGameStateAcquired_AD256AF8476C3FAF213A0D81DDA24E38(class AGameState* GameState);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void LowOnTickets(class AProjectXPlayerController* PlayerController, int Data);
	void ExecuteUbergraph_W_TeamDeathmatchUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
