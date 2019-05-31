/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAWorker.h>
#import <libobjc.A.dylib/PHALibraryChangeResponder.h>
#import <libobjc.A.dylib/PLPhotoAnalysisGraphServiceProtocol.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSDate, NSDictionary, NSProgress, PGManager, NSMutableDictionary, PHALibraryChangeBuffer, PHAPredicateValidator, PHACoalescer, NSObject, NSHashTable, NSString;

@interface PHAGraphServiceWorker : PHAWorker <PHALibraryChangeResponder, PLPhotoAnalysisGraphServiceProtocol> {

	unsigned long long _inq_state;
	BOOL _serviceEnabled;
	NSDate* _lastTodayWidgetMemoryCreationDate;
	NSDictionary* _snapshotFilenameLookup;
	unsigned long long _flags;
	NSProgress* _currentGraphRebuildProgress;
	PGManager* _graphManager;
	PGManager* _lastGraphManager;
	NSMutableDictionary* _pendingGraphReadyCallbacks;
	PHALibraryChangeBuffer* _pendingLibraryChanges;
	PHAPredicateValidator* _relatedRequestPredicateValidator;
	PHACoalescer* _libraryChangeForegroundUpdateCoalescer;
	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	NSDate* _lastLibraryChangeGraphUpdateJobCompletionDate;
	NSHashTable* _pendingRequestReferences;
	long long _pendingRequestReferenceCount;
	NSObject*<OS_os_transaction> _graphWorkerWarmedUpTransaction;

}

