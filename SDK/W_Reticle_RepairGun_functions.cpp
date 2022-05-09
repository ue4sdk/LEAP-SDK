// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Reticle_RepairGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.SetBarProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TargetValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_RepairGun_C::SetBarProgress(float TargetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.SetBarProgress"));

	struct
	{
		float                          TargetValue;
	} params = {};

	params.TargetValue = TargetValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.OnPawnAcquired_2B30245249494CC2B01046BF2D0BC1C6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_RepairGun_C::OnPawnAcquired_2B30245249494CC2B01046BF2D0BC1C6(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.OnPawnAcquired_2B30245249494CC2B01046BF2D0BC1C6"));

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


// Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Reticle_RepairGun_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_RepairGun_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.Tick"));

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


// Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.TargetInRange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  BeamTarget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_RepairGun_C::TargetInRange(class AActor* BeamTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.TargetInRange"));

	struct
	{
		class AActor*                  BeamTarget;
	} params = {};

	params.BeamTarget = BeamTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.TargetInRangeLost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  BeamTarget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_RepairGun_C::TargetInRangeLost(class AActor* BeamTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.TargetInRangeLost"));

	struct
	{
		class AActor*                  BeamTarget;
	} params = {};

	params.BeamTarget = BeamTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.OnBeamStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_RepairGun_C::OnBeamStart(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.OnBeamStart"));

	struct
	{
		unsigned char                  Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.OnTargetSearch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSearching                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Reticle_RepairGun_C::OnTargetSearch(bool IsSearching)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.OnTargetSearch"));

	struct
	{
		bool                           IsSearching;
	} params = {};

	params.IsSearching = IsSearching;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.ExecuteUbergraph_W_Reticle_RepairGun
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reticle_RepairGun_C::ExecuteUbergraph_W_Reticle_RepairGun(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reticle_RepairGun.W_Reticle_RepairGun_C.ExecuteUbergraph_W_Reticle_RepairGun"));

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
