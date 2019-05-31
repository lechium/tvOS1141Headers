/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSLock;

@interface BSXPCConnectionListenerManager : NSObject {

	NSObject*<OS_dispatch_queue> _listeningQueue;
	NSMutableDictionary* _services;
	NSLock* _servicesLock;
	NSObject*<OS_dispatch_queue> _defaultHandlerQueue;

}
+(id)defaultHandlerQueue;
+(void)stopListeningForService:(id)arg1 ;
+(id)sharedInstance;
+(void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)_defaultHandlerQueue;
-(void)_addService:(id)arg1 withHandler:(id)arg2 onQueue:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)_removeService:(id)arg1 ;
@end

