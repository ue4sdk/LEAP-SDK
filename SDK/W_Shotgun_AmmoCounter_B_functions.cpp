// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Shotgun_AmmoCounter_B_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Shotgun_AmmoCounter_B.W_Shotgun_AmmoCounter_B_C.OnPawnAcquired_1BD568F847049B7E512630AB49C17318
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Shotgun_AmmoCounter_B_C::OnPawnAcquired_1BD568F847049B7E512630AB49C17318(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Shotgun_AmmoCounter_B.W_Shotgun_AmmoCounter_B_C.OnPawnAcquired_1BD568F847049B7E512630AB49C17318"));

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


// Function W_Shotgun_AmmoCounter_B.W_Shotgun_AmmoCounter_B_C.AmmoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Shotgun_AmmoCounter_B_C::AmmoChanged(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Shotgun_AmmoCounter_B.W_Shotgun_AmmoCounter_B_C.AmmoChanged"));

	struct
	{
		int                            Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Shotgun_AmmoCounter_B.W_Shotgun_AmmoCounter_B_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Shotgun_AmmoCounter_B_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Shotgun_AmmoCounter_B.W_Shotgun_AmmoCounter_B_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Shotgun_AmmoCounter_B.W_Shotgun_AmmoCounter_B_C.ExecuteUbergraph_W_Shotgun_AmmoCounter_B
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Shotgun_AmmoCounter_B_C::ExecuteUbergraph_W_Shotgun_AmmoCounter_B(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Shotgun_AmmoCounter_B.W_Shotgun_AmmoCounter_B_C.ExecuteUbergraph_W_Shotgun_AmmoCounter_B"));

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
