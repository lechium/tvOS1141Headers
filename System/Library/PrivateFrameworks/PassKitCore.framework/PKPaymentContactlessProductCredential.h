/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, NSDictionary, PKPaymentSetupProduct;

@interface PKPaymentContactlessProductCredential : PKPaymentCredential {

	NSString* _productIdentifier;
	NSDictionary* _readerModeMetadata;
	NSString* _cardSessionToken;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                   //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * readerModeMetadata;              //@synthesize readerModeMetadata=_readerModeMetadata - In the implementation block
@property (nonatomic,copy) NSString * cardSessionToken;                    //@synthesize cardSessionToken=_cardSessionToken - In the implementation block
-(id)init;
-(NSString *)productIdentifier;
-(NSDictionary *)readerModeMetadata;
-(void)setRequirementsResponse:(id)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(void)setReaderModeMetadata:(NSDictionary *)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg1 cardSessionToken:(id)arg2 ;
-(NSString *)cardSessionToken;
-(void)setCardSessionToken:(NSString *)arg1 ;
-(PKPaymentSetupProduct *)product;
@end

