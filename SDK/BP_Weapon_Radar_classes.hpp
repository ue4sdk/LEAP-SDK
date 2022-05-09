#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_Radar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_Radar.BP_Weapon_Radar_C
// 0x0008 (0x0880 - 0x0878)
class UBP_Weapon_Radar_C : public UWeaponInstanceRadar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_Radar.BP_Weapon_Radar_C"));
		return ptr;
	}


	void K2_Fire(unsigned char Mode);
	void ExecuteUbergraph_BP_Weapon_Radar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
