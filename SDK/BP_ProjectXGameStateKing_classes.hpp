#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXGameStateKing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C
// 0x0030 (0x06A8 - 0x0678)
class ABP_ProjectXGameStateKing_C : public AProjectXGameStateKingofTheHill
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0678(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0680(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             Sound;                                                    // 0x0688(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bSentLowTicketWarning;                                    // 0x0690(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bSentGameEndingSoonWarning;                               // 0x0691(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0692(0x0006) MISSED OFFSET
	TArray<struct FTrackPlayInfo>                      MusicPlaylist;                                            // 0x0698(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXGameStateKing.BP_ProjectXGameStateKing_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnTicketCountChanged(TArray<struct FTeamTicketInfo> Tickets);
	void SendLowTicketWarning();
	void SendGameEndingSoonWarning();
	void UpdateTicketWarnings();
	void OnPlayerPawnSpawned(class AProjectXCharacter* Character);
	void OnWinnerDecided(int Winner);
	void CheckGameEndingSoon();
	void ExecuteUbergraph_BP_ProjectXGameStateKing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
