#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Struct_SubNavButtons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_SubMenus.Struct_SubMenus
// 0x0028
struct FStruct_SubMenus
{
	TArray<struct FStruct_SubNavButtons>               Buttons_9_868DE8854492BCC586D2EBBAB98AAE16;               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference)
	struct FText                                       Title_16_E29D26D344507A8C5453A5B8FCF1A3E7;                // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
