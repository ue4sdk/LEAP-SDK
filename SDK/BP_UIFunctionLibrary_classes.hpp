#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_UIFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UIFunctionLibrary.BP_UIFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_UIFunctionLibrary.BP_UIFunctionLibrary_C"));
		return ptr;
	}


	static void GetCosmeticTypeTable(class UDataTable* FoundTable1, const struct FString& WeaponID, ECosmeticType Selection, class UObject* __WorldContext, class UDataTable** FoundTable);
	static void Init_Team_Colours(class APlayerController* OwningPlayer, class UObject* __WorldContext);
	static void GetTeamColour(int Team, class UObject* __WorldContext, struct FLinearColor* BaseColour, struct FLinearColor* MidColour, struct FLinearColor* DarkColour, struct FLinearColor* EmissiveColour);
	static class UTexture2D* GetSteamAvatar(class APlayerState* PlayerState, class UObject* __WorldContext);
	static void UpdateAudioSettings(class UObject* WorldContextObject, float FadeTimeIn, class UObject* __WorldContext);
	static void GetDateDeltaTime(const struct FDateTime& DateStart, const struct FDateTime& NewParam, class UObject* __WorldContext);
	static void CreateItemButton(const struct FString& ID, const struct FString& WeaponName, ECosmeticType Type, class APlayerController* OwningPlayer, const struct FText& DisplayText, bool Equiped, const struct FScriptDelegate& Clicked, class UObject* __WorldContext, class UW_ItemButton_C** ReturnValue1);
	static class UW_Button_C* Create_Button(const struct FString& ID, const struct FString& Name, class APlayerController* OwningPlayer, const struct FText& DisplayText, TEnumAsByte<E_ButtonStyles> Style, ECosmeticType Type, bool highlight, class UClass* /*UUserWidget*/ Widget_Passthrough, const struct FScriptDelegate& Clicked, class UObject* __WorldContext);
	static void GetPlayerCharacter(class APawn* Pawn, class UObject* __WorldContext, class AProjectXCharacter** AsProject_XCharacter);
	static void GetCapturePointUI(class ACapturePoint* CapturePoint, class UObject* __WorldContext, class UW_CapturePoint_C** CaptureWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
