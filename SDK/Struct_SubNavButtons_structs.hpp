#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_SubNavButtons.Struct_SubNavButtons
// 0x0050
struct FStruct_SubNavButtons
{
	struct FText                                       ButtonName_3_48C5107D432184E8FE3C87A7E47AE089;            // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       HeaderTitle_46_B81C4754461D7C3AF27BC4A9C9EEFD83;          // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     ID_48_DD52EFDC4E9927702694D68C938103CC;                   // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	bool                                               Default_32_65BB1FCD49E4F8F732F357975C48D0D2;              // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UClass* /*UUserWidget*/                      Content_29_D3FF29C44484D77CDDCE62A3A1ACAA18;              // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
