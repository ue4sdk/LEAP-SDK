#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SquadMembers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_SquadMembers.W_SquadMembers_C
// 0x0040 (0x02A0 - 0x0260)
class UW_SquadMembers_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UVerticalBox*                                VB_SquadMembers;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_AdvancedSquadMember_C*                    W_AdvancedSquadMember;                                    // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_AdvancedSquadMember_C*                    W_AdvancedSquadMember_2;                                  // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_AdvancedSquadMember_C*                    W_AdvancedSquadMember_3;                                  // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_AdvancedSquadMember_C*                    W_AdvancedSquadMember_4;                                  // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_AdvancedSquadMember_C*                    W_AdvancedSquadMember_164;                                // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USquadComponent*                             SquadComponent;                                           // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_SquadMembers.W_SquadMembers_C"));
		return ptr;
	}


	void RefreshList(TArray<class AProjectXPlayerState*> PlayerStates);
	void GetSquadComponent(class USquadComponent** SquadComponent);
	void OnPlayersTeamChanged(class AProjectXPlayerState* PlayerState, unsigned char Team);
	void OnPlayerStateAcquired_A4A300B348BD0F9B7459BE8B230B2164(class APlayerState* PlayerState);
	void OnPlayerStateAcquired_D69486904C72B7E8E78DEFB5FBD2AE5E(class APlayerState* PlayerState);
	void Construct();
	void OnSquadChanged(int SquadID);
	void ExecuteUbergraph_W_SquadMembers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
