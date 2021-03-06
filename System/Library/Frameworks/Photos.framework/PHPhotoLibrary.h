/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHBatchFetchingArrayDataSource.h>

@protocol OS_dispatch_queue;
@class PHVariationCacheManager, NSObject, PLPhotoLibrary, NSMutableOrderedSet, NSMutableDictionary, NSHashTable, NSString;

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource> {

	BOOL _unknownMergeEvent;
	BOOL _isChangeProcessingPending;
	BOOL _clearsOIDCacheAfterFetchResultDealloc;
	PHVariationCacheManager* _variationCacheManager;
	NSObject*<OS_dispatch_queue> _queue;
	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibrary* _changeHandlingPhotoLibrary;
	PLPhotoLibrary* _mainQueuePhotoLibrary;
	PLPhotoLibrary* _backgroundQueuePhotoLibrary;
	PLPhotoLibrary* _backgroundQueueObjectFetchingPhotoLibrary;
	PLPhotoLibrary* _transactionPhotoLibrary;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSMutableOrderedSet* _insertRequests;
	NSMutableOrderedSet* _updateRequests;
	NSMutableOrderedSet* _deleteRequests;
	NSMutableDictionary* _saveTokensToKnownUUIDs;
	NSMutableDictionary* _changeRequests;
	NSHashTable* _fetchResults;
	NSHashTable* _internalObservers;
	NSHashTable* _externalObservers;
	NSMutableDictionary* _changeNotificationInfo;
	double _lastChangeProcessingStarted;

}

