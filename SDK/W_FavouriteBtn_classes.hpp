#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_FavouriteBtn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_FavouriteBtn.W_FavouriteBtn_C
// 0x0018 (0x0278 - 0x0260)
class UW_FavouriteBtn_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_Button_C*                                 W_Button;                                                 // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UClass* /*AProjectXCharacter*/               PlayerClass;                                              // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_FavouriteBtn.W_FavouriteBtn_C"));
		return ptr;
	}


	void Construct();
	void OnClicked(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget);
	void UpdateFavouriteClass();
	void OnInfoLoaded(const struct FSharedPlayerInfo& PlayerInfo, const struct FString& PlayerID);
	void ExecuteUbergraph_W_FavouriteBtn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
