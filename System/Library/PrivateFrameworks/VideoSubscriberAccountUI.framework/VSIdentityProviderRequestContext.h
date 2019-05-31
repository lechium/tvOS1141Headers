/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSIdentityProviderRequest;

@interface VSIdentityProviderRequestContext : NSObject {

	BOOL _attemptedVerificationStateReset;
	VSIdentityProviderRequest* _request;

}

@property (nonatomic,retain) VSIdentityProviderRequest * request;               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL attemptedVerificationStateReset;              //@synthesize attemptedVerificationStateReset=_attemptedVerificationStateReset - In the implementation block
-(void)setRequest:(VSIdentityProviderRequest *)arg1 ;
-(VSIdentityProviderRequest *)request;
-(BOOL)attemptedVerificationStateReset;
-(void)setAttemptedVerificationStateReset:(BOOL)arg1 ;
@end
