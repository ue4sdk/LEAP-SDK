#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXGameModeTeamDeathmatch_Medium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXGameModeTeamDeathmatch_Medium.BP_ProjectXGameModeTeamDeathmatch_Medium_C
// 0x0008 (0x0508 - 0x0500)
class ABP_ProjectXGameModeTeamDeathmatch_Medium_C : public AProjectXGameModeTeamDeathmatch
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXGameModeTeamDeathmatch_Medium.BP_ProjectXGameModeTeamDeathmatch_Medium_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
