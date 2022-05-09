#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DT_Airstrike_Bomb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DT_Airstrike_Bomb.DT_Airstrike_Bomb_C
// 0x0000 (0x0160 - 0x0160)
class UDT_Airstrike_Bomb_C : public UBP_DamageType_NoPrediction_AutoTurret_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DT_Airstrike_Bomb.DT_Airstrike_Bomb_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
