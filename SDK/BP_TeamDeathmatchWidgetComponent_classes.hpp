#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TeamDeathmatchWidgetComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TeamDeathmatchWidgetComponent.BP_TeamDeathmatchWidgetComponent_C
// 0x0008 (0x05F8 - 0x05F0)
class UBP_TeamDeathmatchWidgetComponent_C : public UAdvancedWidgetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TeamDeathmatchWidgetComponent.BP_TeamDeathmatchWidgetComponent_C"));
		return ptr;
	}


	void GetAssaultPoint(class AAssaultPoint** CapturePoint);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TeamDeathmatchWidgetComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
