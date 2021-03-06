/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDCKAbstractSyncController.h>
#import <IMDaemonCore/IMDXPCEventStreamHandlerDelegate.h>

@class NSDate, NSTimer, IMTimer, CKFetchRecordZonesOperation, NSString;

@interface IMDCKSyncController : IMDCKAbstractSyncController <IMDXPCEventStreamHandlerDelegate> {

	NSDate* _syncStartDate;
	NSTimer* _longRunningSyncTimer;
	IMTimer* _nightlySyncTimer;
	long long _initialSyncAttempts;
	CKFetchRecordZonesOperation* _cloudKitMetricsFetchOp;
	NSDate* _lastLogDumpDate;

}

@property (nonatomic,retain) NSDate * syncStartDate;                                            //@synthesize syncStartDate=_syncStartDate - In the implementation block
@property (nonatomic,retain) NSTimer * longRunningSyncTimer;                                    //@synthesize longRunningSyncTimer=_longRunningSyncTimer - In the implementation block
@property (nonatomic,retain) IMTimer * nightlySyncTimer;                                        //@synthesize nightlySyncTimer=_nightlySyncTimer - In the implementation block
@property (assign,nonatomic) long long initialSyncAttempts;                                     //@synthesize initialSyncAttempts=_initialSyncAttempts - In the implementation block
@property (nonatomic,retain) CKFetchRecordZonesOperation * cloudKitMetricsFetchOp;              //@synthesize cloudKitMetricsFetchOp=_cloudKitMetricsFetchOp - In the implementation block
@property (nonatomic,retain) NSDate * lastLogDumpDate;                                          //@synthesize lastLogDumpDate=_lastLogDumpDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_accountDidChange:(id)arg1 ;
-(BOOL)isSyncing;
-(void)clearLocalCloudKitSyncState;
-(void)updateCloudKitSyncingState;
-(long long)syncControllerRecordType;
-(void)beginInitialSync;
-(void)beginComingBackOnlineSync;
-(void)setCloudKitSyncState:(BOOL)arg1 ;
-(id)syncStateDebuggingInfo:(id)arg1 ;
-(void)_noteSyncEnded;
-(BOOL)_anyStartingFlagIsEnabled;
-(void)updateSyncStateFlags;
-(void)updateStartingFlags;
-(id)exitManager;
-(void)_postSyncStateChanged;
-(void)_instantStateChange:(id)arg1 ;
-(void)_didRecieveSyncStateChangeNotification:(id)arg1 ;
-(id)messageSyncController;
-(void)_didUpdatePersistentValueNotification:(id)arg1 ;
-(id)chatSyncController;
-(id)attachmentSyncController;
-(double)_IMAHDAgentFallbackIntervalInSeconds;
-(unsigned long long)_maxTimeToDeferInSeconds;
-(void)_nightlySyncTimerFired;
-(void)setNightlySyncTimer:(IMTimer *)arg1 ;
-(BOOL)_syncNotCompletedRecently;
-(void)beginFullSyncPeriodic:(BOOL)arg1 shouldCheckDeviceConditions:(BOOL)arg2 activity:(id)arg3 ;
-(void)_logIMAutomaticHistorySyncDidNotOccurMetricsUnderFirstUnlock:(BOOL)arg1 isSyncing:(BOOL)arg2 deviceConditionsAllowSync:(BOOL)arg3 syncNotCompletedRecently:(BOOL)arg4 ;
-(IMTimer *)nightlySyncTimer;
-(void)resetAllSyncStates;
-(void)registerForSyncStateChanges;
-(void)registerForAccountNotifications;
-(void)updateAllCachedSyncStateFlags;
-(void)_kickOffNightlyPeriodicSyncIfApplicable;
-(void)_dispatchNotification:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSTimer *)longRunningSyncTimer;
-(void)setLongRunningSyncTimer:(NSTimer *)arg1 ;
-(void)setStartingInitialSync:(BOOL)arg1 ;
-(void)setInitialSyncAttempts:(long long)arg1 ;
-(id)_recordManager;
-(void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(BOOL)arg2 ;
-(void)beginInitialSyncAttemptCount:(unsigned long long)arg1 ;
-(void)_ifCloudKitAbleToSyncIsFullSync:(BOOL)arg1 callBlock:(/*^block*/id)arg2 activity:(id)arg3 ;
-(BOOL)_accountHasMultipleDevices;
-(void)_syncDeletesIfCloudKitEnabled;
-(void)setStartingPeriodicSync:(BOOL)arg1 ;
-(void)_syncChatsWithActivity:(id)arg1 ;
-(void)_noteDownSyncStartedWithIsPeriodicSync:(BOOL)arg1 ;
-(void)_beginPeriodicSyncWithActivity:(id)arg1 shouldCheckDeviceConditions:(BOOL)arg2 attemptCount:(unsigned long long)arg3 ;
-(BOOL)_serverDoesNotAllowComingBackOnlineChatSync;
-(double)_minimumChatComingOnlineSyncInterval;
-(BOOL)_serverDoesNotSingleDeviceLimitation;
-(void)syncDeletesToCloudKitWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_chatSyncedRecently;
-(long long)_periodicSyncAttemptCount;
-(void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2 ;
-(long long)_manualSyncAttemptCount;
-(void)clearCKRelatedDefaults;
-(NSDate *)lastLogDumpDate;
-(unsigned long long)_currentHour;
-(BOOL)_withinAnHourOfLogDumpHour;
-(BOOL)_hasDumpedLogsInPastHour;
-(void)setLastLogDumpDate:(NSDate *)arg1 ;
-(void)_noteMeticsForSyncEndedWithSuccces:(BOOL)arg1 ;
-(void)_reloadChatRegistryOnMainThread;
-(void)_nukeCKData;
-(id)_sharedDatabaseManager;
-(void)_beginPeriodicSyncWithActivity:(id)arg1 shouldCheckDeviceConditions:(BOOL)arg2 attemptCount:(unsigned long long)arg3 useStingRay:(BOOL)arg4 syncChatsCompletionBlock:(/*^block*/id)arg5 ;
-(void)_dealWithEncryptionKeyLostErrorIfApplicable:(id)arg1 ;
-(NSDate *)syncStartDate;
-(void)_writeDownSyncDateUseManatee:(BOOL)arg1 ;
-(BOOL)_errorIndicatesDeviceNotGoodForSync:(id)arg1 ;
-(BOOL)_isSyncingToStingRay;
-(void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1 useNonHSA2ManateeDatabase:(BOOL)arg2 ;
-(id)rampManager;
-(void)_callSyncWithCompletion:(/*^block*/id)arg1 activity:(id)arg2 ;
-(void)recordMetricIsCloudKitEnabled;
-(void)setSyncStartDate:(NSDate *)arg1 ;
-(void)_setSyncStateFlagsWithAccountStatus:(long long)arg1 ;
-(void)handleAKUserInfoChangedNotification:(id)arg1 ;
-(void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
-(id)_dateForNext24LogDumpAtHour:(long long)arg1 timeNow:(id)arg2 dumpNow:(BOOL*)arg3 ;
-(void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;
-(void)beginChatSyncPeriodic:(BOOL)arg1 activity:(id)arg2 ;
-(void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
-(void)performMetricForSuccessfulSync;
-(void)collectLogsIfNeeded;
-(void)syncChatsWithMessageContext:(id)arg1 ;
-(long long)initialSyncAttempts;
-(CKFetchRecordZonesOperation *)cloudKitMetricsFetchOp;
-(void)setCloudKitMetricsFetchOp:(CKFetchRecordZonesOperation *)arg1 ;
@end

