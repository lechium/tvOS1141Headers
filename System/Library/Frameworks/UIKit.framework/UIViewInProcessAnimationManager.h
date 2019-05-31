/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIViewInProcessAnimationManagerDriver.h>

@protocol _UIViewInProcessAnimationManagerDriver, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class NSMutableArray, NSObject, _UIAppCACommitFuture, CADisplayLink, NSHashTable, NSThread, NSRunLoop, NSString;

@interface UIViewInProcessAnimationManager : NSObject <_UIViewInProcessAnimationManagerDriver> {

	NSMutableArray* _entries;
	NSMutableArray* _newlyAddedEntries;
	NSMutableArray* _postTickBlocks;
	NSMutableArray* _preTickBlocks;
	NSMutableArray* _preExitBlocks;
	NSMutableArray* _presentationModifierGroupRequestBlocks;
	id<_UIViewInProcessAnimationManagerDriver> _animatorAdvancer;
	double _time;
	double _deltaTime;
	double _refreshInterval;
	NSObject*<OS_dispatch_queue> _tickPrepQueue;
	NSObject*<OS_dispatch_queue> _tickQueue;
	NSObject*<OS_dispatch_queue> _entryLockingQueue;
	NSObject*<OS_dispatch_queue> _preTickLockingQueue;
	NSObject*<OS_dispatch_queue> _animationAdvancerWaitingFlagQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_queue> _displayLinkAccessQueue;
	NSObject*<OS_dispatch_queue> _backlightQueue;
	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_semaphore> _postTicksDelaySemaphore;
	BOOL _waitingForAnimatorAdvancerToStart;
	NSMutableArray* _animationBlocksToStart;
	_UIAppCACommitFuture* _caCommitFuture;
	CADisplayLink* _displayLink;
	int _screenDimmingNotificationToken;
	BOOL _animationsSuspended;
	BOOL _animationsShouldCompleteImmediately;
	BOOL _skipNextFrame;
	BOOL _displayLinkInvalidated;
	BOOL _screenIsOff;
	unsigned long long _presentationModifierRequestCount;
	NSHashTable* _presentationGroups;
	BOOL _performScheduledBlocksManually;
	BOOL _commitsSynchronously;
	BOOL _usesMainThreadExecution;
	BOOL _advancingOnCommitDisabled;
	unsigned long long _executionMode;
	NSThread* _currentTickThread;
	NSThread* _animationThread;
	NSRunLoop* _animationThreadRunLoop;
	NSObject*<OS_dispatch_semaphore> _animationThreadKeepAliveSemaphore;

}

@property (assign,setter=_setPerformScheduledBlocksManually:,nonatomic) BOOL performScheduledBlocksManually;              //@synthesize performScheduledBlocksManually=_performScheduledBlocksManually - In the implementation block
@property (assign,nonatomic) BOOL commitsSynchronously;                                                                   //@synthesize commitsSynchronously=_commitsSynchronously - In the implementation block
@property (assign,nonatomic) BOOL usesMainThreadExecution;                                                                //@synthesize usesMainThreadExecution=_usesMainThreadExecution - In the implementation block
@property (assign,nonatomic) unsigned long long executionMode;                                                            //@synthesize executionMode=_executionMode - In the implementation block
@property (assign,nonatomic) BOOL advancingOnCommitDisabled;                                                              //@synthesize advancingOnCommitDisabled=_advancingOnCommitDisabled - In the implementation block
@property (__weak) NSThread * currentTickThread;                                                                          //@synthesize currentTickThread=_currentTickThread - In the implementation block
@property (__weak) NSThread * animationThread;                                                                            //@synthesize animationThread=_animationThread - In the implementation block
@property (__weak) NSRunLoop * animationThreadRunLoop;                                                                    //@synthesize animationThreadRunLoop=_animationThreadRunLoop - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> animationThreadKeepAliveSemaphore;                                    //@synthesize animationThreadKeepAliveSemaphore=_animationThreadKeepAliveSemaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_cancelPresentationModifierGroupRequest:(id)arg1 ;
+(id)_requestPresentationModifierGroup:(/*^block*/id)arg1 ;
+(id)sharedManager;
+(void)_dispatchAsyncOntoMainBeforeExit:(/*^block*/id)arg1 ;
+(void)_setExternalAnimationDriver:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_cancelPresentationModifierGroupRequest:(id)arg1 ;
-(id)_requestPresentationModifierGroup:(/*^block*/id)arg1 ;
-(void)performAfterTick:(/*^block*/id)arg1 ;
-(void)_applicationResignedActive;
-(void)_applicationBecameActive;
-(void)_registerBacklightChangedNotification;
-(void)setUsesMainThreadExecution:(BOOL)arg1 ;
-(void)setCommitsSynchronously:(BOOL)arg1 ;
-(void)_cancelAllAnimationsImmediately;
-(void)_runAnimationBlocks;
-(void)_performTick:(double)arg1 cancel:(BOOL)arg2 force:(BOOL)arg3 eventName:(id)arg4 entry:(/*^block*/id)arg5 exit:(/*^block*/id)arg6 ;
-(BOOL)isWaitingForAnimatorAdvancerToStart;
-(void)finishAdvancingAnimationManager;
-(void)setWaitingForAnimatorAdvancerToStart:(BOOL)arg1 ;
-(double)refreshInterval;
-(void)_setAnimationExecutionParameters;
-(void)_prepareForTick;
-(void)setCurrentTickThread:(NSThread *)arg1 ;
-(void)_processPreTicks;
-(void)_processEntriesCollectingEntriesToRemove:(id)arg1 cancel:(BOOL)arg2 ;
-(void)_processPostTicksDelayIfNecessary:(double)arg1 ;
-(void)_processPostTicks;
-(void)_processPresentationModifierRequestsAndFlush;
-(void)_processTickExitRemovingEntries:(id)arg1 ;
-(void)scheduleAnimatorAdvancerToStart;
-(void)startAdvancingAnimationManager:(id)arg1 ;
-(BOOL)advancingOnCommitDisabled;
-(BOOL)_isInvalidated;
-(void)startAnimationAdvancerIfNeeded;
-(void)_commitSynchronously;
-(NSThread *)currentTickThread;
-(void)performBeforeExiting:(/*^block*/id)arg1 ;
-(void)_advanceWithTime:(double)arg1 ;
-(BOOL)_shouldKeepAnimationThreadAlive;
-(void)_displayLinkFire:(id)arg1 ;
-(void)addEntry:(/*^block*/id)arg1 ;
-(void)_setCurrentMediaTime:(double)arg1 ;
-(void)_performWhenInProcessAnimationsTransactionCommits:(/*^block*/id)arg1 ;
-(void)performBeforeTick:(/*^block*/id)arg1 ;
-(BOOL)performScheduledBlocksManually;
-(void)_setPerformScheduledBlocksManually:(BOOL)arg1 ;
-(BOOL)commitsSynchronously;
-(BOOL)usesMainThreadExecution;
-(unsigned long long)executionMode;
-(void)setExecutionMode:(unsigned long long)arg1 ;
-(void)setAdvancingOnCommitDisabled:(BOOL)arg1 ;
-(NSThread *)animationThread;
-(void)setAnimationThread:(NSThread *)arg1 ;
-(NSRunLoop *)animationThreadRunLoop;
-(void)setAnimationThreadRunLoop:(NSRunLoop *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)animationThreadKeepAliveSemaphore;
-(void)setAnimationThreadKeepAliveSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

