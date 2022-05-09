// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MagicLeapSharedWorld_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
// (FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMagicLeapSharedWorldGameMode::SelectChosenOne()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void AMagicLeapSharedWorldGameMode::MagicLeapOnNewLocalDataFromClients__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
// (FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMagicLeapSharedWorldSharedData NewSharedWorldData             (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData"));

	struct
	{
		struct FMagicLeapSharedWorldSharedData NewSharedWorldData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewSharedWorldData != nullptr)
		*NewSharedWorldData = params.NewSharedWorldData;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AMagicLeapSharedWorldGameState::OnReplicate_SharedWorldData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
// (FUNC_Final, FUNC_Native, FUNC_Private)

void AMagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void AMagicLeapSharedWorldGameState::MagicLeapSharedWorldEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_BlueprintCallable)
// Parameters:
// struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData      (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void AMagicLeapSharedWorldPlayerController::ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData"));

	struct
	{
		struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData;
	} params = {};

	params.LocalWorldReplicationData = LocalWorldReplicationData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_BlueprintCallable)
// Parameters:
// struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms          (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms"));

	struct
	{
		struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms;
	} params = {};

	params.InAlignmentTransforms = InAlignmentTransforms;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AMagicLeapSharedWorldPlayerController::IsChosenOne()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient, FUNC_BlueprintCallable)
// Parameters:
// bool                           bChosenOne                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMagicLeapSharedWorldPlayerController::ClientSetChosenOne(bool bChosenOne)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne"));

	struct
	{
		bool                           bChosenOne;
	} params = {};

	params.bChosenOne = bChosenOne;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void AMagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AMagicLeapSharedWorldPlayerController::CanSendLocalDataToServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
