//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "APSConnectionDelegate.h"
#import "UIApplicationDelegate.h"
#import "UIApplicationDelegatePrivate.h"

@class APSConnection, HBMainViewController, HBWindow, NSString;

@interface HBAppDelegate : UIResponder <UIApplicationDelegatePrivate, APSConnectionDelegate, UIApplicationDelegate>
{
    HBWindow *_window;	// 8 = 0x8
    HBMainViewController *_mainViewController;	// 16 = 0x10
    APSConnection *_apsConnection;	// 24 = 0x18
}

+ (_Bool)isiCloudHomeScreenSyncEnabled;	// IMP=0x0000000100026640
+ (id)sharedApplicationDelegate;	// IMP=0x0000000100025f80
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(nonatomic) __weak HBMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) HBWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x00000001000287f4
- (id)_findFirstViewOfClass:(Class)arg1 inViewHierarchy:(id)arg2 depth:(int)arg3;	// IMP=0x00000001000285bc
- (id)_findFirstViewOfClass:(Class)arg1 inViewHierarchy:(id)arg2;	// IMP=0x00000001000285ac
- (void)startScrollTestForCollectionViewClass:(Class)arg1 fromViewHierarchy:(id)arg2 testName:(id)arg3 axis:(int)arg4 options:(id)arg5;	// IMP=0x00000001000282c8
- (void)runSwipeTest:(unsigned long long)arg1 of:(unsigned long long)arg2 testName:(id)arg3 axis:(int)arg4;	// IMP=0x0000000100028094
- (void)startLogTest:(id)arg1;	// IMP=0x0000000100027f58
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x0000000100027694
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100027550
- (void)appTransitionDidFail;	// IMP=0x000000010002744c
- (void)startDefaultKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 animationFence:(id)arg3 delay:(double)arg4;	// IMP=0x00000001000272d0
- (void)startDefaultKioskAppTransitionWithAnimationFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002716c
- (void)prepareDefaultKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100026fe4
- (void)prepareForDefaultKioskAppTransitionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026f38
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x0000000100026ecc
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x0000000100026de8
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;	// IMP=0x0000000100026d00
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;	// IMP=0x0000000100026c44
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100026914
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0000000100026858
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000100026750
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100026694
- (long long)overrideAssetLibraryCacheDeleteUrgency;	// IMP=0x0000000100026638
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100025fdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

