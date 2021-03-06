/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentProvisioningMethodMetadataRequest : PKPaymentWebServiceRequest {

	NSString* _productIdentifier;
	NSString* _provisioningMethod;

}

@property (nonatomic,copy) NSString * productIdentifier;               //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSString * provisioningMethod;              //@synthesize provisioningMethod=_provisioningMethod - In the implementation block
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(id)initWithProductIdentifier:(id)arg1 provisioningMethod:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 ;
-(NSString *)provisioningMethod;
-(void)setProvisioningMethod:(NSString *)arg1 ;
@end

