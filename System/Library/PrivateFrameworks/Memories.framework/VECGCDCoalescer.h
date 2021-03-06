/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface VECGCDCoalescer : NSObject {

	double _delay;
	NSObject*<OS_dispatch_source> _processingTimer;
	NSObject*<OS_dispatch_group> _processDoneGroup;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	BOOL _processingTimerActive;
	NSMutableArray* _keys;
	NSMutableArray* _blocks;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)coalescerWithDelay:(double)arg1 ;
+(id)sharedFiveSecondCoalescer;
-(void)_applicationWillTerminate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_processImmediately;
-(void)_processTimer;
-(id)initWithQueue:(id)arg1 delay:(double)arg2 ;
-(void)_addBlock:(/*^block*/id)arg1 withKey:(id)arg2 ;
-(void)debugWaitUntilBlocksHaveBeenProcessed;
-(void)coalesceBlock:(/*^block*/id)arg1 withKey:(id)arg2 ;
@end

