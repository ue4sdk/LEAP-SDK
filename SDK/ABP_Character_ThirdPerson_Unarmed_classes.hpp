#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Character_ThirdPerson_Unarmed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Character_ThirdPerson_Unarmed.ABP_Character_ThirdPerson_Unarmed_C
// 0x000C (0x70E8 - 0x70DC)
class UABP_Character_ThirdPerson_Unarmed_C : public UABP_Character_ThirdPerson_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x70DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x70E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_Character_ThirdPerson_Unarmed.ABP_Character_ThirdPerson_Unarmed_C"));
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Character_ThirdPerson_Unarmed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
