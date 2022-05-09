#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_UIFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UIFunctions.BP_UIFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UIFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_UIFunctions.BP_UIFunctions_C"));
		return ptr;
	}


	static void ParallaxCursorCoords(class UWidget* SelfReference, class UObject* __WorldContext, struct FVector2D* FractionalCoordinates);
	static void ColorSplit(const struct FSlateColor& Color, class UObject* __WorldContext, struct FSlateColor* Red, struct FSlateColor* Green);
	static void FormatPercentage(float Value, class UObject* __WorldContext, struct FString* NewParam);
	static struct FString FormatSpeed(float Speed, float Time, bool bUseTime, class UObject* __WorldContext);
	static void GetSpacer(class APlayerController* Owning_Player, class UObject* __WorldContext, class UW_Spacer_C** Spacer);
	static void FormatTimeSeconds(float Seconds, class UObject* __WorldContext, struct FText* FormattedString);
	static void SetComboBoxByIndex(int SelectedIndex, class UComboBoxString* ComboBox, class UObject* __WorldContext);
	static void GetComboBoxSelectedIndex(class UComboBoxString* ComboBox, class UObject* __WorldContext, int* SelectedIndex);
	static void SetSliderFromIntRange(class USlider_C* Slider, int Min, int Max, int Value, class UObject* __WorldContext);
	static void SliderToIntRange(class USlider_C* Slider, int Min, int Max, class UObject* __WorldContext, int* Output);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
