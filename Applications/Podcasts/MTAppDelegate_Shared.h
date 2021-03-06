//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class MTMediaRemoteController, NSString, RTRoutineManager, UIViewController, UIWindow;

@interface MTAppDelegate_Shared : NSObject <UIApplicationDelegate>
{
    UIWindow *_window;	// 8 = 0x8
    id <MTAppController> _appController;	// 16 = 0x10
    MTMediaRemoteController *_mediaRemoteController;	// 24 = 0x18
    RTRoutineManager *_routineManager;	// 32 = 0x20
}

+ (id)createWindow;	// IMP=0x0000000100005e0c
@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
@property(retain, nonatomic) MTMediaRemoteController *mediaRemoteController; // @synthesize mediaRemoteController=_mediaRemoteController;
@property(retain, nonatomic) id <MTAppController> appController; // @synthesize appController=_appController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x0000000100006354
- (void)_startMonitoringForPredictedApplicationLaunch;	// IMP=0x00000001000060e8
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;	// IMP=0x00000001000060a4
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005fa8
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;	// IMP=0x0000000100005f04
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005d84
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005bf8
@property(readonly, nonatomic) UIViewController *rootViewController;
- (_Bool)openURL:(id)arg1;	// IMP=0x0000000100005be8
- (void)setupAfterBecomingActive;	// IMP=0x00000001000057c8
- (_Bool)_isApplicationActive;	// IMP=0x0000000100005770
- (void)application:(id)arg1 didChangeStatusBarOrientation:(long long)arg2;	// IMP=0x00000001000056ec
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000056dc
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;	// IMP=0x00000001000056d8
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;	// IMP=0x00000001000056d4
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010000568c
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100005650
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000001000055c8
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x000000010000556c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000054c0
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000050e8
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100004bc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

