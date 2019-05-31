/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CSIndexQueuableItem;
@class NSMutableDictionary, NSObject;

@interface CSIndexingQueue : NSObject {

	BOOL _timerArmed;
	long long _mode;
	double _idleTime;
	double _idleTimeLeeway;
	unsigned long long _maximumBatchSize;
	NSMutableDictionary* _queuedItems;
	NSObject*<OS_dispatch_queue> _coalescingQueue;
	NSObject*<OS_dispatch_source> _coalescingTimer;
	/*^block*/id _notifyBlock;
	double _lastPush;
	id<CSIndexQueuableItem> _lastPushedItem;

}

@property (assign) double idleTime;                                               //@synthesize idleTime=_idleTime - In the implementation block
@property (assign) double idleTimeLeeway;                                         //@synthesize idleTimeLeeway=_idleTimeLeeway - In the implementation block
@property (assign) unsigned long long maximumBatchSize;                           //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
@property (retain) NSMutableDictionary * queuedItems;                             //@synthesize queuedItems=_queuedItems - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> coalescingQueue;                  //@synthesize coalescingQueue=_coalescingQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> coalescingTimer;                 //@synthesize coalescingTimer=_coalescingTimer - In the implementation block
@property (assign) long long mode;                                                //@synthesize mode=_mode - In the implementation block
@property (copy) id notifyBlock;                                                  //@synthesize notifyBlock=_notifyBlock - In the implementation block
@property (assign) BOOL timerArmed;                                               //@synthesize timerArmed=_timerArmed - In the implementation block
@property (assign) double lastPush;                                               //@synthesize lastPush=_lastPush - In the implementation block
@property (nonatomic,retain) id<CSIndexQueuableItem> lastPushedItem;              //@synthesize lastPushedItem=_lastPushedItem - In the implementation block
-(void)setTimerArmed:(BOOL)arg1 ;
-(id)initWithIdleTime:(double)arg1 idleTimeLeeway:(double)arg2 maximumBatchSize:(unsigned long long)arg3 mode:(long long)arg4 notifyBlock:(/*^block*/id)arg5 ;
-(void)_applicationWillResign:(id)arg1 ;
-(void)_flushWithAppResigned:(BOOL)arg1 forced:(BOOL)arg2 ;
-(void)_queueItems:(id)arg1 ;
-(void)_pushLastItem:(id)arg1 time:(double)arg2 ;
-(id)initWithMode:(long long)arg1 notifyBlock:(/*^block*/id)arg2 ;
-(void)queueItems:(id)arg1 ;
-(void)queueItem:(id)arg1 ;
-(double)idleTimeLeeway;
-(void)setIdleTimeLeeway:(double)arg1 ;
-(void)setMaximumBatchSize:(unsigned long long)arg1 ;
-(NSMutableDictionary *)queuedItems;
-(void)setQueuedItems:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)coalescingQueue;
-(void)setCoalescingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)notifyBlock;
-(void)setNotifyBlock:(id)arg1 ;
-(BOOL)timerArmed;
-(double)lastPush;
-(void)setLastPush:(double)arg1 ;
-(id<CSIndexQueuableItem>)lastPushedItem;
-(void)setLastPushedItem:(id<CSIndexQueuableItem>)arg1 ;
-(void)dealloc;
-(void)flush;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(NSObject*<OS_dispatch_source>)coalescingTimer;
-(void)setCoalescingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)maximumBatchSize;
-(double)idleTime;
-(void)setIdleTime:(double)arg1 ;
@end

