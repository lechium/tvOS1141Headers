/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKActivityEventTransaction.h>

@class PKPaymentTransaction;

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction {

	PKPaymentTransaction* _relatedTopUpFundingSourceWithdrawlTransaction;
	PKPaymentTransaction* _relatedTopUpPeerPaymentAccountDepositTransaction;

}

@property (nonatomic,readonly) PKPaymentTransaction * relatedTopUpFundingSourceWithdrawlTransaction;                 //@synthesize relatedTopUpFundingSourceWithdrawlTransaction=_relatedTopUpFundingSourceWithdrawlTransaction - In the implementation block
@property (nonatomic,readonly) PKPaymentTransaction * relatedTopUpPeerPaymentAccountDepositTransaction;              //@synthesize relatedTopUpPeerPaymentAccountDepositTransaction=_relatedTopUpPeerPaymentAccountDepositTransaction - In the implementation block
-(id)eventType;
-(unsigned long long)hash;
-(BOOL)isEqualToActivityEvent:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 relatedTopUpWithdrawlTransaction:(id)arg2 relatedTopUpDepositTransaction:(id)arg3 unread:(BOOL)arg4 ;
-(PKPaymentTransaction *)relatedTopUpFundingSourceWithdrawlTransaction;
-(PKPaymentTransaction *)relatedTopUpPeerPaymentAccountDepositTransaction;
@end

