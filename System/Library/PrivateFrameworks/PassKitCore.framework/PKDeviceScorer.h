/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, PKDSPContext;

@interface PKDeviceScorer : NSObject {

	NSData* _lastDeviceScoreIdentifier;
	NSData* _lastDeviceScore;
	double _deviceScoreTimeout;
	PKDSPContext* _context;

}

@property (assign,nonatomic) double deviceScoreTimeout;                  //@synthesize deviceScoreTimeout=_deviceScoreTimeout - In the implementation block
@property (nonatomic,copy,readonly) PKDSPContext * context;              //@synthesize context=_context - In the implementation block
+(BOOL)deviceScoringSupported;
-(id)init;
-(PKDSPContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)_getScoreWithNonce:(id)arg1 cryptogram:(id)arg2 challengeResponse:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 nonce:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)peerPaymentDeviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)deviceScoreTimeout;
-(void)setDeviceScoreTimeout:(double)arg1 ;
@end

