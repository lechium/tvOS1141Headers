/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTransportDelegate;
@class CATStateMachine, CATOperationQueue, NSString;

@interface CATTransport : NSObject {

	CATStateMachine* mFSM;
	CATOperationQueue* mControlQueue;
	CATOperationQueue* mMessageQueue;
	CATTransport* mStrongSelf;
	NSString* _name;
	id<CATTransportDelegate> _delegate;

}

@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<CATTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)suspendConnection;
-(void)resumeConnection;
-(id)init;
-(void)invalidate;
-(id<CATTransportDelegate>)delegate;
-(void)setDelegate:(id<CATTransportDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)suspend;
-(void)resume;
-(void)sendMessage:(id)arg1 ;
-(void)didInterruptWithError:(id)arg1 ;
-(void)didReceiveMessage:(id)arg1 ;
-(void)didInvalidate;
-(void)invalidateConnection;
-(id)operationToSendMessage:(id)arg1 ;
-(void)delegateDidInvalidate;
-(void)enqueueDelegateDidInterruptWithError:(id)arg1 ;
-(void)sendHelloMessageAndResumeQueue;
-(void)enqueueSendForMessage:(id)arg1 ;
-(void)resumeQueueAndConnection;
-(void)cancelHelloMessageAndResumeQueueOperations;
-(void)suspendQueueAndConnection;
-(void)enqueueDelegateDidConnect;
-(void)enqueueDelegateCouldNotConnectWithError:(id)arg1 ;
-(void)enqueueDelegateDidReceiveMessage:(id)arg1 ;
-(void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
-(void)invalidSendForMessage:(id)arg1 ;
-(void)enqueueDelegateDidInvalidateAndFinalize;
-(void)delegateDidResume;
-(void)resumeQueue;
-(void)suspendQueue;
@end
