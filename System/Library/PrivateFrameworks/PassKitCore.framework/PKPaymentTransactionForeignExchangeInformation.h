/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class PKCurrencyAmount, NSDecimalNumber;

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	PKCurrencyAmount* _destinationCurrencyAmount;
	NSDecimalNumber* _exchangeRate;

}

@property (nonatomic,copy) PKCurrencyAmount * destinationCurrencyAmount;              //@synthesize destinationCurrencyAmount=_destinationCurrencyAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * exchangeRate;                            //@synthesize exchangeRate=_exchangeRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(id)jsonDictionaryRepresentation;
-(BOOL)isEqualToForeignExchangeInformation:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNames;
-(id)jsonString;
-(PKCurrencyAmount *)destinationCurrencyAmount;
-(void)setDestinationCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(NSDecimalNumber *)exchangeRate;
-(void)setExchangeRate:(NSDecimalNumber *)arg1 ;
@end

