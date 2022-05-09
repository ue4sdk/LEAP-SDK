// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_VehicleSeats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_VehicleSeats.W_VehicleSeats_C.Setup Seat
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UVehicleSeatComponent*   Seat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleSeats_C::Setup_Seat(class UVehicleSeatComponent* Seat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.Setup Seat"));

	struct
	{
		class UVehicleSeatComponent*   Seat;
	} params = {};

	params.Seat = Seat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeats.W_VehicleSeats_C.OnLoaded_D61572A04DAB3D627429ECB143457D20
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleSeats_C::OnLoaded_D61572A04DAB3D627429ECB143457D20(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.OnLoaded_D61572A04DAB3D627429ECB143457D20"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeats.W_VehicleSeats_C.OnVehicleChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Driver                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        CurrentVehicle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        PreviousVehicle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleSeats_C::OnVehicleChanged(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.OnVehicleChanged"));

	struct
	{
		class AProjectXCharacter*      Driver;
		class AProjectXVehicle*        CurrentVehicle;
		class AProjectXVehicle*        PreviousVehicle;
	} params = {};

	params.Driver = Driver;
	params.CurrentVehicle = CurrentVehicle;
	params.PreviousVehicle = PreviousVehicle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeats.W_VehicleSeats_C.Setup Seats
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_VehicleSeats_C::Setup_Seats()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.Setup Seats"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeats.W_VehicleSeats_C.OnWorldReady
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UW_VehicleSeats_C::OnWorldReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.OnWorldReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeats.W_VehicleSeats_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_VehicleSeats_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeats.W_VehicleSeats_C.On Vehicle Passenger Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXVehicle*        Vehicle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UVehicleSeatComponent*   Seat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      PreviousPassenger              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleSeats_C::On_Vehicle_Passenger_Changed(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* PreviousPassenger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.On Vehicle Passenger Changed"));

	struct
	{
		class AProjectXVehicle*        Vehicle;
		class UVehicleSeatComponent*   Seat;
		class AProjectXCharacter*      PreviousPassenger;
	} params = {};

	params.Vehicle = Vehicle;
	params.Seat = Seat;
	params.PreviousPassenger = PreviousPassenger;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeats.W_VehicleSeats_C.OnSquadChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleSeats_C::OnSquadChanged(int SquadID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.OnSquadChanged"));

	struct
	{
		int                            SquadID;
	} params = {};

	params.SquadID = SquadID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeats.W_VehicleSeats_C.Refresh Vehicle Seat Info
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_VehicleSeats_C::Refresh_Vehicle_Seat_Info()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.Refresh Vehicle Seat Info"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeats.W_VehicleSeats_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_VehicleSeats_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeats.W_VehicleSeats_C.ExecuteUbergraph_W_VehicleSeats
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleSeats_C::ExecuteUbergraph_W_VehicleSeats(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeats.W_VehicleSeats_C.ExecuteUbergraph_W_VehicleSeats"));

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
