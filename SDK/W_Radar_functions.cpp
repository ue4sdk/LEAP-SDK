// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Radar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Radar.W_Radar_C.OnPawnAcquired_8F3C86074687C0B72F308B8D7AEFE84E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::OnPawnAcquired_8F3C86074687C0B72F308B8D7AEFE84E(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.OnPawnAcquired_8F3C86074687C0B72F308B8D7AEFE84E"));

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


// Function W_Radar.W_Radar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Radar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Radar.W_Radar_C.UpdateSize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::UpdateSize(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.UpdateSize"));

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


// Function W_Radar.W_Radar_C.Complete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::Complete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.Complete"));

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


// Function W_Radar.W_Radar_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::FadeOut(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.FadeOut"));

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


// Function W_Radar.W_Radar_C.Hide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::Hide(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.Hide"));

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


// Function W_Radar.W_Radar_C.OnWeaponEquiped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::OnWeaponEquiped(class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.OnWeaponEquiped"));

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


// Function W_Radar.W_Radar_C.TriggerRadarWave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::TriggerRadarWave(float Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.TriggerRadarWave"));

	struct
	{
		float                          Size;
	} params = {};

	params.Size = Size;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Radar.W_Radar_C.Spotted Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Radar_C::Spotted_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.Spotted Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Radar.W_Radar_C.Spotted End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Radar_C::Spotted_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.Spotted End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Radar.W_Radar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.Tick"));

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


// Function W_Radar.W_Radar_C.UpdateRadarSizeText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Radar_C::UpdateRadarSizeText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.UpdateRadarSizeText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Radar.W_Radar_C.OnRadarSizeUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          RadarSizeMultiplier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::OnRadarSizeUpdated(float RadarSizeMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.OnRadarSizeUpdated"));

	struct
	{
		float                          RadarSizeMultiplier;
	} params = {};

	params.RadarSizeMultiplier = RadarSizeMultiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Radar.W_Radar_C.OnTrackableActorAddedToGame
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  TrackableActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::OnTrackableActorAddedToGame(class AActor* TrackableActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.OnTrackableActorAddedToGame"));

	struct
	{
		class AActor*                  TrackableActor;
	} params = {};

	params.TrackableActor = TrackableActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Radar.W_Radar_C.AddTrackableActorToRadar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  TrackableActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::AddTrackableActorToRadar(class AActor* TrackableActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.AddTrackableActorToRadar"));

	struct
	{
		class AActor*                  TrackableActor;
	} params = {};

	params.TrackableActor = TrackableActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Radar.W_Radar_C.ExecuteUbergraph_W_Radar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::ExecuteUbergraph_W_Radar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.ExecuteUbergraph_W_Radar"));

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


// Function W_Radar.W_Radar_C.OnFadeStart__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          FadeTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::OnFadeStart__DelegateSignature(float FadeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.OnFadeStart__DelegateSignature"));

	struct
	{
		float                          FadeTime;
	} params = {};

	params.FadeTime = FadeTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Radar.W_Radar_C.OnBlip__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Radar_C::OnBlip__DelegateSignature(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Radar.W_Radar_C.OnBlip__DelegateSignature"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
