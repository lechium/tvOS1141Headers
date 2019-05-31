/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CATransaction : NSObject
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(void)pushAnimator:(/*^block*/id)arg1 ;
+(void)popAnimator;
+(void)setCommitHandler:(/*^block*/id)arg1 ;
+(void)setPresentationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
+(BOOL)animatesFromModelValues;
+(void)setAnimatesFromModelValues:(BOOL)arg1 ;
+(BOOL)disableRunLoopObserverCommits;
+(void)setDisableRunLoopObserverCommits:(BOOL)arg1 ;
+(void)assertInactive;
+(double)inputTime;
+(id)valueForKey:(id)arg1 ;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)synchronize;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)flush;
+(void)setAnimationDuration:(double)arg1 ;
+(void)setLowLatency:(BOOL)arg1 ;
+(unsigned)currentState;
+(void)setInputTime:(double)arg1 ;
+(void)begin;
+(void)setDisableActions:(BOOL)arg1 ;
+(void)commit;
+(void)addCommitHandler:(/*^block*/id)arg1 forPhase:(int)arg2 ;
+(BOOL)disableActions;
+(void)lock;
+(void)unlock;
+(void)setCommitTime:(double)arg1 ;
+(unsigned)generateSeed;
+(double)animationDuration;
+(void)activate;
+(id)animationTimingFunction;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(void)setEarliestAutomaticCommitTime:(double)arg1 ;
+(BOOL)lowLatency;
+(double)commitTime;
+(double)earliestAutomaticCommitTime;
+(/*^block*/id)animator;
+(void)activateBackground:(BOOL)arg1 ;
+(int)currentPhase;
@end
