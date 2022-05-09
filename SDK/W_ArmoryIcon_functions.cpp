// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ArmoryIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ArmoryIcon.W_ArmoryIcon_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_ArmoryIcon_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.OnFocusReceived"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FFocusEvent             InFocusEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.GetEquippedStatus
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Equipped                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ArmoryIcon_C::GetEquippedStatus(bool* Equipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.GetEquippedStatus"));

	struct
	{
		bool                           Equipped;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Equipped != nullptr)
		*Equipped = params.Equipped;
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.FindItemInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryIcon_C::FindItemInfo(const struct FString& ShortCode, const struct FString& WeaponName, ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.FindItemInfo"));

	struct
	{
		struct FString                 ShortCode;
		struct FString                 WeaponName;
		ECosmeticType                  Type;
	} params = {};

	params.ShortCode = ShortCode;
	params.WeaponName = WeaponName;
	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryIcon_C::Init(class UClass* /*AProjectXCharacter*/ CharacterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.Init"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ CharacterClass;
	} params = {};

	params.CharacterClass = CharacterClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.UpdateIsEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ArmoryIcon_C::UpdateIsEquipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.UpdateIsEquipped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.ForceClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ArmoryIcon_C::ForceClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.ForceClick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.PlaySpawnAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ArmoryIcon_C::PlaySpawnAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.PlaySpawnAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ArmoryIcon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.OnClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_ItemIcon_New_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryIcon_C::OnClick(class UW_ItemIcon_New_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.OnClick"));

	struct
	{
		class UW_ItemIcon_New_C*       Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_ItemIcon_New_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryIcon_C::CustomEvent_1(class UW_ItemIcon_New_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.CustomEvent_1"));

	struct
	{
		class UW_ItemIcon_New_C*       Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.BndEvt__W_ItemIcon_New_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ArmoryIcon_C::BndEvt__W_ItemIcon_New_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(bool Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.BndEvt__W_ItemIcon_New_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature"));

	struct
	{
		bool                           Hovered;
	} params = {};

	params.Hovered = Hovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.Toggle Custom Message
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_ArmoryIcon_C::Toggle_Custom_Message(bool bShowMessage, const struct FText& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.Toggle Custom Message"));

	struct
	{
		bool                           bShowMessage;
		struct FText                   Message;
	} params = {};

	params.bShowMessage = bShowMessage;
	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.ForceUpdateIsEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Equipped                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ArmoryIcon_C::ForceUpdateIsEquipped(bool Equipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.ForceUpdateIsEquipped"));

	struct
	{
		bool                           Equipped;
	} params = {};

	params.Equipped = Equipped;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.ExecuteUbergraph_W_ArmoryIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryIcon_C::ExecuteUbergraph_W_ArmoryIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.ExecuteUbergraph_W_ArmoryIcon"));

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


// Function W_ArmoryIcon.W_ArmoryIcon_C.ItemHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryIcon_C::ItemHovered__DelegateSignature(bool Hovered, const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, class UW_ArmoryIcon_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.ItemHovered__DelegateSignature"));

	struct
	{
		bool                           Hovered;
		struct FString                 ItemId;
		ECosmeticType                  Type;
		struct FString                 WeaponID;
		class UW_ArmoryIcon_C*         Widget;
	} params = {};

	params.Hovered = Hovered;
	params.ItemId = ItemId;
	params.Type = Type;
	params.WeaponID = WeaponID;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryIcon.W_ArmoryIcon_C.ItemPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryIcon_C::ItemPressed__DelegateSignature(const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryIcon.W_ArmoryIcon_C.ItemPressed__DelegateSignature"));

	struct
	{
		struct FString                 ItemId;
		ECosmeticType                  Type;
		struct FString                 WeaponID;
		unsigned char                  Slot;
		class UW_ArmoryIcon_C*         NewParam;
	} params = {};

	params.ItemId = ItemId;
	params.Type = Type;
	params.WeaponID = WeaponID;
	params.Slot = Slot;
	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
