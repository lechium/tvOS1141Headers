/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FudConnection.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface FudInternalConnection : NSObject <FudConnection> {

	NSString* clientIdentifier;
	NSObject*<OS_dispatch_queue> handlerQueue;
	/*^block*/id messageHandler;
	NSMutableDictionary* pendingRequests;
	BOOL didStop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stop;
-(void)sendMessageToFud:(id)arg1 ;
-(void)sendMessageToFud:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 handlerQueue:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)handleInboundNotification:(id)arg1 ;
-(long long)getNextMessageID;
@end

