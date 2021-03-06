//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class BKSProcessAssertion, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCListener, PBSystemServiceConnection;

@interface PBSystemService : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_acceptSerialQueue;	// 8 = 0x8
    NSXPCListener *_serviceListener;	// 16 = 0x10
    NSMutableSet *_activeConnections;	// 24 = 0x18
    BKSProcessAssertion *_processAssertion;	// 32 = 0x20
    PBSystemServiceConnection *_defaultKioskConnection;	// 40 = 0x28
}

+ (id)activeConnections;	// IMP=0x000000010006c8c8
+ (void)prepareForDefaultKioskAppTransitionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006c85c
+ (void)notifyDefaultKioskAppTransitionDidFail;	// IMP=0x000000010006c81c
+ (void)notifySharedAppStateDidChange;	// IMP=0x000000010006c818
+ (void)notifyStartDefaultKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 animationFence:(id)arg3 delay:(double)arg4;	// IMP=0x000000010006c78c
+ (void)notifyStartDefaultKioskAppTransitionWithAnimationFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006c704
+ (void)notifyPrepareDefaultKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010006c678
+ (void)notifyDefaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x000000010006c60c
+ (void)notifyDefaultKioskAppHandleHomeButtonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006c5a0
+ (void)start;	// IMP=0x000000010006c4e8
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006c3cc
+ (id)_singleton;	// IMP=0x000000010006c314
@property(nonatomic) __weak PBSystemServiceConnection *defaultKioskConnection; // @synthesize defaultKioskConnection=_defaultKioskConnection;
- (void).cxx_destruct;	// IMP=0x000000010006dac4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010006d728
- (void)_notifyDefaultKioskAppTransitionDidFail;	// IMP=0x000000010006d634
- (void)_handleInvalidationForConnection:(id)arg1;	// IMP=0x000000010006d510
- (void)_startServices;	// IMP=0x000000010006d434
- (void)_prepareForDefaultKioskAppTransitionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006d2e0
- (void)_notifyStartDefaultKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 animationFence:(id)arg3 delay:(double)arg4;	// IMP=0x000000010006d190
- (void)_notifyStartDefaultKioskAppTransitionWithAnimationFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006cfc4
- (void)_notifyPrepareDefaultKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010006ce24
- (void)_notifyDefaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x000000010006ccf8
- (void)_notifyDefaultKioskAppHandleHomeButtonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006c964
- (id)_activeConnections;	// IMP=0x000000010006c954
- (id)init;	// IMP=0x000000010006c4d0
- (id)_init;	// IMP=0x000000010006c49c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

