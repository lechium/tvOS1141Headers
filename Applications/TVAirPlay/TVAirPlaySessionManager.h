//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVAirPlayMediaViewControllerDelegate.h"

@class NSArray, NSMapTable, NSMutableArray, NSString, TVAirPlayMediaViewController, TVSStateMachine;

@interface TVAirPlaySessionManager : NSObject <TVAirPlayMediaViewControllerDelegate>
{
    NSMutableArray *_sessions;	// 8 = 0x8
    NSMapTable *_pendingCompletionHandlers;	// 16 = 0x10
    TVSStateMachine *_stateMachine;	// 24 = 0x18
    TVAirPlayMediaViewController *_mediaViewController;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100008340
- (void).cxx_destruct;	// IMP=0x0000000100009c94
- (void)_callPendingCompletionHandlersWithError:(id)arg1;	// IMP=0x0000000100009b04
- (void)_updatePresentedViewController;	// IMP=0x0000000100009ae4
- (void)_updateForSessionChange;	// IMP=0x0000000100009a88
- (id)_sessionOfType:(long long)arg1 identifier:(id)arg2 activeOnly:(_Bool)arg3;	// IMP=0x00000001000098bc
- (void)_requestMediaViewController;	// IMP=0x00000001000095ec
- (id)_cleanupWithError:(id)arg1;	// IMP=0x0000000100009450
- (id)_handleForegroundUpdate;	// IMP=0x000000010000927c
- (id)_handleBackgroundSessionUpdate;	// IMP=0x00000001000090e0
- (void)_initializeStateMachine;	// IMP=0x0000000100008d1c
- (void)mediaViewControllerDidDismiss:(id)arg1;	// IMP=0x0000000100008c3c
- (void)mediaViewControllerDidBecomeReady:(id)arg1;	// IMP=0x0000000100008ae8
@property(readonly, copy, nonatomic) NSArray *activeSessions;
- (id)urlSessionWithID:(id)arg1;	// IMP=0x0000000100008a30
- (id)streamingSessionWithID:(id)arg1;	// IMP=0x0000000100008a14
- (id)presentationSessionWithID:(id)arg1;	// IMP=0x00000001000089f8
- (id)infoSessionWithID:(id)arg1;	// IMP=0x0000000100008968
- (void)deregisterSession:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x00000001000086a4
- (void)registerSession:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008530
- (void)dealloc;	// IMP=0x00000001000084b8
- (id)init;	// IMP=0x00000001000083f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

