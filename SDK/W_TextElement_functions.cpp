// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_TextElement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_TextElement.W_TextElement_C.SetStyleFast
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_TextElement_C::SetStyleFast()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.SetStyleFast"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TextElement.W_TextElement_C.SetAllCaps
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_TextElement_C::SetAllCaps()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.SetAllCaps"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TextElement.W_TextElement_C.Set Text Colour
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             InColorAndOpacity              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_TextElement_C::Set_Text_Colour(const struct FSlateColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.Set Text Colour"));

	struct
	{
		struct FSlateColor             InColorAndOpacity;
	} params = {};

	params.InColorAndOpacity = InColorAndOpacity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TextElement.W_TextElement_C.TruncateText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_TextElement_C::TruncateText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.TruncateText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TextElement.W_TextElement_C.Set Wrap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AutoWrap                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_TextElement_C::Set_Wrap(bool AutoWrap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.Set Wrap"));

	struct
	{
		bool                           AutoWrap;
	} params = {};

	params.AutoWrap = AutoWrap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TextElement.W_TextElement_C.Space Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_TextElement_C::Space_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.Space Text"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TextElement.W_TextElement_C.Set Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           All_Caps                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Spaced                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_TextElement_C::Set_Text(const struct FText& Text, bool All_Caps, bool Spaced)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.Set Text"));

	struct
	{
		struct FText                   Text;
		bool                           All_Caps;
		bool                           Spaced;
	} params = {};

	params.Text = Text;
	params.All_Caps = All_Caps;
	params.Spaced = Spaced;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TextElement.W_TextElement_C.Set Style
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Text_Color                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FSlateFontInfo          Font_Style                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UW_TextElement_C::Set_Style(const struct FSlateColor& Text_Color, const struct FSlateFontInfo& Font_Style)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.Set Style"));

	struct
	{
		struct FSlateColor             Text_Color;
		struct FSlateFontInfo          Font_Style;
	} params = {};

	params.Text_Color = Text_Color;
	params.Font_Style = Font_Style;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TextElement.W_TextElement_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_TextElement_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.PreConstruct"));

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


// Function W_TextElement.W_TextElement_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_TextElement_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TextElement.W_TextElement_C.ExecuteUbergraph_W_TextElement
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TextElement_C::ExecuteUbergraph_W_TextElement(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TextElement.W_TextElement_C.ExecuteUbergraph_W_TextElement"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
