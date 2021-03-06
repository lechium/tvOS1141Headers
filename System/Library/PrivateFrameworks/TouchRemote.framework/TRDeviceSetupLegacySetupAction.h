/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRDeviceSetupLegacyAction.h>

@class TRDeviceSetupLegacySetupActionAuthInfo, NSString;

@interface TRDeviceSetupLegacySetupAction : TRDeviceSetupLegacyAction

@property (nonatomic,readonly) TRDeviceSetupLegacySetupActionAuthInfo * authInfo; 
@property (nonatomic,readonly) NSString * networkSSID; 
@property (nonatomic,readonly) NSString * networkPassword; 
@property (nonatomic,readonly) BOOL diagnosticsEnabled; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * homeSharingAppleID; 
@property (nonatomic,readonly) NSString * homeSharingGroupID; 
@property (nonatomic,readonly) BOOL rememberPassword; 
-(NSString *)countryCode;
-(NSString *)language;
-(NSString *)homeSharingGroupID;
-(BOOL)diagnosticsEnabled;
-(NSString *)homeSharingAppleID;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
-(BOOL)rememberPassword;
-(id)initWithAuthInfo:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3 diagnosticsEnabled:(BOOL)arg4 language:(id)arg5 countryCode:(id)arg6 homeSharingAppleID:(id)arg7 homeSharingGroupID:(id)arg8 rememberPassword:(BOOL)arg9 ;
-(TRDeviceSetupLegacySetupActionAuthInfo *)authInfo;
@end

