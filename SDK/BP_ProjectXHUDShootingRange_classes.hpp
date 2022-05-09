#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXHUDShootingRange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXHUDShootingRange.BP_ProjectXHUDShootingRange_C
// 0x0008 (0x0428 - 0x0420)
class ABP_ProjectXHUDShootingRange_C : public ABP_ProjectXHUD_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXHUDShootingRange.BP_ProjectXHUDShootingRange_C"));
		return ptr;
	}


	void MatchStartUISetup();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ProjectXHUDShootingRange(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
