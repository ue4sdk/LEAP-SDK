// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ChallengesSmall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ChallengesSmall.W_ChallengesSmall_C.UpdateChallengeMap
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, struct FChallenge> TargetMap                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_ChallengesSmall_C::UpdateChallengeMap(TMap<struct FString, struct FChallenge> TargetMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.UpdateChallengeMap"));

	struct
	{
		TMap<struct FString, struct FChallenge> TargetMap;
	} params = {};

	params.TargetMap = TargetMap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmall.W_ChallengesSmall_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ChallengesSmall_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.PreConstruct"));

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


// Function W_ChallengesSmall.W_ChallengesSmall_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ChallengesSmall_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmall.W_ChallengesSmall_C.OnChallengesLoaded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTimedChallenges        Challenges                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmall_C::OnChallengesLoaded(const struct FTimedChallenges& Challenges, const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.OnChallengesLoaded"));

	struct
	{
		struct FTimedChallenges        Challenges;
		struct FString                 PlayerID;
	} params = {};

	params.Challenges = Challenges;
	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmall.W_ChallengesSmall_C.OnChallengeReroll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChallengeID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmall_C::OnChallengeReroll(const struct FString& ChallengeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.OnChallengeReroll"));

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


// Function W_ChallengesSmall.W_ChallengesSmall_C.OnChallengeClaim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChallengeID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmall_C::OnChallengeClaim(const struct FString& ChallengeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.OnChallengeClaim"));

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


// Function W_ChallengesSmall.W_ChallengesSmall_C.UpdateChallengeClaimed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UW_ChallengesSmall_C::UpdateChallengeClaimed(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.UpdateChallengeClaimed"));

	struct
	{
		struct FString                 Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmall.W_ChallengesSmall_C.ChallengeClaimed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChallengeID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Experience                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Currency                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmall_C::ChallengeClaimed(const struct FString& ChallengeID, const struct FString& ItemId, int Experience, int Currency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.ChallengeClaimed"));

	struct
	{
		struct FString                 ChallengeID;
		struct FString                 ItemId;
		int                            Experience;
		int                            Currency;
	} params = {};

	params.ChallengeID = ChallengeID;
	params.ItemId = ItemId;
	params.Experience = Experience;
	params.Currency = Currency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmall.W_ChallengesSmall_C.UpdateChallengeUI
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChallengeID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmall_C::UpdateChallengeUI(const struct FString& ChallengeID, int Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.UpdateChallengeUI"));

	struct
	{
		struct FString                 ChallengeID;
		int                            Progress;
	} params = {};

	params.ChallengeID = ChallengeID;
	params.Progress = Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmall.W_ChallengesSmall_C.ExecuteUbergraph_W_ChallengesSmall
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesSmall_C::ExecuteUbergraph_W_ChallengesSmall(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.ExecuteUbergraph_W_ChallengesSmall"));

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


// Function W_ChallengesSmall.W_ChallengesSmall_C.OnChallengeRerolled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesSmall_C::OnChallengeRerolled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.OnChallengeRerolled__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmall.W_ChallengesSmall_C.OnChallengeClaimed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesSmall_C::OnChallengeClaimed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.OnChallengeClaimed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesSmall.W_ChallengesSmall_C.ChallengeButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesSmall_C::ChallengeButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesSmall.W_ChallengesSmall_C.ChallengeButtonPressed__DelegateSignature"));

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
