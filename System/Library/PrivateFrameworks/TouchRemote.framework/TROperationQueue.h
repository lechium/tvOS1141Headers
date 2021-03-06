/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TROperationQueue : NSOperationQueue {

	BOOL _cancelled;
	NSObject*<OS_dispatch_queue> _cancellationQ;

}

@property (getter=isCancelled) BOOL cancelled;                                        //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cancellationQ;              //@synthesize cancellationQ=_cancellationQ - In the implementation block
-(id)init;
-(void)invalidate;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)addOperation:(id)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)cancellationQ;
-(void)setCancellationQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

