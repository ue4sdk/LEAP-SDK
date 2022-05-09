// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_AdvancedSquadMember_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.OnGameStateAcquired_35D4D0CE46C064DD857F14B3BCF632E1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AdvancedSquadMember_C::OnGameStateAcquired_35D4D0CE46C064DD857F14B3BCF632E1(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.OnGameStateAcquired_35D4D0CE46C064DD857F14B3BCF632E1"));

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


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_AdvancedSquadMember_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.OnSquadLeaderChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AdvancedSquadMember_C::OnSquadLeaderChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.OnSquadLeaderChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_AdvancedSquadMember_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.PreConstruct"));

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


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.RefreshInformation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    Target_Player_State            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UW_AdvancedSquadMember_C::RefreshInformation(class AProjectXPlayerState* Target_Player_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.RefreshInformation"));

	struct
	{
		class AProjectXPlayerState*    Target_Player_State;
	} params = {};

	params.Target_Player_State = Target_Player_State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.Reconstruct
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AdvancedSquadMember_C::Reconstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.Reconstruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.On Participant Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSelf                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           bIsSpeaking                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_AdvancedSquadMember_C::On_Participant_Update(bool bIsSelf, const struct FString& PlayerName, bool bIsSpeaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.On Participant Update"));

	struct
	{
		bool                           bIsSelf;
		struct FString                 PlayerName;
		bool                           bIsSpeaking;
	} params = {};

	params.bIsSelf = bIsSelf;
	params.PlayerName = PlayerName;
	params.bIsSpeaking = bIsSpeaking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AdvancedSquadMember_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.Tick"));

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


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.Invalidate Health Information
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AdvancedSquadMember_C::Invalidate_Health_Information()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.Invalidate Health Information"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.UnbindFromHealthEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AdvancedSquadMember_C::UnbindFromHealthEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.UnbindFromHealthEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.Tracking Actor Died
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AdvancedSquadMember_C::Tracking_Actor_Died(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.Tracking Actor Died"));

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


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.StartTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AdvancedSquadMember_C::StartTimer(float NewTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.StartTimer"));

	struct
	{
		float                          NewTime;
	} params = {};

	params.NewTime = NewTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.OnReviveTimeReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReviveStartTime                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AdvancedSquadMember_C::OnReviveTimeReceived(float ReviveStartTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.OnReviveTimeReceived"));

	struct
	{
		float                          ReviveStartTime;
	} params = {};

	params.ReviveStartTime = ReviveStartTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.ExecuteUbergraph_W_AdvancedSquadMember
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AdvancedSquadMember_C::ExecuteUbergraph_W_AdvancedSquadMember(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AdvancedSquadMember.W_AdvancedSquadMember_C.ExecuteUbergraph_W_AdvancedSquadMember"));

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
