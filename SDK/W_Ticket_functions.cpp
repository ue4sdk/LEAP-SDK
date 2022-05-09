// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Ticket_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Ticket.W_Ticket_C.SetColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ticket_C::SetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ticket.W_Ticket_C.SetColor"));

	struct
	{
		struct FLinearColor            Color;
	} params = {};

	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ticket.W_Ticket_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Ticket_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ticket.W_Ticket_C.PreConstruct"));

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


// Function W_Ticket.W_Ticket_C.UpdateTickets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            New                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ticket_C::UpdateTickets(int New)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ticket.W_Ticket_C.UpdateTickets"));

	struct
	{
		int                            New;
	} params = {};

	params.New = New;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ticket.W_Ticket_C.UpdateTicketsAsText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   New_Text                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_Ticket_C::UpdateTicketsAsText(const struct FText& New_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ticket.W_Ticket_C.UpdateTicketsAsText"));

	struct
	{
		struct FText                   New_Text;
	} params = {};

	params.New_Text = New_Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Ticket.W_Ticket_C.ExecuteUbergraph_W_Ticket
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Ticket_C::ExecuteUbergraph_W_Ticket(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Ticket.W_Ticket_C.ExecuteUbergraph_W_Ticket"));

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
