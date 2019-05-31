/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AASetupAssistantConfigResponse : AAResponse {

	NSDictionary* _urls;

}

@property (nonatomic,readonly) NSString * signingSessionCertURL; 
@property (nonatomic,readonly) NSString * signingSessionURL; 
@property (nonatomic,readonly) NSString * aboutURL; 
@property (nonatomic,readonly) NSString * xmlUI; 
@property (nonatomic,readonly) NSString * upgradeIOSTermsUI; 
@property (nonatomic,readonly) NSString * genericTermsURL; 
@property (nonatomic,readonly) NSString * iForgotUIURL; 
@property (nonatomic,readonly) NSString * authenticateURL; 
@property (nonatomic,readonly) NSString * createAppleIDURL; 
@property (nonatomic,readonly) NSString * updateAppleIDURL; 
@property (nonatomic,readonly) NSString * createDelegateAccountsURL; 
@property (nonatomic,readonly) NSString * checkValidityURL; 
@property (nonatomic,readonly) NSString * iForgotURL; 
@property (nonatomic,readonly) NSString * existingAppleIDTermsUIURL; 
@property (nonatomic,readonly) BOOL setupAssistantServerEnabled; 
@property (nonatomic,readonly) NSString * loginDelegatesURL; 
@property (nonatomic,readonly) NSString * activeEmailDomain; 
@property (nonatomic,readonly) NSString * upgradeStatusURL; 
-(NSString *)signingSessionCertURL;
-(NSString *)signingSessionURL;
-(NSString *)authenticateURL;
-(NSString *)createAppleIDURL;
-(NSString *)updateAppleIDURL;
-(NSString *)createDelegateAccountsURL;
-(NSString *)upgradeIOSTermsUI;
-(NSString *)upgradeStatusURL;
-(NSString *)xmlUI;
-(NSString *)aboutURL;
-(NSString *)checkValidityURL;
-(NSString *)loginDelegatesURL;
-(BOOL)setupAssistantServerEnabled;
-(NSString *)activeEmailDomain;
-(NSString *)iForgotUIURL;
-(NSString *)genericTermsURL;
-(NSString *)existingAppleIDTermsUIURL;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)iForgotURL;
@end

