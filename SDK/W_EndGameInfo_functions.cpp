// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_EndGameInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_EndGameInfo.W_EndGameInfo_C.CheckAndUpdateContractorBonus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_EndGameInfo_C::CheckAndUpdateContractorBonus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.CheckAndUpdateContractorBonus"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_EndGameInfo.W_EndGameInfo_C.CheckAndUpdateMatchBonus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_EndGameInfo_C::CheckAndUpdateMatchBonus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.CheckAndUpdateMatchBonus"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_EndGameInfo.W_EndGameInfo_C.GetBonusExp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EMatchResult                   Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Experience                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_EndGameInfo_C::GetBonusExp(EMatchResult Selection, class UObject* WorldContextObject, int* Experience)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.GetBonusExp"));

	struct
	{
		EMatchResult                   Selection;
		class UObject*                 WorldContextObject;
		int                            Experience;
	} params = {};

	params.Selection = Selection;
	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Experience != nullptr)
		*Experience = params.Experience;
}


// Function W_EndGameInfo.W_EndGameInfo_C.OnPlayerStateAcquired_65BF727E43F9119BD1BCA4A48D1FAFCE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_EndGameInfo_C::OnPlayerStateAcquired_65BF727E43F9119BD1BCA4A48D1FAFCE(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.OnPlayerStateAcquired_65BF727E43F9119BD1BCA4A48D1FAFCE"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.UpdateTotalXP
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::UpdateTotalXP()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.UpdateTotalXP"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.UpdateEliminations
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::UpdateEliminations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.UpdateEliminations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.UpdateDeaths
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::UpdateDeaths()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.UpdateDeaths"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.CreateEXPBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ ClassID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_LevelProgress_C*      Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_EndGameInfo_C::CreateEXPBar(class UClass* /*AProjectXCharacter*/ ClassID, class UW_LevelProgress_C* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.CreateEXPBar"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ ClassID;
		class UW_LevelProgress_C*      Target;
	} params = {};

	params.ClassID = ClassID;
	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.OnPlayerStatsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::OnPlayerStatsChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.OnPlayerStatsChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.DisplayLevelUpRewards
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_EndGameInfo_C::DisplayLevelUpRewards(const struct FString& Class, int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.DisplayLevelUpRewards"));

	struct
	{
		struct FString                 Class;
		int                            Level;
	} params = {};

	params.Class = Class;
	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.ExpUpdateCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_EndGameInfo_C::ExpUpdateCompleted(const struct FString& Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.ExpUpdateCompleted"));

	struct
	{
		struct FString                 Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.UpdateDisplayedExp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::UpdateDisplayedExp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.UpdateDisplayedExp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.ConsumeExcessExp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::ConsumeExcessExp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.ConsumeExcessExp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.UpdateMatchBonus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::UpdateMatchBonus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.UpdateMatchBonus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.UpdateBonusEXP
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::UpdateBonusEXP()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.UpdateBonusEXP"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.On Bonus EXP Received
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_EndGameInfo_C::On_Bonus_EXP_Received()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.On Bonus EXP Received"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_EndGameInfo.W_EndGameInfo_C.ExecuteUbergraph_W_EndGameInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_EndGameInfo_C::ExecuteUbergraph_W_EndGameInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.ExecuteUbergraph_W_EndGameInfo"));

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


// Function W_EndGameInfo.W_EndGameInfo_C.LevelUpEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_EndGameInfo_C::LevelUpEvent__DelegateSignature(const struct FString& Class, int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_EndGameInfo.W_EndGameInfo_C.LevelUpEvent__DelegateSignature"));

	struct
	{
		struct FString                 Class;
		int                            Level;
	} params = {};

	params.Class = Class;
	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
