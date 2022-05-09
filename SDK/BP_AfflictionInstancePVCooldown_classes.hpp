#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstancePVCooldown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AfflictionInstancePVCooldown.BP_AfflictionInstancePVCooldown_C
// 0x0000 (0x0250 - 0x0250)
class UBP_AfflictionInstancePVCooldown_C : public UAfflictionInstancePVCooldown
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AfflictionInstancePVCooldown.BP_AfflictionInstancePVCooldown_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
