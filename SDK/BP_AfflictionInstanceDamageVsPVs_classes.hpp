#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceDamageVsPVs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AfflictionInstanceDamageVsPVs.BP_AfflictionInstanceDamageVsPVs_C
// 0x0000 (0x0250 - 0x0250)
class UBP_AfflictionInstanceDamageVsPVs_C : public UAfflictionInstanceDmgVsPVMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AfflictionInstanceDamageVsPVs.BP_AfflictionInstanceDamageVsPVs_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
