// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_AbilityHotBar_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.SetAmmoStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Depleted                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_AbilityHotBar_Icon_C::SetAmmoStatus(bool Depleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.SetAmmoStatus"));

	struct
	{
		bool                           Depleted;
	} params = {};

	params.Depleted = Depleted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnLoaded_C4DA73524BA11D12EF0EAFAFA6C85B43
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::OnLoaded_C4DA73524BA11D12EF0EAFAFA6C85B43(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnLoaded_C4DA73524BA11D12EF0EAFAFA6C85B43"));

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


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnPlayerStateAcquired_77102816445529A845157CBE22F2EB90
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::OnPlayerStateAcquired_77102816445529A845157CBE22F2EB90(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnPlayerStateAcquired_77102816445529A845157CBE22F2EB90"));

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


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnGameStateAcquired_EAED39CB4135667958B598B5301B2A7F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::OnGameStateAcquired_EAED39CB4135667958B598B5301B2A7F(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnGameStateAcquired_EAED39CB4135667958B598B5301B2A7F"));

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


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_AbilityHotBar_Icon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.LoadIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AbilityHotBar_Icon_C::LoadIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.LoadIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.UpdateSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         CurrentWeapon                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::UpdateSelected(class UWeaponInstance* CurrentWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.UpdateSelected"));

	struct
	{
		class UWeaponInstance*         CurrentWeapon;
	} params = {};

	params.CurrentWeapon = CurrentWeapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnGlobalAmmoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AbilityHotBar_Icon_C::OnGlobalAmmoChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnGlobalAmmoChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.UpdateAmmoCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AbilityHotBar_Icon_C::UpdateAmmoCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.UpdateAmmoCount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnGlobalAmmoRestockTimerChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// struct FTimerHandle            Timer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::OnGlobalAmmoRestockTimerChanged(class UClass* /*UWeaponInstance*/ Weapon, const struct FTimerHandle& Timer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnGlobalAmmoRestockTimerChanged"));

	struct
	{
		class UClass* /*UWeaponInstance*/ Weapon;
		struct FTimerHandle            Timer;
	} params = {};

	params.Weapon = Weapon;
	params.Timer = Timer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.UpdateRestockTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AbilityHotBar_Icon_C::UpdateRestockTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.UpdateRestockTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.CoolDownStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CooldownDuration               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeElapsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::CoolDownStarted(float CooldownDuration, float TimeElapsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.CoolDownStarted"));

	struct
	{
		float                          CooldownDuration;
		float                          TimeElapsed;
	} params = {};

	params.CooldownDuration = CooldownDuration;
	params.TimeElapsed = TimeElapsed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.UpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::UpdateProgress(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.UpdateProgress"));

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


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.CoolDownComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::CoolDownComplete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.CoolDownComplete"));

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


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnCoolDownCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AbilityHotBar_Icon_C::OnCoolDownCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnCoolDownCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnGamepadStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_AbilityHotBar_Icon_C::OnGamepadStateChanged(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnGamepadStateChanged"));

	struct
	{
		bool                           bIsUsingGamepad;
	} params = {};

	params.bIsUsingGamepad = bIsUsingGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::Initialize(int Index, class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.Initialize"));

	struct
	{
		int                            Index;
		class UWeaponInstance*         Weapon;
	} params = {};

	params.Index = Index;
	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.AbilityReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AbilityHotBar_Icon_C::AbilityReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.AbilityReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnKeybindUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_AbilityHotBar_Icon_C::OnKeybindUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnKeybindUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnAmmoChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentAmmo                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::OnAmmoChange(float CurrentAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.OnAmmoChange"));

	struct
	{
		float                          CurrentAmmo;
	} params = {};

	params.CurrentAmmo = CurrentAmmo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.ExecuteUbergraph_W_AbilityHotBar_Icon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AbilityHotBar_Icon_C::ExecuteUbergraph_W_AbilityHotBar_Icon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AbilityHotBar_Icon.W_AbilityHotBar_Icon_C.ExecuteUbergraph_W_AbilityHotBar_Icon"));

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
