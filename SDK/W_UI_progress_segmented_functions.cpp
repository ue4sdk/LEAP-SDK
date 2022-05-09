// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_progress_segmented_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.UpdateFillProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Progress_Segmented_C::UpdateFillProgress(int Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.UpdateFillProgress"));

	struct
	{
		int                            Progress;
	} params = {};

	params.Progress = Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_Progress_Segmented_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.PreConstruct"));

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


// Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_UI_Progress_Segmented_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_Progress_Segmented_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.UpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Progress_Segmented_C::UpdateProgress(int Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.UpdateProgress"));

	struct
	{
		int                            Progress;
	} params = {};

	params.Progress = Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.ExecuteUbergraph_W_UI_Progress_Segmented
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Progress_Segmented_C::ExecuteUbergraph_W_UI_Progress_Segmented(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_progress_segmented.W_UI_Progress_Segmented_C.ExecuteUbergraph_W_UI_Progress_Segmented"));

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
