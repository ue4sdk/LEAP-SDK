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

// UserDefinedStruct ExperienceAction.ExperienceAction
// 0x0030
struct FExperienceAction
{
	struct FString                                     Target_21_3F5C014A42EF5C7105CB9F998FB7252C;               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	int                                                Experience_22_25A3C7F641E9FA641C6D0FBEFECCA963;           // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FText                                       Action_19_6B04F47F43ABB0ACC3270F92DE751172;               // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
