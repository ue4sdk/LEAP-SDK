#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SquadList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_SquadList.W_SquadList_C
// 0x0060 (0x02C0 - 0x0260)
class UW_SquadList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UUniformGridPanel*                           VB_SquadList;                                             // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USquadComponent*                             SquadComponent;                                           // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AProjectXPlayerState*                        PlayerState;                                              // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    CurrentSquadInfo;                                         // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    SquadChanged;                                             // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<class UW_SquadContainer_C*>                 SquadContainers;                                          // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FMulticastScriptDelegate                    OnSquadChangeConfirmed;                                   // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_SquadList.W_SquadList_C"));
		return ptr;
	}


	void CheckIfCurrentSquad(int SquadID, bool* IsCurrentSquad);
	void OnPlayerStateAcquired_C78901A84F2FBEDDEEFC14869F3BB50B(class APlayerState* PlayerState);
	void Construct();
	void OnSquadListChanged();
	void OnPlayersTeamChanged(class AProjectXPlayerState* PlayerState, unsigned char Team);
	void Init();
	void Squad_Change_Confirmed();
	void ExecuteUbergraph_W_SquadList(int EntryPoint);
	void OnSquadChangeConfirmed__DelegateSignature();
	void SquadChanged__DelegateSignature(int SquadID, int SquadNumber);
	void CurrentSquadInfo__DelegateSignature(int CurrentSquadID, int CurrentSquadNumber);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
