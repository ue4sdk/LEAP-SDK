#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_TooltipPartySlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_TooltipPartySlot.W_TooltipPartySlot_C
// 0x0020 (0x0280 - 0x0260)
class UW_TooltipPartySlot_C : public UUserWidget
{
public:
	class UTextBlock*                                  TextBlock_1;                                              // 0x0260(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       TipInfo;                                                  // 0x0268(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_TooltipPartySlot.W_TooltipPartySlot_C"));
		return ptr;
	}


	struct FText GetText_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
