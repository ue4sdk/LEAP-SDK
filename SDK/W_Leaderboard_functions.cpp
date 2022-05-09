// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Leaderboard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Leaderboard.W_Leaderboard_C.Custom Navigation Left
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_Leaderboard_C::Custom_Navigation_Left(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.Custom Navigation Left"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_Leaderboard.W_Leaderboard_C.Custom Naviaget Right
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_Leaderboard_C::Custom_Naviaget_Right(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.Custom Naviaget Right"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_Leaderboard.W_Leaderboard_C.OverridePageNumber
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PageNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           NewPage                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_C::OverridePageNumber(int PageNumber, bool* NewPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OverridePageNumber"));

	struct
	{
		int                            PageNumber;
		bool                           NewPage;
	} params = {};

	params.PageNumber = PageNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewPage != nullptr)
		*NewPage = params.NewPage;
}


// Function W_Leaderboard.W_Leaderboard_C.FormatStatTitle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_C::FormatStatTitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.FormatStatTitle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.CreateLeaderboardEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLeaderBoardEntry       Entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_Leaderboard_C::CreateLeaderboardEntry(const struct FLeaderBoardEntry& Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.CreateLeaderboardEntry"));

	struct
	{
		struct FLeaderBoardEntry       Entry;
	} params = {};

	params.Entry = Entry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.Valid Entry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Valid                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_C::Valid_Entry(bool* Valid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.Valid Entry"));

	struct
	{
		bool                           Valid;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function W_Leaderboard.W_Leaderboard_C.ChangeSelectedStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Stat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_Leaderboard_C::ChangeSelectedStat(const struct FString& Stat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.ChangeSelectedStat"));

	struct
	{
		struct FString                 Stat;
		bool                           ReturnValue;
	} params = {};

	params.Stat = Stat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_Leaderboard.W_Leaderboard_C.ChangeSelectedClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectionClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           ClassChanged                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_C::ChangeSelectedClass(const struct FString& SelectionClass, bool* ClassChanged)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.ChangeSelectedClass"));

	struct
	{
		struct FString                 SelectionClass;
		bool                           ClassChanged;
	} params = {};

	params.SelectionClass = SelectionClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ClassChanged != nullptr)
		*ClassChanged = params.ClassChanged;
}


// Function W_Leaderboard.W_Leaderboard_C.OnPlayerStateAcquired_27B9844741E80F207DD11287C35209AA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_C::OnPlayerStateAcquired_27B9844741E80F207DD11287C35209AA(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnPlayerStateAcquired_27B9844741E80F207DD11287C35209AA"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Leaderboard_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.LoadLeaderboard
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PageNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_C::LoadLeaderboard(int PageNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.LoadLeaderboard"));

	struct
	{
		int                            PageNumber;
	} params = {};

	params.PageNumber = PageNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnLeaderBoardLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bLoadSuccess                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_C::OnLeaderBoardLoaded(bool bLoadSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnLeaderBoardLoaded"));

	struct
	{
		bool                           bLoadSuccess;
	} params = {};

	params.bLoadSuccess = bLoadSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnWidgetVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_C::OnWidgetVisible(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnWidgetVisible"));

	struct
	{
		class UObject*                 ContextObject;
	} params = {};

	params.ContextObject = ContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.UpdateStatOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Leaderboard_C::UpdateStatOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.UpdateStatOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnMenuBack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Leaderboard_C::OnMenuBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnMenuBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnBackButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_C::OnBackButtonPressed(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnBackButtonPressed"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.BndEvt__W_Leaderboard_Dropdown_K2Node_ComponentBoundEvent_3_OptionSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OptionID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_C::BndEvt__W_Leaderboard_Dropdown_K2Node_ComponentBoundEvent_3_OptionSelected__DelegateSignature(const struct FString& OptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.BndEvt__W_Leaderboard_Dropdown_K2Node_ComponentBoundEvent_3_OptionSelected__DelegateSignature"));

	struct
	{
		struct FString                 OptionID;
	} params = {};

	params.OptionID = OptionID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.FriendsOnlyStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           FriendsOnly                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_C::FriendsOnlyStateChanged(bool FriendsOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.FriendsOnlyStateChanged"));

	struct
	{
		bool                           FriendsOnly;
	} params = {};

	params.FriendsOnly = FriendsOnly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.BndEvt__W_Leaderboard_StatTypeBar_K2Node_ComponentBoundEvent_0_OnTypeButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_C::BndEvt__W_Leaderboard_StatTypeBar_K2Node_ComponentBoundEvent_0_OnTypeButtonPressed__DelegateSignature(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.BndEvt__W_Leaderboard_StatTypeBar_K2Node_ComponentBoundEvent_0_OnTypeButtonPressed__DelegateSignature"));

	struct
	{
		struct FString                 ID;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.BndEvt__LeftBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Leaderboard_C::BndEvt__LeftBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.BndEvt__LeftBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.BndEvt__RightBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Leaderboard_C::BndEvt__RightBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.BndEvt__RightBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnLocalLeaderboardLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bLoadSuccess                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_C::OnLocalLeaderboardLoaded(bool bLoadSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnLocalLeaderboardLoaded"));

	struct
	{
		bool                           bLoadSuccess;
	} params = {};

	params.bLoadSuccess = bLoadSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.UpdateLocalEntryInfo
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLeaderBoardLocalEntry  LeaderBoardLocalEntry          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UW_Leaderboard_C::UpdateLocalEntryInfo(const struct FLeaderBoardLocalEntry& LeaderBoardLocalEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.UpdateLocalEntryInfo"));

	struct
	{
		struct FLeaderBoardLocalEntry  LeaderBoardLocalEntry;
	} params = {};

	params.LeaderBoardLocalEntry = LeaderBoardLocalEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnRightBumper
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Leaderboard_C::OnRightBumper()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnRightBumper"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnLeftBumper
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Leaderboard_C::OnLeftBumper()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnLeftBumper"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnGamePadUsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Leaderboard_C::OnGamePadUsed(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnGamePadUsed"));

	struct
	{
		bool                           bIsUsingGamepad;
	} params = {};

	params.bIsUsingGamepad = bIsUsingGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnTopFaceButton
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Leaderboard_C::OnTopFaceButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnTopFaceButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnBottomFaceButton
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Leaderboard_C::OnBottomFaceButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnBottomFaceButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OptionSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OptionID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_C::OptionSelected(const struct FString& OptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OptionSelected"));

	struct
	{
		struct FString                 OptionID;
	} params = {};

	params.OptionID = OptionID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.OnVisibilityUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Invisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_C::OnVisibilityUpdated(ESlateVisibility Invisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.OnVisibilityUpdated"));

	struct
	{
		ESlateVisibility               Invisibility;
	} params = {};

	params.Invisibility = Invisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Leaderboard.W_Leaderboard_C.ExecuteUbergraph_W_Leaderboard
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Leaderboard_C::ExecuteUbergraph_W_Leaderboard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Leaderboard.W_Leaderboard_C.ExecuteUbergraph_W_Leaderboard"));

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
