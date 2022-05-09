// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_AIAssistantDialogue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.IsInHelmet
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsInHelmet                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_AIAssistantDialogue_C::IsInHelmet(bool* IsInHelmet)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.IsInHelmet"));

	struct
	{
		bool                           IsInHelmet;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsInHelmet != nullptr)
		*IsInHelmet = params.IsInHelmet;
}


// Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.OnStartTalking
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Dialogue                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          DurationSeconds                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AIAssistantDialogue_C::OnStartTalking(const struct FText& Dialogue, float DurationSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.OnStartTalking"));

	struct
	{
		struct FText                   Dialogue;
		float                          DurationSeconds;
	} params = {};

	params.Dialogue = Dialogue;
	params.DurationSeconds = DurationSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.DrawCharacters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AIAssistantDialogue_C::DrawCharacters(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.DrawCharacters"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.OnStopTalking
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_AIAssistantDialogue_C::OnStopTalking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.OnStopTalking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AIAssistantDialogue_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.ExecuteUbergraph_W_AIAssistantDialogue
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AIAssistantDialogue_C::ExecuteUbergraph_W_AIAssistantDialogue(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AIAssistantDialogue.W_AIAssistantDialogue_C.ExecuteUbergraph_W_AIAssistantDialogue"));

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
