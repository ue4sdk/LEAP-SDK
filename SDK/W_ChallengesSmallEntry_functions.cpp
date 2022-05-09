// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ChallengesSmallEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ChallengesSmallEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FChallenge              Challenge                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ChallengesSmallEntry_C::Init(const struct FChallenge& Challenge, bool Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.Init"));

	struct
	{
		struct FChallenge              Challenge;
		bool                           Interactable;
	} params = {};

	params.Challenge = Challenge;
	params.Interactable = Interactable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesSmallEntry_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmallEntry_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.Fade"));

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


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.OnFadeOutFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmallEntry_C::OnFadeOutFinished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.OnFadeOutFinished"));

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


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.UpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmallEntry_C::UpdateProgress(int Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.UpdateProgress"));

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


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.ToggleProgressBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesSmallEntry_C::ToggleProgressBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.ToggleProgressBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.ToggleRerollButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesSmallEntry_C::ToggleRerollButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.ToggleRerollButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.BndEvt__W_ClaimButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmallEntry_C::BndEvt__W_ClaimButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.BndEvt__W_ClaimButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

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


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.BndEvt__W_RerollButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmallEntry_C::BndEvt__W_RerollButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.BndEvt__W_RerollButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature"));

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


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.BndEvt__W_ClaimButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ChallengesSmallEntry_C::BndEvt__W_ClaimButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.BndEvt__W_ClaimButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.BndEvt__W_ClaimButton_K2Node_ComponentBoundEvent_3_OnHoveredOff__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ChallengesSmallEntry_C::BndEvt__W_ClaimButton_K2Node_ComponentBoundEvent_3_OnHoveredOff__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.BndEvt__W_ClaimButton_K2Node_ComponentBoundEvent_3_OnHoveredOff__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.ChallengeClaimed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesSmallEntry_C::ChallengeClaimed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.ChallengeClaimed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.UpdateClaimButtonVisiblity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesSmallEntry_C::UpdateClaimButtonVisiblity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.UpdateClaimButtonVisiblity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.ExecuteUbergraph_W_ChallengesSmallEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmallEntry_C::ExecuteUbergraph_W_ChallengesSmallEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.ExecuteUbergraph_W_ChallengesSmallEntry"));

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


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.OnChallengeRerolled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChallengeID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmallEntry_C::OnChallengeRerolled__DelegateSignature(const struct FString& ChallengeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.OnChallengeRerolled__DelegateSignature"));

	struct
	{
		struct FString                 ChallengeID;
	} params = {};

	params.ChallengeID = ChallengeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.OnChallengeClaim__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChallengeID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmallEntry_C::OnChallengeClaim__DelegateSignature(const struct FString& ChallengeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.OnChallengeClaim__DelegateSignature"));

	struct
	{
		struct FString                 ChallengeID;
	} params = {};

	params.ChallengeID = ChallengeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.FadeOutFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChallengeID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmallEntry_C::FadeOutFinished__DelegateSignature(const struct FString& ChallengeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmallEntry.W_ChallengesSmallEntry_C.FadeOutFinished__DelegateSignature"));

	struct
	{
		struct FString                 ChallengeID;
	} params = {};

	params.ChallengeID = ChallengeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
