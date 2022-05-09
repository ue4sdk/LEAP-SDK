// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "w_ui_linesystem_element_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_ui_linesystem_element.w_ui_linesystem_element_C.SetWarning
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          WarningPercent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          WarningPulseSpeed              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Uw_ui_linesystem_element_C::SetWarning(float WarningPercent, float WarningPulseSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.SetWarning"));

	struct
	{
		float                          WarningPercent;
		float                          WarningPulseSpeed;
	} params = {};

	params.WarningPercent = WarningPercent;
	params.WarningPulseSpeed = WarningPulseSpeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateCaps
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AddCaps                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void Uw_ui_linesystem_element_C::UpdateCaps(bool AddCaps)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateCaps"));

	struct
	{
		bool                           AddCaps;
	} params = {};

	params.AddCaps = AddCaps;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.SetDefaults
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Uw_ui_linesystem_element_C::SetDefaults(class UMaterialInstanceDynamic* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.SetDefaults"));

	struct
	{
		class UMaterialInstanceDynamic* Material;
	} params = {};

	params.Material = Material;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.Update Brush
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void Uw_ui_linesystem_element_C::Update_Brush()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.Update Brush"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateMask
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void Uw_ui_linesystem_element_C::UpdateMask()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateMask"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateScale
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void Uw_ui_linesystem_element_C::UpdateScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateScale"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateOrientation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void Uw_ui_linesystem_element_C::UpdateOrientation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateOrientation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateTexture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Uw_ui_linesystem_element_C::UpdateTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateTexture"));

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


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            LineColorOverride              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            GlowColorOverride              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            BackgroundColorOverride        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Uw_ui_linesystem_element_C::UpdateColors(const struct FLinearColor& LineColorOverride, const struct FLinearColor& GlowColorOverride, const struct FLinearColor& BackgroundColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateColors"));

	struct
	{
		struct FLinearColor            LineColorOverride;
		struct FLinearColor            GlowColorOverride;
		struct FLinearColor            BackgroundColorOverride;
	} params = {};

	params.LineColorOverride = LineColorOverride;
	params.GlowColorOverride = GlowColorOverride;
	params.BackgroundColorOverride = BackgroundColorOverride;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void Uw_ui_linesystem_element_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.PreConstruct"));

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


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void Uw_ui_linesystem_element_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void Uw_ui_linesystem_element_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstance*       MaterialInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Uw_ui_linesystem_element_C::UpdateMaterial(class UMaterialInstance* MaterialInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.UpdateMaterial"));

	struct
	{
		class UMaterialInstance*       MaterialInstance;
	} params = {};

	params.MaterialInstance = MaterialInstance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function w_ui_linesystem_element.w_ui_linesystem_element_C.ExecuteUbergraph_w_ui_linesystem_element
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Uw_ui_linesystem_element_C::ExecuteUbergraph_w_ui_linesystem_element(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_linesystem_element.w_ui_linesystem_element_C.ExecuteUbergraph_w_ui_linesystem_element"));

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
