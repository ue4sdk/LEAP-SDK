// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_UIFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_UIFunctions.BP_UIFunctions_C.ParallaxCursorCoords
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 SelfReference                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               FractionalCoordinates          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctions_C::ParallaxCursorCoords(class UWidget* SelfReference, class UObject* __WorldContext, struct FVector2D* FractionalCoordinates)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctions.BP_UIFunctions_C.ParallaxCursorCoords"));

	struct
	{
		class UWidget*                 SelfReference;
		class UObject*                 __WorldContext;
		struct FVector2D               FractionalCoordinates;
	} params = {};

	params.SelfReference = SelfReference;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FractionalCoordinates != nullptr)
		*FractionalCoordinates = params.FractionalCoordinates;
}


// Function BP_UIFunctions.BP_UIFunctions_C.ColorSplit
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateColor             Red                            (CPF_Parm, CPF_OutParm)
// struct FSlateColor             Green                          (CPF_Parm, CPF_OutParm)

void UBP_UIFunctions_C::ColorSplit(const struct FSlateColor& Color, class UObject* __WorldContext, struct FSlateColor* Red, struct FSlateColor* Green)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctions.BP_UIFunctions_C.ColorSplit"));

	struct
	{
		struct FSlateColor             Color;
		class UObject*                 __WorldContext;
		struct FSlateColor             Red;
		struct FSlateColor             Green;
	} params = {};

	params.Color = Color;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Red != nullptr)
		*Red = params.Red;
	if (Green != nullptr)
		*Green = params.Green;
}


// Function BP_UIFunctions.BP_UIFunctions_C.FormatPercentage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctions_C::FormatPercentage(float Value, class UObject* __WorldContext, struct FString* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctions.BP_UIFunctions_C.FormatPercentage"));

	struct
	{
		float                          Value;
		class UObject*                 __WorldContext;
		struct FString                 NewParam;
	} params = {};

	params.Value = Value;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_UIFunctions.BP_UIFunctions_C.FormatSpeed
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Speed                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bUseTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UBP_UIFunctions_C::FormatSpeed(float Speed, float Time, bool bUseTime, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctions.BP_UIFunctions_C.FormatSpeed"));

	struct
	{
		float                          Speed;
		float                          Time;
		bool                           bUseTime;
		class UObject*                 __WorldContext;
		struct FString                 ReturnValue;
	} params = {};

	params.Speed = Speed;
	params.Time = Time;
	params.bUseTime = bUseTime;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_UIFunctions.BP_UIFunctions_C.GetSpacer
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Owning_Player                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_Spacer_C*             Spacer                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctions_C::GetSpacer(class APlayerController* Owning_Player, class UObject* __WorldContext, class UW_Spacer_C** Spacer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctions.BP_UIFunctions_C.GetSpacer"));

	struct
	{
		class APlayerController*       Owning_Player;
		class UObject*                 __WorldContext;
		class UW_Spacer_C*             Spacer;
	} params = {};

	params.Owning_Player = Owning_Player;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Spacer != nullptr)
		*Spacer = params.Spacer;
}


// Function BP_UIFunctions.BP_UIFunctions_C.FormatTimeSeconds
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   FormattedString                (CPF_Parm, CPF_OutParm)

void UBP_UIFunctions_C::FormatTimeSeconds(float Seconds, class UObject* __WorldContext, struct FText* FormattedString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctions.BP_UIFunctions_C.FormatTimeSeconds"));

	struct
	{
		float                          Seconds;
		class UObject*                 __WorldContext;
		struct FText                   FormattedString;
	} params = {};

	params.Seconds = Seconds;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FormattedString != nullptr)
		*FormattedString = params.FormattedString;
}


// Function BP_UIFunctions.BP_UIFunctions_C.SetComboBoxByIndex
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UComboBoxString*         ComboBox                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctions_C::SetComboBoxByIndex(int SelectedIndex, class UComboBoxString* ComboBox, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctions.BP_UIFunctions_C.SetComboBoxByIndex"));

	struct
	{
		int                            SelectedIndex;
		class UComboBoxString*         ComboBox;
		class UObject*                 __WorldContext;
	} params = {};

	params.SelectedIndex = SelectedIndex;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BP_UIFunctions.BP_UIFunctions_C.GetComboBoxSelectedIndex
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UComboBoxString*         ComboBox                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SelectedIndex                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctions_C::GetComboBoxSelectedIndex(class UComboBoxString* ComboBox, class UObject* __WorldContext, int* SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctions.BP_UIFunctions_C.GetComboBoxSelectedIndex"));

	struct
	{
		class UComboBoxString*         ComboBox;
		class UObject*                 __WorldContext;
		int                            SelectedIndex;
	} params = {};

	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
}


// Function BP_UIFunctions.BP_UIFunctions_C.SetSliderFromIntRange
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USlider_C*               Slider                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Min                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctions_C::SetSliderFromIntRange(class USlider_C* Slider, int Min, int Max, int Value, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctions.BP_UIFunctions_C.SetSliderFromIntRange"));

	struct
	{
		class USlider_C*               Slider;
		int                            Min;
		int                            Max;
		int                            Value;
		class UObject*                 __WorldContext;
	} params = {};

	params.Slider = Slider;
	params.Min = Min;
	params.Max = Max;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BP_UIFunctions.BP_UIFunctions_C.SliderToIntRange
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class USlider_C*               Slider                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Min                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctions_C::SliderToIntRange(class USlider_C* Slider, int Min, int Max, class UObject* __WorldContext, int* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctions.BP_UIFunctions_C.SliderToIntRange"));

	struct
	{
		class USlider_C*               Slider;
		int                            Min;
		int                            Max;
		class UObject*                 __WorldContext;
		int                            Output;
	} params = {};

	params.Slider = Slider;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
