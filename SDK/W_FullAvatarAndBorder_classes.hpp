#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_FullAvatarAndBorder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_FullAvatarAndBorder.W_FullAvatarAndBorder_C
// 0x0018 (0x0278 - 0x0260)
class UW_FullAvatarAndBorder_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_PlayerAvatar_C*                           W_PlayerAvatar_Main;                                      // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_PlayerAvatarInfo_C*                       W_PlayerAvatarInfo;                                       // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_FullAvatarAndBorder.W_FullAvatarAndBorder_C"));
		return ptr;
	}


	void UpdateAvatar(class UTexture2D* Avatar);
	void InitLocally();
	void UpdateUserInfo(int Level);
	void SetName(const struct FText& Name);
	void ToggleStats(bool Visible);
	void SetBanner(class UCosmeticAssetBase* Asset);
	void ExecuteUbergraph_W_FullAvatarAndBorder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
