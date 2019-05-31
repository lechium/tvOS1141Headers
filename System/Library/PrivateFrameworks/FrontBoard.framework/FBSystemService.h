/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSystemServiceDelegate;
@class FBSSerialQueue, FBSystemServiceServer;

@interface FBSystemService : NSObject {

	FBSSerialQueue* _queue;
	int _pendingExit;
	id<FBSystemServiceDelegate> _delegate;
	FBSystemServiceServer* _server;

}

@property (nonatomic,retain) FBSystemServiceServer * server;                    //@synthesize server=_server - In the implementation block
@property (nonatomic,retain,readonly) FBSSerialQueue * queue;                   //@synthesize queue=_queue - In the implementation block
@property (getter=isPendingExit,readonly) BOOL pendingExit; 
@property (assign,nonatomic) id<FBSystemServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id<FBSystemServiceDelegate>)delegate;
-(void)setDelegate:(id<FBSystemServiceDelegate>)arg1 ;
-(void)dealloc;
-(FBSystemServiceServer *)server;
-(id)initWithQueue:(id)arg1 ;
-(FBSSerialQueue *)queue;
-(void)dataReset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isPasscodeLockedOrBlockedWithResult:(/*^block*/id)arg1 ;
-(void)canActivateApplication:(id)arg1 source:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)activateApplication:(id)arg1 requestID:(unsigned)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(void)handleActions:(id)arg1 source:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_shutdownWithFBSOptions:(id)arg1 ;
-(void)setSystemIdleSleepDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)shutdownWithOptions:(unsigned long long)arg1 ;
-(void)setPendingExit:(BOOL)arg1 ;
-(void)_performExitTasksForRelaunch:(BOOL)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(unsigned long long)_mapShutdownOptionsToOptions:(id)arg1 ;
-(void)_terminateProcess:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_isTrustedRequestToOpenApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 ;
-(void)_activateApplication:(id)arg1 requestID:(unsigned)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(BOOL)_requireEntitlementToOpenURL:(id)arg1 options:(id)arg2 ;
-(void)_reallyActivateApplication:(id)arg1 requestID:(unsigned)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 isTrusted:(BOOL)arg6 sequenceNumber:(unsigned long long)arg7 cacheGUID:(id)arg8 ourSequenceNumber:(unsigned long long)arg9 ourCacheGUID:(id)arg10 withResult:(/*^block*/id)arg11 ;
-(BOOL)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4 ;
-(BOOL)_isWhitelistedLaunchSuspendedApp:(id)arg1 ;
-(void)shutdownAndReboot:(BOOL)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 ;
-(void)prepareForExitAndRelaunch:(BOOL)arg1 ;
-(BOOL)isPendingExit;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 ;
-(void)setServer:(FBSystemServiceServer *)arg1 ;
@end

