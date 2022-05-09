#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceMeleeAttackRange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AfflictionInstanceMeleeAttackRange.BP_AfflictionInstanceMeleeAttackRange_C
// 0x0000 (0x0250 - 0x0250)
class UBP_AfflictionInstanceMeleeAttackRange_C : public UAfflictionInstanceMeleeAtkRange
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AfflictionInstanceMeleeAttackRange.BP_AfflictionInstanceMeleeAttackRange_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
