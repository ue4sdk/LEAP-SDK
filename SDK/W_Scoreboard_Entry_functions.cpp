// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Scoreboard_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.GetDefaultColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Scoreboard_Entry_C::GetDefaultColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.GetDefaultColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.SetTeamStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Scoreboard_Entry_C::SetTeamStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.SetTeamStyle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.SetSelfStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Scoreboard_Entry_C::SetSelfStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.SetSelfStyle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnLoaded_D9E2C39041F933FE043A40839160EB20
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_Entry_C::OnLoaded_D9E2C39041F933FE043A40839160EB20(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnLoaded_D9E2C39041F933FE043A40839160EB20"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnGameStateAcquired_2EA9331D445BF65668C97D834F651B11
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_Entry_C::OnGameStateAcquired_2EA9331D445BF65668C97D834F651B11(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnGameStateAcquired_2EA9331D445BF65668C97D834F651B11"));

	struct
	{
		class AGameState*              GameState;
	} params = {};

	params.GameState = GameState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Scoreboard_Entry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnPlayerStatsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Scoreboard_Entry_C::OnPlayerStatsChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnPlayerStatsChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnSquadChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_Entry_C::OnSquadChanged(int SquadID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnSquadChanged"));

	struct
	{
		int                            SquadID;
	} params = {};

	params.SquadID = SquadID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnPlayerLevelChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Scoreboard_Entry_C::OnPlayerLevelChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnPlayerLevelChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnPlayerClassChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ PlayerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_Entry_C::OnPlayerClassChanged(class UClass* /*AProjectXCharacter*/ PlayerClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnPlayerClassChanged"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ PlayerClass;
	} params = {};

	params.PlayerClass = PlayerClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnAvatarChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Avatar                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_Entry_C::OnAvatarChanged(class UTexture2D* Avatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnAvatarChanged"));

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


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.UpdatePing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Scoreboard_Entry_C::UpdatePing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.UpdatePing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnTeamChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_Entry_C::OnTeamChange(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnTeamChange"));

	struct
	{
		class AProjectXPlayerState*    PlayerState;
		unsigned char                  Team;
	} params = {};

	params.PlayerState = PlayerState;
	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Scoreboard_Entry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.PreConstruct"));

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


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnKillMessageReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UProjectXDamageType*/ DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           bWasHeadshot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Scoreboard_Entry_C::OnKillMessageReceived(class AProjectXPlayerState* Killer, class AProjectXPlayerState* Killed, int Data, class UClass* /*UProjectXDamageType*/ DamageType, bool bWasHeadshot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.OnKillMessageReceived"));

	struct
	{
		class AProjectXPlayerState*    Killer;
		class AProjectXPlayerState*    Killed;
		int                            Data;
		class UClass* /*UProjectXDamageType*/ DamageType;
		bool                           bWasHeadshot;
	} params = {};

	params.Killer = Killer;
	params.Killed = Killed;
	params.Data = Data;
	params.DamageType = DamageType;
	params.bWasHeadshot = bWasHeadshot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.ExecuteUbergraph_W_Scoreboard_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_Entry_C::ExecuteUbergraph_W_Scoreboard_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_Entry.W_Scoreboard_Entry_C.ExecuteUbergraph_W_Scoreboard_Entry"));

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
