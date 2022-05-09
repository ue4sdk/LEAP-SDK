// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_KeybindList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_KeybindList.W_KeybindList_C.CreateAxisBindEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputAxisMappingStruct PCAction                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FInputAxisMappingStruct GamepadAction                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FInputAxisRow           InputAxisRow                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UKeybindingEntry_C*      OutputPin                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KeybindList_C::CreateAxisBindEntry(const struct FInputAxisMappingStruct& PCAction, const struct FInputAxisMappingStruct& GamepadAction, const struct FInputAxisRow& InputAxisRow, class UKeybindingEntry_C** OutputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KeybindList.W_KeybindList_C.CreateAxisBindEntry"));

	struct
	{
		struct FInputAxisMappingStruct PCAction;
		struct FInputAxisMappingStruct GamepadAction;
		struct FInputAxisRow           InputAxisRow;
		class UKeybindingEntry_C*      OutputPin;
	} params = {};

	params.PCAction = PCAction;
	params.GamepadAction = GamepadAction;
	params.InputAxisRow = InputAxisRow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function W_KeybindList.W_KeybindList_C.CreateKeyBindEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputActionMappingStruct PCAction                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FInputActionMappingStruct GamepadAction                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FInputActionRow         InputActionRow                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UKeybindingEntry_C*      OutputPin                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KeybindList_C::CreateKeyBindEntry(const struct FInputActionMappingStruct& PCAction, const struct FInputActionMappingStruct& GamepadAction, const struct FInputActionRow& InputActionRow, class UKeybindingEntry_C** OutputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KeybindList.W_KeybindList_C.CreateKeyBindEntry"));

	struct
	{
		struct FInputActionMappingStruct PCAction;
		struct FInputActionMappingStruct GamepadAction;
		struct FInputActionRow         InputActionRow;
		class UKeybindingEntry_C*      OutputPin;
	} params = {};

	params.PCAction = PCAction;
	params.GamepadAction = GamepadAction;
	params.InputActionRow = InputActionRow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function W_KeybindList.W_KeybindList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_KeybindList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KeybindList.W_KeybindList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KeybindList.W_KeybindList_C.ExecuteUbergraph_W_KeybindList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KeybindList_C::ExecuteUbergraph_W_KeybindList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KeybindList.W_KeybindList_C.ExecuteUbergraph_W_KeybindList"));

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
