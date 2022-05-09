// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_XP_CalcEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.SequenceEvent__ENTRYPOINTW_UI_XP_CalcEntry_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_XP_CalcEntry_C::SequenceEvent__ENTRYPOINTW_UI_XP_CalcEntry_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.SequenceEvent__ENTRYPOINTW_UI_XP_CalcEntry_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_XP_CalcEntry_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.Finished_89F3269F46CC25F8556505B0CA85D7B7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_XP_CalcEntry_C::Finished_89F3269F46CC25F8556505B0CA85D7B7()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.Finished_89F3269F46CC25F8556505B0CA85D7B7"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.Finished_0C75C380447FBDB3E617EC8CED04F770
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_XP_CalcEntry_C::Finished_0C75C380447FBDB3E617EC8CED04F770()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.Finished_0C75C380447FBDB3E617EC8CED04F770"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_UI_XP_CalcEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   VictimName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            XP                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   LabelText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          TelegraphDuration              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Display_Duration               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Multiplier                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_XP_CalcEntry_C::Init(const struct FText& VictimName, int XP, const struct FText& LabelText, float TelegraphDuration, float Display_Duration, float Multiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.Init"));

	struct
	{
		struct FText                   VictimName;
		int                            XP;
		struct FText                   LabelText;
		float                          TelegraphDuration;
		float                          Display_Duration;
		float                          Multiplier;
	} params = {};

	params.VictimName = VictimName;
	params.XP = XP;
	params.LabelText = LabelText;
	params.TelegraphDuration = TelegraphDuration;
	params.Display_Duration = Display_Duration;
	params.Multiplier = Multiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.UpdateXP
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_XP_CalcEntry_C::UpdateXP(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.UpdateXP"));

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


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.PlayFadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_XP_CalcEntry_C::PlayFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.PlayFadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.CancelFadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_XP_CalcEntry_C::CancelFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.CancelFadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.FinishedTotal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_XP_CalcEntry_C::FinishedTotal(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.FinishedTotal"));

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


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.CreateCalcEntryTextWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_XP_CalcEntry_C::CreateCalcEntryTextWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.CreateCalcEntryTextWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.FadeOutDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_XP_CalcEntry_C::FadeOutDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.FadeOutDone"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.ExecuteUbergraph_W_UI_XP_CalcEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_XP_CalcEntry_C::ExecuteUbergraph_W_UI_XP_CalcEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.ExecuteUbergraph_W_UI_XP_CalcEntry"));

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


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.OnTotalExpDisplayed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Exp                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_XP_CalcEntry_C::OnTotalExpDisplayed__DelegateSignature(float Exp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.OnTotalExpDisplayed__DelegateSignature"));

	struct
	{
		float                          Exp;
	} params = {};

	params.Exp = Exp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.OnHidden__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_XP_CalcEntry_C::OnHidden__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_XP_CalcEntry.W_UI_XP_CalcEntry_C.OnHidden__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
