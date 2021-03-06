/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class PHACoalescer, NSObject, NSHashTable, NSArray;

@interface PHACoalescerContext : NSObject {

	unsigned long long _coalescedUpdatesCount;
	PHACoalescer* _coalescer;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_group> _group;
	NSHashTable* _pendingActivityTokens;

}

@property (__weak) PHACoalescer * coalescer;                                 //@synthesize coalescer=_coalescer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> group;                       //@synthesize group=_group - In the implementation block
@property (retain) NSHashTable * pendingActivityTokens;                      //@synthesize pendingActivityTokens=_pendingActivityTokens - In the implementation block
@property (readonly) NSArray * pendingActivityTokensSnapshot; 
@property (assign) unsigned long long coalescedUpdatesCount;                 //@synthesize coalescedUpdatesCount=_coalescedUpdatesCount - In the implementation block
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(id)activityToken;
-(void)delayNextInvocationByTimeInterval:(double)arg1 ;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCoalescer:(PHACoalescer *)arg1 ;
-(void)setPendingActivityTokens:(NSHashTable *)arg1 ;
-(PHACoalescer *)coalescer;
-(id)activityTokenWithReason:(id)arg1 ;
-(id)initWithCoalescer:(id)arg1 ;
-(void)pushBack:(/*^block*/id)arg1 ;
-(void)cancelPendingActivityTokens;
-(NSArray *)pendingActivityTokensSnapshot;
-(void)notifyActivityTokenCompletionOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)coalescedUpdatesCount;
-(void)setCoalescedUpdatesCount:(unsigned long long)arg1 ;
-(NSHashTable *)pendingActivityTokens;
@end

