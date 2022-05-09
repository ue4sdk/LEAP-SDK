// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BroadcastMessage_BC_TeamLowTicketCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BroadcastMessage_BC_TeamLowTicketCount.BP_BroadcastMessage_BC_TeamLowTicketCount_C.K2_ReceiveMessage
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AProjectXPlayerController* PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            PlayerStateA                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            PlayerStateB                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_BroadcastMessage_BC_TeamLowTicketCount_C::K2_ReceiveMessage(class AProjectXPlayerController* PlayerController, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BroadcastMessage_BC_TeamLowTicketCount.BP_BroadcastMessage_BC_TeamLowTicketCount_C.K2_ReceiveMessage"));

	struct
	{
		class AProjectXPlayerController* PlayerController;
		int                            Data;
		class APlayerState*            PlayerStateA;
		class APlayerState*            PlayerStateB;
		class UObject*                 Object;
	} params = {};

	params.PlayerController = PlayerController;
	params.Data = Data;
	params.PlayerStateA = PlayerStateA;
	params.PlayerStateB = PlayerStateB;
	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
