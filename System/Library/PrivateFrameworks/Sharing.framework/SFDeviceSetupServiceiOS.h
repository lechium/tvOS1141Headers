/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUUID, SFClient, SFService, SFSession, NSObject;

@interface SFDeviceSetupServiceiOS : NSObject {

	BOOL _activateCalled;
	BOOL _advertiseFast;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSUUID* _peer;
	BOOL _pinShowing;
	SFClient* _preventExitForLocaleClient;
	SFService* _sfService;
	BOOL _sfServiceActivated;
	SFSession* _sfSession;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _showPINHandlerEx;
	/*^block*/id _showPINHandler;
	/*^block*/id _hidePINHandler;
	/*^block*/id _progressHandlerEx;
	/*^block*/id _receivedObjectHandler;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id showPINHandlerEx;                                       //@synthesize showPINHandlerEx=_showPINHandlerEx - In the implementation block
@property (nonatomic,copy) id showPINHandler;                                         //@synthesize showPINHandler=_showPINHandler - In the implementation block
@property (nonatomic,copy) id hidePINHandler;                                         //@synthesize hidePINHandler=_hidePINHandler - In the implementation block
@property (nonatomic,copy) id progressHandlerEx;                                      //@synthesize progressHandlerEx=_progressHandlerEx - In the implementation block
@property (nonatomic,copy) id receivedObjectHandler;                                  //@synthesize receivedObjectHandler=_receivedObjectHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(void)_run;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_cleanup;
-(void)activate;
-(void)_invalidated;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(void)setReceivedObjectHandler:(id)arg1 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_completed:(int)arg1 ;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)setShowPINHandlerEx:(id)arg1 ;
-(void)_handleSessionSecured:(id)arg1 ;
-(void)sendObject:(id)arg1 ;
-(void)sendSetupAction:(unsigned)arg1 info:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)showPINHandlerEx;
-(id)showPINHandler;
-(void)setShowPINHandler:(id)arg1 ;
-(id)hidePINHandler;
-(void)setHidePINHandler:(id)arg1 ;
-(id)progressHandlerEx;
-(void)setProgressHandlerEx:(id)arg1 ;
-(id)receivedObjectHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

