#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ReviveBeaconHudInfoWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C
// 0x0008 (0x0618 - 0x0610)
class UBP_ReviveBeaconHudInfoWidget_C : public UBP_DeployabeHudInfoWidgetComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BeginTimer(float ReviveStartTime, float ReviveDuration);
	void TogglePlayerCan_RedeployState(bool bToggle);
	void ExecuteUbergraph_BP_ReviveBeaconHudInfoWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
