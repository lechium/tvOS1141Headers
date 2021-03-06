/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayActivationClientDelegate;
@interface HAPRelayActivationClient : HMFObject {

	id<HAPRelayActivationClientDelegate> _delegate;

}

@property (__weak) id<HAPRelayActivationClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HAPRelayActivationClientDelegate>)delegate;
-(void)setDelegate:(id<HAPRelayActivationClientDelegate>)arg1 ;
-(void)close;
-(void)open;
-(void)requestChallenge;
-(void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3 ;
@end

