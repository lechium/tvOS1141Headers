/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITargetedProxy.h>

@class NSMutableArray;

@interface _UIQueueingProxy : _UITargetedProxy {

	os_unfair_lock_s _lock;
	unsigned long long _suspensionCount;
	NSMutableArray* _queuedInvocations;
	/*^block*/id _shouldSuspendInvocationBlock;

}
+(id)proxyWithTarget:(id)arg1 ;
+(id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(/*^block*/id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(void)suspend;
-(void)forwardInvocation:(id)arg1 ;
-(void)resume;
-(void)_dispatchSuspendedMessages;
-(void)removeAllEnqueuedInvocations;
@end
