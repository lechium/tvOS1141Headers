/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMKeyValueCollectionDelegate.h>

@protocol IMDCKSyncStateDelegate;
@class IMKeyValueCollection, NSDate, NSArray, NSString;

@interface IMDCKSyncState : NSObject <IMKeyValueCollectionDelegate> {

	IMKeyValueCollection* _storage;
	id<IMDCKSyncStateDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long syncControllerSyncState; 
@property (assign,nonatomic) long long syncControllerRecordType; 
@property (assign,getter=isSyncing,nonatomic) BOOL syncing; 
@property (assign,getter=isStartingPeriodicSyncSetByCloudKitHooks,nonatomic) BOOL startingPeriodicSyncSetByCloudKitHooks; 
@property (assign,getter=isStartingInitialSyncSetByCloudKitHooks,nonatomic) BOOL startingInitialSyncSetByCloudKitHooks; 
@property (nonatomic,readonly) IMKeyValueCollection * keyValueCollection;                                                              //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic,__weak) id<IMDCKSyncStateDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isFeatureEnabled,nonatomic) BOOL featureEnabled; 
@property (assign,getter=isEligibleForTruthZone,nonatomic) BOOL eligibleForTruthZone; 
@property (assign,getter=isSyncingEnabled,nonatomic) BOOL syncingEnabled; 
@property (assign,getter=isRemovedFromBackup,nonatomic) BOOL removedFromBackup; 
@property (assign,getter=isInExitState,nonatomic) BOOL inExitState; 
@property (assign,getter=isSyncingPaused,nonatomic) BOOL syncingPaused; 
@property (nonatomic,copy) NSDate * exitDate; 
@property (assign,getter=isDisablingDevices,nonatomic) BOOL disablingDevices; 
@property (assign,getter=isStartingEnabledSettingChange,nonatomic) BOOL startingEnabledSettingChange; 
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (assign,nonatomic) long long accountStatus; 
@property (nonatomic,readonly) NSArray * syncErrors; 
@property (assign,nonatomic) long long syncControllerSyncType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logHandle;
-(id)init;
-(id<IMDCKSyncStateDelegate>)delegate;
-(void)setDelegate:(id<IMDCKSyncStateDelegate>)arg1 ;
-(NSString *)description;
-(long long)accountStatus;
-(id)serializedRepresentation;
-(void)setExitDate:(NSDate *)arg1 ;
-(NSDate *)exitDate;
-(BOOL)isSyncing;
-(id)logHandle;
-(void)clearLocalCloudKitSyncState;
-(BOOL)isSyncingEnabled;
-(BOOL)isDisablingDevices;
-(BOOL)isSyncingPaused;
-(unsigned long long)syncControllerSyncState;
-(long long)syncControllerSyncType;
-(long long)syncControllerRecordType;
-(NSDate *)lastSyncDate;
-(BOOL)isFeatureEnabled;
-(void)setFeatureEnabled:(BOOL)arg1 ;
-(void)setSyncing:(BOOL)arg1 ;
-(void)setEligibleForTruthZone:(BOOL)arg1 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(BOOL)isInExitState;
-(void)setSyncControllerSyncState:(unsigned long long)arg1 ;
-(id)initWithKeyValueCollection:(id)arg1 ;
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(void)setSyncingPaused:(BOOL)arg1 ;
-(void)setRemovedFromBackup:(BOOL)arg1 ;
-(void)_startBatchChange;
-(void)setErrorToAccountNeedsRepair;
-(void)_finishBatchChange;
-(IMKeyValueCollection *)keyValueCollection;
-(BOOL)isEligibleForTruthZone;
-(BOOL)isRemovedFromBackup;
-(BOOL)isStartingEnabledSettingChange;
-(NSArray *)syncErrors;
-(void)setStartingPeriodicSyncSetByCloudKitHooks:(BOOL)arg1 ;
-(void)setStartingInitialSyncSetByCloudKitHooks:(BOOL)arg1 ;
-(void)setSyncControllerRecordType:(long long)arg1 ;
-(void)setSyncControllerSyncType:(long long)arg1 ;
-(void)setStartingEnabledSettingChange:(BOOL)arg1 ;
-(void)setDisablingDevices:(BOOL)arg1 ;
-(void)clearSyncErrors;
-(void)_setStartingSync;
-(void)setSyncControllerSyncState:(unsigned long long)arg1 withRecordType:(long long)arg2 ;
-(void)broadcastSyncState;
-(void)addSyncError:(id)arg1 ;
-(void)keyValueCollection:(id)arg1 willUpdateValues:(id)arg2 ;
-(void)keyValueCollection:(id)arg1 didUpdateValues:(id)arg2 ;
-(void)setInExitState:(BOOL)arg1 ;
-(BOOL)isStartingPeriodicSyncSetByCloudKitHooks;
-(BOOL)isStartingInitialSyncSetByCloudKitHooks;
-(void)setSyncingFinished;
-(void)setStartingPeriodicSyncWithRecordType:(long long)arg1 ;
-(void)setStartingInitialSyncWithRecordType:(long long)arg1 ;
-(void)setAccountStatus:(long long)arg1 ;
@end

