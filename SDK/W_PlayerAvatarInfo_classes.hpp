#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayerAvatarInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_PlayerAvatarInfo.W_PlayerAvatarInfo_C
// 0x0028 (0x0288 - 0x0260)
class UW_PlayerAvatarInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class URetainerBox*                                Retainer_Banner;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            txt_PlayerName;                                           // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_PlayerAvatarInfo_Earnings_C*              W_PlayerAvatarInfo_Earnings;                              // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_PlayerBanner_C*                           W_PlayerBanner;                                           // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_PlayerAvatarInfo.W_PlayerAvatarInfo_C"));
		return ptr;
	}


	void OnPlayerStateAcquired_246ED6794B9A2D7BF3D0CDAE875B98F9(class APlayerState* PlayerState);
	void Construct();
	void UpdateCurrency();
	void UpdateXP();
	void SetPlayerName();
	void UpdateBanner();
	void SetName(const struct FText& Name);
	void OnStatsLoaded(const struct FString& PlayerID);
	void ToggleStats(bool Visible);
	void SetBanner(class UCosmeticAssetBase* NewParam);
	void OnProgressionInfoLoaded();
	void ExecuteUbergraph_W_PlayerAvatarInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
