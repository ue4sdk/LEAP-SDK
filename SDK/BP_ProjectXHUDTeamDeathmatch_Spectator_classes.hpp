#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXHUDTeamDeathmatch_Spectator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXHUDTeamDeathmatch_Spectator.BP_ProjectXHUDTeamDeathmatch_Spectator_C
// 0x0008 (0x0430 - 0x0428)
class ABP_ProjectXHUDTeamDeathmatch_Spectator_C : public ABP_ProjectXHUDBaseControl_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXHUDTeamDeathmatch_Spectator.BP_ProjectXHUDTeamDeathmatch_Spectator_C"));
		return ptr;
	}


	bool ShouldCloseMap();
	bool ShouldOpenMap();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ProjectXHUDTeamDeathmatch_Spectator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
