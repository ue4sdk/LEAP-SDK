#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VehicleSeat_Empty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleSeat_Empty.BP_VehicleSeat_Empty_C
// 0x0001 (0x0C26 - 0x0C25)
class ABP_VehicleSeat_Empty_C : public ABP_ProjectXVehicle_C
{
public:
	bool                                               bGunToggle;                                               // 0x0C25(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VehicleSeat_Empty.BP_VehicleSeat_Empty_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
