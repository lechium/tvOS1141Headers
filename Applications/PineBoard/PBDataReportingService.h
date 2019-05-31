//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSThread;

@interface PBDataReportingService : NSObject
{
    NSMutableSet *_seenEDIDs;	// 8 = 0x8
    NSMutableDictionary *_toReportEDIDData;	// 16 = 0x10
    NSDate *_lastSentEDIDTimestamp;	// 24 = 0x18
    NSMutableDictionary *_keyTimingStarts;	// 32 = 0x20
    NSMutableDictionary *_keyTimingTotals;	// 40 = 0x28
    NSThread *_NANDReportingThread;	// 48 = 0x30
}

+ (id)_sharedInstance;	// IMP=0x0000000100049a94
+ (id)diagnosticLogPaths;	// IMP=0x0000000100049a38
+ (void)stopTimingForKey:(id)arg1;	// IMP=0x0000000100049878
+ (void)startTimingForKey:(id)arg1;	// IMP=0x0000000100049730
+ (void)incrementEventCountForRemoteApp;	// IMP=0x000000010004971c
+ (void)incrementEventCountForGameController;	// IMP=0x0000000100049708
+ (void)incrementEventCountForBluetoothKeyboard;	// IMP=0x00000001000496f4
+ (void)incrementEventCountForCEC;	// IMP=0x00000001000496e0
+ (void)incrementEventCountForIRRemote;	// IMP=0x00000001000496cc
+ (void)incrementEventCountForAppleBluetoothRemote;	// IMP=0x00000001000496b8
+ (void)incrementB239TVButtonPresses;	// IMP=0x00000001000496a4
+ (void)incrementB239ButtonPresses;	// IMP=0x0000000100049690
+ (void)incrementScalarKey:(id)arg1;	// IMP=0x0000000100049620
+ (void)noteApplicationExit;	// IMP=0x00000001000495d8
+ (void)reportNow;	// IMP=0x0000000100049590
+ (void)startService;	// IMP=0x0000000100049508
@property(retain, nonatomic) NSThread *NANDReportingThread; // @synthesize NANDReportingThread=_NANDReportingThread;
@property(retain, nonatomic) NSMutableDictionary *keyTimingTotals; // @synthesize keyTimingTotals=_keyTimingTotals;
@property(retain, nonatomic) NSMutableDictionary *keyTimingStarts; // @synthesize keyTimingStarts=_keyTimingStarts;
@property(retain, nonatomic) NSDate *lastSentEDIDTimestamp; // @synthesize lastSentEDIDTimestamp=_lastSentEDIDTimestamp;
@property(retain, nonatomic) NSMutableDictionary *toReportEDIDData; // @synthesize toReportEDIDData=_toReportEDIDData;
@property(retain, nonatomic) NSMutableSet *seenEDIDs; // @synthesize seenEDIDs=_seenEDIDs;
- (void).cxx_destruct;	// IMP=0x0000000100050944
- (unsigned long long)_integer:(unsigned long long)arg1 quantizedBy:(unsigned long long)arg2;	// IMP=0x000000010005084c
- (unsigned long long)_quantizedTimeForKey:(id)arg1;	// IMP=0x00000001000506e4
- (void)_handleDeviceWillWakeNotification:(id)arg1;	// IMP=0x00000001000505ac
- (void)_handleDeviceWillSleepNotification:(id)arg1;	// IMP=0x0000000100050444
- (void)_reportCurrentPersistentDisplayMode;	// IMP=0x0000000100050148
- (void)_reportRecoveryActions;	// IMP=0x000000010004ff8c
- (void)_threadReportNANDStatistics;	// IMP=0x000000010004fedc
- (void)_reportNANDStatistics;	// IMP=0x000000010004feb4
- (void)_reportBluetoothData;	// IMP=0x000000010004f638
- (void)_sendToURL:(id)arg1 withSubtopic:(id)arg2 andParameters:(id)arg3;	// IMP=0x000000010004ee6c
- (id)_reportingURLForTopic:(id)arg1;	// IMP=0x000000010004eac0
- (void)_sendCoreControlUsage;	// IMP=0x000000010004e8dc
- (void)_sendEDIDURLRequest:(id)arg1;	// IMP=0x000000010004e6c4
- (void)_sendEDIDLogs;	// IMP=0x000000010004e560
- (void)_recordEDID;	// IMP=0x000000010004e1bc
- (void)_handleDisplayModeDidChange;	// IMP=0x000000010004e0f0
- (void)tvs_bindDisplayModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010004dffc
- (id)DisplayModeBinding;	// IMP=0x000000010004dfa8
- (void)_showPushedIndicatorForCount:(unsigned long long)arg1;	// IMP=0x000000010004dd88
- (void)_pushDiagnosticLogsAtPaths:(id)arg1;	// IMP=0x000000010004d9fc
- (id)_collectConfigLogs;	// IMP=0x000000010004d518
- (id)_collectBluetoothLogPaths;	// IMP=0x000000010004d218
- (id)_collectThermalLogPaths;	// IMP=0x000000010004cfbc
- (id)_collectAirPlayLogPaths;	// IMP=0x000000010004c8a8
- (id)_collectWiFiLogPaths;	// IMP=0x000000010004bd64
- (id)_collectPlaybackLogPaths;	// IMP=0x000000010004bac4
- (id)_collectMediaserverLogPaths;	// IMP=0x000000010004b238
- (id)_collectAVLog;	// IMP=0x000000010004adb0
- (id)_collectLogPaths;	// IMP=0x000000010004aae4
- (void)_sendDiagnosticLogs:(id)arg1;	// IMP=0x000000010004a9dc
- (void)_reportDataNow;	// IMP=0x000000010004a480
- (void)_configureSleepWakeReporting;	// IMP=0x000000010004a3bc
- (void)_schedulePeriodicTrigger;	// IMP=0x000000010004a220
- (void)_configureEDIDReporting;	// IMP=0x000000010004a1b8
- (void)_configureThermalPressureReporting;	// IMP=0x000000010004a05c
- (void)_configureMemoryPressureReporting;	// IMP=0x0000000100049fd4
- (void)_configureAggregateDataReporting;	// IMP=0x0000000100049e08
- (_Bool)_isDiagnosticsSubmissionAllowed;	// IMP=0x0000000100049d64
- (id)init;	// IMP=0x0000000100049b14

@end

