#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceGrenadeSpeed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AfflictionInstanceGrenadeSpeed.BP_AfflictionInstanceGrenadeSpeed_C
// 0x0000 (0x0250 - 0x0250)
class UBP_AfflictionInstanceGrenadeSpeed_C : public UAfflictionInstanceGrenadeDist
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AfflictionInstanceGrenadeSpeed.BP_AfflictionInstanceGrenadeSpeed_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
