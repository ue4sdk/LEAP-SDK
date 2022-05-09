#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DisplayAvatar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_DisplayAvatar.W_DisplayAvatar_C
// 0x0020 (0x0280 - 0x0260)
class UW_DisplayAvatar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_FullAvatarAndBorder_C*                    W_FullAvatarAndBorder;                                    // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FString                                     Short_Code;                                               // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_DisplayAvatar.W_DisplayAvatar_C"));
		return ptr;
	}


	void GetAsset(const struct FString& Key, class UCosmeticAssetBase** FoundAsset);
	void Construct();
	void OnBannerSelected();
	void OnAvatarSelected();
	void ItemSelected(bool bSelected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam);
	void ToggleDisplayAvatarVisibilty(bool Visible);
	void TypeSelected(ECosmeticType Type);
	void UpdateBanner();
	void ExecuteUbergraph_W_DisplayAvatar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
