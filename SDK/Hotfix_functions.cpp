// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Hotfix_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hotfix.OnlineHotfixManager.StartHotfixProcess
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UOnlineHotfixManager::StartHotfixProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Hotfix.OnlineHotfixManager.StartHotfixProcess"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
