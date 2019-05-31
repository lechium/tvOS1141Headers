/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, BSAtomicSignal, NSString;

@interface BSBaseXPCClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BSAtomicSignal* _invalidationSignal;
	NSObject*<OS_xpc_object> _serverEndpoint;
	NSString* _serviceName;
	BOOL _clientInvalidated;
	int _notifyToken;
	NSObject*<OS_xpc_object> _connection;
	BOOL _suspended;

}

@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(id)_notifyTokenName;
-(void)_sendMessageReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(id)_getStringFromMessage:(id)arg1 key:(char*)arg2 ;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_invalidateAndFlush:(BOOL)arg1 ;
-(BOOL)queue_isSuspended;
-(void)queue_registerWithServerIfNecessary;
-(void)queue_suspendConnection;
-(void)queue_resumeConnection;
-(void)queue_clientWasInvalidated;
-(void)_sendMessage:(/*^block*/id)arg1 withReplyHandler:(/*^block*/id)arg2 waitForReply:(BOOL)arg3 waitDuration:(unsigned long long)arg4 ;
-(void)queue_connectionWasResumed;
-(void)queue_connectionWasSuspended;
-(id)_connectionInstanceUUID;
-(void)queue_handleError:(id)arg1 ;
-(void)queue_connectionWasInterrupted;
-(void)queue_connectionWasInvalidated;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_reconnectToResumedServerIfNecessary;
-(void)queue_connectionWasCreated;
-(void)reconnectIfNecessary;
-(void)queue_connectionWasDestroyed;
-(void)suspendConnection;
-(void)resumeConnection;
-(id)_errorFromMessageIfAny:(id)arg1 ;
-(id)queue_connection;
-(void)_sendMessage:(/*^block*/id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)_setEndpoint:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(BOOL)isSuspended;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(id)_connection;
-(void)_sendReplyForMessage:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
@end

