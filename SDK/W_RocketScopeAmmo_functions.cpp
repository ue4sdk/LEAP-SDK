// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_RocketScopeAmmo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_RocketScopeAmmo.W_RocketScopeAmmo_C.resizeMe
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_RocketScopeAmmo_C::resizeMe(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_RocketScopeAmmo.W_RocketScopeAmmo_C.resizeMe"));

	struct
	{
		struct FVector2D               Size;
	} params = {};

	params.Size = Size;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_RocketScopeAmmo.W_RocketScopeAmmo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_RocketScopeAmmo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_RocketScopeAmmo.W_RocketScopeAmmo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_RocketScopeAmmo.W_RocketScopeAmmo_C.ExecuteUbergraph_W_RocketScopeAmmo
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_RocketScopeAmmo_C::ExecuteUbergraph_W_RocketScopeAmmo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_RocketScopeAmmo.W_RocketScopeAmmo_C.ExecuteUbergraph_W_RocketScopeAmmo"));

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