@property (assign) unsigned long long state; 
@property (assign) unsigned long long flags;                                                 //@synthesize flags=_flags - In the implementation block
@property (retain) NSProgress * currentGraphRebuildProgress;                                 //@synthesize currentGraphRebuildProgress=_currentGraphRebuildProgress - In the implementation block
@property (retain) PGManager * graphManager;                                                 //@synthesize graphManager=_graphManager - In the implementation block
@property (__weak) PGManager * lastGraphManager;                                             //@synthesize lastGraphManager=_lastGraphManager - In the implementation block
@property (retain) NSMutableDictionary * pendingGraphReadyCallbacks;                         //@synthesize pendingGraphReadyCallbacks=_pendingGraphReadyCallbacks - In the implementation block
@property (retain) PHALibraryChangeBuffer * pendingLibraryChanges;                           //@synthesize pendingLibraryChanges=_pendingLibraryChanges - In the implementation block
@property (retain) PHAPredicateValidator * relatedRequestPredicateValidator;                 //@synthesize relatedRequestPredicateValidator=_relatedRequestPredicateValidator - In the implementation block
@property (retain) PHACoalescer * libraryChangeForegroundUpdateCoalescer;                    //@synthesize libraryChangeForegroundUpdateCoalescer=_libraryChangeForegroundUpdateCoalescer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> backgroundTaskQueue;                         //@synthesize backgroundTaskQueue=_backgroundTaskQueue - In the implementation block
@property (retain) NSDate * lastLibraryChangeGraphUpdateJobCompletionDate;                   //@synthesize lastLibraryChangeGraphUpdateJobCompletionDate=_lastLibraryChangeGraphUpdateJobCompletionDate - In the implementation block
@property (retain) NSHashTable * pendingRequestReferences;                                   //@synthesize pendingRequestReferences=_pendingRequestReferences - In the implementation block
@property (assign) long long pendingRequestReferenceCount;                                   //@synthesize pendingRequestReferenceCount=_pendingRequestReferenceCount - In the implementation block
@property (retain) NSObject*<OS_os_transaction> graphWorkerWarmedUpTransaction;              //@synthesize graphWorkerWarmedUpTransaction=_graphWorkerWarmedUpTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(short)workerType;
+(BOOL)wantsToReceiveXPCRequestsOnUserInitiatedRequestQueue;
+(long long)applicationDataFolderIdentifier;
+(id)stringFromGraphServiceState:(unsigned long long)arg1 ;
+(void)configureXPCConnection:(id)arg1 ;
-(unsigned long long)flags;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)rebuildGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)requestCurationDebugInformationForAsset:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestTransientMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestGraphServiceStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestHighlightEstimatesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSnapshotServiceForMomentWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestSnapshotServiceForCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)warmup;
-(PGManager *)graphManager;
-(NSObject*<OS_dispatch_queue>)backgroundTaskQueue;
-(void)setBackgroundTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)statusAsDictionary;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(void)startup;
-(void)cooldown;
-(BOOL)warmupBasedOnConstraintChanges;
-(BOOL)shouldCooldownForConstraintChange:(id)arg1 ;
-(BOOL)shouldWarmupForConstraintChange:(id)arg1 ;
-(BOOL)allowCooldownForWorkerChange:(id)arg1 ;
-(BOOL)workerJobCausesCooldown:(id)arg1 ;
-(void)libraryChangeListener:(id)arg1 gotRawChange:(id)arg2 ;
-(BOOL)isQuiescent;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)pendingRequestReferenceDidDeallocateForAddress:(void*)arg1 ;
-(void)setupPredicateValidator;
-(void)setRelatedRequestPredicateValidator:(PHAPredicateValidator *)arg1 ;
-(PHAPredicateValidator *)relatedRequestPredicateValidator;
-(unsigned long long)synchronousOffQueueState;
-(BOOL)retryStartup;
-(BOOL)shouldAllowBackgroundActivityWithDescription:(id)arg1 ;
-(BOOL)hasAdditionalJobForGraphRebuildInScenario:(unsigned long long)arg1 ;
-(BOOL)hasAdditionalJobForDiffComputationInScenario:(unsigned long long)arg1 ;
-(BOOL)hasAdditionalJobForPendingLibraryChangesInScenario:(unsigned long long)arg1 ;
-(BOOL)hasAdditionalJobForBackgroundMemoryGenerationInScenario:(unsigned long long)arg1 ;
-(BOOL)_isLibraryBeingSynchronized;
-(BOOL)didExceedtimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2 ;
-(void)setupGraphManager;
-(PHALibraryChangeBuffer *)pendingLibraryChanges;
-(NSDate *)lastLibraryChangeGraphUpdateJobCompletionDate;
-(void)markLastBackgroundGraphRebuildJobDate;
-(id)graphRebuildJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)diffComputationJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)libraryChangeGraphUpdateJobForPendingChangesWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)backgroundMemoryGenerationJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)checkForWritablePersistentStorageDirectoryURL;
-(void)setupLibraryChangeListener;
-(void)setGraphWorkerWarmedUpTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(BOOL)shouldUnloadGraphOnCooldown;
-(void)callAndClearPendingReadyCallbacksWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)shutdownAndWaitForGraphManager;
-(PHACoalescer *)libraryChangeForegroundUpdateCoalescer;
-(void)setLibraryChangeForegroundUpdateCoalescer:(PHACoalescer *)arg1 ;
-(void)setLastLibraryChangeGraphUpdateJobCompletionDate:(NSDate *)arg1 ;
-(id)graphUpdateDetailsForLibraryChangeSnapshot:(id)arg1 ;
-(void)markAssetsInChangeDetails:(id)arg1 withState:(int)arg2 ;
-(void)performGraphUpdates:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)fetchOptionsWithCurrentPhotoLibraryFromFetchOptions:(id)arg1 ;
-(BOOL)canServiceGraphRequestsInCurrentStateLoadingGraphIfNeeded;
-(id)currentlyUnavailableError;
-(void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)rebuildGraphWithContext:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)computeDiffWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didFinishLastPendingRequest;
-(id)pendingRequestReferenceForLabel:(id)arg1 ;
-(NSMutableDictionary *)pendingGraphReadyCallbacks;
-(void)setCurrentGraphRebuildProgress:(NSProgress *)arg1 ;
-(void)didCompleteRebuildOrDiffSuccessfully;
-(id)libraryTemporarilyUnavailableError;
-(BOOL)shouldStopOperationInProgress;
-(BOOL)_shouldAggregateDataForReporting:(unsigned long long)arg1 ;
-(id)_PHMemoryCategoryValueToDataAggregationKeyLookup;
-(id)_PHMemoryBlacklistableFeatureTypeValueToDataAggregationKeyLookup;
-(id)_PHMemoryBlacklistedFeatureTypeValueToDataAggregationKeyLookup;
-(id)_dataAggregationKeyForCategory:(long long)arg1 subCategory:(long long)arg2 lookupTable:(id)arg3 ;
-(id)_aggregatedStatsForSuggestedMoodCountVector:(id)arg1 ;
-(id)_aggregatedStatsForPossibleMoodCountVector:(id)arg1 ;
-(id)_aggregatedStatsForMiroMoodCountVector:(id)arg1 ;
-(id)_aggregatedStatsForMoodKeywordCountedSet:(id)arg1 ;
-(void)_logAggregatedStatistics:(id)arg1 ;
-(void)_processMoodForMemory:(id)arg1 withMoodHistory:(id)arg2 ;
-(id)_infoForMemory:(id)arg1 representativeAssetCount:(unsigned long long)arg2 isTransientMemory:(BOOL)arg3 ;
-(BOOL)_shouldFireNotificationForMemories:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(void)_fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(id)_infoForNotificationQualityOfMemory:(id)arg1 ;
-(id)_featureVectorWithMemory:(id)arg1 ;
-(id)_minimalLegacyFeatureVectorWithMemory:(id)arg1 ;
-(id)_infoForMomentsBackingMemory:(id)arg1 ;
-(id)_infoForGraphCollectionBasedMemory:(id)arg1 ;
-(long long)_phTitleCategoryForPGTitleCategory:(long long)arg1 ;
-(id)_basicPropertiesFromMemory:(id)arg1 ;
-(id)_memoryInfoFromMemory:(id)arg1 options:(id)arg2 ;
-(id)_propertiesFromMemory:(id)arg1 ;
-(long long)unavailableErrorCodeForCurrentState;
-(id)assetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 ;
-(BOOL)canServiceGraphCurationRequestsInCurrentStateLoadingGraphIfNeeded;
-(id)informationDictionaryForAsset:(id)arg1 ;
-(id)_diagnosticsLogsRootFolderPath;
-(id)_collectionListForLocalIdentifier:(id)arg1 ;
-(long long)_titleTupleFormatForPhotoAnalysisTitleFormat:(long long)arg1 ;
-(id)_assetCollectionForLocalIdentifier:(id)arg1 ;
-(unsigned long long)_validatedMemoryNotificationState:(int)arg1 ;
-(void)_postNotificationForMemory:(id)arg1 deliveryDate:(id)arg2 ;
-(BOOL)_userIsActivelyUsingPhotos;
-(BOOL)canServiceGraphStatusRequestsInCurrentStateLoadingGraphIfNeeded;
-(NSProgress *)currentGraphRebuildProgress;
-(id)_assetCollectionForRelatedIdentifier:(id)arg1 ;
-(id)_lastSuccessfulSyncDate;
-(void)requestMemoryAssetCollectionDebugInformationForIdentifier:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestAssetCollectionsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startProcessingGraphUpdateJob:(id)arg1 ;
-(void)stopProcessingGraphUpdateJob:(id)arg1 ;
-(void)requestGraphRebuildNeededWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setGraphManager:(PGManager *)arg1 ;
-(PGManager *)lastGraphManager;
-(void)setLastGraphManager:(PGManager *)arg1 ;
-(void)setPendingGraphReadyCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setPendingLibraryChanges:(PHALibraryChangeBuffer *)arg1 ;
-(NSHashTable *)pendingRequestReferences;
-(void)setPendingRequestReferences:(NSHashTable *)arg1 ;
-(long long)pendingRequestReferenceCount;
-(void)setPendingRequestReferenceCount:(long long)arg1 ;
-(NSObject*<OS_os_transaction>)graphWorkerWarmedUpTransaction;
-(void)shutdown;
@end

