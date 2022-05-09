#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Bp_AfflictionInstanceDashIgnoreGroundCheck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bp_AfflictionInstanceDashIgnoreGroundCheck.Bp_AfflictionInstanceDashIgnoreGroundCheck_C
// 0x0000 (0x0200 - 0x0200)
class UBp_AfflictionInstanceDashIgnoreGroundCheck_C : public UAfflictionInstanceGroundDash
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Bp_AfflictionInstanceDashIgnoreGroundCheck.Bp_AfflictionInstanceDashIgnoreGroundCheck_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
