/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNScheduler.h>

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler> {

	unsigned long long _clock;
	unsigned long long _nextSchedulableTick;
	unsigned long long _stopTime;
	CNQueue* _queue;
	BOOL _isStarted;
	BOOL _isPerforming;

}

@property (readonly) unsigned long long clock;                      //@synthesize clock=_clock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2 ;
+(id)providerWithScheduler:(id)arg1 ;
-(unsigned long long)clock;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(unsigned long long)_nextSchedulableTick;
-(id)_scheduleBlock:(/*^block*/id)arg1 atTime:(unsigned long long)arg2 ;
-(BOOL)_performJobs;
-(void)advanceTo:(unsigned long long)arg1 ;
-(void)advanceBy:(unsigned long long)arg1 ;
-(BOOL)hasJobsScheduled;
-(id)init;
-(NSString *)description;
-(double)timestamp;
-(void)start;
-(void)stop;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
@end
