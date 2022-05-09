// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_TeamDeathmatchUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.CreatePointMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAssaultEventEnum> Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAssaultPoint*           AssaultPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   FormattedMessage               (CPF_Parm, CPF_OutParm)

void UW_TeamDeathmatchUI_C::CreatePointMessage(TEnumAsByte<EAssaultEventEnum> Selection, class AAssaultPoint* AssaultPoint, struct FText* FormattedMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.CreatePointMessage"));

	struct
	{
		TEnumAsByte<EAssaultEventEnum> Selection;
		class AAssaultPoint*           AssaultPoint;
		struct FText                   FormattedMessage;
	} params = {};

	params.Selection = Selection;
	params.AssaultPoint = AssaultPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FormattedMessage != nullptr)
		*FormattedMessage = params.FormattedMessage;
}


// Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.CreateActivePointMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UW_TeamDeathmatchUI_C::CreateActivePointMessage(struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.CreateActivePointMessage"));

	struct
	{
		struct FText                   Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.OnGameStateAcquired_AD256AF8476C3FAF213A0D81DDA24E38
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TeamDeathmatchUI_C::OnGameStateAcquired_AD256AF8476C3FAF213A0D81DDA24E38(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.OnGameStateAcquired_AD256AF8476C3FAF213A0D81DDA24E38"));

	struct
	{
		class AGameState*              GameState;
	} params = {};

	params.GameState = GameState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_TeamDeathmatchUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_TeamDeathmatchUI_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.LowOnTickets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerController* PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TeamDeathmatchUI_C::LowOnTickets(class AProjectXPlayerController* PlayerController, int Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.LowOnTickets"));

	struct
	{
		class AProjectXPlayerController* PlayerController;
		int                            Data;
	} params = {};

	params.PlayerController = PlayerController;
	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.ExecuteUbergraph_W_TeamDeathmatchUI
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TeamDeathmatchUI_C::ExecuteUbergraph_W_TeamDeathmatchUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TeamDeathmatchUI.W_TeamDeathmatchUI_C.ExecuteUbergraph_W_TeamDeathmatchUI"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
