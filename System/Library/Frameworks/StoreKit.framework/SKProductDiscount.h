/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDecimalNumber, NSLocale, SKProductSubscriptionPeriod;

@interface SKProductDiscount : NSObject {

	unsigned long long _numberOfPeriods;
	unsigned long long _paymentMode;
	NSDecimalNumber* _price;
	NSLocale* _locale;
	SKProductSubscriptionPeriod* _subscriptionPeriod;
	NSLocale* _priceLocale;

}

@property (nonatomic,readonly) NSDecimalNumber * price;                                       //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) NSLocale * priceLocale;                                        //@synthesize priceLocale=_priceLocale - In the implementation block
@property (nonatomic,readonly) SKProductSubscriptionPeriod * subscriptionPeriod;              //@synthesize subscriptionPeriod=_subscriptionPeriod - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPeriods;                            //@synthesize numberOfPeriods=_numberOfPeriods - In the implementation block
@property (nonatomic,readonly) unsigned long long paymentMode;                                //@synthesize paymentMode=_paymentMode - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDecimalNumber *)price;
-(void)_setNumberOfPeriods:(unsigned long long)arg1 ;
-(void)_setPaymentMode:(unsigned long long)arg1 ;
-(void)_setPrice:(id)arg1 ;
-(void)_setPriceLocale:(id)arg1 ;
-(void)_setSubscriptionPeriod:(id)arg1 ;
-(SKProductSubscriptionPeriod *)subscriptionPeriod;
-(unsigned long long)numberOfPeriods;
-(unsigned long long)paymentMode;
-(NSLocale *)priceLocale;
@end
