/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface StopWatch : NSObject {

	NSDate* start;
	double cumul;

}
+(BOOL)nearlyEqualRun:(double)arg1 toRun:(double)arg2 fudgeFactor:(double)arg3 ;
-(double)total;
-(BOOL)isRunning;
-(void)start;
-(double)stop;
-(double)currentRun;
-(BOOL)wasRunningBefore:(id)arg1 ;
@end

