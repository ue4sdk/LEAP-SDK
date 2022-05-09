#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXGameStateBaseControl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C
// 0x0032 (0x0642 - 0x0610)
class ABP_ProjectXGameStateBaseControl_C : public AProjectXGameStateBaseControl
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0618(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             Sound;                                                    // 0x0620(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bSentLowTicketWarning;                                    // 0x0628(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bSentGameEndingSoonWarning;                               // 0x0629(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x062A(0x0006) MISSED OFFSET
	TArray<struct FTrackPlayInfo>                      MusicPlaylist;                                            // 0x0630(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               TeamZeroHasBaseMajority;                                  // 0x0640(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               TeamOneHasBaseMajority;                                   // 0x0641(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXGameStateBaseControl.BP_ProjectXGameStateBaseControl_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnTicketCountChanged(TArray<struct FTeamTicketInfo> Tickets);
	void SendLowTicketWarning();
	void OnTicketCountUpdate_2();
	void OnWinnerDecided(int Winner);
	void OnPlayerPawnSpawned(class AProjectXCharacter* Character);
	void CheckMatchEndingSoon();
	void CheckMatchHalfwayMark();
	void ExecuteUbergraph_BP_ProjectXGameStateBaseControl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
