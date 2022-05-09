// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ClassEXPProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ClassEXPProgress.W_ClassEXPProgress_C.Get Experience
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            TargetExp                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CurrentExp                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassEXPProgress_C::Get_Experience(int* TargetExp, int* CurrentExp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassEXPProgress.W_ClassEXPProgress_C.Get Experience"));

	struct
	{
		int                            TargetExp;
		int                            CurrentExp;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TargetExp != nullptr)
		*TargetExp = params.TargetExp;
	if (CurrentExp != nullptr)
		*CurrentExp = params.CurrentExp;
}


// Function W_ClassEXPProgress.W_ClassEXPProgress_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ClassName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class USoundBase*              IncrementSound                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassEXPProgress_C::Init(int NewLevel, const struct FString& ClassName, class USoundBase* IncrementSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassEXPProgress.W_ClassEXPProgress_C.Init"));

	struct
	{
		int                            NewLevel;
		struct FString                 ClassName;
		class USoundBase*              IncrementSound;
	} params = {};

	params.NewLevel = NewLevel;
	params.ClassName = ClassName;
	params.IncrementSound = IncrementSound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ClassEXPProgress.W_ClassEXPProgress_C.UpdateExp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            DeltaExp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassEXPProgress_C::UpdateExp(int DeltaExp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassEXPProgress.W_ClassEXPProgress_C.UpdateExp"));

	struct
	{
		int                            DeltaExp;
	} params = {};

	params.DeltaExp = DeltaExp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ClassEXPProgress.W_ClassEXPProgress_C.IncrementExp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassEXPProgress_C::IncrementExp(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassEXPProgress.W_ClassEXPProgress_C.IncrementExp"));

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


// Function W_ClassEXPProgress.W_ClassEXPProgress_C.UpdateDIsplayExp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Current                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Total                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassEXPProgress_C::UpdateDIsplayExp(int Current, int Total)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassEXPProgress.W_ClassEXPProgress_C.UpdateDIsplayExp"));

	struct
	{
		int                            Current;
		int                            Total;
	} params = {};

	params.Current = Current;
	params.Total = Total;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ClassEXPProgress.W_ClassEXPProgress_C.OnExpIncrementComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassEXPProgress_C::OnExpIncrementComplete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassEXPProgress.W_ClassEXPProgress_C.OnExpIncrementComplete"));

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


// Function W_ClassEXPProgress.W_ClassEXPProgress_C.OverrideData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Exp                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassEXPProgress_C::OverrideData(int Level, int Exp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassEXPProgress.W_ClassEXPProgress_C.OverrideData"));

	struct
	{
		int                            Level;
		int                            Exp;
	} params = {};

	params.Level = Level;
	params.Exp = Exp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ClassEXPProgress.W_ClassEXPProgress_C.ExecuteUbergraph_W_ClassEXPProgress
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassEXPProgress_C::ExecuteUbergraph_W_ClassEXPProgress(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassEXPProgress.W_ClassEXPProgress_C.ExecuteUbergraph_W_ClassEXPProgress"));

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


// Function W_ClassEXPProgress.W_ClassEXPProgress_C.ExpIncrementComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ExcessExp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           MaxedEXP                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ClassEXPProgress_C::ExpIncrementComplete__DelegateSignature(int ExcessExp, bool MaxedEXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassEXPProgress.W_ClassEXPProgress_C.ExpIncrementComplete__DelegateSignature"));

	struct
	{
		int                            ExcessExp;
		bool                           MaxedEXP;
	} params = {};

	params.ExcessExp = ExcessExp;
	params.MaxedEXP = MaxedEXP;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
