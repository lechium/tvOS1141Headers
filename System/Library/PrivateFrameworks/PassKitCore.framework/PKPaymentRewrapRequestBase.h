/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKWrappedPayment, NSData, NSString;

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKWrappedPayment* _wrappedPayment;
	NSData* _applicationData;

}

@property (nonatomic,readonly) NSString * endpointName; 
@property (nonatomic,retain) PKPaymentPass * pass;                           //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKWrappedPayment * wrappedPayment;              //@synthesize wrappedPayment=_wrappedPayment - In the implementation block
@property (nonatomic,copy) NSData * applicationData;                         //@synthesize applicationData=_applicationData - In the implementation block
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKWrappedPayment *)wrappedPayment;
-(void)setApplicationData:(NSData *)arg1 ;
-(NSString *)endpointName;
-(id)bodyDictionaryWithDeviceData:(id)arg1 ;
-(id)initWithWrappedPayment:(id)arg1 paymentPass:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceData:(id)arg2 account:(id)arg3 ;
-(void)setWrappedPayment:(PKWrappedPayment *)arg1 ;
-(NSData *)applicationData;
@end
