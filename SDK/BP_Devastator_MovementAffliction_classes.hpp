#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Devastator_MovementAffliction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Devastator_MovementAffliction.BP_Devastator_MovementAffliction_C
// 0x0000 (0x0250 - 0x0250)
class UBP_Devastator_MovementAffliction_C : public UAfflictionInstanceMovement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Devastator_MovementAffliction.BP_Devastator_MovementAffliction_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
