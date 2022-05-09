// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Deploy_ClassInfo_Stats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.GetClassLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass* /*AProjectXCharacter*/ NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UW_Deploy_ClassInfo_Stats_C::GetClassLevel(class UClass* /*AProjectXCharacter*/ NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.GetClassLevel"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ NewParam;
		int                            ReturnValue;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Deploy_ClassInfo_Stats_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.InitClassStats
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UW_Deploy_ClassInfo_Stats_C::InitClassStats(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.InitClassStats"));

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


// Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.OnStatsLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Deploy_ClassInfo_Stats_C::OnStatsLoaded(const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.OnStatsLoaded"));

	struct
	{
		struct FString                 PlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.UpdateLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Deploy_ClassInfo_Stats_C::UpdateLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.UpdateLevel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.ExecuteUbergraph_W_Deploy_ClassInfo_Stats
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_ClassInfo_Stats_C::ExecuteUbergraph_W_Deploy_ClassInfo_Stats(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfo_Stats.W_Deploy_ClassInfo_Stats_C.ExecuteUbergraph_W_Deploy_ClassInfo_Stats"));

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