@property (nonatomic,retain) id<PLPhotoAnalysisServiceTaxonomyResolver> taxonomyResolver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                            //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * changeHandlingPhotoLibrary;                              //@synthesize changeHandlingPhotoLibrary=_changeHandlingPhotoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * mainQueuePhotoLibrary;                                   //@synthesize mainQueuePhotoLibrary=_mainQueuePhotoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * backgroundQueuePhotoLibrary;                             //@synthesize backgroundQueuePhotoLibrary=_backgroundQueuePhotoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * backgroundQueueObjectFetchingPhotoLibrary;               //@synthesize backgroundQueueObjectFetchingPhotoLibrary=_backgroundQueueObjectFetchingPhotoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * transactionPhotoLibrary;                                 //@synthesize transactionPhotoLibrary=_transactionPhotoLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionQueue;                            //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * insertRequests;                                     //@synthesize insertRequests=_insertRequests - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * updateRequests;                                     //@synthesize updateRequests=_updateRequests - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * deleteRequests;                                     //@synthesize deleteRequests=_deleteRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * saveTokensToKnownUUIDs;                             //@synthesize saveTokensToKnownUUIDs=_saveTokensToKnownUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeRequests;                                     //@synthesize changeRequests=_changeRequests - In the implementation block
@property (nonatomic,retain) NSHashTable * fetchResults;                                               //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) NSHashTable * internalObservers;                                          //@synthesize internalObservers=_internalObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * externalObservers;                                          //@synthesize externalObservers=_externalObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeNotificationInfo;                             //@synthesize changeNotificationInfo=_changeNotificationInfo - In the implementation block
@property (assign,nonatomic) BOOL unknownMergeEvent;                                                   //@synthesize unknownMergeEvent=_unknownMergeEvent - In the implementation block
@property (assign,nonatomic) BOOL isChangeProcessingPending;                                           //@synthesize isChangeProcessingPending=_isChangeProcessingPending - In the implementation block
@property (assign,nonatomic) double lastChangeProcessingStarted;                                       //@synthesize lastChangeProcessingStarted=_lastChangeProcessingStarted - In the implementation block
@property (assign,nonatomic) BOOL clearsOIDCacheAfterFetchResultDealloc;                               //@synthesize clearsOIDCacheAfterFetchResultDealloc=_clearsOIDCacheAfterFetchResultDealloc - In the implementation block
@property (nonatomic,readonly) PHVariationCacheManager * variationCacheManager;                        //@synthesize variationCacheManager=_variationCacheManager - In the implementation block
+(long long)authorizationStatus;
+(long long)collectionListTypeForIdentifierCode:(id)arg1 ;
+(id)uniquedOID:(id)arg1 ;
+(id)uniquedOIDsFromObjects:(id)arg1 ;
+(id)_descriptionOfEntitiesInChangeRequests:(id)arg1 ;
+(void)_forceUserInterfaceReload;
+(void)removeAllUniquedOIDs;
+(id)uniquedOIDs:(id)arg1 ;
+(BOOL)_isInternalObserver:(id)arg1 ;
+(Class)PHObjectClassForEntityName:(id)arg1 ;
+(id)fetchTypeForLocalIdentifierCode:(id)arg1 ;
+(Class)classForFetchType:(id)arg1 ;
+(Class)PHObjectClassForOID:(id)arg1 ;
+(id)_effectiveRootEntity:(id)arg1 ;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(id)sharedPhotoLibrary;
+(void)setNeedsToRepairKeyCuratedAssetForMemories:(id)arg1 ;
+(BOOL)shouldDisplayMergeCandidates:(id)arg1 forPerson:(id)arg2 ;
-(void)_removeObserver:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)managedObjectContext;
-(void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)cleanupInvalidIgnoreUntilDatesWithError:(id*)arg1 ;
-(void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2 ;
-(void)faceProcessingStatusForUserInterface:(/*^block*/id)arg1 ;
-(void)_processPendingChanges;
-(void)generateMemoriesRelatedDiagnosticsLogsWithReply:(/*^block*/id)arg1 ;
-(NSMutableOrderedSet *)insertRequests;
-(NSMutableOrderedSet *)updateRequests;
-(NSMutableOrderedSet *)deleteRequests;
-(void)registerUUID:(id)arg1 forSaveToken:(id)arg2 ;
-(id)fetchUpdatedObject:(id)arg1 ;
-(void)assertTransaction;
-(void)recordDeleteRequest:(id)arg1 ;
-(id)changeRequestForUUID:(id)arg1 ;
-(void)setChangeRequest:(id)arg1 forUUID:(id)arg2 ;
-(void)recordInsertRequest:(id)arg1 ;
-(void)recordUpdateRequest:(id)arg1 ;
-(id)removeUuidForSaveToken:(id)arg1 ;
-(id)pl_syncProgressAlbums;
-(id)fetchPHObjectsForOIDs:(id)arg1 ;
-(id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(BOOL)arg3 ;
-(id)transactionPLPhotoLibrary;
-(id)initSharedLibrary;
-(void)handleMergeNotification:(id)arg1 ;
-(PLPhotoLibrary *)mainQueuePhotoLibrary;
-(id)photoLibraryForCurrentQueueQoS;
-(PLPhotoLibrary *)backgroundQueuePhotoLibrary;
-(id)mainQueueManagedObjectContext;
-(PLPhotoLibrary *)backgroundQueueObjectFetchingPhotoLibrary;
-(id)objectFetchingContextForCurrentQueueQoS;
-(BOOL)clearsOIDCacheAfterFetchResultDealloc;
-(void)_addObserver:(id)arg1 ;
-(id)_descriptionOfChanges;
-(BOOL)_preflightRequestedPhotoKitInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)changeRequests;
-(void)_beginTransaction;
-(void)_cancelTransaction:(/*^block*/id)arg1 ;
-(void)_commitTransaction:(/*^block*/id)arg1 ;
-(void)_unauthorized:(/*^block*/id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)saveTokensToKnownUUIDs;
-(id)fetchDictionariesByPHClassForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(BOOL)arg3 ;
-(PLPhotoLibrary *)changeHandlingPhotoLibrary;
-(PHVariationCacheManager *)variationCacheManager;
-(id)objectFetchingManagedObjectContextForObject:(id)arg1 propertySet:(id)arg2 ;
-(void)registerFetchResult:(id)arg1 ;
-(void)unregisterFetchResult:(id)arg1 ;
-(void)updateClusterUsabilityCriteria;
-(void)performCancellableChanges:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)performCancellableChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)isApplyingRequestedChanges;
-(id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(BOOL)arg3 ;
-(id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2 ;
-(void)setChangeHandlingPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setMainQueuePhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setBackgroundQueuePhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setBackgroundQueueObjectFetchingPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(PLPhotoLibrary *)transactionPhotoLibrary;
-(void)setTransactionPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)transactionQueue;
-(void)setTransactionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInsertRequests:(NSMutableOrderedSet *)arg1 ;
-(void)setUpdateRequests:(NSMutableOrderedSet *)arg1 ;
-(void)setDeleteRequests:(NSMutableOrderedSet *)arg1 ;
-(void)setSaveTokensToKnownUUIDs:(NSMutableDictionary *)arg1 ;
-(void)setChangeRequests:(NSMutableDictionary *)arg1 ;
-(NSHashTable *)internalObservers;
-(void)setInternalObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)externalObservers;
-(void)setExternalObservers:(NSHashTable *)arg1 ;
-(NSMutableDictionary *)changeNotificationInfo;
-(void)setChangeNotificationInfo:(NSMutableDictionary *)arg1 ;
-(BOOL)unknownMergeEvent;
-(void)setUnknownMergeEvent:(BOOL)arg1 ;
-(BOOL)isChangeProcessingPending;
-(void)setIsChangeProcessingPending:(BOOL)arg1 ;
-(double)lastChangeProcessingStarted;
-(void)setLastChangeProcessingStarted:(double)arg1 ;
-(void)setClearsOIDCacheAfterFetchResultDealloc:(BOOL)arg1 ;
-(id<PLPhotoAnalysisServiceTaxonomyResolver>)taxonomyResolver;
-(void)setTaxonomyResolver:(id<PLPhotoAnalysisServiceTaxonomyResolver>)arg1 ;
-(void)requestPermissionToDownloadFaceResourcesOfCount:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)registerAvailabilityObserver:(id)arg1 ;
-(void)unregisterAvailabilityObserver:(id)arg1 ;
-(id)bfa_photoLibrary;
-(id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 ;
-(id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned long long)arg3 ;
-(BOOL)resetPendingAnalysisStatesWithError:(id*)arg1 ;
-(void)enableNamingFlow;
-(void)_checkForPeopleUIFeatureWithFetchRequest:(id)arg1 comparator:(/*^block*/id)arg2 ;
-(void)_requestAnalysisProgressWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isNamingFlowEnabled:(/*^block*/id)arg1 ;
-(BOOL)featureEnabledForWorkerType:(short)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTotalProgressCountsWithCompletion:(/*^block*/id)arg1 ;
-(id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)markAnalysisStatesProcessedForWorkerType:(short)arg1 error:(id*)arg2 ;
-(BOOL)featureEnabledForWorkerType:(short)arg1 ;
-(id)exportGraphForPurpose:(id)arg1 error:(id*)arg2 ;
-(id)sortedArrayOfPersonIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 minimumSuggestionFaceCount:(unsigned long long)arg4 ;
-(id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg1 verifiedClusterSequenceNumbers:(id)arg2 ;
-(id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)arg1 error:(id*)arg2 ;
-(id)managedObjectContextForCurrentQueueQoS;
-(void)performChanges:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)performChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)cancelOperationsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)registerChangeObserver:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(id)graphStatusDescription:(id*)arg1 ;
-(BOOL)invalidateTransientGraphCachesAndReturnError:(id*)arg1 ;
-(BOOL)invalidatePersistentGraphCachesAndReturnError:(id*)arg1 ;
-(void)requestGraphRebuildWithProgress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)graphStatisticsDescription:(id*)arg1 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)allSocialGroupsForPersonIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)socialGroupsForPersonIdentifiers:(id)arg1 error:(id*)arg2 ;
-(PLPhotoLibrary *)photoLibrary;
-(id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)analysisProgressCountsForWorkerType:(short)arg1 ;
-(BOOL)isFaceProcessingFinished;
-(void)requestAnalysisProgressCountsWithCompletion:(/*^block*/id)arg1 ;
-(void)personPromotionProcessingStatusForUserInterface:(/*^block*/id)arg1 ;
-(void)requestHighlightEstimatesWithCompletion:(/*^block*/id)arg1 ;
-(id)suggestedMePersonIdentifierWithError:(id*)arg1 ;
-(NSHashTable *)fetchResults;
-(void)setFetchResults:(NSHashTable *)arg1 ;
-(id)curationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)assetIdentifiersForPersonIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestGraphRebuildProgressWithCompletion:(/*^block*/id)arg1 ;
-(id)urlForApplicationDataFolderIdentifier:(long long)arg1 ;
@end

