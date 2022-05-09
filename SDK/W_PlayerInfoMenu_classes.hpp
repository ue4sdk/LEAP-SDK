#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayerInfoMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_PlayerInfoMenu.W_PlayerInfoMenu_C
// 0x0024 (0x0284 - 0x0260)
class UW_PlayerInfoMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_FullAvatarAndBorder_C*                    W_FullAvatarAndBorder;                                    // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_Party_List_C*                             W_PlayerInfo_PartyList;                                   // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynMat_XPBar;                                             // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              XPProgress;                                               // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_PlayerInfoMenu.W_PlayerInfoMenu_C"));
		return ptr;
	}


	int GetStat(EStatNames Enum);
	void OnPlayerStateAcquired_E98E4405419553B07667D4B4A3D3C080(class APlayerState* PlayerState);
	void Construct();
	void OnGeneralCosmeticsChanged(const struct FGeneralCosmetics& GeneralCosmetics, const struct FString& PlayerID);
	void OnAvatarUpdated();
	void OnPlayerInfoStatsLoaded(const struct FString& PlayerID);
	void OnItemsEquipped(ECosmeticType Type, const struct FString& ShortCode, const struct FString& EquipKey);
	void OnInventoryLoaded(bool bSucess);
	void ExecuteUbergraph_W_PlayerInfoMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
