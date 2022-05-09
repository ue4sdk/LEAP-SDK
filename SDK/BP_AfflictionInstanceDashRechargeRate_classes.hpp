#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceDashRechargeRate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AfflictionInstanceDashRechargeRate.BP_AfflictionInstanceDashRechargeRate_C
// 0x0000 (0x0250 - 0x0250)
class UBP_AfflictionInstanceDashRechargeRate_C : public UAfflictionInstanceDashChargeRate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AfflictionInstanceDashRechargeRate.BP_AfflictionInstanceDashRechargeRate_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
