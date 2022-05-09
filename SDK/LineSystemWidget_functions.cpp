// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LineSystemWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LineSystemWidget.LineSystemWidget_C.ClearColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULineSystemWidget_C::ClearColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.ClearColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LineSystemWidget.LineSystemWidget_C.GetBrushDefaults
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsBackground                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FSlateBrush             Brush                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULineSystemWidget_C::GetBrushDefaults(bool IsBackground, const struct FSlateBrush& Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.GetBrushDefaults"));

	struct
	{
		bool                           IsBackground;
		struct FSlateBrush             Brush;
	} params = {};

	params.IsBackground = IsBackground;
	params.Brush = Brush;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LineSystemWidget.LineSystemWidget_C.UpdateMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       BackgroundMaterial             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULineSystemWidget_C::UpdateMaterial(class UMaterialInstance* Material, class UMaterialInstance* BackgroundMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.UpdateMaterial"));

	struct
	{
		class UMaterialInstance*       Material;
		class UMaterialInstance*       BackgroundMaterial;
	} params = {};

	params.Material = Material;
	params.BackgroundMaterial = BackgroundMaterial;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LineSystemWidget.LineSystemWidget_C.UpdateBrush
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class Uw_ui_linesystem_element_C* LineElement                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateBrush             Brush                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsBackground                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULineSystemWidget_C::UpdateBrush(class Uw_ui_linesystem_element_C* LineElement, const struct FSlateBrush& Brush, bool IsBackground)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.UpdateBrush"));

	struct
	{
		class Uw_ui_linesystem_element_C* LineElement;
		struct FSlateBrush             Brush;
		bool                           IsBackground;
	} params = {};

	params.LineElement = LineElement;
	params.Brush = Brush;
	params.IsBackground = IsBackground;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LineSystemWidget.LineSystemWidget_C.GetBrushMaterialDefaults
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsBackground                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FSlateBrush             Brush                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULineSystemWidget_C::GetBrushMaterialDefaults(bool IsBackground, const struct FSlateBrush& Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.GetBrushMaterialDefaults"));

	struct
	{
		bool                           IsBackground;
		struct FSlateBrush             Brush;
	} params = {};

	params.IsBackground = IsBackground;
	params.Brush = Brush;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LineSystemWidget.LineSystemWidget_C.Set Colors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULineSystemWidget_C::Set_Colors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.Set Colors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LineSystemWidget.LineSystemWidget_C.UpdateStyles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULineSystemWidget_C::UpdateStyles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.UpdateStyles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LineSystemWidget.LineSystemWidget_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            RootPanel                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULineSystemWidget_C::Init(class UPanelWidget* RootPanel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.Init"));

	struct
	{
		class UPanelWidget*            RootPanel;
	} params = {};

	params.RootPanel = RootPanel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LineSystemWidget.LineSystemWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULineSystemWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.PreConstruct"));

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


// Function LineSystemWidget.LineSystemWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULineSystemWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LineSystemWidget.LineSystemWidget_C.ExecuteUbergraph_LineSystemWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULineSystemWidget_C::ExecuteUbergraph_LineSystemWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LineSystemWidget.LineSystemWidget_C.ExecuteUbergraph_LineSystemWidget"));

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
