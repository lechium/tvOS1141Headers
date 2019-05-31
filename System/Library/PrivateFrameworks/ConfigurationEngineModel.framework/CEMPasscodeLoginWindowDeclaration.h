/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString, NSArray;

@interface CEMPasscodeLoginWindowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (nonatomic,readonly) NSNumber * payloadSHOWFULLNAME; 
@property (nonatomic,readonly) NSNumber * payloadHideLocalUsers; 
@property (nonatomic,readonly) NSNumber * payloadIncludeNetworkUser; 
@property (nonatomic,readonly) NSNumber * payloadHideAdminUsers; 
@property (nonatomic,readonly) NSNumber * payloadSHOWOTHERUSERSMANAGED; 
@property (nonatomic,readonly) NSString * payloadAdminHostInfo; 
@property (nonatomic,readonly) NSArray * payloadAllowList; 
@property (nonatomic,readonly) NSArray * payloadDenyList; 
@property (nonatomic,readonly) NSNumber * payloadHideMobileAccounts; 
@property (nonatomic,readonly) NSNumber * payloadShutDownDisabled; 
@property (nonatomic,readonly) NSNumber * payloadRestartDisabled; 
@property (nonatomic,readonly) NSNumber * payloadSleepDisabled; 
@property (nonatomic,readonly) NSNumber * payloadDisableConsoleAccess; 
@property (nonatomic,readonly) NSString * payloadLoginwindowText; 
@property (nonatomic,readonly) NSNumber * payloadShutDownDisabledWhileLoggedIn; 
@property (nonatomic,readonly) NSNumber * payloadRestartDisabledWhileLoggedIn; 
@property (nonatomic,readonly) NSNumber * payloadPowerOffDisabledWhileLoggedIn; 
@property (nonatomic,readonly) NSNumber * payloadLogOutDisabledWhileLoggedIn; 
@property (nonatomic,readonly) NSNumber * payloadDisableScreenLockImmediate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)allowedStatusKeys;
+(id)registeredClass;
+(id)registeredType;
+(id)restrictionPayloadKeys;
+(id)allowedReasons;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)validPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validStatusDictionary:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSNumber *)payloadSHOWFULLNAME;
-(NSNumber *)payloadHideLocalUsers;
-(NSNumber *)payloadIncludeNetworkUser;
-(NSNumber *)payloadHideAdminUsers;
-(NSNumber *)payloadSHOWOTHERUSERSMANAGED;
-(NSString *)payloadAdminHostInfo;
-(NSArray *)payloadAllowList;
-(NSArray *)payloadDenyList;
-(NSNumber *)payloadHideMobileAccounts;
-(NSNumber *)payloadShutDownDisabled;
-(NSNumber *)payloadRestartDisabled;
-(NSNumber *)payloadSleepDisabled;
-(NSNumber *)payloadDisableConsoleAccess;
-(NSString *)payloadLoginwindowText;
-(NSNumber *)payloadShutDownDisabledWhileLoggedIn;
-(NSNumber *)payloadRestartDisabledWhileLoggedIn;
-(NSNumber *)payloadPowerOffDisabledWhileLoggedIn;
-(NSNumber *)payloadLogOutDisabledWhileLoggedIn;
-(NSNumber *)payloadDisableScreenLockImmediate;
@end

