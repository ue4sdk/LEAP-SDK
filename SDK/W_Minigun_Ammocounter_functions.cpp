// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Minigun_Ammocounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.OnPawnAcquired_11F9125B4A7F3701ADABB7ADF8FCA989
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Minigun_Ammocounter_C::OnPawnAcquired_11F9125B4A7F3701ADABB7ADF8FCA989(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.OnPawnAcquired_11F9125B4A7F3701ADABB7ADF8FCA989"));

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


// Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Minigun_Ammocounter_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Minigun_Ammocounter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.Tick"));

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


// Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.Alert
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Minigun_Ammocounter_C::Alert()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.Alert"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.Warn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Minigun_Ammocounter_C::Warn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.Warn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.OK
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Minigun_Ammocounter_C::OK()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.OK"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.Overheated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Minigun_Ammocounter_C::Overheated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.Overheated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.ONWeaponOverheatEnd_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Minigun_Ammocounter_C::ONWeaponOverheatEnd_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.ONWeaponOverheatEnd_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.ExecuteUbergraph_W_Minigun_Ammocounter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Minigun_Ammocounter_C::ExecuteUbergraph_W_Minigun_Ammocounter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Minigun_Ammocounter.W_Minigun_Ammocounter_C.ExecuteUbergraph_W_Minigun_Ammocounter"));

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
