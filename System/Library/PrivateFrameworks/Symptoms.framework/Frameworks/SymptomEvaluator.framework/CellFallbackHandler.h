/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSString;

@interface CellFallbackHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol> {

	BOOL _rnfActivated;
	BOOL _wifiCallUnderway;
	long long _fallbackAdvice;

}

@property (readonly) BOOL rnfActivated;                             //@synthesize rnfActivated=_rnfActivated - In the implementation block
@property (readonly) BOOL wifiCallUnderway;                         //@synthesize wifiCallUnderway=_wifiCallUnderway - In the implementation block
@property (readonly) long long fallbackAdvice;                      //@synthesize fallbackAdvice=_fallbackAdvice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(float)appPolicyDenialsScore;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)postUpwards:(long long)arg1 ;
-(BOOL)postStack:(unsigned)arg1 outValue:(BOOL*)arg2 ;
-(void)postHasAdviceNotification:(BOOL)arg1 ;
-(void)postMotionDetector:(unsigned)arg1 ;
-(BOOL)rnfActivated;
-(BOOL)wifiCallUnderway;
-(long long)fallbackAdvice;
@end

