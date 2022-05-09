#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VehicleSeat_FrontGunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleSeat_FrontGunner.BP_VehicleSeat_FrontGunner_C
// 0x000B (0x0C30 - 0x0C25)
class ABP_VehicleSeat_FrontGunner_C : public ABP_ProjectXVehicle_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C25(0x0003) MISSED OFFSET
	class UCurveFloat*                                 CannonCurve;                                              // 0x0C28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VehicleSeat_FrontGunner.BP_VehicleSeat_FrontGunner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
