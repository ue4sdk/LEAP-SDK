// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Ultimate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Ultimate.W_Ultimate_C.PlayAnnouncerVoice
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 VoiceLine                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::PlayAnnouncerVoice(const struct FString& VoiceLine)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.PlayAnnouncerVoice"));

	struct
	{
		struct FString                 VoiceLine;
	} params = {};

	params.VoiceLine = VoiceLine;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.GetProgressionMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* ProgressionMaterial            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::GetProgressionMaterial(class UMaterialInstanceDynamic** ProgressionMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.GetProgressionMaterial"));

	struct
	{
		class UMaterialInstanceDynamic* ProgressionMaterial;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ProgressionMaterial != nullptr)
		*ProgressionMaterial = params.ProgressionMaterial;
}


// Function W_Ultimate.W_Ultimate_C.OnPlayerStateAcquired_AD4EADEA47451D21038701BEA66578A5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::OnPlayerStateAcquired_AD4EADEA47451D21038701BEA66578A5(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.OnPlayerStateAcquired_AD4EADEA47451D21038701BEA66578A5"));

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


// Function W_Ultimate.W_Ultimate_C.OnPawnAcquired_8889A0FB432504C929A4E7B67A7C2137
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::OnPawnAcquired_8889A0FB432504C929A4E7B67A7C2137(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.OnPawnAcquired_8889A0FB432504C929A4E7B67A7C2137"));

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


// Function W_Ultimate.W_Ultimate_C.OnLoaded_52618EC34FD9E59ABB705AA971642BF8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::OnLoaded_52618EC34FD9E59ABB705AA971642BF8(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.OnLoaded_52618EC34FD9E59ABB705AA971642BF8"));

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


// Function W_Ultimate.W_Ultimate_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Ultimate_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.OnUltimateChargeUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::OnUltimateChargeUpdated(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.OnUltimateChargeUpdated"));

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


// Function W_Ultimate.W_Ultimate_C.OnWeaponsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::OnWeaponsUpdated(class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.OnWeaponsUpdated"));

	struct
	{
		class UWeaponInstance*         Weapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.OnWeaponRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Ultimate_C::OnWeaponRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.OnWeaponRemoved"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.LoadIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Ultimate_C::LoadIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.LoadIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.OnGamepadStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Ultimate_C::OnGamepadStateChanged(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.OnGamepadStateChanged"));

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


// Function W_Ultimate.W_Ultimate_C.UpdateProgressBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::UpdateProgressBar(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.UpdateProgressBar"));

	struct
	{
		float                          A;
	} params = {};

	params.A = A;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.Tick"));

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


// Function W_Ultimate.W_Ultimate_C.UltimateActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Ultimate_C::UltimateActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.UltimateActive"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.ResetUltimate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Ultimate_C::ResetUltimate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.ResetUltimate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.PlayExpandAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Ultimate_C::PlayExpandAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.PlayExpandAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.OnUltimateActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::OnUltimateActivated(class AProjectXPlayerState* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.OnUltimateActivated"));

	struct
	{
		class AProjectXPlayerState*    Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.PlayActiveAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Ultimate_C::PlayActiveAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.PlayActiveAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.OnKeybindUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Ultimate_C::OnKeybindUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.OnKeybindUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ultimate.W_Ultimate_C.ExecuteUbergraph_W_Ultimate
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ultimate_C::ExecuteUbergraph_W_Ultimate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ultimate.W_Ultimate_C.ExecuteUbergraph_W_Ultimate"));

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
