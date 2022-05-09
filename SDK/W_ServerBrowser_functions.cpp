// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ServerBrowser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideGameType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bShow                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::ShouldHideGameType(const struct FServerInfo& ServerInfo, bool* bShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideGameType"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           bShow;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function W_ServerBrowser.W_ServerBrowser_C.Should Hide Empty Horde Mode Server
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bShow                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::Should_Hide_Empty_Horde_Mode_Server(const struct FServerInfo& ServerInfo, bool* bShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.Should Hide Empty Horde Mode Server"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           bShow;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function W_ServerBrowser.W_ServerBrowser_C.CreatePlaceholderServers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            LastIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::CreatePlaceholderServers(int LastIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.CreatePlaceholderServers"));

	struct
	{
		int                            LastIndex;
	} params = {};

	params.LastIndex = LastIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.GetNumberOfPages
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            TotalNumberOfPages             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::GetNumberOfPages(int* TotalNumberOfPages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.GetNumberOfPages"));

	struct
	{
		int                            TotalNumberOfPages;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TotalNumberOfPages != nullptr)
		*TotalNumberOfPages = params.TotalNumberOfPages;
}


// Function W_ServerBrowser.W_ServerBrowser_C.OverridePageNumber
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PageNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           NewPage                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::OverridePageNumber(int PageNumber, bool* NewPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.OverridePageNumber"));

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


// Function W_ServerBrowser.W_ServerBrowser_C.Update Sorting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESortParameter                 B                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::Update_Sorting(ESortParameter B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.Update Sorting"));

	struct
	{
		ESortParameter                 B;
	} params = {};

	params.B = B;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideModdedServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerBrowser_C::ShouldHideModdedServer(const struct FServerInfo& ServerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideModdedServer"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           ReturnValue;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideAntiCheatServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerBrowser_C::ShouldHideAntiCheatServer(const struct FServerInfo& ServerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideAntiCheatServer"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           ReturnValue;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideRegionServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerBrowser_C::ShouldHideRegionServer(const struct FServerInfo& ServerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideRegionServer"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           ReturnValue;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerBrowser.W_ServerBrowser_C.SetDefaults
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerBrowser_C::SetDefaults()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.SetDefaults"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideNonHistoryServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerBrowser_C::ShouldHideNonHistoryServer(const struct FServerInfo& ServerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideNonHistoryServer"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           ReturnValue;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideNonFavouritedServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Hide                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::ShouldHideNonFavouritedServer(const struct FServerInfo& ServerInfo, bool* Hide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideNonFavouritedServer"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           Hide;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Hide != nullptr)
		*Hide = params.Hide;
}


// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideVersionMismatchServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerBrowser_C::ShouldHideVersionMismatchServer(const struct FServerInfo& ServerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideVersionMismatchServer"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           ReturnValue;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideCustomServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerBrowser_C::ShouldHideCustomServer(const struct FServerInfo& ServerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideCustomServer"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           ReturnValue;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideOfficialServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerBrowser_C::ShouldHideOfficialServer(const struct FServerInfo& ServerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideOfficialServer"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           ReturnValue;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerBrowser.W_ServerBrowser_C.DoesServerMatchSearch
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerBrowser_C::DoesServerMatchSearch(const struct FServerInfo& ServerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.DoesServerMatchSearch"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           ReturnValue;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideEmptyServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerBrowser_C::ShouldHideEmptyServer(const struct FServerInfo& ServerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideEmptyServer"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           ReturnValue;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideFullServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             Server                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ServerBrowser_C::ShouldHideFullServer(const struct FServerInfo& Server)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ShouldHideFullServer"));

	struct
	{
		struct FServerInfo             Server;
		bool                           ReturnValue;
	} params = {};

	params.Server = Server;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ServerBrowser.W_ServerBrowser_C.CheckDisplayParameters
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ShouldDisplay                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::CheckDisplayParameters(const struct FServerInfo& ServerInfo, bool* ShouldDisplay)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.CheckDisplayParameters"));

	struct
	{
		struct FServerInfo             ServerInfo;
		bool                           ShouldDisplay;
	} params = {};

	params.ServerInfo = ServerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ShouldDisplay != nullptr)
		*ShouldDisplay = params.ShouldDisplay;
}


// Function W_ServerBrowser.W_ServerBrowser_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.PreConstruct"));

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


// Function W_ServerBrowser.W_ServerBrowser_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ServerBrowser_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.OnBackPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::OnBackPressed(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.OnBackPressed"));

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


// Function W_ServerBrowser.W_ServerBrowser_C.ClearServeInfos
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerBrowser_C::ClearServeInfos()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ClearServeInfos"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BuildServerList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BuildServerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BuildServerList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideCustom_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::BndEvt__HideCustom_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideCustom_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideEmpty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::BndEvt__HideEmpty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideEmpty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideFull_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::BndEvt__HideFull_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideFull_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideOfficial_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::BndEvt__HideOfficial_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideOfficial_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideVersion_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::BndEvt__HideVersion_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideVersion_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__ServerNameBt_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__ServerNameBt_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__ServerNameBt_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__OfficialBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__OfficialBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__OfficialBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__MapBtn_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__MapBtn_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__MapBtn_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__ModeBtn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__ModeBtn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__ModeBtn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__PlayersBtn_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__PlayersBtn_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__PlayersBtn_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__RegionBtn_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__RegionBtn_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__RegionBtn_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__PingBtn_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__PingBtn_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__PingBtn_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.FindSessionsComplete
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FServerInfo>     ServerInfos                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_ServerBrowser_C::FindSessionsComplete(TArray<struct FServerInfo> ServerInfos)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.FindSessionsComplete"));

	struct
	{
		TArray<struct FServerInfo>     ServerInfos;
	} params = {};

	params.ServerInfos = ServerInfos;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.OnSessionStateUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESessionState                  State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::OnSessionStateUpdated(ESessionState State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.OnSessionStateUpdated"));

	struct
	{
		ESessionState                  State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__AnitCheatBtn_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__AnitCheatBtn_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__AnitCheatBtn_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideAntiCheat_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::BndEvt__HideAntiCheat_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideAntiCheat_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.OnMenuBack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ServerBrowser_C::OnMenuBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.OnMenuBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideMods_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::BndEvt__HideMods_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HideMods_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__ModsBtn_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__ModsBtn_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__ModsBtn_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_22_NavigatePage__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  SubPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_22_NavigatePage__DelegateSignature(const struct FString& ID, class UClass* /*UUserWidget*/ SubPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_22_NavigatePage__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		class UClass* /*UUserWidget*/  SubPage;
	} params = {};

	params.ID = ID;
	params.SubPage = SubPage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_DropdownMenu_K2Node_ComponentBoundEvent_12_OptionSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedOptionID               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_DropdownMenu_K2Node_ComponentBoundEvent_12_OptionSelected__DelegateSignature(const struct FString& SelectedOptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_DropdownMenu_K2Node_ComponentBoundEvent_12_OptionSelected__DelegateSignature"));

	struct
	{
		struct FString                 SelectedOptionID;
	} params = {};

	params.SelectedOptionID = SelectedOptionID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.OnRefreshButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerBrowser_C::OnRefreshButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.OnRefreshButtonPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.OnWidgetVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::OnWidgetVisible(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.OnWidgetVisible"));

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


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HidePasswordProtected_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ServerBrowser_C::BndEvt__HidePasswordProtected_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__HidePasswordProtected_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__LeftBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__LeftBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__LeftBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__RightBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ServerBrowser_C::BndEvt__RightBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__RightBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.UpdatePageNumber
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PageNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::UpdatePageNumber(int PageNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.UpdatePageNumber"));

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


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_17_ChangePage__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  SubPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_17_ChangePage__DelegateSignature(class UClass* /*UUserWidget*/ SubPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_17_ChangePage__DelegateSignature"));

	struct
	{
		class UClass* /*UUserWidget*/  SubPage;
	} params = {};

	params.SubPage = SubPage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.TogglePageDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ServerBrowser_C::TogglePageDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.TogglePageDisplay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__Search_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_ServerBrowser_C::BndEvt__Search_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__Search_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__Dropdown_Region_1_K2Node_ComponentBoundEvent_7_OptionSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedOptionID               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__Dropdown_Region_1_K2Node_ComponentBoundEvent_7_OptionSelected__DelegateSignature(const struct FString& SelectedOptionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__Dropdown_Region_1_K2Node_ComponentBoundEvent_7_OptionSelected__DelegateSignature"));

	struct
	{
		struct FString                 SelectedOptionID;
	} params = {};

	params.SelectedOptionID = SelectedOptionID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ServerBrowser.W_ServerBrowser_C.ExecuteUbergraph_W_ServerBrowser
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ServerBrowser_C::ExecuteUbergraph_W_ServerBrowser(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ServerBrowser.W_ServerBrowser_C.ExecuteUbergraph_W_ServerBrowser"));

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
