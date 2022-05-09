// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BroadcastMessage_BCEvents_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BroadcastMessage_BCEvents.BP_BroadcastMessage_BCEvents_C.IsOwnedCapturePoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AProjectXPlayerController* PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bOwned                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_BroadcastMessage_BCEvents_C::IsOwnedCapturePoint(class AProjectXPlayerController* PlayerController, class UObject* Object, bool* bOwned)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BroadcastMessage_BCEvents.BP_BroadcastMessage_BCEvents_C.IsOwnedCapturePoint"));

	struct
	{
		class AProjectXPlayerController* PlayerController;
		class UObject*                 Object;
		bool                           bOwned;
	} params = {};

	params.PlayerController = PlayerController;
	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bOwned != nullptr)
		*bOwned = params.bOwned;
}


// Function BP_BroadcastMessage_BCEvents.BP_BroadcastMessage_BCEvents_C.GetTableRowName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   RowName                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_BroadcastMessage_BCEvents_C::GetTableRowName(class UObject* Object, struct FName* RowName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BroadcastMessage_BCEvents.BP_BroadcastMessage_BCEvents_C.GetTableRowName"));

	struct
	{
		class UObject*                 Object;
		struct FName                   RowName;
	} params = {};

	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RowName != nullptr)
		*RowName = params.RowName;
}


// Function BP_BroadcastMessage_BCEvents.BP_BroadcastMessage_BCEvents_C.K2_ReceiveMessage
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AProjectXPlayerController* PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            PlayerStateA                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            PlayerStateB                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_BroadcastMessage_BCEvents_C::K2_ReceiveMessage(class AProjectXPlayerController* PlayerController, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BroadcastMessage_BCEvents.BP_BroadcastMessage_BCEvents_C.K2_ReceiveMessage"));

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
