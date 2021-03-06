/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKRemoteDevice, PKRemotePaymentInstrument, PKPaymentApplication, CNContact;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem

@property (nonatomic,readonly) PKRemoteDevice * remoteDevice; 
@property (nonatomic,readonly) PKRemotePaymentInstrument * remotePaymentInstrument; 
@property (nonatomic,readonly) PKPaymentApplication * paymentApplication; 
@property (nonatomic,readonly) BOOL requiresBillingAddress; 
@property (nonatomic,readonly) CNContact * billingAddress; 
+(long long)dataType;
-(id)errors;
-(PKPaymentApplication *)paymentApplication;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)hasAssociatedPeerPaymentAccount;
-(unsigned long long)peerPaymentAccountState;
-(CNContact *)billingAddress;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(BOOL)requiresBillingAddress;
-(id)peerPaymentAccountBalance;
-(PKRemoteDevice *)remoteDevice;
@end

