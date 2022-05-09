// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Button.W_Button_C.GetHoverDynamicMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::GetHoverDynamicMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.GetHoverDynamicMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetIconBrushByMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Button_C::SetIconBrushByMaterial(class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetIconBrushByMaterial"));

	struct
	{
		class UMaterialInterface*      Material;
	} params = {};

	params.Material = Material;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetIconVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Button_C::SetIconVisibility(bool ShowIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetIconVisibility"));

	struct
	{
		bool                           ShowIcon;
	} params = {};

	params.ShowIcon = ShowIcon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetIconBrushByTexture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Button_C::SetIconBrushByTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetIconBrushByTexture"));

	struct
	{
		class UTexture2D*              Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetIconBrush
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_Button_C::SetIconBrush(const struct FSlateBrush& IconBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetIconBrush"));

	struct
	{
		struct FSlateBrush             IconBrush;
	} params = {};

	params.IconBrush = IconBrush;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetHeight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMinMaxAbsolute>   HeightRule                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USizeBox*                SizeBoxWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Button_C::SetHeight(TEnumAsByte<EMinMaxAbsolute> HeightRule, class USizeBox* SizeBoxWidget, float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetHeight"));

	struct
	{
		TEnumAsByte<EMinMaxAbsolute>   HeightRule;
		class USizeBox*                SizeBoxWidget;
		float                          Height;
	} params = {};

	params.HeightRule = HeightRule;
	params.SizeBoxWidget = SizeBoxWidget;
	params.Height = Height;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMinMaxAbsolute>   WidthRule                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USizeBox*                SizeBoxWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Button_C::SetWidth(TEnumAsByte<EMinMaxAbsolute> WidthRule, class USizeBox* SizeBoxWidget, float Width)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetWidth"));

	struct
	{
		TEnumAsByte<EMinMaxAbsolute>   WidthRule;
		class USizeBox*                SizeBoxWidget;
		float                          Width;
	} params = {};

	params.WidthRule = WidthRule;
	params.SizeBoxWidget = SizeBoxWidget;
	params.Width = Width;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::SetSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetSize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Button_C::SetActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetActive"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.GetDefaults
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::GetDefaults()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.GetDefaults"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.UpdateFont
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateFontInfo          SlateFontInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FSlateFontInfo          SlateFontInfo1                 (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UW_Button_C::UpdateFont(const struct FSlateFontInfo& SlateFontInfo, struct FSlateFontInfo* SlateFontInfo1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.UpdateFont"));

	struct
	{
		struct FSlateFontInfo          SlateFontInfo;
		struct FSlateFontInfo          SlateFontInfo1;
	} params = {};

	params.SlateFontInfo = SlateFontInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SlateFontInfo1 != nullptr)
		*SlateFontInfo1 = params.SlateFontInfo1;
}


// Function W_Button.W_Button_C.Update Style
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ButtonStyles>    ButtonStyle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           UseCustom                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FST_ButtonStyles        CustomStyle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UW_Button_C::Update_Style(TEnumAsByte<E_ButtonStyles> ButtonStyle, bool UseCustom, const struct FST_ButtonStyles& CustomStyle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.Update Style"));

	struct
	{
		TEnumAsByte<E_ButtonStyles>    ButtonStyle;
		bool                           UseCustom;
		struct FST_ButtonStyles        CustomStyle;
	} params = {};

	params.ButtonStyle = ButtonStyle;
	params.UseCustom = UseCustom;
	params.CustomStyle = CustomStyle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetWarning
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Button_C::SetWarning(bool TRUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetWarning"));

	struct
	{
		bool                           TRUE;
	} params = {};

	params.TRUE = TRUE;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::SetStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetStyle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.SetText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_Button_C::SetText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.SetText"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.ColorSplit
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FSlateColor             Red                            (CPF_Parm, CPF_OutParm)
// struct FSlateColor             Green                          (CPF_Parm, CPF_OutParm)

void UW_Button_C::ColorSplit(const struct FSlateColor& Color, struct FSlateColor* Red, struct FSlateColor* Green)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.ColorSplit"));

	struct
	{
		struct FSlateColor             Color;
		struct FSlateColor             Red;
		struct FSlateColor             Green;
	} params = {};

	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Red != nullptr)
		*Red = params.Red;
	if (Green != nullptr)
		*Green = params.Green;
}


// Function W_Button.W_Button_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Button_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.highlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Button_C::highlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.highlight"));

	struct
	{
		bool                           IsHighlighted;
	} params = {};

	params.IsHighlighted = IsHighlighted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.ToggleEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Button_C::ToggleEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.ToggleEnabled"));

	struct
	{
		bool                           IsEnabled;
	} params = {};

	params.IsEnabled = IsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.ForceHoverState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::ForceHoverState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.ForceHoverState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.ForceButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::ForceButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.ForceButtonClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Button_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.BndEvt__btn_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Button_C::BndEvt__btn_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.BndEvt__btn_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.BndEvt__btn_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Button_C::BndEvt__btn_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.BndEvt__btn_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.BndEvt__btn_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Button_C::BndEvt__btn_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.BndEvt__btn_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.BndEvt__btn_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Button_C::BndEvt__btn_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.BndEvt__btn_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.BndEvt__btn_Button_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Button_C::BndEvt__btn_Button_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.BndEvt__btn_Button_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.Depressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Button_C::Depressed(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.Depressed"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.Release
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Button_C::Release(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.Release"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.ExecuteUbergraph_W_Button
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Button_C::ExecuteUbergraph_W_Button(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.ExecuteUbergraph_W_Button"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.OnHoveredOff__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::OnHoveredOff__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.OnHoveredOff__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.Released__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::Released__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.Released__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.Pressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Button_C::Pressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.Pressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Button.W_Button_C.Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Button_C::Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Button.W_Button_C.Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
