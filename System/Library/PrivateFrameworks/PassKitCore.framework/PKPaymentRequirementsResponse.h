/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse {

	long long _status;
	NSArray* _requiredPaymentSetupFields;
	NSString* _productIdentifier;
	NSArray* _possibleProducts;
	NSURL* _learnMoreURL;
	NSString* _nonce;

}

@property (nonatomic,readonly) long long status;                                       //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredPaymentSetupFields;              //@synthesize requiredPaymentSetupFields=_requiredPaymentSetupFields - In the implementation block
@property (nonatomic,copy,readonly) NSString * productIdentifier;                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * possibleProducts;                        //@synthesize possibleProducts=_possibleProducts - In the implementation block
@property (nonatomic,copy,readonly) NSURL * learnMoreURL;                              //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
-(id)initWithData:(id)arg1 ;
-(long long)status;
-(NSString *)productIdentifier;
-(NSArray *)requiredPaymentSetupFields;
-(NSString *)nonce;
-(id)initWithProduct:(id)arg1 ;
-(id)initWithProvisioningMethodMetadata:(id)arg1 ;
-(NSArray *)possibleProducts;
-(NSURL *)learnMoreURL;
@end

