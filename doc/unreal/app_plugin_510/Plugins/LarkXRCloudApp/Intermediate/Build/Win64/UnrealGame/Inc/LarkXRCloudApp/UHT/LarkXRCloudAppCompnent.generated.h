// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LarkXRCloudAppCompnent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class LarkDataChannelType : uint8;
#ifdef LARKXRCLOUDAPP_LarkXRCloudAppCompnent_generated_h
#error "LarkXRCloudAppCompnent.generated.h already included, missing '#pragma once' in LarkXRCloudAppCompnent.h"
#endif
#define LARKXRCLOUDAPP_LarkXRCloudAppCompnent_generated_h

#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_17_DELEGATE \
struct _Script_LarkXRCloudApp_eventOnTaskStatus_Parms \
{ \
	bool status; \
	FString taskId; \
}; \
static inline void FOnTaskStatus_DelegateWrapper(const FMulticastScriptDelegate& OnTaskStatus, bool status, const FString& taskId) \
{ \
	_Script_LarkXRCloudApp_eventOnTaskStatus_Parms Parms; \
	Parms.status=status ? true : false; \
	Parms.taskId=taskId; \
	OnTaskStatus.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_18_DELEGATE \
struct _Script_LarkXRCloudApp_eventDataChannelOnData_Parms \
{ \
	LarkDataChannelType type; \
	FString dataText; \
}; \
static inline void FDataChannelOnData_DelegateWrapper(const FMulticastScriptDelegate& DataChannelOnData, LarkDataChannelType type, const FString& dataText) \
{ \
	_Script_LarkXRCloudApp_eventDataChannelOnData_Parms Parms; \
	Parms.type=type; \
	Parms.dataText=dataText; \
	DataChannelOnData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_19_DELEGATE \
struct _Script_LarkXRCloudApp_eventOnAiVoiceResult_Parms \
{ \
	bool isUrl; \
	FString ngl; \
	FString url; \
}; \
static inline void FOnAiVoiceResult_DelegateWrapper(const FMulticastScriptDelegate& OnAiVoiceResult, bool isUrl, const FString& ngl, const FString& url) \
{ \
	_Script_LarkXRCloudApp_eventOnAiVoiceResult_Parms Parms; \
	Parms.isUrl=isUrl ? true : false; \
	Parms.ngl=ngl; \
	Parms.url=url; \
	OnAiVoiceResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_SPARSE_DATA
#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLR_Client_AiVoice_Start); \
	DECLARE_FUNCTION(execLR_Client_Stop); \
	DECLARE_FUNCTION(execLR_Client_SendBinary); \
	DECLARE_FUNCTION(execLR_Client_SendText); \
	DECLARE_FUNCTION(execLR_Client_Start); \
	DECLARE_FUNCTION(execLR_Client_Register_Taskstatus_Callback);


#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLR_Client_AiVoice_Start); \
	DECLARE_FUNCTION(execLR_Client_Stop); \
	DECLARE_FUNCTION(execLR_Client_SendBinary); \
	DECLARE_FUNCTION(execLR_Client_SendText); \
	DECLARE_FUNCTION(execLR_Client_Start); \
	DECLARE_FUNCTION(execLR_Client_Register_Taskstatus_Callback);


#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_ACCESSORS
#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULarkXRCloudAppCompnent(); \
	friend struct Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics; \
public: \
	DECLARE_CLASS(ULarkXRCloudAppCompnent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LarkXRCloudApp"), NO_API) \
	DECLARE_SERIALIZER(ULarkXRCloudAppCompnent)


#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULarkXRCloudAppCompnent(); \
	friend struct Z_Construct_UClass_ULarkXRCloudAppCompnent_Statics; \
public: \
	DECLARE_CLASS(ULarkXRCloudAppCompnent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LarkXRCloudApp"), NO_API) \
	DECLARE_SERIALIZER(ULarkXRCloudAppCompnent)


#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULarkXRCloudAppCompnent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULarkXRCloudAppCompnent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULarkXRCloudAppCompnent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULarkXRCloudAppCompnent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULarkXRCloudAppCompnent(ULarkXRCloudAppCompnent&&); \
	NO_API ULarkXRCloudAppCompnent(const ULarkXRCloudAppCompnent&); \
public: \
	NO_API virtual ~ULarkXRCloudAppCompnent();


#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULarkXRCloudAppCompnent(ULarkXRCloudAppCompnent&&); \
	NO_API ULarkXRCloudAppCompnent(const ULarkXRCloudAppCompnent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULarkXRCloudAppCompnent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULarkXRCloudAppCompnent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULarkXRCloudAppCompnent) \
	NO_API virtual ~ULarkXRCloudAppCompnent();


#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_20_PROLOG
#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_SPARSE_DATA \
	FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_RPC_WRAPPERS \
	FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_ACCESSORS \
	FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_INCLASS \
	FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_SPARSE_DATA \
	FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_ACCESSORS \
	FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_INCLASS_NO_PURE_DECLS \
	FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LARKXRCLOUDAPP_API UClass* StaticClass<class ULarkXRCloudAppCompnent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_app_plugin_510_Plugins_LarkXRCloudApp_Source_LarkXRCloudApp_Public_LarkXRCloudAppCompnent_h


#define FOREACH_ENUM_LARKDATACHANNELTYPE(op) \
	op(LarkDataChannelType::DATA_STRING) \
	op(LarkDataChannelType::DATA_BIN) 

enum class LarkDataChannelType : uint8;
template<> struct TIsUEnumClass<LarkDataChannelType> { enum { Value = true }; };
template<> LARKXRCLOUDAPP_API UEnum* StaticEnum<LarkDataChannelType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
