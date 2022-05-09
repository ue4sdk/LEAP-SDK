// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SpawnedEventActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpawnedEventActor.BP_SpawnedEventActor_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SpawnedEventActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventActor.BP_SpawnedEventActor_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SpawnedEventActor.BP_SpawnedEventActor_C.OnSpawnDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SpawnedEventActor_C::OnSpawnDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventActor.BP_SpawnedEventActor_C.OnSpawnDestroyed"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params = {};

	params.DestroyedActor = DestroyedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SpawnedEventActor.BP_SpawnedEventActor_C.OnDriver
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXVehicle*        Vehicle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      OldDriver                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SpawnedEventActor_C::OnDriver(class AProjectXVehicle* Vehicle, class AProjectXCharacter* OldDriver)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventActor.BP_SpawnedEventActor_C.OnDriver"));

	struct
	{
		class AProjectXVehicle*        Vehicle;
		class AProjectXCharacter*      OldDriver;
	} params = {};

	params.Vehicle = Vehicle;
	params.OldDriver = OldDriver;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SpawnedEventActor.BP_SpawnedEventActor_C.OnWorldOriginShiftUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWorld*                  InWorld                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FIntVector              PreviousOriginLocation         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FIntVector              NewOriginLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SpawnedEventActor_C::OnWorldOriginShiftUpdate(class UWorld* InWorld, const struct FIntVector& PreviousOriginLocation, const struct FIntVector& NewOriginLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventActor.BP_SpawnedEventActor_C.OnWorldOriginShiftUpdate"));

	struct
	{
		class UWorld*                  InWorld;
		struct FIntVector              PreviousOriginLocation;
		struct FIntVector              NewOriginLocation;
	} params = {};

	params.InWorld = InWorld;
	params.PreviousOriginLocation = PreviousOriginLocation;
	params.NewOriginLocation = NewOriginLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SpawnedEventActor.BP_SpawnedEventActor_C.ExecuteUbergraph_BP_SpawnedEventActor
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_SpawnedEventActor_C::ExecuteUbergraph_BP_SpawnedEventActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventActor.BP_SpawnedEventActor_C.ExecuteUbergraph_BP_SpawnedEventActor"));

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
