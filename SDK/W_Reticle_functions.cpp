// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Reticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Reticle.W_Reticle_C.RemoveDamageText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::RemoveDamageText(class UClass* /*UWeaponInstance*/ WeaponClass, class AActor* Victim)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.RemoveDamageText"));

	struct
	{
		class UClass* /*UWeaponInstance*/ WeaponClass;
		class AActor*                  Victim;
	} params = {};

	params.WeaponClass = WeaponClass;
	params.Victim = Victim;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.ProcessDamageText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon_Class                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeadshot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::ProcessDamageText(class UClass* /*UWeaponInstance*/ Weapon_Class, float Damage, bool bHeadshot, class AActor* Victim)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.ProcessDamageText"));

	struct
	{
		class UClass* /*UWeaponInstance*/ Weapon_Class;
		float                          Damage;
		bool                           bHeadshot;
		class AActor*                  Victim;
	} params = {};

	params.Weapon_Class = Weapon_Class;
	params.Damage = Damage;
	params.bHeadshot = bHeadshot;
	params.Victim = Victim;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.CreateDamageTextWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_Reticle_C*            Parent                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Headshot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Heal                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UW_DamageText_C*         Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::CreateDamageTextWidget(class APlayerController* OwningPlayer, float Damage, class AActor* Victim, class UW_Reticle_C* Parent, class UClass* /*UWeaponInstance*/ WeaponClass, bool Headshot, bool Heal, class UW_DamageText_C** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.CreateDamageTextWidget"));

	struct
	{
		class APlayerController*       OwningPlayer;
		float                          Damage;
		class AActor*                  Victim;
		class UW_Reticle_C*            Parent;
		class UClass* /*UWeaponInstance*/ WeaponClass;
		bool                           Headshot;
		bool                           Heal;
		class UW_DamageText_C*         Widget;
	} params = {};

	params.OwningPlayer = OwningPlayer;
	params.Damage = Damage;
	params.Victim = Victim;
	params.Parent = Parent;
	params.WeaponClass = WeaponClass;
	params.Headshot = Headshot;
	params.Heal = Heal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function W_Reticle.W_Reticle_C.OnPawnAcquired_8455D50F47BD7D430BCAC3A5DDBA0F66
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::OnPawnAcquired_8455D50F47BD7D430BCAC3A5DDBA0F66(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.OnPawnAcquired_8455D50F47BD7D430BCAC3A5DDBA0F66"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.OnPlayerStateAcquired_93C830A049F71113110272B33D1E76EB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::OnPlayerStateAcquired_93C830A049F71113110272B33D1E76EB(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.OnPlayerStateAcquired_93C830A049F71113110272B33D1E76EB"));

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


// Function W_Reticle.W_Reticle_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Reticle_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.OnHit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           bHeadshot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Healing                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Reticle_C::OnHit(class AActor* Victim, class UClass* /*UWeaponInstance*/ Weapon, bool bHeadshot, float Damage, bool Healing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.OnHit"));

	struct
	{
		class AActor*                  Victim;
		class UClass* /*UWeaponInstance*/ Weapon;
		bool                           bHeadshot;
		float                          Damage;
		bool                           Healing;
	} params = {};

	params.Victim = Victim;
	params.Weapon = Weapon;
	params.bHeadshot = bHeadshot;
	params.Damage = Damage;
	params.Healing = Healing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.Fade"));

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


// Function W_Reticle.W_Reticle_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.Tick"));

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


// Function W_Reticle.W_Reticle_C.FadeSkull
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::FadeSkull(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.FadeSkull"));

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


// Function W_Reticle.W_Reticle_C.OnHookshotTargetAvailable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHookshotComponent*      HookshotComponent              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::OnHookshotTargetAvailable(class UHookshotComponent* HookshotComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.OnHookshotTargetAvailable"));

	struct
	{
		class UHookshotComponent*      HookshotComponent;
	} params = {};

	params.HookshotComponent = HookshotComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.OnHookshotTargetNotAvailable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHookshotComponent*      HookshotComponent              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::OnHookshotTargetNotAvailable(class UHookshotComponent* HookshotComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.OnHookshotTargetNotAvailable"));

	struct
	{
		class UHookshotComponent*      HookshotComponent;
	} params = {};

	params.HookshotComponent = HookshotComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.OnTightAimStart_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Reticle_C::OnTightAimStart_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.OnTightAimStart_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.OnTightAimStop_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Reticle_C::OnTightAimStop_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.OnTightAimStop_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.Fade End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::Fade_End(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.Fade End"));

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


// Function W_Reticle.W_Reticle_C.ExpGained
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UExperienceEvent*        Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Value                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            B                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::ExpGained(class UExperienceEvent* Event, int Value, class APlayerState* B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.ExpGained"));

	struct
	{
		class UExperienceEvent*        Event;
		int                            Value;
		class APlayerState*            B;
	} params = {};

	params.Event = Event;
	params.Value = Value;
	params.B = B;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Reticle_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.OnMenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Reticle_C::OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.OnMenuToggled"));

	struct
	{
		class UAdvancedUserWidget*     Widget;
		bool                           bToggle;
	} params = {};

	params.Widget = Widget;
	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle.W_Reticle_C.ExecuteUbergraph_W_Reticle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_C::ExecuteUbergraph_W_Reticle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle.W_Reticle_C.ExecuteUbergraph_W_Reticle"));

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
