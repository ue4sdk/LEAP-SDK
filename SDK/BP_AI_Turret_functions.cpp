// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AI_Turret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AI_Turret.BP_AI_Turret_C.GetDamageIndicatorWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UUserWidget*             NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::GetDamageIndicatorWidget(class UUserWidget** NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.GetDamageIndicatorWidget"));

	struct
	{
		class UUserWidget*             NewParam;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyEnd_6F68920E4574A09A503FE6B72CEBD73C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnNotifyEnd_6F68920E4574A09A503FE6B72CEBD73C(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyEnd_6F68920E4574A09A503FE6B72CEBD73C"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyBegin_6F68920E4574A09A503FE6B72CEBD73C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnNotifyBegin_6F68920E4574A09A503FE6B72CEBD73C(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyBegin_6F68920E4574A09A503FE6B72CEBD73C"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnInterrupted_6F68920E4574A09A503FE6B72CEBD73C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnInterrupted_6F68920E4574A09A503FE6B72CEBD73C(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnInterrupted_6F68920E4574A09A503FE6B72CEBD73C"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnBlendOut_6F68920E4574A09A503FE6B72CEBD73C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnBlendOut_6F68920E4574A09A503FE6B72CEBD73C(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnBlendOut_6F68920E4574A09A503FE6B72CEBD73C"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnCompleted_6F68920E4574A09A503FE6B72CEBD73C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnCompleted_6F68920E4574A09A503FE6B72CEBD73C(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnCompleted_6F68920E4574A09A503FE6B72CEBD73C"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyEnd_E4F0B7804967C4E0726131BF6422F3AC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnNotifyEnd_E4F0B7804967C4E0726131BF6422F3AC(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyEnd_E4F0B7804967C4E0726131BF6422F3AC"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyBegin_E4F0B7804967C4E0726131BF6422F3AC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnNotifyBegin_E4F0B7804967C4E0726131BF6422F3AC(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyBegin_E4F0B7804967C4E0726131BF6422F3AC"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnInterrupted_E4F0B7804967C4E0726131BF6422F3AC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnInterrupted_E4F0B7804967C4E0726131BF6422F3AC(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnInterrupted_E4F0B7804967C4E0726131BF6422F3AC"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnBlendOut_E4F0B7804967C4E0726131BF6422F3AC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnBlendOut_E4F0B7804967C4E0726131BF6422F3AC(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnBlendOut_E4F0B7804967C4E0726131BF6422F3AC"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnCompleted_E4F0B7804967C4E0726131BF6422F3AC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnCompleted_E4F0B7804967C4E0726131BF6422F3AC(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnCompleted_E4F0B7804967C4E0726131BF6422F3AC"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyEnd_FF8782C348FC710A88CFF6AADC2A9D11
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnNotifyEnd_FF8782C348FC710A88CFF6AADC2A9D11(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyEnd_FF8782C348FC710A88CFF6AADC2A9D11"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyBegin_FF8782C348FC710A88CFF6AADC2A9D11
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnNotifyBegin_FF8782C348FC710A88CFF6AADC2A9D11(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnNotifyBegin_FF8782C348FC710A88CFF6AADC2A9D11"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnInterrupted_FF8782C348FC710A88CFF6AADC2A9D11
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnInterrupted_FF8782C348FC710A88CFF6AADC2A9D11(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnInterrupted_FF8782C348FC710A88CFF6AADC2A9D11"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnBlendOut_FF8782C348FC710A88CFF6AADC2A9D11
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnBlendOut_FF8782C348FC710A88CFF6AADC2A9D11(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnBlendOut_FF8782C348FC710A88CFF6AADC2A9D11"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnCompleted_FF8782C348FC710A88CFF6AADC2A9D11
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnCompleted_FF8782C348FC710A88CFF6AADC2A9D11(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnCompleted_FF8782C348FC710A88CFF6AADC2A9D11"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnPlayerStateAcquired_E18BBC7D4444B3095D73E08267617C7A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnPlayerStateAcquired_E18BBC7D4444B3095D73E08267617C7A(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnPlayerStateAcquired_E18BBC7D4444B3095D73E08267617C7A"));

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


// Function BP_AI_Turret.BP_AI_Turret_C.OnPlayerStateAcquired_25719E2844716592D33E15A81A96DBA0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnPlayerStateAcquired_25719E2844716592D33E15A81A96DBA0(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnPlayerStateAcquired_25719E2844716592D33E15A81A96DBA0"));

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


// Function BP_AI_Turret.BP_AI_Turret_C.OnDeployStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_AI_Turret_C::OnDeployStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnDeployStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnDeployComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_AI_Turret_C::OnDeployComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnDeployComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_AI_Turret_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnDeployableDied
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_AI_Turret_C::OnDeployableDied()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnDeployableDied"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnFired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AI_Turret_C::OnFired()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnFired"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnTargetAcquired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::OnTargetAcquired(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnTargetAcquired"));

	struct
	{
		class AActor*                  Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.OnDeployDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_AI_Turret_C::OnDeployDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.OnDeployDeactivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.InitializeForTeam
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::InitializeForTeam(int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.InitializeForTeam"));

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


// Function BP_AI_Turret.BP_AI_Turret_C.UpdateVisuals
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AI_Turret_C::UpdateVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.UpdateVisuals"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AI_Turret.BP_AI_Turret_C.On Local Player Changed Teams
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::On_Local_Player_Changed_Teams(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.On Local Player Changed Teams"));

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


// Function BP_AI_Turret.BP_AI_Turret_C.ExecuteUbergraph_BP_AI_Turret
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AI_Turret_C::ExecuteUbergraph_BP_AI_Turret(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AI_Turret.BP_AI_Turret_C.ExecuteUbergraph_BP_AI_Turret"));

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
