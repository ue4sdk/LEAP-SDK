// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_LevelProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_LevelProgress.W_LevelProgress_C.GetLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UW_LevelProgress_C::GetLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelProgress.W_LevelProgress_C.GetLevel"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_LevelProgress.W_LevelProgress_C.UpdateExp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ExpDelta                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LevelProgress_C::UpdateExp(int ExpDelta, int NewLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelProgress.W_LevelProgress_C.UpdateExp"));

	struct
	{
		int                            ExpDelta;
		int                            NewLevel;
	} params = {};

	params.ExpDelta = ExpDelta;
	params.NewLevel = NewLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LevelProgress.W_LevelProgress_C.BndEvt__W_ClassEXPProgress_K2Node_ComponentBoundEvent_0_ExpIncrementComplete__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            ExcessExp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           MaxedEXP                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_LevelProgress_C::BndEvt__W_ClassEXPProgress_K2Node_ComponentBoundEvent_0_ExpIncrementComplete__DelegateSignature(int ExcessExp, bool MaxedEXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelProgress.W_LevelProgress_C.BndEvt__W_ClassEXPProgress_K2Node_ComponentBoundEvent_0_ExpIncrementComplete__DelegateSignature"));

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


// Function W_LevelProgress.W_LevelProgress_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LevelProgress_C::Init(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelProgress.W_LevelProgress_C.Init"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LevelProgress.W_LevelProgress_C.ConsumeExcessExp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_LevelProgress_C::ConsumeExcessExp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelProgress.W_LevelProgress_C.ConsumeExcessExp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LevelProgress.W_LevelProgress_C.UpdateLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_LevelProgress_C::UpdateLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelProgress.W_LevelProgress_C.UpdateLevel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LevelProgress.W_LevelProgress_C.ExecuteUbergraph_W_LevelProgress
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LevelProgress_C::ExecuteUbergraph_W_LevelProgress(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelProgress.W_LevelProgress_C.ExecuteUbergraph_W_LevelProgress"));

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


// Function W_LevelProgress.W_LevelProgress_C.ExpFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_LevelProgress_C::ExpFinished__DelegateSignature(const struct FString& Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelProgress.W_LevelProgress_C.ExpFinished__DelegateSignature"));

	struct
	{
		struct FString                 Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LevelProgress.W_LevelProgress_C.LevelUpTriggered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LevelProgress_C::LevelUpTriggered__DelegateSignature(const struct FString& Class, int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelProgress.W_LevelProgress_C.LevelUpTriggered__DelegateSignature"));

	struct
	{
		struct FString                 Class;
		int                            Level;
	} params = {};

	params.Class = Class;
	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
