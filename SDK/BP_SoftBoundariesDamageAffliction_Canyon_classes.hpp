#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SoftBoundariesDamageAffliction_Canyon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SoftBoundariesDamageAffliction_Canyon.BP_SoftBoundariesDamageAffliction_Canyon_C
// 0x0008 (0x0238 - 0x0230)
class UBP_SoftBoundariesDamageAffliction_Canyon_C : public UBP_SoftBoundariesDamageAffliction_C
{
public:
	class UObject*                                     Warning_Widget;                                           // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SoftBoundariesDamageAffliction_Canyon.BP_SoftBoundariesDamageAffliction_Canyon_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
