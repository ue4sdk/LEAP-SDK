// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayerAvatar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlayerAvatar.W_PlayerAvatar_C.GetExperienceDynamicMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DynMatAvatar                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatar_C::GetExperienceDynamicMaterial(class UMaterialInstanceDynamic** DynMatAvatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.GetExperienceDynamicMaterial"));

	struct
	{
		class UMaterialInstanceDynamic* DynMatAvatar;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DynMatAvatar != nullptr)
		*DynMatAvatar = params.DynMatAvatar;
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.GetAvatarDynamicMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* DynMatAvatar                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatar_C::GetAvatarDynamicMaterial(class UMaterialInstanceDynamic** DynMatAvatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.GetAvatarDynamicMaterial"));

	struct
	{
		class UMaterialInstanceDynamic* DynMatAvatar;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DynMatAvatar != nullptr)
		*DynMatAvatar = params.DynMatAvatar;
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.SetPlayerID
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatar_C::SetPlayerID(const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.SetPlayerID"));

	struct
	{
		struct FString                 PlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.GetStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EStatNames                     Enum                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UW_PlayerAvatar_C::GetStat(EStatNames Enum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.GetStat"));

	struct
	{
		EStatNames                     Enum;
		int                            ReturnValue;
	} params = {};

	params.Enum = Enum;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.OnPlayerStateAcquired_7BFCF2A342F8D35445672489EF24BA87
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatar_C::OnPlayerStateAcquired_7BFCF2A342F8D35445672489EF24BA87(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.OnPlayerStateAcquired_7BFCF2A342F8D35445672489EF24BA87"));

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


// Function W_PlayerAvatar.W_PlayerAvatar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlayerAvatar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.UpdateAvatarImage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Avatar                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatar_C::UpdateAvatarImage(class UTexture2D* Avatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.UpdateAvatarImage"));

	struct
	{
		class UTexture2D*              Avatar;
	} params = {};

	params.Avatar = Avatar;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.UpdateRank
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatar_C::UpdateRank(int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.UpdateRank"));

	struct
	{
		int                            Level;
	} params = {};

	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.UpdatePlayerXPProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Current_Level                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TargetPercent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatar_C::UpdatePlayerXPProgression(int Current_Level, float TargetPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.UpdatePlayerXPProgression"));

	struct
	{
		int                            Current_Level;
		float                          TargetPercent;
	} params = {};

	params.Current_Level = Current_Level;
	params.TargetPercent = TargetPercent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.ChangeRankFontSize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            FontSize                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatar_C::ChangeRankFontSize(int FontSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.ChangeRankFontSize"));

	struct
	{
		int                            FontSize;
	} params = {};

	params.FontSize = FontSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.ToggleExpDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowExp                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerAvatar_C::ToggleExpDisplay(bool ShowExp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.ToggleExpDisplay"));

	struct
	{
		bool                           ShowExp;
	} params = {};

	params.ShowExp = ShowExp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.UpdatePlayerStats
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerAvatar_C::UpdatePlayerStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.UpdatePlayerStats"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.OnProgressionUpdates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerAvatar_C::OnProgressionUpdates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.OnProgressionUpdates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatar.W_PlayerAvatar_C.ExecuteUbergraph_W_PlayerAvatar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatar_C::ExecuteUbergraph_W_PlayerAvatar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatar.W_PlayerAvatar_C.ExecuteUbergraph_W_PlayerAvatar"));

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
