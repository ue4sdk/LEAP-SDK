#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DisableActionsAffliction_Stacking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DisableActionsAffliction_Stacking.BP_DisableActionsAffliction_Stacking_C
// 0x0000 (0x0200 - 0x0200)
class UBP_DisableActionsAffliction_Stacking_C : public UAfflictionInstanceDisableActions
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DisableActionsAffliction_Stacking.BP_DisableActionsAffliction_Stacking_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
