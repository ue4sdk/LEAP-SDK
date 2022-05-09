#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "E_GlobalMessageDialogue_Styles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_PurchaseProcessingMenu_Event_DialogueSettings.ST_PurchaseProcessingMenu_Event_DialogueSettings
// 0x0068
struct FST_PurchaseProcessingMenu_Event_DialogueSettings
{
	TEnumAsByte<E_GlobalMessageDialogue_Styles>        DialogueStyle_19_4CA81B1F4213B534484ECB8D918F241A;        // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Waiting_22_3EF0AF4C4C2B97E7A42E4F9EE59FD81A;              // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FText                                       Title_2_E7FD99644134F3D15F835BA0A20DD819;                 // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Message_4_F4FDB6024966F53EBAC7708026B12CEB;               // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Option1Name_14_558B22114A5A5D44DD8120B4FD360B35;          // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Option2Name_16_9C96CF914A38F329538A94B49B847828;          // 0x0050(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
