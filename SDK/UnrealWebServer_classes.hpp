#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UnrealWebServer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UnrealWebServer.Connection
// 0x0010 (0x0038 - 0x0028)
class UConnection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UnrealWebServer.Connection"));
		return ptr;
	}


	void SendResponse(class UResponse* Response);
	void SendRawResponseByte(unsigned char responseByte);
	void SendRawResponse(const struct FString& responseData);
	struct FString GetUriPath();
	struct FString GetUriMethod();
	struct FString GetPOSTVar(const struct FString& Name);
	struct FString GetHeader(const struct FString& Name);
	struct FString GetGETVar(const struct FString& Name);
	TArray<unsigned char> GetDataBlob();
	struct FString GetData();
	struct FString GetCOOKIEVar(const struct FString& Name);
};


// Class UnrealWebServer.Cookie
// 0x0050 (0x0078 - 0x0028)
class UCookie : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UnrealWebServer.Cookie"));
		return ptr;
	}


	void SetValue(const struct FString& Value);
	void SetSecure(bool secure);
	void SetPath(const struct FString& Path);
	void SetName(const struct FString& Name);
	void SetMaxAge(int max_age);
	void SetHttpOnly(bool http_only);
	void SetDomain(const struct FString& domain);
	static class UCookie* ConstructCookieExt(class UObject* WorldContextObject, const struct FString& Name, const struct FString& Value);
	static class UCookie* ConstructCookie(class UObject* WorldContextObject);
};


// Class UnrealWebServer.Response
// 0x0060 (0x0088 - 0x0028)
class UResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UnrealWebServer.Response"));
		return ptr;
	}


	void SetResponseStatusCode(EHttpStatusCode statusCode);
	void SetResponseRedirection(const struct FString& redirection);
	void SetResponseContentType(EMediaType contentType);
	void SetResponseContent(const struct FString& Content);
	static class UResponse* ConstructResponseExt(class UObject* WorldContextObject, const struct FString& Content);
	static class UResponse* ConstructResponse(class UObject* WorldContextObject);
	void AddResponseCookie(class UCookie* Cookie);
};


// Class UnrealWebServer.WebServer
// 0x0078 (0x00A0 - 0x0028)
class UWebServer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UnrealWebServer.WebServer"));
		return ptr;
	}


	void StopServer();
	void StartServer(int Port, const struct FString& DocumentRoot);
	bool IsStarted();
	static class UWebServer* GetOrCreateWebServerInstance();
	void AddURIHandler(const struct FString& Path, const struct FScriptDelegate& Callback, EHttpRequestMethod Method, bool ExecuteInGameThread);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
