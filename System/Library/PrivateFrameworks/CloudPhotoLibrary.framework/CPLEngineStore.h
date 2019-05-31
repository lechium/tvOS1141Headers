/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSHashTable, NSObject, NSMutableArray, NSURL, CPLResetTracker, NSSet, NSDate, CPLPlatformObject, CPLEngineLibrary, CPLEnginePushRepository, CPLEngineChangePipe, CPLEngineIDMapping, CPLEngineClientCache, CPLEngineCloudCache, CPLEngineTransientRepository, CPLEngineResourceStorage, CPLEngineResourceDownloadQueue, CPLEngineOutgoingResources, CPLEngineRemappedDeletes, CPLEngineQuarantinedRecords, CPLEngineStatusCenter, CPLEngineDerivativesCache, NSArray, NSString;

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent> {

	NSHashTable* _storages;
	NSObject*<OS_dispatch_queue> _batchedTransactionsQueue;
	NSMutableArray* _batchedTransactions;
	BOOL _batchedTransactionDequeueIsScheduled;
	BOOL _dontDelayChangeSessionUpdate;
	NSURL* _resetEventsURL;
	NSMutableArray* _resetEvents;
	CPLResetTracker* _pendingTracker;
	NSSet* _lastInvalidRecordIdentifiers;
	NSDate* _lastInvalidRecordsDate;
	NSObject*<OS_dispatch_source> _pendingUpdateTimer;
	NSObject*<OS_dispatch_queue> _pendingUpdateQueue;
	double _pendingUpdateInterval;
	BOOL _unschedulePendingUpdateApplyOnWriteSuccess;
	BOOL _schedulePendingUpdateApplyOnWriteSuccess;
	BOOL _supportedFeatureVersionIsMostRecent;
	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;
	CPLEnginePushRepository* _pushRepository;
	CPLEngineChangePipe* _pullQueue;
	CPLEngineIDMapping* _idMapping;
	CPLEngineClientCache* _clientCache;
	CPLEngineCloudCache* _cloudCache;
	CPLEngineTransientRepository* _transientPullRepository;
	CPLEngineResourceStorage* _resourceStorage;
	CPLEngineResourceDownloadQueue* _downloadQueue;
	CPLEngineOutgoingResources* _outgoingResources;
	CPLEngineRemappedDeletes* _remappedDeletes;
	CPLEngineQuarantinedRecords* _quarantinedRecords;
	CPLEngineStatusCenter* _statusCenter;
	CPLEngineDerivativesCache* _derivativesCache;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSArray * storages; 
@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;                             //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,readonly) CPLEnginePushRepository * pushRepository;                            //@synthesize pushRepository=_pushRepository - In the implementation block
@property (nonatomic,readonly) BOOL pushRepositoryIsFull; 
@property (nonatomic,readonly) CPLEngineChangePipe * pullQueue;                                     //@synthesize pullQueue=_pullQueue - In the implementation block
@property (nonatomic,readonly) CPLEngineIDMapping * idMapping;                                      //@synthesize idMapping=_idMapping - In the implementation block
@property (nonatomic,readonly) CPLEngineClientCache * clientCache;                                  //@synthesize clientCache=_clientCache - In the implementation block
@property (nonatomic,readonly) CPLEngineCloudCache * cloudCache;                                    //@synthesize cloudCache=_cloudCache - In the implementation block
@property (nonatomic,readonly) CPLEngineTransientRepository * transientPullRepository;              //@synthesize transientPullRepository=_transientPullRepository - In the implementation block
@property (nonatomic,readonly) CPLEngineResourceStorage * resourceStorage;                          //@synthesize resourceStorage=_resourceStorage - In the implementation block
@property (nonatomic,readonly) CPLEngineResourceDownloadQueue * downloadQueue;                      //@synthesize downloadQueue=_downloadQueue - In the implementation block
@property (nonatomic,readonly) CPLEngineOutgoingResources * outgoingResources;                      //@synthesize outgoingResources=_outgoingResources - In the implementation block
@property (nonatomic,readonly) CPLEngineRemappedDeletes * remappedDeletes;                          //@synthesize remappedDeletes=_remappedDeletes - In the implementation block
@property (nonatomic,readonly) CPLEngineQuarantinedRecords * quarantinedRecords;                    //@synthesize quarantinedRecords=_quarantinedRecords - In the implementation block
@property (nonatomic,readonly) CPLEngineStatusCenter * statusCenter;                                //@synthesize statusCenter=_statusCenter - In the implementation block
@property (nonatomic,readonly) BOOL supportedFeatureVersionIsMostRecent;                            //@synthesize supportedFeatureVersionIsMostRecent=_supportedFeatureVersionIsMostRecent - In the implementation block
@property (readonly) NSDate * libraryCreationDate; 
@property (nonatomic,readonly) id corruptionInfo; 
@property (nonatomic,readonly) CPLEngineDerivativesCache * derivativesCache;                        //@synthesize derivativesCache=_derivativesCache - In the implementation block
@property (nonatomic,readonly) BOOL shouldGenerateDerivatives; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                                  //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)stateDescriptionForState:(unsigned long long)arg1 ;
-(id)libraryVersion;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(CPLPlatformObject *)platformObject;
-(void)assertCanWrite;
-(void)assertCanRead;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(id)createNewLibraryVersion;
-(BOOL)storeLibraryVersion:(id)arg1 withError:(id*)arg2 ;
-(BOOL)isClientInSyncWithClientCache;
-(BOOL)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)storeChangeSessionUpdate:(id)arg1 error:(id*)arg2 ;
-(void)_unschedulePendingUpdateApply;
-(void)_loadResetEvents;
-(void)_storeResetEvent:(id)arg1 date:(id)arg2 pending:(BOOL)arg3 cause:(id)arg4 ;
-(BOOL)resetLocalSyncStateWithCause:(id)arg1 date:(id)arg2 error:(id*)arg3 ;
-(void)_storeResetEvent:(id)arg1 date:(id)arg2 cause:(id)arg3 ;
-(BOOL)_resetLocalSyncStateWithError:(id*)arg1 ;
-(BOOL)storeUserIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_setTransactionOnCurrentThread:(id)arg1 ;
-(void)_removeTransactionOnCurrentThread:(id)arg1 ;
-(BOOL)_applyPendingUpdate:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetLocalSyncStateWithCause:(id)arg1 error:(id*)arg2 ;
-(void)_schedulePendingUpdateApply;
-(void)_performTransaction:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)supportedFeatureVersionInLastSync;
-(void)_commitWriteTransaction:(id)arg1 commitError:(id)arg2 ;
-(void)_reallyUnschedulePendingUpdateApply;
-(void)_reallySchedulePendingUpdateApply;
-(void)_reallyPerformBatchedTransactionsLocked;
-(void)_scheduleBatchedTransactionsLocked;
-(id)performWriteTransactionWithBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)resetCompleteSyncStateWithCause:(id)arg1 error:(id*)arg2 ;
-(id)libraryZoneName;
-(BOOL)storeLibraryZoneName:(id)arg1 error:(id*)arg2 ;
-(id)lastQuarantineCountReportDate;
-(BOOL)storeLastQuarantineCountReportDate:(id)arg1 error:(id*)arg2 ;
-(id)clientCacheIdentifier;
-(BOOL)storeClientIsInSyncWithClientCacheWithError:(id*)arg1 ;
-(NSDate *)libraryCreationDate;
-(id)corruptionInfo;
-(BOOL)checkExpectedLibraryVersion:(id)arg1 error:(id*)arg2 ;
-(id)_currentTransaction;
-(BOOL)_canWrite;
-(BOOL)_canRead;
-(id)_resetEventsDescriptions;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(NSArray *)storages;
-(void)registerStorage:(id)arg1 ;
-(void)noteResetSyncFinished;
-(BOOL)resetSyncAnchorWithCause:(id)arg1 error:(id*)arg2 ;
-(void)noteOtherResetEvent:(id)arg1 cause:(id)arg2 ;
-(void)noteInvalidRecordIdentifiersInPushSession:(id)arg1 ;
-(void)performBatchedWriteTransactionWithBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performBatchedWriteTransactionBarrier;
-(BOOL)pushRepositoryIsFull;
-(BOOL)beginChangeSession:(id)arg1 withLibraryVersion:(id)arg2 resetTracker:(id)arg3 error:(id*)arg4 ;
-(BOOL)applyPreviousChangeSessionUpdateWithExpectedLibraryVersion:(id)arg1 error:(id*)arg2 ;
-(CPLEnginePushRepository *)pushRepository;
-(CPLEngineChangePipe *)pullQueue;
-(CPLEngineIDMapping *)idMapping;
-(CPLEngineClientCache *)clientCache;
-(CPLEngineTransientRepository *)transientPullRepository;
-(CPLEngineResourceStorage *)resourceStorage;
-(CPLEngineOutgoingResources *)outgoingResources;
-(CPLEngineRemappedDeletes *)remappedDeletes;
-(CPLEngineQuarantinedRecords *)quarantinedRecords;
-(CPLEngineStatusCenter *)statusCenter;
-(BOOL)supportedFeatureVersionIsMostRecent;
-(CPLEngineDerivativesCache *)derivativesCache;
-(BOOL)shouldGenerateDerivatives;
-(id)performReadTransactionWithBlock:(/*^block*/id)arg1 ;
-(CPLEngineCloudCache *)cloudCache;
-(id)userIdentifier;
-(CPLEngineResourceDownloadQueue *)downloadQueue;
@end
