/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, AXMTaskDispatcherDelegate;
@class NSObject, NSMutableArray;

@interface AXMTaskDispatcher : NSObject {

	NSObject*<OS_dispatch_source> _processQueueSource;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_taskList;
	BOOL _queue_taskIsBeingProcessed;
	id<AXMTaskDispatcherDelegate> _delegate;

}

@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic,__weak) id<AXMTaskDispatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(long long)count;
-(id<AXMTaskDispatcherDelegate>)delegate;
-(void)setDelegate:(id<AXMTaskDispatcherDelegate>)arg1 ;
-(BOOL)isEmpty;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)scheduleTask:(id)arg1 ;
-(void)_queue_processNextTask;
-(long long)_queue_count;
-(id)_queue_dequeueTask;
-(void)_queue_scheduleTask:(id)arg1 ;
-(void)_queue_unscheduleAllTasks;
-(void)unscheduleAllTasks;
@end

