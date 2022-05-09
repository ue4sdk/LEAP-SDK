// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Reticle_ChargedSniper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.OnPawnAcquired_1A632A94450B86C87767E793206DACA4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_ChargedSniper_C::OnPawnAcquired_1A632A94450B86C87767E793206DACA4(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.OnPawnAcquired_1A632A94450B86C87767E793206DACA4"));

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


// Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Reticle_ChargedSniper_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.OnWeaponFire_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_ChargedSniper_C::OnWeaponFire_Event_1(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.OnWeaponFire_Event_1"));

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


// Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.Recoil
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_ChargedSniper_C::Recoil(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.Recoil"));

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


// Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_ChargedSniper_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.Tick"));

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


// Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.SetChargeProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_ChargedSniper_C::SetChargeProgress(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.SetChargeProgress"));

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


// Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.ExecuteUbergraph_W_Reticle_ChargedSniper
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_ChargedSniper_C::ExecuteUbergraph_W_Reticle_ChargedSniper(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_ChargedSniper.W_Reticle_ChargedSniper_C.ExecuteUbergraph_W_Reticle_ChargedSniper"));

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
