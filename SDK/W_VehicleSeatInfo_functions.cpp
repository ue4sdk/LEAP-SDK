// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_VehicleSeatInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Set Seat State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETeamRole                      TeamRole                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      Seat_Occupant                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleSeatInfo_C::Set_Seat_State(ETeamRole TeamRole, class AProjectXCharacter* Seat_Occupant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Set Seat State"));

	struct
	{
		ETeamRole                      TeamRole;
		class AProjectXCharacter*      Seat_Occupant;
	} params = {};

	params.TeamRole = TeamRole;
	params.Seat_Occupant = Seat_Occupant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Set Seat Name
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_VehicleSeatInfo_C::Set_Seat_Name(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.Set Seat Name"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.ExecuteUbergraph_W_VehicleSeatInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleSeatInfo_C::ExecuteUbergraph_W_VehicleSeatInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleSeatInfo.W_VehicleSeatInfo_C.ExecuteUbergraph_W_VehicleSeatInfo"));

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
