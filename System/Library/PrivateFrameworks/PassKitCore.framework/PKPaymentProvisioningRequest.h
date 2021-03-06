/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSNumber, NSArray, PKPaymentDeviceProvisioningData, PKPaymentEligibilityResponse, NSString, NSData, PKDSPContext;

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest {

	NSNumber* _primaryJSBLSequenceCounter;
	NSArray* _certChain;
	BOOL _devSigned;
	PKPaymentDeviceProvisioningData* _deviceData;
	PKPaymentEligibilityResponse* _eligibilityResponse;
	NSString* _nonce;
	NSString* _cardholderName;
	NSString* _cardSecurityCode;
	NSData* _activationData;
	PKDSPContext* _context;
	NSData* _cryptogram;
	NSData* _challengeResponse;
	NSString* _referrerIdentifier;

}

@property (nonatomic,retain) PKPaymentEligibilityResponse * eligibilityResponse;              //@synthesize eligibilityResponse=_eligibilityResponse - In the implementation block
@property (nonatomic,copy) NSString * nonce;                                                  //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                                         //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * cardSecurityCode;                                       //@synthesize cardSecurityCode=_cardSecurityCode - In the implementation block
@property (nonatomic,copy) NSData * activationData;                                           //@synthesize activationData=_activationData - In the implementation block
@property (nonatomic,copy) PKDSPContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSData * cryptogram;                                               //@synthesize cryptogram=_cryptogram - In the implementation block
@property (nonatomic,copy) NSData * challengeResponse;                                        //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,copy) NSString * referrerIdentifier;                                     //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
-(PKDSPContext *)context;
-(void)setContext:(PKDSPContext *)arg1 ;
-(void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)initWithEligibilityResponse:(id)arg1 ;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
-(PKPaymentEligibilityResponse *)eligibilityResponse;
-(void)setEligibilityResponse:(PKPaymentEligibilityResponse *)arg1 ;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(NSString *)referrerIdentifier;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_requestBodyWithWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCryptogram:(NSData *)arg1 ;
-(void)setChallengeResponse:(NSData *)arg1 ;
-(void)_deviceScoreWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateContextUsingWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSData *)cryptogram;
-(NSString *)cardSecurityCode;
-(void)setCardSecurityCode:(NSString *)arg1 ;
-(NSData *)activationData;
-(void)setActivationData:(NSData *)arg1 ;
-(NSData *)challengeResponse;
@end

