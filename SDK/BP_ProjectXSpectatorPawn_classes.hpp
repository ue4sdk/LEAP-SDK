#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXSpectatorPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXSpectatorPawn.BP_ProjectXSpectatorPawn_C
// 0x0008 (0x02D8 - 0x02D0)
class ABP_ProjectXSpectatorPawn_C : public AProjectXSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXSpectatorPawn.BP_ProjectXSpectatorPawn_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_ProjectXSpectatorPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
