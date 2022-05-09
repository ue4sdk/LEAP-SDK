#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_StingerDamageAffliction_Thorn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StingerDamageAffliction_Thorn.BP_StingerDamageAffliction_Thorn_C
// 0x0000 (0x0288 - 0x0288)
class UBP_StingerDamageAffliction_Thorn_C : public UBP_StingerDamageAffliction_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StingerDamageAffliction_Thorn.BP_StingerDamageAffliction_Thorn_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
