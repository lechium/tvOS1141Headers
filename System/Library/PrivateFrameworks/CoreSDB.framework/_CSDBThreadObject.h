/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSDB/CoreSDB-Structs.h>
@class NSThread, NSString, NSRunLoop, NSObject;

@interface _CSDBThreadObject : NSObject {

	NSThread* _thread;
	NSString* _identifier;
	NSRunLoop* _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	NSString* _queueContext;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_threadedMain;
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg1 qosClass:(unsigned short)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(BOOL)isCurrentThreadOtherwiseAssert:(BOOL)arg1 ;
-(id)thread;
@end
