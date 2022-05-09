#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Party_List_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Party_List.W_Party_List_C
// 0x00A2 (0x0302 - 0x0260)
class UW_Party_List_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UHorizontalBox*                              HB_PartyList;                                             // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_PartySlotInfo_C*                          W_PartySlotInfo;                                          // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_Party_AddButton_C*                        W_PlayerInfo_Party_AddButton;                             // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TMap<class ASteamBeaconPlayerState*, class UW_PartySlotInfo_C*> CurrentMembersMap;                                        // 0x0280(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	int                                                CurrentPartySize;                                         // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<int>                                        PartyIndex;                                               // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UW_PartyPanel_C*                             PartyPanel;                                               // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ASteamBeaconPlayerState*>             PartyMembers;                                             // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	EPartyStatus                                       CurrentPartyStatus;                                       // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsPartyFull;                                              // 0x0301(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_Party_List.W_Party_List_C"));
		return ptr;
	}


	void UpdateAddButtonVisibility();
	void GetPartyFull();
	void Finished_8D15BD94415AC82CDCB2FD985B2B348B();
	void Construct();
	void RemoveMember(class UW_PartySlotInfo_C* Member);
	void AddMember(class ASteamBeaconPlayerState* SteamBeaconPlayerState);
	void UpdateParty(EPartyStatus CurrentPartyStatus, TArray<class ASteamBeaconPlayerState*> PartyMembers);
	void MemberOptionMenuUpdate(class ASteamBeaconPlayerState* MemberID);
	void BndEvt__W_PlayerInfo_Party_AddButton_K2Node_ComponentBoundEvent_0_AddPartyClicked__DelegateSignature();
	void ToggleShowFriendsList(bool InShowFriendsList);
	void Close_All_Options();
	void ExecuteUbergraph_W_Party_List(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
