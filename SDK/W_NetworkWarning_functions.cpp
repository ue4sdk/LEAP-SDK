// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_NetworkWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_NetworkWarning.W_NetworkWarning_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_NetworkWarning_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_NetworkWarning.W_NetworkWarning_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_NetworkWarning.W_NetworkWarning_C.BadConnection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_NetworkWarning_C::BadConnection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_NetworkWarning.W_NetworkWarning_C.BadConnection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_NetworkWarning.W_NetworkWarning_C.GoodConnection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_NetworkWarning_C::GoodConnection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_NetworkWarning.W_NetworkWarning_C.GoodConnection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_NetworkWarning.W_NetworkWarning_C.ExecuteUbergraph_W_NetworkWarning
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_NetworkWarning_C::ExecuteUbergraph_W_NetworkWarning(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_NetworkWarning.W_NetworkWarning_C.ExecuteUbergraph_W_NetworkWarning"));

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
