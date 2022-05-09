#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Devastator_DamageAffliction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Devastator_DamageAffliction.BP_Devastator_DamageAffliction_C
// 0x0000 (0x0258 - 0x0258)
class UBP_Devastator_DamageAffliction_C : public UAfflictionInstanceDamage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Devastator_DamageAffliction.BP_Devastator_DamageAffliction_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
