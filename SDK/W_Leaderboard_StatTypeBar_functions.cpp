// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Leaderboard_StatTypeBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.Bumper Left
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_StatTypeBar_C::Bumper_Left()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.Bumper Left"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.Bumper Right
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_StatTypeBar_C::Bumper_Right()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.Bumper Right"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.SetSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_StatTypeBar_C::SetSelection(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.SetSelection"));

	struct
	{
		struct FString                 ID;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.GetCurrentSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SelectionID                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_StatTypeBar_C::GetCurrentSelection(struct FString* SelectionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.GetCurrentSelection"));

	struct
	{
		struct FString                 SelectionID;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SelectionID != nullptr)
		*SelectionID = params.SelectionID;
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.ClearButtonOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_StatTypeBar_C::ClearButtonOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.ClearButtonOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.AddButtonOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_StatTypeBar_C::AddButtonOption(const struct FString& ButtonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.AddButtonOption"));

	struct
	{
		struct FString                 ButtonID;
	} params = {};

	params.ButtonID = ButtonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.SetLast
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_StatTypeBar_C::SetLast()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.SetLast"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Leaderboard_StatTypeBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_StatTypeBar_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.ForceTypeButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           Default                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_StatTypeBar_C::ForceTypeButtonPressed(const struct FString& Type, bool Default)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.ForceTypeButtonPressed"));

	struct
	{
		struct FString                 Type;
		bool                           Default;
	} params = {};

	params.Type = Type;
	params.Default = Default;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.ClearList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_StatTypeBar_C::ClearList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.ClearList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.StatTypeClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_StatTypeBar_C::StatTypeClicked(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.StatTypeClicked"));

	struct
	{
		struct FString                 ID;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.ExecuteUbergraph_W_Leaderboard_StatTypeBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_StatTypeBar_C::ExecuteUbergraph_W_Leaderboard_StatTypeBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.ExecuteUbergraph_W_Leaderboard_StatTypeBar"));

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


// Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.OnTypeButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_StatTypeBar_C::OnTypeButtonPressed__DelegateSignature(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard_StatTypeBar.W_Leaderboard_StatTypeBar_C.OnTypeButtonPressed__DelegateSignature"));

	struct
	{
		struct FString                 ID;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
