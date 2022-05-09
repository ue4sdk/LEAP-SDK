#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DisableMovementAffliction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DisableMovementAffliction.BP_DisableMovementAffliction_C
// 0x0000 (0x0200 - 0x0200)
class UBP_DisableMovementAffliction_C : public UAfflictionInstanceDisableMovement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DisableMovementAffliction.BP_DisableMovementAffliction_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
