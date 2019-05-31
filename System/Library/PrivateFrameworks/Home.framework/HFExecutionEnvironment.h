/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface HFExecutionEnvironment : NSObject {

	unsigned long long _runningState;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) unsigned long long runningState;              //@synthesize runningState=_runningState - In the implementation block
+(id)sharedInstance;
+(id)stringForHFExecutionEnvironmentRunningState:(unsigned long long)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)dispatchMessageToObserversWithBlock:(/*^block*/id)arg1 ;
-(void)setRunningState:(unsigned long long)arg1 ;
-(void)executionEnvironmentWillEnterForeground;
-(void)executionEnvironmentDidBecomeActive;
-(void)executionEnvironmentWillResignActive;
-(void)executionEnvironmentDidEnterBackground;
-(unsigned long long)runningState;
@end
