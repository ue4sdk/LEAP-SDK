#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Spotted_Affliction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spotted_Affliction.BP_Spotted_Affliction_C
// 0x0008 (0x0208 - 0x0200)
class UBP_Spotted_Affliction_C : public UAfflictionInstanceSpotted
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Spotted_Affliction.BP_Spotted_Affliction_C"));
		return ptr;
	}


	void K2_Start();
	void K2_End();
	void ExecuteUbergraph_BP_Spotted_Affliction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
