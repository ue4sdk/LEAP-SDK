#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceGrenadeCount_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AfflictionInstanceGrenadeCount.BP_AfflictionInstanceGrenadeCount_C
// 0x0000 (0x0258 - 0x0258)
class UBP_AfflictionInstanceGrenadeCount_C : public UAfflictionInstanceGrenadeCount
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AfflictionInstanceGrenadeCount.BP_AfflictionInstanceGrenadeCount_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
