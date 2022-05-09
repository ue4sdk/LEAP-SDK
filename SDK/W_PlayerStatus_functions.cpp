// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayerStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlayerStatus.W_PlayerStatus_C.GetPipCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          HealthPipCount                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ShieldPipCount                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerStatus_C::GetPipCount(float* HealthPipCount, float* ShieldPipCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatus.W_PlayerStatus_C.GetPipCount"));

	struct
	{
		float                          HealthPipCount;
		float                          ShieldPipCount;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HealthPipCount != nullptr)
		*HealthPipCount = params.HealthPipCount;
	if (ShieldPipCount != nullptr)
		*ShieldPipCount = params.ShieldPipCount;
}


// Function W_PlayerStatus.W_PlayerStatus_C.UpdateShieldColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerStatus_C::UpdateShieldColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatus.W_PlayerStatus_C.UpdateShieldColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerStatus.W_PlayerStatus_C.UpdateHealthColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerStatus_C::UpdateHealthColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatus.W_PlayerStatus_C.UpdateHealthColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerStatus.W_PlayerStatus_C.OnPawnAcquired_482BC06F4BB7BF3B177CBE87FF50D81C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerStatus_C::OnPawnAcquired_482BC06F4BB7BF3B177CBE87FF50D81C(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatus.W_PlayerStatus_C.OnPawnAcquired_482BC06F4BB7BF3B177CBE87FF50D81C"));

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


// Function W_PlayerStatus.W_PlayerStatus_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlayerStatus_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatus.W_PlayerStatus_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerStatus.W_PlayerStatus_C.HealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerStatus_C::HealthChanged(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatus.W_PlayerStatus_C.HealthChanged"));

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


// Function W_PlayerStatus.W_PlayerStatus_C.ShieldsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerStatus_C::ShieldsChanged(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatus.W_PlayerStatus_C.ShieldsChanged"));

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


// Function W_PlayerStatus.W_PlayerStatus_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatus.W_PlayerStatus_C.Tick"));

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


// Function W_PlayerStatus.W_PlayerStatus_C.ExecuteUbergraph_W_PlayerStatus
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerStatus_C::ExecuteUbergraph_W_PlayerStatus(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatus.W_PlayerStatus_C.ExecuteUbergraph_W_PlayerStatus"));

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
