//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSystemApp.h"

#import "FBSceneManagerDelegate.h"
#import "FBSceneManagerObserver.h"
#import "PBSBulletinServiceDelegate.h"
#import "PBSPowerManagerDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, PBBulletinService, PBKioskAppConfiguration, PBSBulletin, PBSUserActivityTrigger;

@interface PBApplication : FBSystemApp <FBSceneManagerDelegate, FBSceneManagerObserver, PBSBulletinServiceDelegate, PBSPowerManagerDelegate>
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    PBSBulletin *_networkBulletin;	// 16 = 0x10
    PBSBulletin *_sysdiagnoseBulletin;	// 24 = 0x18
    PBSBulletin *_screenshotCapturedBulletin;	// 32 = 0x20
    NSMutableSet *_clientsWantingIdleTimerDisabled;	// 40 = 0x28
    _Bool _needsAdjustToDisplayChange;	// 48 = 0x30
    _Bool _needsUpdateActivityTriggersAndBackgroundTasks;	// 49 = 0x31
    _Bool _inhibitScreenSaver;	// 50 = 0x32
    _Bool _processingIgnorableEventDuringSleep;	// 51 = 0x33
    _Bool _wakeForHIDEvents;	// 52 = 0x34
    _Bool _processingSysdiagnoseViaChord;	// 53 = 0x35
    NSMutableArray *_enqueuedEvents;	// 56 = 0x38
    _Bool _airPlayActive;	// 64 = 0x40
    NSTimer *_bluetoothRemoteKeepAliveTimer;	// 72 = 0x48
    PBSUserActivityTrigger *_remotePresenceDetectionTrigger;	// 80 = 0x50
    PBSUserActivityTrigger *_hiliteModeTrigger;	// 88 = 0x58
    PBSUserActivityTrigger *_screenSaverTrigger;	// 96 = 0x60
    PBSUserActivityTrigger *_sleepTrigger;	// 104 = 0x68
    PBSUserActivityTrigger *_bluetoothRemoteSleepTrigger;	// 112 = 0x70
    PBSUserActivityTrigger *_idleTypeBackgroundTasksTrigger;	// 120 = 0x78
    PBSUserActivityTrigger *_crdAppTrigger;	// 128 = 0x80
    NSMutableDictionary *_appActivateInfoByBundleIdentifier;	// 136 = 0x88
    NSTimer *_suppressWakeForHIDEventsTimer;	// 144 = 0x90
    PBKioskAppConfiguration *_kioskAppConfiguration;	// 152 = 0x98
}

