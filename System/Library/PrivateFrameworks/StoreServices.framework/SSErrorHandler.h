/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSErrorHandlerDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSArray;

@interface SSErrorHandler : NSObject {

	SSXPCConnection* _controlConnection;
	id<SSErrorHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _failureTypes;
	SSXPCConnection* _observerConnection;

}

@property (assign) id<SSErrorHandlerDelegate> delegate; 
@property (copy) NSArray * failureTypes; 
-(id)init;
-(id<SSErrorHandlerDelegate>)delegate;
-(void)setDelegate:(id<SSErrorHandlerDelegate>)arg1 ;
-(void)dealloc;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_sendDisconnectMessage;
-(void)_tearDownConnections;
-(void)_reconnectToDaemonWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_openSessionWithMessage:(id)arg1 ;
-(void)_dispatchToDelegate:(/*^block*/id)arg1 ;
-(NSArray *)failureTypes;
-(void)setFailureTypes:(NSArray *)arg1 ;
-(void)stopWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end
