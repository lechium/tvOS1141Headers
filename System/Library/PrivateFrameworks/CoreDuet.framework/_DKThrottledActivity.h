/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKThrottledActivityStore;
@class NSCountedSet;

@interface _DKThrottledActivity : NSObject {

	NSCountedSet* _minimumIntervalScheduledActions;
	NSCountedSet* _delayScheduledActions;
	id<_DKThrottledActivityStore> _store;

}

@property (nonatomic,retain) id<_DKThrottledActivityStore> store;              //@synthesize store=_store - In the implementation block
+(id)standardInstance;
-(id)initWithStore:(id)arg1 ;
-(id)description;
-(void)performWithMinimumIntervalInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)_performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(id)keyForName:(id)arg1 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(void)_performOrScheduleWithTimeInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 callDepth:(unsigned long long)arg5 ;
-(BOOL)_minimumIntervalScheduledActionsContainsActionName:(id)arg1 ;
-(void)_minimumIntervalScheduledActionsAddActionName:(id)arg1 ;
-(void)_minimumIntervalScheduledActionsRemoveActionName:(id)arg1 ;
-(void)_performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)clearDateForKey:(id)arg1 ;
-(void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performWithMinimumIntervalInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithMinimumIntervalInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithMinimumIntervalInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)clearHistoryForName:(id)arg1 ;
-(id<_DKThrottledActivityStore>)store;
-(id)dateForKey:(id)arg1 ;
-(void)setStore:(id<_DKThrottledActivityStore>)arg1 ;
@end

