/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentStatmentRequest : PKPeerPaymentWebServiceRequest {

	NSString* _emailAddress;

}

@property (nonatomic,copy) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
-(NSString *)emailAddress;
-(id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 ;
-(void)setEmailAddress:(NSString *)arg1 ;
@end

