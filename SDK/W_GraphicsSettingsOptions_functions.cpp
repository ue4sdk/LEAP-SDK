// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_GraphicsSettingsOptions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.ConfirmedResolutionMatchesSettings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ConfirmedResolutionMatchesSettings (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_GraphicsSettingsOptions_C::ConfirmedResolutionMatchesSettings(bool* ConfirmedResolutionMatchesSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.ConfirmedResolutionMatchesSettings"));

	struct
	{
		bool                           ConfirmedResolutionMatchesSettings;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ConfirmedResolutionMatchesSettings != nullptr)
		*ConfirmedResolutionMatchesSettings = params.ConfirmedResolutionMatchesSettings;
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.DoResolutionsMatch
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FIntPoint               Resolution1                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FIntPoint               Resolution2                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Equal                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_GraphicsSettingsOptions_C::DoResolutionsMatch(const struct FIntPoint& Resolution1, const struct FIntPoint& Resolution2, bool* Equal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.DoResolutionsMatch"));

	struct
	{
		struct FIntPoint               Resolution1;
		struct FIntPoint               Resolution2;
		bool                           Equal;
	} params = {};

	params.Resolution1 = Resolution1;
	params.Resolution2 = Resolution2;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Equal != nullptr)
		*Equal = params.Equal;
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.GetResolutionFromArrowSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            SelectionIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FIntPoint               SelectedResolution             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GraphicsSettingsOptions_C::GetResolutionFromArrowSelection(int SelectionIndex, struct FIntPoint* SelectedResolution)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.GetResolutionFromArrowSelection"));

	struct
	{
		int                            SelectionIndex;
		struct FIntPoint               SelectedResolution;
	} params = {};

	params.SelectionIndex = SelectionIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SelectedResolution != nullptr)
		*SelectedResolution = params.SelectedResolution;
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.ResolutionToString
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FIntPoint               Resolution                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 String                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_GraphicsSettingsOptions_C::ResolutionToString(const struct FIntPoint& Resolution, struct FString* String)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.ResolutionToString"));

	struct
	{
		struct FIntPoint               Resolution;
		struct FString                 String;
	} params = {};

	params.Resolution = Resolution;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (String != nullptr)
		*String = params.String;
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.BuildResolutionCombobox
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FIntPoint               CurrentResolution              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GraphicsSettingsOptions_C::BuildResolutionCombobox(const struct FIntPoint& CurrentResolution)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.BuildResolutionCombobox"));

	struct
	{
		struct FIntPoint               CurrentResolution;
	} params = {};

	params.CurrentResolution = CurrentResolution;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_GraphicsSettingsOptions_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.PopulateOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GraphicsSettingsOptions_C::PopulateOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.PopulateOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.ApplyDefaults
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GraphicsSettingsOptions_C::ApplyDefaults()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.ApplyDefaults"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.ApplySettings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GraphicsSettingsOptions_C::ApplySettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.ApplySettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.RejectResolution
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GraphicsSettingsOptions_C::RejectResolution()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.RejectResolution"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.OnAcceptResolution
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GraphicsSettingsOptions_C::OnAcceptResolution()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.OnAcceptResolution"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.OnRejectResolution
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GraphicsSettingsOptions_C::OnRejectResolution()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.OnRejectResolution"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.ExecuteUbergraph_W_GraphicsSettingsOptions
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GraphicsSettingsOptions_C::ExecuteUbergraph_W_GraphicsSettingsOptions(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GraphicsSettingsOptions.W_GraphicsSettingsOptions_C.ExecuteUbergraph_W_GraphicsSettingsOptions"));

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
