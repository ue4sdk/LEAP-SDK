// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Reticle_AssaultRifle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Reticle_AssaultRifle.W_Reticle_AssaultRifle_C.OnPawnAcquired_12B87B46431E2FED1F2ACBA6E5961110
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_AssaultRifle_C::OnPawnAcquired_12B87B46431E2FED1F2ACBA6E5961110(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_AssaultRifle.W_Reticle_AssaultRifle_C.OnPawnAcquired_12B87B46431E2FED1F2ACBA6E5961110"));

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


// Function W_Reticle_AssaultRifle.W_Reticle_AssaultRifle_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Reticle_AssaultRifle_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_AssaultRifle.W_Reticle_AssaultRifle_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle_AssaultRifle.W_Reticle_AssaultRifle_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_AssaultRifle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_AssaultRifle.W_Reticle_AssaultRifle_C.Tick"));

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


// Function W_Reticle_AssaultRifle.W_Reticle_AssaultRifle_C.Calculate Overheat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Reticle_AssaultRifle_C::Calculate_Overheat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_AssaultRifle.W_Reticle_AssaultRifle_C.Calculate Overheat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle_AssaultRifle.W_Reticle_AssaultRifle_C.ExecuteUbergraph_W_Reticle_AssaultRifle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_AssaultRifle_C::ExecuteUbergraph_W_Reticle_AssaultRifle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_AssaultRifle.W_Reticle_AssaultRifle_C.ExecuteUbergraph_W_Reticle_AssaultRifle"));

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
