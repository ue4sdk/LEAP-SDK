// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DeployabeHudInfoWidgetComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.RemoveTimerOndeath
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_DeployabeHudInfoWidgetComponent_C::RemoveTimerOndeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.RemoveTimerOndeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.OnPlayerStateAcquired_CA11EA744534697A1FAC79BB4CB7B218
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DeployabeHudInfoWidgetComponent_C::OnPlayerStateAcquired_CA11EA744534697A1FAC79BB4CB7B218(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.OnPlayerStateAcquired_CA11EA744534697A1FAC79BB4CB7B218"));

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


// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_DeployabeHudInfoWidgetComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DeployabeHudInfoWidgetComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.DeathEvent
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DeployabeHudInfoWidgetComponent_C::DeathEvent(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.DeathEvent"));

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


// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.StartTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          LifeTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DeployabeHudInfoWidgetComponent_C::StartTimer(float LifeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.StartTimer"));

	struct
	{
		float                          LifeTime;
	} params = {};

	params.LifeTime = LifeTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.CreateTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_DeployabeHudInfoWidgetComponent_C::CreateTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.CreateTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.InitializeForTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DeployabeHudInfoWidgetComponent_C::InitializeForTeam(int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.InitializeForTeam"));

	struct
	{
		int                            Team;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.OnTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DeployabeHudInfoWidgetComponent_C::OnTeamChanged(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.OnTeamChanged"));

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


// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.ScaleTimerTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DeployabeHudInfoWidgetComponent_C::ScaleTimerTick(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.ScaleTimerTick"));

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


// Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.ExecuteUbergraph_BP_DeployabeHudInfoWidgetComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DeployabeHudInfoWidgetComponent_C::ExecuteUbergraph_BP_DeployabeHudInfoWidgetComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployabeHudInfoWidgetComponent.BP_DeployabeHudInfoWidgetComponent_C.ExecuteUbergraph_BP_DeployabeHudInfoWidgetComponent"));

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
