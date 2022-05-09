// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ShieldGenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShieldGenerator.BP_ShieldGenerator_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ShieldGenerator_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShieldGenerator.BP_ShieldGenerator_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ShieldGenerator.BP_ShieldGenerator_C.OnHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AShieldGenerator*        Generator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ShieldGenerator_C::OnHealthChanged(class AShieldGenerator* Generator, float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShieldGenerator.BP_ShieldGenerator_C.OnHealthChanged"));

	struct
	{
		class AShieldGenerator*        Generator;
		float                          Delta;
	} params = {};

	params.Generator = Generator;
	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ShieldGenerator.BP_ShieldGenerator_C.OnCaptureComplete
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ShieldGenerator_C::OnCaptureComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShieldGenerator.BP_ShieldGenerator_C.OnCaptureComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ShieldGenerator.BP_ShieldGenerator_C.OnShieldGeneratorDestroyed_Delegate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AShieldGenerator*        Generator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ShieldGenerator_C::OnShieldGeneratorDestroyed_Delegate(class AShieldGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShieldGenerator.BP_ShieldGenerator_C.OnShieldGeneratorDestroyed_Delegate"));

	struct
	{
		class AShieldGenerator*        Generator;
	} params = {};

	params.Generator = Generator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ShieldGenerator.BP_ShieldGenerator_C.OnShieldGeneratorInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ShieldGenerator_C::OnShieldGeneratorInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShieldGenerator.BP_ShieldGenerator_C.OnShieldGeneratorInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ShieldGenerator.BP_ShieldGenerator_C.ExecuteUbergraph_BP_ShieldGenerator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ShieldGenerator_C::ExecuteUbergraph_BP_ShieldGenerator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShieldGenerator.BP_ShieldGenerator_C.ExecuteUbergraph_BP_ShieldGenerator"));

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
