// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_LeaderboardEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_LeaderboardEntry.W_LeaderboardEntry_C.SetProfileBanner
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CosmeticID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_LeaderboardEntry_C::SetProfileBanner(const struct FString& CosmeticID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LeaderboardEntry.W_LeaderboardEntry_C.SetProfileBanner"));

	struct
	{
		struct FString                 CosmeticID;
	} params = {};

	params.CosmeticID = CosmeticID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LeaderboardEntry.W_LeaderboardEntry_C.Set Vars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLeaderBoardEntry       Leaderboard_Entry              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TopValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LeaderboardEntry_C::Set_Vars(const struct FLeaderBoardEntry& Leaderboard_Entry, int Position, int TopValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LeaderboardEntry.W_LeaderboardEntry_C.Set Vars"));

	struct
	{
		struct FLeaderBoardEntry       Leaderboard_Entry;
		int                            Position;
		int                            TopValue;
	} params = {};

	params.Leaderboard_Entry = Leaderboard_Entry;
	params.Position = Position;
	params.TopValue = TopValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LeaderboardEntry.W_LeaderboardEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_LeaderboardEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LeaderboardEntry.W_LeaderboardEntry_C.PreConstruct"));

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


// Function W_LeaderboardEntry.W_LeaderboardEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_LeaderboardEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LeaderboardEntry.W_LeaderboardEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LeaderboardEntry.W_LeaderboardEntry_C.InitLeaderboardEntry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLeaderBoardEntry       Entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TopValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHasDecoratorBG                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_LeaderboardEntry_C::InitLeaderboardEntry(const struct FLeaderBoardEntry& Entry, int Position, int TopValue, bool bHasDecoratorBG)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LeaderboardEntry.W_LeaderboardEntry_C.InitLeaderboardEntry"));

	struct
	{
		struct FLeaderBoardEntry       Entry;
		int                            Position;
		int                            TopValue;
		bool                           bHasDecoratorBG;
	} params = {};

	params.Entry = Entry;
	params.Position = Position;
	params.TopValue = TopValue;
	params.bHasDecoratorBG = bHasDecoratorBG;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LeaderboardEntry.W_LeaderboardEntry_C.OnUserInfoFound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_LeaderboardEntry_C::OnUserInfoFound(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LeaderboardEntry.W_LeaderboardEntry_C.OnUserInfoFound"));

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


// Function W_LeaderboardEntry.W_LeaderboardEntry_C.ExecuteUbergraph_W_LeaderboardEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LeaderboardEntry_C::ExecuteUbergraph_W_LeaderboardEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LeaderboardEntry.W_LeaderboardEntry_C.ExecuteUbergraph_W_LeaderboardEntry"));

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
