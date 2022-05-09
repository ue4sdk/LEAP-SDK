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

// UserDefinedStruct F_PartyMemberChatLog.F_PartyMemberChatLog
// 0x0020
struct FF_PartyMemberChatLog
{
	struct FString                                     PlayerId_7_138E7C344AA1C3DFEBDFCB92C3866461;              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	TArray<class UWidget*>                             MessagesHistory_6_8829121C4B1361B8FC7A92831CCCDB81;       // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