+ (id)_newApplicationLibrary;	// IMP=0x0000000100009744
+ (id)sharedApplicationLibrary;	// IMP=0x0000000100009710
+ (id)sharedApplication;	// IMP=0x0000000100007f40
+ (double)systemIdleSleepInterval;	// IMP=0x0000000100007f38
+ (id)keyPathsForValuesAffectingKioskAppIdentifier;	// IMP=0x0000000100007f1c
@property(copy, nonatomic) PBKioskAppConfiguration *kioskAppConfiguration; // @synthesize kioskAppConfiguration=_kioskAppConfiguration;
@property(retain, nonatomic) NSTimer *suppressWakeForHIDEventsTimer; // @synthesize suppressWakeForHIDEventsTimer=_suppressWakeForHIDEventsTimer;
@property(retain, nonatomic) NSMutableDictionary *appActivateInfoByBundleIdentifier; // @synthesize appActivateInfoByBundleIdentifier=_appActivateInfoByBundleIdentifier;
@property(retain, nonatomic) PBSUserActivityTrigger *crdAppTrigger; // @synthesize crdAppTrigger=_crdAppTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *idleTypeBackgroundTasksTrigger; // @synthesize idleTypeBackgroundTasksTrigger=_idleTypeBackgroundTasksTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *bluetoothRemoteSleepTrigger; // @synthesize bluetoothRemoteSleepTrigger=_bluetoothRemoteSleepTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *sleepTrigger; // @synthesize sleepTrigger=_sleepTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *screenSaverTrigger; // @synthesize screenSaverTrigger=_screenSaverTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *hiliteModeTrigger; // @synthesize hiliteModeTrigger=_hiliteModeTrigger;
@property(retain, nonatomic) PBSUserActivityTrigger *remotePresenceDetectionTrigger; // @synthesize remotePresenceDetectionTrigger=_remotePresenceDetectionTrigger;
@property(retain, nonatomic) NSTimer *bluetoothRemoteKeepAliveTimer; // @synthesize bluetoothRemoteKeepAliveTimer=_bluetoothRemoteKeepAliveTimer;
@property(nonatomic) _Bool airPlayActive; // @synthesize airPlayActive=_airPlayActive;
- (void).cxx_destruct;	// IMP=0x0000000100013398
- (void)activateAppSwitcher;	// IMP=0x00000001000131ac
- (id)appSwitcherWindow;	// IMP=0x0000000100013130
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0000000100013088
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;	// IMP=0x0000000100012ff8
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;	// IMP=0x0000000100012b38
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;	// IMP=0x0000000100012580
- (void)handleAppTransition:(id)arg1;	// IMP=0x0000000100012510
- (void)_startUpAndRunningTimer;	// IMP=0x00000001000124d0
- (void)_stopSupressingWakeForHIDEvents;	// IMP=0x0000000100012438
- (id)_sanitizeAppIdentifierHistory:(id)arg1;	// IMP=0x000000010001227c
- (void)_activateAppIdleAction:(id)arg1;	// IMP=0x0000000100012024
- (_Bool)_focusedSceneHasHiliteModeEnabled;	// IMP=0x0000000100011e30
- (void)_updateHiliteModeState;	// IMP=0x0000000100011d1c
- (void)_setPresenceDetectionActive:(_Bool)arg1;	// IMP=0x0000000100011b6c
- (void)_deactivateScreenSaver;	// IMP=0x0000000100011ae8
- (void)_activateScreenSaverFromUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011a24
- (void)_saveRecentApplicationBundleIdentifiers;	// IMP=0x0000000100011984
- (void)setNeedsUpdateActivityTriggersAndBackgroundTasks;	// IMP=0x0000000100011880
- (void)_setNormalBackgroundTasksEnabled:(_Bool)arg1;	// IMP=0x000000010001181c
- (void)_setIdleBackgroundTasksEnabled:(_Bool)arg1;	// IMP=0x000000010001158c
- (void)_updateBackgroundTaskScheduling;	// IMP=0x00000001000113fc
- (void)_updateUserActivityTriggers;	// IMP=0x0000000100010570
- (void)_startExternalControlManagement;	// IMP=0x0000000100010484
- (void)temporarilySuppressWakeForHIDEvents;	// IMP=0x0000000100010328
- (void)userActivityTriggeredForReason:(id)arg1;	// IMP=0x00000001000102b0
- (void)cancelScheduledActivationForAppWithBundleIdentifier:(id)arg1;	// IMP=0x00000001000100f4
- (void)activateAppIfPlayingMusicAfterIdleTime:(double)arg1 bundleIdentifier:(id)arg2 openURL:(id)arg3;	// IMP=0x000000010000fe80
- (void)sendEventData:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000fd58
- (void)sendMenuButtonEventRequestedByClient:(id)arg1;	// IMP=0x000000010000fc7c
- (void)deactivateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x000000010000fbb0
- (void)activateScreenSaverRequestedByClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fac4
- (void)activateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x000000010000fab4
- (void)noteUserPresenceDetected;	// IMP=0x000000010000f95c
- (void)rebootRequestedByClient:(id)arg1;	// IMP=0x000000010000f874
- (void)relaunchRequestedByClient:(id)arg1;	// IMP=0x000000010000f78c
- (void)relaunchBackboarddRequestedByClient:(id)arg1;	// IMP=0x000000010000f6c4
- (void)wakeRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x000000010000f4d4
- (void)sleepRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x000000010000f2a8
- (void)client:(id)arg1 setSleepTimeout:(double)arg2;	// IMP=0x000000010000f198
- (void)_stopBluetoothRemoteKeepAliveTimer;	// IMP=0x000000010000f140
- (void)_startBluetoothRemoteKeepAliveTimer;	// IMP=0x000000010000efe4
- (void)_keepBluetoothRemoteAlive;	// IMP=0x000000010000ef4c
- (void)_handleDeviceWillSleepNotification:(id)arg1;	// IMP=0x000000010000edd0
- (void)_handleDeviceWillWakeNotification:(id)arg1;	// IMP=0x000000010000ed00
- (void)_bluetoothRemotePowerSourceLimitedSourceNotification:(id)arg1;	// IMP=0x000000010000ec50
- (void)_bluetoothRemoteDidConnectNotification:(id)arg1;	// IMP=0x000000010000ebdc
- (void)sendHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(unsigned long long)arg3 senderID:(unsigned long long)arg4 toApplication:(id)arg5;	// IMP=0x000000010000e984
- (void)forwardHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(unsigned long long)arg3 senderID:(unsigned long long)arg4;	// IMP=0x000000010000e7f8
- (void)_blackScreenRecoveryModeNotification:(id)arg1;	// IMP=0x000000010000e3c0
- (void)_updateKioskAppConfiguration:(_Bool)arg1;	// IMP=0x000000010000df7c
- (void)_handleAppStateDidChange;	// IMP=0x000000010000df6c
- (void)_internetAvailabilityDidChangeNotification:(id)arg1;	// IMP=0x000000010000dca8
- (void)_handleBluetoothRemoteProximityDetection;	// IMP=0x000000010000dbc8
- (void)client:(id)arg1 setIdleTimerDisabled:(_Bool)arg2;	// IMP=0x000000010000db10
- (void)_handleFocusedProcessDidChange;	// IMP=0x000000010000d98c
- (void)_handleProcessDidExitNotification:(id)arg1;	// IMP=0x000000010000d7c0
- (void)_notifyIdleTasksEnabledDidChange;	// IMP=0x000000010000d650
- (void)_handleIdleBackgroundTasksTrigger:(id)arg1;	// IMP=0x000000010000d4dc
- (void)_handleBluetoothRemoteSleepTrigger:(id)arg1;	// IMP=0x000000010000d3bc
- (void)_handleDevceSleepChange;	// IMP=0x000000010000d320
- (void)_handleSleepTrigger:(id)arg1;	// IMP=0x000000010000d11c
- (void)_handleCRDAppTrigger:(id)arg1;	// IMP=0x000000010000cfc0
- (void)_handleScreenSaverTrigger:(id)arg1;	// IMP=0x000000010000ce78
- (void)_setHiliteModeActive:(_Bool)arg1;	// IMP=0x000000010000ca8c
- (void)_handleHiliteModeTrigger:(id)arg1;	// IMP=0x000000010000c9fc
- (void)_remotePresenceDetectionModeTrigger:(id)arg1;	// IMP=0x000000010000c9c0
- (void)_handleIdleTimeoutDidChange;	// IMP=0x000000010000c8fc
- (void)tvs_bindPowerManagerSleepBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010000c808
- (id)PowerManagerSleepBinding;	// IMP=0x000000010000c7b4
- (void)tvs_bindFocusedProcessBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010000c6c0
- (id)FocusedProcessBinding;	// IMP=0x000000010000c66c
- (void)tvs_bindIdleTimeOutBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010000c578
- (id)IdleTimeOutBinding;	// IMP=0x000000010000c524
- (void)resetIdleTimerAndUndim;	// IMP=0x000000010000c4d4
- (void)powerManagerUserEventWantsWakeDevice:(id)arg1;	// IMP=0x000000010000c3dc
- (void)_handleDisplayModeDidChange;	// IMP=0x000000010000c38c
- (void)_startDisplayManagement;	// IMP=0x000000010000c2e8
- (void)tvs_bindDisplayModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010000c1f4
- (id)DisplayModeBinding;	// IMP=0x000000010000c1a0
- (_Bool)_isGameControllerZeroEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000c15c
- (_Bool)_isSystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000c100
- (_Bool)_isButtonDownEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000c0cc
- (void)refreshKioskAppConfiguration:(_Bool)arg1;	// IMP=0x000000010000c088
@property(readonly, copy, nonatomic) NSString *kioskAppIdentifier;
@property(readonly, nonatomic) _Bool isScreenSaverIdle;
- (void)resumeActivity;	// IMP=0x000000010000beb8
- (void)stopAllActivity;	// IMP=0x000000010000be54
- (_Bool)_validatePresses:(id)arg1 forWindow:(id)arg2;	// IMP=0x000000010000bce4
- (void)sendEvent:(id)arg1;	// IMP=0x000000010000bb38
- (void)_finishButtonEvent:(id)arg1;	// IMP=0x000000010000bac0
- (void)_removeEnqueuedEvent:(id)arg1;	// IMP=0x000000010000ba4c
- (void)_handleKeyUIEvent:(id)arg1;	// IMP=0x000000010000b79c
- (void)_logButtonEventTiming:(id)arg1;	// IMP=0x000000010000b364
- (_Bool)_prepareButtonEvent:(id)arg1 withPressInfo:(id)arg2;	// IMP=0x000000010000af40
- (_Bool)_shouldTriggerExternalControlActionForEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000aec8
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000aca4
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000a9a0
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x000000010000a538
- (void)_processChordsWithPressesEvent:(id)arg1;	// IMP=0x0000000100009d54
- (_Bool)_handleSystemPressHidEvent:(struct __IOHIDEvent *)arg1 withType:(long long)arg2;	// IMP=0x00000001000099a8
- (id)keyCommands;	// IMP=0x00000001000098a8
- (void)resignActive;	// IMP=0x00000001000098a4
- (_Bool)_accessibilityIsSystemAppServer;	// IMP=0x0000000100009880
- (long long)userInterfaceLayoutDirection;	// IMP=0x00000001000097f0
- (id)bulletinService;	// IMP=0x0000000100009698
- (void)dealloc;	// IMP=0x0000000100009614
- (void)_showScreenshotCapturedIndication;	// IMP=0x00000001000091dc
- (void)_hideSysdiagnoseIndication;	// IMP=0x00000001000090d0
- (void)_showSysdiagnoseIndication;	// IMP=0x0000000100008e28
- (void)_showStackShotIndication;	// IMP=0x0000000100008c50
- (void)finishSystemAppLaunch;	// IMP=0x00000001000082dc
- (id)init;	// IMP=0x0000000100007f74
- (void)_startResumeTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x0000000100078848
- (void)_startLaunchTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x00000001000783e0
- (void)_retryLaunchTestWithOptions:(id)arg1;	// IMP=0x0000000100078288
- (void)_activateApplication:(id)arg1 suspended:(_Bool)arg2 forTest:(id)arg3;	// IMP=0x00000001000781f8
- (void)_markUserLaunchInitiationTimeForTest:(id)arg1;	// IMP=0x0000000100078120
- (_Bool)_isAppExecutableRunning:(id)arg1;	// IMP=0x000000010007807c
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x0000000100077f38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
