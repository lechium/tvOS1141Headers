/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPaymentPassAction* _action;

}

@property (nonatomic,retain) PKPaymentPass * pass;                      //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentPassAction * action;              //@synthesize action=_action - In the implementation block
-(PKPaymentPassAction *)action;
-(void)setAction:(PKPaymentPassAction *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 ;
@end
