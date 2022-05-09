#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Melee_Generic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Melee_Generic.BP_Melee_Generic_C
// 0x0008 (0x0908 - 0x0900)
class UBP_Melee_Generic_C : public UWeaponInstanceMeleeDash
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0900(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Melee_Generic.BP_Melee_Generic_C"));
		return ptr;
	}


	void K2_Fire(unsigned char Mode);
	void ExecuteUbergraph_BP_Melee_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
