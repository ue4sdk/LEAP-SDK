// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DashIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DashIcon.W_DashIcon_C.Init Arow Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DashIcon_C::Init_Arow_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashIcon.W_DashIcon_C.Init Arow Visibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashIcon.W_DashIcon_C.OnPawnAcquired_C68BC2F6423130A8F3BDE6B01E26B939
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DashIcon_C::OnPawnAcquired_C68BC2F6423130A8F3BDE6B01E26B939(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashIcon.W_DashIcon_C.OnPawnAcquired_C68BC2F6423130A8F3BDE6B01E26B939"));

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


// Function W_DashIcon.W_DashIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DashIcon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashIcon.W_DashIcon_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashIcon.W_DashIcon_C.OnGamepadStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsUsingGamePad                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DashIcon_C::OnGamepadStateChanged(bool IsUsingGamePad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashIcon.W_DashIcon_C.OnGamepadStateChanged"));

	struct
	{
		bool                           IsUsingGamePad;
	} params = {};

	params.IsUsingGamePad = IsUsingGamePad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashIcon.W_DashIcon_C.SetupDashCharges
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DashIcon_C::SetupDashCharges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashIcon.W_DashIcon_C.SetupDashCharges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashIcon.W_DashIcon_C.UpdateDashCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            DashCharges                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DashIcon_C::UpdateDashCount(int DashCharges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashIcon.W_DashIcon_C.UpdateDashCount"));

	struct
	{
		int                            DashCharges;
	} params = {};

	params.DashCharges = DashCharges;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashIcon.W_DashIcon_C.Re-Config
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            DashCharges                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DashIcon_C::Re_Config(int DashCharges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashIcon.W_DashIcon_C.Re-Config"));

	struct
	{
		int                            DashCharges;
	} params = {};

	params.DashCharges = DashCharges;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashIcon.W_DashIcon_C.ExecuteUbergraph_W_DashIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DashIcon_C::ExecuteUbergraph_W_DashIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashIcon.W_DashIcon_C.ExecuteUbergraph_W_DashIcon"));

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
