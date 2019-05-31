/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface VSPrivacyInfoCenter : NSObject <MCProfileConnectionObserver> {

	int _registrationToken;
	long long _accountAccessStatus;

}

@property (assign,nonatomic) int registrationToken;                      //@synthesize registrationToken=_registrationToken - In the implementation block
@property (assign,nonatomic) long long accountAccessStatus;              //@synthesize accountAccessStatus=_accountAccessStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPrivacyInfoCenter;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(long long)accountAccessStatus;
-(void)updateAccountAccessStatusWithResponse:(id)arg1 ;
-(id)updateAccountAccessStatusWithError:(id)arg1 ;
-(void)_invalidateAccountAccessStatus;
-(void)setAccountAccessStatus:(long long)arg1 ;
-(int)registrationToken;
-(void)setRegistrationToken:(int)arg1 ;
@end
