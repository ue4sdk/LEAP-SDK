#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_VehicleSeats_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_VehicleSeats.W_VehicleSeats_C
// 0x0088 (0x02F8 - 0x0270)
class UW_VehicleSeats_C : public UBasicUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UVerticalBox*                                SeatsVerticalBox;                                         // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      VehicleSeatImage;                                         // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class AProjectXVehicle*                            Vehicle;                                                  // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TArray<class UW_VehicleSeatInfo_C*>                SeatWidgets;                                              // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class AProjectXVehicle*                            PreviousVehicle;                                          // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FName, class UW_VehicleSeatInfo_C*>    SeatMap;                                                  // 0x02A8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_VehicleSeats.W_VehicleSeats_C"));
		return ptr;
	}


	void Setup_Seat(class UVehicleSeatComponent* Seat);
	void OnLoaded_D61572A04DAB3D627429ECB143457D20(class UObject* Loaded);
	void OnVehicleChanged(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle);
	void Setup_Seats();
	void OnWorldReady();
	void Construct();
	void On_Vehicle_Passenger_Changed(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* PreviousPassenger);
	void OnSquadChanged(int SquadID);
	void Refresh_Vehicle_Seat_Info();
	void Destruct();
	void ExecuteUbergraph_W_VehicleSeats(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
