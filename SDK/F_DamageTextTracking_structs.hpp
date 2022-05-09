#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct F_DamageTextTracking.F_DamageTextTracking
// 0x0050
struct FF_DamageTextTracking
{
	TMap<int64_t, class UW_DamageText_C*>              VictimUniqueID_14_9351504C475034BAB72E578FDF74CCC3;       // 0x0000(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
