/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCTargetSelector.h>

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {

	CFRunLoopTimerRef _timer;
	id _key;
	BOOL _isCanceled;
	BOOL _isPending;
	id _object;
	NSLock* _lock;
	BOOL _createdTimer;
	/*^block*/id _block;

}
+(void)initialize;
+(void)_assignThreadPriority;
+(void)_runThread;
-(void)invalidate;
-(void)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2 ;
-(void)_dispatchThreadHelper:(/*^block*/id)arg1 ;
-(BOOL)_createdTimer;
-(void)dispatchAfterDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)threadKey;
-(void)_dispatch;
-(void)_dispatchMainThread;
-(void)_dispatchSCRCThread;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)isCanceled;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3 ;
-(void)dispatchAfterDelay:(double)arg1 ;
-(BOOL)isPending;
@end

