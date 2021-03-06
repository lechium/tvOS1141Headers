/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface BKSAssertionClientMultiplexer : BSBaseXPCClient {

	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSMutableDictionary* _listeners;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> assertionQueue; 
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_connectionWasDestroyed;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(void)sendEvent:(id)arg1 withAssertionType:(id)arg2 forEventType:(unsigned long long)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_assertionQueue_handleEvent:(id)arg1 forListener:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)sendMessage:(/*^block*/id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

