// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SniperScope_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SniperScope.W_SniperScope_C.Finished_2387FEBC479DB9220BE4359169FCB42D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SniperScope_C::Finished_2387FEBC479DB9220BE4359169FCB42D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SniperScope.W_SniperScope_C.Finished_2387FEBC479DB9220BE4359169FCB42D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SniperScope.W_SniperScope_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SniperScope_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SniperScope.W_SniperScope_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SniperScope.W_SniperScope_C.UpdateScopeEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SniperScope_C::UpdateScopeEffect(float Percent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SniperScope.W_SniperScope_C.UpdateScopeEffect"));

	struct
	{
		float                          Percent;
	} params = {};

	params.Percent = Percent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SniperScope.W_SniperScope_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SniperScope_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SniperScope.W_SniperScope_C.Tick"));

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


// Function W_SniperScope.W_SniperScope_C.OnWeaponFire
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SniperScope_C::OnWeaponFire(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SniperScope.W_SniperScope_C.OnWeaponFire"));

	struct
	{
		unsigned char                  Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SniperScope.W_SniperScope_C.OnAmmoChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SniperScope_C::OnAmmoChanged_Event_1(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SniperScope.W_SniperScope_C.OnAmmoChanged_Event_1"));

	struct
	{
		int                            Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SniperScope.W_SniperScope_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SniperScope_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SniperScope.W_SniperScope_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SniperScope.W_SniperScope_C.ClearEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SniperScope_C::ClearEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SniperScope.W_SniperScope_C.ClearEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SniperScope.W_SniperScope_C.InterpProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SniperScope_C::InterpProgress(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SniperScope.W_SniperScope_C.InterpProgress"));

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


// Function W_SniperScope.W_SniperScope_C.ExecuteUbergraph_W_SniperScope
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SniperScope_C::ExecuteUbergraph_W_SniperScope(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SniperScope.W_SniperScope_C.ExecuteUbergraph_W_SniperScope"));

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
