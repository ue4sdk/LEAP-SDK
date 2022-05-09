// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Energy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Energy.W_Energy_C.OnPawnAcquired_D4631AD7472B81F5F8D338B20CAD1271
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Energy_C::OnPawnAcquired_D4631AD7472B81F5F8D338B20CAD1271(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.OnPawnAcquired_D4631AD7472B81F5F8D338B20CAD1271"));

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


// Function W_Energy.W_Energy_C.OnStaminaChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Stamina                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Energy_C::OnStaminaChanged(float Stamina)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.OnStaminaChanged"));

	struct
	{
		float                          Stamina;
	} params = {};

	params.Stamina = Stamina;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Energy.W_Energy_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Energy_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Energy.W_Energy_C.OnNotEnoughEnergy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Energy_C::OnNotEnoughEnergy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.OnNotEnoughEnergy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Energy.W_Energy_C.On Alert Time End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Energy_C::On_Alert_Time_End(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.On Alert Time End"));

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


// Function W_Energy.W_Energy_C.On Alert Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Energy_C::On_Alert_Update(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.On Alert Update"));

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


// Function W_Energy.W_Energy_C.OnPawnChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Energy_C::OnPawnChanged_Event(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.OnPawnChanged_Event"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Energy.W_Energy_C.ToggleFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Energy_C::ToggleFade(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.ToggleFade"));

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


// Function W_Energy.W_Energy_C.LerpFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Energy_C::LerpFade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.LerpFade"));

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


// Function W_Energy.W_Energy_C.FinishedLerp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Energy_C::FinishedLerp(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.FinishedLerp"));

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


// Function W_Energy.W_Energy_C.ExecuteUbergraph_W_Energy
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Energy_C::ExecuteUbergraph_W_Energy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Energy.W_Energy_C.ExecuteUbergraph_W_Energy"));

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
