#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXGameStateShootingRange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXGameStateShootingRange.BP_ProjectXGameStateShootingRange_C
// 0x0038 (0x0600 - 0x05C8)
class ABP_ProjectXGameStateShootingRange_C : public AProjectXGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TArray<struct FTrackPlayInfo>                      MusicPlaylist;                                            // 0x05D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               bSentLowTicketWarning;                                    // 0x05E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bSentGameEndingSoonWarning;                               // 0x05E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x05EA(0x0006) MISSED OFFSET
	struct FString                                     BeginMatchTDM;                                            // 0x05F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXGameStateShootingRange.BP_ProjectXGameStateShootingRange_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnTicketCountChanged(TArray<struct FTeamTicketInfo> Tickets);
	void SendLowTicketWarning();
	void SendGameEndingSoonWarning();
	void OnTicketCountUpdate();
	void OnWinnerDecided(int Winner);
	void OnPlayerPawnSpawned(class AProjectXCharacter* Character);
	void CheckForGameEndingSoon();
	void MatchStateChanged(const struct FName& NewMatchState, const struct FName& PreviousMatchState);
	void ExecuteUbergraph_BP_ProjectXGameStateShootingRange(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
