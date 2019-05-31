/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDecimalNumber, NSString, NSData;

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse {

	NSDecimalNumber* _amount;
	NSString* _secureElementIdentifier;
	NSData* _instructions;
	NSData* _signature;

}

@property (nonatomic,readonly) NSDecimalNumber * amount;                        //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) NSString * secureElementIdentifier;              //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * instructions;                           //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSData * signature;                              //@synthesize signature=_signature - In the implementation block
-(NSData *)instructions;
-(id)initWithData:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(NSString *)secureElementIdentifier;
-(NSData *)signature;
@end

