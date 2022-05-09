// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayerAvatarInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.OnPlayerStateAcquired_246ED6794B9A2D7BF3D0CDAE875B98F9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatarInfo_C::OnPlayerStateAcquired_246ED6794B9A2D7BF3D0CDAE875B98F9(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.OnPlayerStateAcquired_246ED6794B9A2D7BF3D0CDAE875B98F9"));

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


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlayerAvatarInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.UpdateCurrency
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerAvatarInfo_C::UpdateCurrency()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.UpdateCurrency"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.UpdateXP
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerAvatarInfo_C::UpdateXP()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.UpdateXP"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.SetPlayerName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerAvatarInfo_C::SetPlayerName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.SetPlayerName"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.UpdateBanner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerAvatarInfo_C::UpdateBanner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.UpdateBanner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.SetName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_PlayerAvatarInfo_C::SetName(const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.SetName"));

	struct
	{
		struct FText                   Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.OnStatsLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatarInfo_C::OnStatsLoaded(const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.OnStatsLoaded"));

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


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.ToggleStats
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerAvatarInfo_C::ToggleStats(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.ToggleStats"));

	struct
	{
		bool                           Visible;
	} params = {};

	params.Visible = Visible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.SetBanner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCosmeticAssetBase*      NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatarInfo_C::SetBanner(class UCosmeticAssetBase* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.SetBanner"));

	struct
	{
		class UCosmeticAssetBase*      NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.OnProgressionInfoLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerAvatarInfo_C::OnProgressionInfoLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.OnProgressionInfoLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.ExecuteUbergraph_W_PlayerAvatarInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerAvatarInfo_C::ExecuteUbergraph_W_PlayerAvatarInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerAvatarInfo.W_PlayerAvatarInfo_C.ExecuteUbergraph_W_PlayerAvatarInfo"));

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
