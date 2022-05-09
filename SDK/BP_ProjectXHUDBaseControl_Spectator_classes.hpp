#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXHUDBaseControl_Spectator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXHUDBaseControl_Spectator.BP_ProjectXHUDBaseControl_Spectator_C
// 0x0008 (0x0430 - 0x0428)
class ABP_ProjectXHUDBaseControl_Spectator_C : public ABP_ProjectXHUDBaseControl_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXHUDBaseControl_Spectator.BP_ProjectXHUDBaseControl_Spectator_C"));
		return ptr;
	}


	bool ShouldCloseMap();
	bool ShouldOpenMap();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ProjectXHUDBaseControl_Spectator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
