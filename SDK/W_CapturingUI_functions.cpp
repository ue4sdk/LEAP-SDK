// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_CapturingUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_CapturingUI.W_CapturingUI_C.GetTeamColour
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Colour                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturingUI_C::GetTeamColour(int Team, struct FLinearColor* Colour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.GetTeamColour"));

	struct
	{
		int                            Team;
		struct FLinearColor            Colour;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Colour != nullptr)
		*Colour = params.Colour;
}


// Function W_CapturingUI.W_CapturingUI_C.OnPawnAcquired_EF9090B34C2D2FD10C754DB25623011C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturingUI_C::OnPawnAcquired_EF9090B34C2D2FD10C754DB25623011C(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.OnPawnAcquired_EF9090B34C2D2FD10C754DB25623011C"));

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


// Function W_CapturingUI.W_CapturingUI_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_CapturingUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.OnOverlap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturingUI_C::OnOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.OnOverlap"));

	struct
	{
		class AActor*                  OverlappedActor;
		class AActor*                  OtherActor;
	} params = {};

	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.OnOverlapEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturingUI_C::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.OnOverlapEnd"));

	struct
	{
		class AActor*                  OverlappedActor;
		class AActor*                  OtherActor;
	} params = {};

	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.BindToCapturePoint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CapturingUI_C::BindToCapturePoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.BindToCapturePoint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.UnbindFromCapturePoint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CapturingUI_C::UnbindFromCapturePoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.UnbindFromCapturePoint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.OnCaptureInfoChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCaptureInfo            CaptureInfo                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UW_CapturingUI_C::OnCaptureInfoChanged(const struct FCaptureInfo& CaptureInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.OnCaptureInfoChanged"));

	struct
	{
		struct FCaptureInfo            CaptureInfo;
	} params = {};

	params.CaptureInfo = CaptureInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturingUI_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.Fade"));

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


// Function W_CapturingUI.W_CapturingUI_C.Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturingUI_C::Finished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.Finished"));

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


// Function W_CapturingUI.W_CapturingUI_C.FadeTo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          From                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          To                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturingUI_C::FadeTo(float From, float To)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.FadeTo"));

	struct
	{
		float                          From;
		float                          To;
	} params = {};

	params.From = From;
	params.To = To;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.OnPawnChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   CurrentPawn                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   OldPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturingUI_C::OnPawnChanged(class APawn* CurrentPawn, class APawn* OldPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.OnPawnChanged"));

	struct
	{
		class APawn*                   CurrentPawn;
		class APawn*                   OldPawn;
	} params = {};

	params.CurrentPawn = CurrentPawn;
	params.OldPawn = OldPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Driver                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        CurrentVehicle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        PreviousVehicle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturingUI_C::CustomEvent_1(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.CustomEvent_1"));

	struct
	{
		class AProjectXCharacter*      Driver;
		class AProjectXVehicle*        CurrentVehicle;
		class AProjectXVehicle*        PreviousVehicle;
	} params = {};

	params.Driver = Driver;
	params.CurrentVehicle = CurrentVehicle;
	params.PreviousVehicle = PreviousVehicle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.OnCapturePointLockedTo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bLocked                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_CapturingUI_C::OnCapturePointLockedTo(class ACapturePoint* CapturePoint, bool bLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.OnCapturePointLockedTo"));

	struct
	{
		class ACapturePoint*           CapturePoint;
		bool                           bLocked;
	} params = {};

	params.CapturePoint = CapturePoint;
	params.bLocked = bLocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_CapturingUI_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.PreConstruct"));

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


// Function W_CapturingUI.W_CapturingUI_C.BndEvt__W_ObjectiveIcon_K2Node_ComponentBoundEvent_1_OnCaptureProgress__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_CapturingUI_C::BndEvt__W_ObjectiveIcon_K2Node_ComponentBoundEvent_1_OnCaptureProgress__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.BndEvt__W_ObjectiveIcon_K2Node_ComponentBoundEvent_1_OnCaptureProgress__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturingUI.W_CapturingUI_C.ExecuteUbergraph_W_CapturingUI
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturingUI_C::ExecuteUbergraph_W_CapturingUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturingUI.W_CapturingUI_C.ExecuteUbergraph_W_CapturingUI"));

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
