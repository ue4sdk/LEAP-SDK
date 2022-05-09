// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayerActorHudInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ResetSpottingState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerActorHudInfo_C::ResetSpottingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ResetSpottingState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleTargetedStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bImmediate                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::ToggleTargetedStatus(bool bToggle, bool bImmediate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleTargetedStatus"));

	struct
	{
		bool                           bToggle;
		bool                           bImmediate;
	} params = {};

	params.bToggle = bToggle;
	params.bImmediate = bImmediate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.IsSquadLeader
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bSquadMate                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::IsSquadLeader(bool* bSquadMate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.IsSquadLeader"));

	struct
	{
		bool                           bSquadMate;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bSquadMate != nullptr)
		*bSquadMate = params.bSquadMate;
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleSpotting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::ToggleSpotting(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleSpotting"));

	struct
	{
		bool                           bToggle;
	} params = {};

	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleNamePlateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::ToggleNamePlateVisibility(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleNamePlateVisibility"));

	struct
	{
		bool                           bToggle;
	} params = {};

	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.IsLocallyOwned
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bLocallyOwned                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::IsLocallyOwned(bool* bLocallyOwned)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.IsLocallyOwned"));

	struct
	{
		bool                           bLocallyOwned;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bLocallyOwned != nullptr)
		*bLocallyOwned = params.bLocallyOwned;
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.GetActorTeamColour
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            LinearColour                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::GetActorTeamColour(struct FLinearColor* LinearColour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.GetActorTeamColour"));

	struct
	{
		struct FLinearColor            LinearColour;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LinearColour != nullptr)
		*LinearColour = params.LinearColour;
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SetTeamColour
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Team_Colour                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::SetTeamColour(const struct FLinearColor& Team_Colour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SetTeamColour"));

	struct
	{
		struct FLinearColor            Team_Colour;
	} params = {};

	params.Team_Colour = Team_Colour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleHealthBarVisibilty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::ToggleHealthBarVisibilty(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleHealthBarVisibilty"));

	struct
	{
		bool                           bToggle;
	} params = {};

	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.IsSquadMate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bSquadMate                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::IsSquadMate(bool* bSquadMate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.IsSquadMate"));

	struct
	{
		bool                           bSquadMate;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bSquadMate != nullptr)
		*bSquadMate = params.bSquadMate;
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.WaitForPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::WaitForPlayerState(bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.WaitForPlayerState"));

	struct
	{
		bool                           Return;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return != nullptr)
		*Return = params.Return;
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnLoaded_642D447648FD2BFAAB0AE69187FFE9FC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::OnLoaded_642D447648FD2BFAAB0AE69187FFE9FC(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnLoaded_642D447648FD2BFAAB0AE69187FFE9FC"));

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


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnGameStateAcquired_E7F1E46842249CF99879AAAF1473B0C7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::OnGameStateAcquired_E7F1E46842249CF99879AAAF1473B0C7(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnGameStateAcquired_E7F1E46842249CF99879AAAF1473B0C7"));

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


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.InitPlayerActorHudInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_PlayerActorHudInfo_C::InitPlayerActorHudInfo(class AActor* Owner, const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.InitPlayerActorHudInfo"));

	struct
	{
		class AActor*                  Owner;
		struct FText                   Name;
	} params = {};

	params.Owner = Owner;
	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.RefreshInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerActorHudInfo_C::RefreshInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.RefreshInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.DeathEvent
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::DeathEvent(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.DeathEvent"));

	struct
	{
		class AActor*                  Victim;
		float                          Damage;
		struct FDamageEvent            DamageEvent;
		class AController*             EventInstigator;
		class AActor*                  DamageCauser;
		class APlayerState*            InstigatorPlayerState;
	} params = {};

	params.Victim = Victim;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.InstigatorPlayerState = InstigatorPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnSquadChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::OnSquadChanged(int SquadID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnSquadChanged"));

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


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnPlayerChangedTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::OnPlayerChangedTeam(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnPlayerChangedTeam"));

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


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SetRequestMarkerInvisible
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerActorHudInfo_C::SetRequestMarkerInvisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SetRequestMarkerInvisible"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ShowQuickChatIcon
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FQuickChatInfo          QuickChatData                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::ShowQuickChatIcon(const struct FQuickChatInfo& QuickChatData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ShowQuickChatIcon"));

	struct
	{
		struct FQuickChatInfo          QuickChatData;
	} params = {};

	params.QuickChatData = QuickChatData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleHealthbarFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           FadeIn                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::ToggleHealthbarFade(bool FadeIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleHealthbarFade"));

	struct
	{
		bool                           FadeIn;
	} params = {};

	params.FadeIn = FadeIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SetHealthBarInterp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::SetHealthBarInterp(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SetHealthBarInterp"));

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


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleIsArmored
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsArmored                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::ToggleIsArmored(bool IsArmored)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleIsArmored"));

	struct
	{
		bool                           IsArmored;
	} params = {};

	params.IsArmored = IsArmored;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.HealthUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::HealthUpdated(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.HealthUpdated"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleNamePlateFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bFadeIn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::ToggleNamePlateFade(bool bFadeIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ToggleNamePlateFade"));

	struct
	{
		bool                           bFadeIn;
	} params = {};

	params.bFadeIn = bFadeIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SetNameInterp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::SetNameInterp(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SetNameInterp"));

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


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnTargetedStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  TargetedActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::OnTargetedStopped(class AActor* TargetedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnTargetedStopped"));

	struct
	{
		class AActor*                  TargetedActor;
	} params = {};

	params.TargetedActor = TargetedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnTargeted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  TargetedActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::OnTargeted(class AActor* TargetedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnTargeted"));

	struct
	{
		class AActor*                  TargetedActor;
	} params = {};

	params.TargetedActor = TargetedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SpottedStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerActorHudInfo_C::SpottedStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SpottedStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SpottedEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerActorHudInfo_C::SpottedEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.SpottedEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.PoolDestruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlayerActorHudInfo_C::PoolDestruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.PoolDestruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnKillMessageReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UProjectXDamageType*/ DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           bWasHeadshot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::OnKillMessageReceived(class AProjectXPlayerState* Killer, class AProjectXPlayerState* Killed, int Data, class UClass* /*UProjectXDamageType*/ DamageType, bool bWasHeadshot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.OnKillMessageReceived"));

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


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.HitConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           bHeadshot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHealing                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerActorHudInfo_C::HitConfirm(class AActor* Victim, class UClass* /*UWeaponInstance*/ Weapon, bool bHeadshot, float Damage, bool bHealing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.HitConfirm"));

	struct
	{
		class AActor*                  Victim;
		class UClass* /*UWeaponInstance*/ Weapon;
		bool                           bHeadshot;
		float                          Damage;
		bool                           bHealing;
	} params = {};

	params.Victim = Victim;
	params.Weapon = Weapon;
	params.bHeadshot = bHeadshot;
	params.Damage = Damage;
	params.bHealing = bHealing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.FlashHealthBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::FlashHealthBar(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.FlashHealthBar"));

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


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ForcedTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerActorHudInfo_C::ForcedTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ForcedTick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ChangedTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::ChangedTeam(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ChangedTeam"));

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


// Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ExecuteUbergraph_W_PlayerActorHudInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerActorHudInfo_C::ExecuteUbergraph_W_PlayerActorHudInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerActorHudInfo.W_PlayerActorHudInfo_C.ExecuteUbergraph_W_PlayerActorHudInfo"));

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
