// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_InteractionHighlight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_InteractionHighlight.W_InteractionHighlight_C.OnPawnAcquired_F2145981401627EA72078AA390E244AA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::OnPawnAcquired_F2145981401627EA72078AA390E244AA(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.OnPawnAcquired_F2145981401627EA72078AA390E244AA"));

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


// Function W_InteractionHighlight.W_InteractionHighlight_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_InteractionHighlight_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.OnHoldInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          HoldTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::OnHoldInteract(class UInteractableComponent* Interactable, class UPrimitiveComponent* Component, float HoldTime, class APlayerController* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.OnHoldInteract"));

	struct
	{
		class UInteractableComponent*  Interactable;
		class UPrimitiveComponent*     Component;
		float                          HoldTime;
		class APlayerController*       Sender;
	} params = {};

	params.Interactable = Interactable;
	params.Component = Component;
	params.HoldTime = HoldTime;
	params.Sender = Sender;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.OnStopHoldInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::OnStopHoldInteract(class UInteractableComponent* Interactable, class UPrimitiveComponent* Component, class APlayerController* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.OnStopHoldInteract"));

	struct
	{
		class UInteractableComponent*  Interactable;
		class UPrimitiveComponent*     Component;
		class APlayerController*       Sender;
	} params = {};

	params.Interactable = Interactable;
	params.Component = Component;
	params.Sender = Sender;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.OnHighlightEnter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   HighlightText                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::OnHighlightEnter(const struct FText& HighlightText, class UInteractableComponent* Interactable, class UPrimitiveComponent* Component, class APlayerController* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.OnHighlightEnter"));

	struct
	{
		struct FText                   HighlightText;
		class UInteractableComponent*  Interactable;
		class UPrimitiveComponent*     Component;
		class APlayerController*       Sender;
	} params = {};

	params.HighlightText = HighlightText;
	params.Interactable = Interactable;
	params.Component = Component;
	params.Sender = Sender;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.OnHighlightExit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::OnHighlightExit(class UInteractableComponent* Interactable, class UPrimitiveComponent* Component, class APlayerController* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.OnHighlightExit"));

	struct
	{
		class UInteractableComponent*  Interactable;
		class UPrimitiveComponent*     Component;
		class APlayerController*       Sender;
	} params = {};

	params.Interactable = Interactable;
	params.Component = Component;
	params.Sender = Sender;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.FillProgressBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::FillProgressBar(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.FillProgressBar"));

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


// Function W_InteractionHighlight.W_InteractionHighlight_C.OnVehicleChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Driver                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        CurrentVehicle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        PreviousVehicle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::OnVehicleChanged(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.OnVehicleChanged"));

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


// Function W_InteractionHighlight.W_InteractionHighlight_C.BindToNoneVehicle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_InteractionHighlight_C::BindToNoneVehicle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.BindToNoneVehicle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.BindToVehicleEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_InteractionHighlight_C::BindToVehicleEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.BindToVehicleEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.OnInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ExitTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::OnInteract(float ExitTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.OnInteract"));

	struct
	{
		float                          ExitTime;
	} params = {};

	params.ExitTime = ExitTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.OnComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_InteractionHighlight_C::OnComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.OnComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.UnBindToNoneVehicle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_InteractionHighlight_C::UnBindToNoneVehicle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.UnBindToNoneVehicle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.OnPVUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHold                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          HoldDuration                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::OnPVUse(bool bHold, float HoldDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.OnPVUse"));

	struct
	{
		bool                           bHold;
		float                          HoldDuration;
	} params = {};

	params.bHold = bHold;
	params.HoldDuration = HoldDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.UpdateVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_InteractionHighlight_C::UpdateVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.UpdateVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.StartProgressBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeTotal                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::StartProgressBar(float TimeTotal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.StartProgressBar"));

	struct
	{
		float                          TimeTotal;
	} params = {};

	params.TimeTotal = TimeTotal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InteractionHighlight.W_InteractionHighlight_C.ExecuteUbergraph_W_InteractionHighlight
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InteractionHighlight_C::ExecuteUbergraph_W_InteractionHighlight(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InteractionHighlight.W_InteractionHighlight_C.ExecuteUbergraph_W_InteractionHighlight"));

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
