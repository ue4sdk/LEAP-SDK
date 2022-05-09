// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UnrealWebServer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnrealWebServer.Connection.SendResponse
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// class UResponse*               Response                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConnection::SendResponse(class UResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.SendResponse"));

	struct
	{
		class UResponse*               Response;
	} params = {};

	params.Response = Response;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Connection.SendRawResponseByte
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// unsigned char                  responseByte                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConnection::SendRawResponseByte(unsigned char responseByte)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.SendRawResponseByte"));

	struct
	{
		unsigned char                  responseByte;
	} params = {};

	params.responseByte = responseByte;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Connection.SendRawResponse
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FString                 responseData                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UConnection::SendRawResponse(const struct FString& responseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.SendRawResponse"));

	struct
	{
		struct FString                 responseData;
	} params = {};

	params.responseData = responseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Connection.GetUriPath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UConnection::GetUriPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.GetUriPath"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Connection.GetUriMethod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UConnection::GetUriMethod()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.GetUriMethod"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Connection.GetPOSTVar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UConnection::GetPOSTVar(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.GetPOSTVar"));

	struct
	{
		struct FString                 Name;
		struct FString                 ReturnValue;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Connection.GetHeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UConnection::GetHeader(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.GetHeader"));

	struct
	{
		struct FString                 Name;
		struct FString                 ReturnValue;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Connection.GetGETVar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UConnection::GetGETVar(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.GetGETVar"));

	struct
	{
		struct FString                 Name;
		struct FString                 ReturnValue;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Connection.GetDataBlob
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<unsigned char> UConnection::GetDataBlob()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.GetDataBlob"));

	struct
	{
		TArray<unsigned char>          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Connection.GetData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UConnection::GetData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.GetData"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Connection.GetCOOKIEVar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UConnection::GetCOOKIEVar(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Connection.GetCOOKIEVar"));

	struct
	{
		struct FString                 Name;
		struct FString                 ReturnValue;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Cookie.SetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCookie::SetValue(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Cookie.SetValue"));

	struct
	{
		struct FString                 Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Cookie.SetSecure
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           secure                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCookie::SetSecure(bool secure)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Cookie.SetSecure"));

	struct
	{
		bool                           secure;
	} params = {};

	params.secure = secure;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Cookie.SetPath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCookie::SetPath(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Cookie.SetPath"));

	struct
	{
		struct FString                 Path;
	} params = {};

	params.Path = Path;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Cookie.SetName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCookie::SetName(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Cookie.SetName"));

	struct
	{
		struct FString                 Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Cookie.SetMaxAge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            max_age                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCookie::SetMaxAge(int max_age)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Cookie.SetMaxAge"));

	struct
	{
		int                            max_age;
	} params = {};

	params.max_age = max_age;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Cookie.SetHttpOnly
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           http_only                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCookie::SetHttpOnly(bool http_only)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Cookie.SetHttpOnly"));

	struct
	{
		bool                           http_only;
	} params = {};

	params.http_only = http_only;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Cookie.SetDomain
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 domain                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCookie::SetDomain(const struct FString& domain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Cookie.SetDomain"));

	struct
	{
		struct FString                 domain;
	} params = {};

	params.domain = domain;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Cookie.ConstructCookieExt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCookie*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCookie* UCookie::ConstructCookieExt(class UObject* WorldContextObject, const struct FString& Name, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Cookie.ConstructCookieExt"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 Name;
		struct FString                 Value;
		class UCookie*                 ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.Name = Name;
	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Cookie.ConstructCookie
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCookie*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCookie* UCookie::ConstructCookie(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Cookie.ConstructCookie"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UCookie*                 ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Response.SetResponseStatusCode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EHttpStatusCode                statusCode                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UResponse::SetResponseStatusCode(EHttpStatusCode statusCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Response.SetResponseStatusCode"));

	struct
	{
		EHttpStatusCode                statusCode;
	} params = {};

	params.statusCode = statusCode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Response.SetResponseRedirection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 redirection                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UResponse::SetResponseRedirection(const struct FString& redirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Response.SetResponseRedirection"));

	struct
	{
		struct FString                 redirection;
	} params = {};

	params.redirection = redirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Response.SetResponseContentType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMediaType                     contentType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UResponse::SetResponseContentType(EMediaType contentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Response.SetResponseContentType"));

	struct
	{
		EMediaType                     contentType;
	} params = {};

	params.contentType = contentType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Response.SetResponseContent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UResponse::SetResponseContent(const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Response.SetResponseContent"));

	struct
	{
		struct FString                 Content;
	} params = {};

	params.Content = Content;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.Response.ConstructResponseExt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UResponse*               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UResponse* UResponse::ConstructResponseExt(class UObject* WorldContextObject, const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Response.ConstructResponseExt"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 Content;
		class UResponse*               ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.Content = Content;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Response.ConstructResponse
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UResponse*               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UResponse* UResponse::ConstructResponse(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Response.ConstructResponse"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UResponse*               ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.Response.AddResponseCookie
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCookie*                 Cookie                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UResponse::AddResponseCookie(class UCookie* Cookie)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.Response.AddResponseCookie"));

	struct
	{
		class UCookie*                 Cookie;
	} params = {};

	params.Cookie = Cookie;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.WebServer.StopServer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UWebServer::StopServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.WebServer.StopServer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.WebServer.StartServer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Port                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DocumentRoot                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWebServer::StartServer(int Port, const struct FString& DocumentRoot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.WebServer.StartServer"));

	struct
	{
		int                            Port;
		struct FString                 DocumentRoot;
	} params = {};

	params.Port = Port;
	params.DocumentRoot = DocumentRoot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UnrealWebServer.WebServer.IsStarted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWebServer::IsStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.WebServer.IsStarted"));

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


// Function UnrealWebServer.WebServer.GetOrCreateWebServerInstance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWebServer*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UWebServer* UWebServer::GetOrCreateWebServerInstance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.WebServer.GetOrCreateWebServerInstance"));

	struct
	{
		class UWebServer*              ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function UnrealWebServer.WebServer.AddURIHandler
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EHttpRequestMethod             Method                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ExecuteInGameThread            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWebServer::AddURIHandler(const struct FString& Path, const struct FScriptDelegate& Callback, EHttpRequestMethod Method, bool ExecuteInGameThread)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UnrealWebServer.WebServer.AddURIHandler"));

	struct
	{
		struct FString                 Path;
		struct FScriptDelegate         Callback;
		EHttpRequestMethod             Method;
		bool                           ExecuteInGameThread;
	} params = {};

	params.Path = Path;
	params.Callback = Callback;
	params.Method = Method;
	params.ExecuteInGameThread = ExecuteInGameThread;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
