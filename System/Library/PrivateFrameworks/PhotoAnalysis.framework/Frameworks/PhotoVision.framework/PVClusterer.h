/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/PVFaceClusteringProtocol.h>

@protocol PVCVMLIntegrating;
@class PVQueue, PVContext, PVDataAccessor, NSURL, NSString, NSNumber, CVMLRequestHandler, NSSet, NSMutableSet, PVCanceler, NSMutableArray, PVSuggestionRequest, NSLock, NSMutableDictionary, NSDate, PVEventManager;

@interface PVClusterer : NSObject <PVFaceClusteringProtocol> {

	id<PVCVMLIntegrating> _cvmlIntegration;
	PVQueue* _processingQueue;
	PVContext* _context;
	PVDataAccessor* _dataAccessor;
	NSURL* _cacheDirUrl;
	NSURL* _cacheFileUrl;
	NSString* _clusteringType;
	NSNumber* _threshold;
	CVMLRequestHandler* _requestHandler;
	NSSet* _faceCSNsInClusterCache;
	unsigned long long _nextSeqNum;
	NSMutableSet* _faceIdStrsToAdd;
	NSMutableSet* _faceCSNsToRemove;
	unsigned long long _accumulatedChangesCount;
	unsigned long long _nextClusterTriggeringAccumulatedChangesCount;
	PVCanceler* _clusteringCanceler;
	BOOL _rebuildClusterer;
	NSMutableArray* _outstandingSuggestionRequests;
	PVSuggestionRequest* _currentSuggestionRequest;
	NSLock* _suggestionLock;
	NSLock* _currentStatusSnapshotLock;
	SCD_Struct_PV3 _currentStatusSnapshot;
	BOOL _currentStatusSnapshotIsValid;
	NSLock* _propertyDictionaryLock;
	NSMutableDictionary* _propertyDictionary;
	long long _clustererBringUpState;
	NSDate* _timestampOfLastClusterComparison;
	PVEventManager* _eventManager;

}

@property (nonatomic,readonly) BOOL needsFullSync; 
@property (nonatomic,readonly) BOOL needsUpdate; 
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (assign,nonatomic) long long clustererBringUpState;              //@synthesize clustererBringUpState=_clustererBringUpState - In the implementation block
@property (__weak) PVEventManager * eventManager;                          //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,readonly) long long clustererState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)removeClusteringStateCacheWithContext:(id)arg1 cacheDirectoryUrl:(id)arg2 error:(id*)arg3 ;
-(void)terminate;
-(id)status;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1 ;
-(BOOL)needsUpdate;
-(id)_newCVMLRequestOptions;
-(id)_persistenceDelegate;
-(id)initWithContext:(id)arg1 dataAccessor:(id)arg2 cacheDirectoryUrl:(id)arg3 cvmlIntegration:(id)arg4 ;
-(long long)restoreClusterCacheAndSyncWithLibrary:(BOOL)arg1 ;
-(void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2 ;
-(unsigned long long)numberOfAccumulatedClusterChanges;
-(void)clusterIfNecessaryAndWait;
-(void)clusterAndWait;
-(void)performClusteringWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelClustering;
-(BOOL)cancelSuggestionRequest:(id)arg1 ;
-(id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id*)arg2 ;
-(BOOL)getClusters:(id*)arg1 threshold:(double*)arg2 utilizingGPU:(BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)isReadyToReturnSuggestions;
-(void)_readPropertyDictionary;
-(void)_cancelClusteringAndRestoreClusterCache:(BOOL)arg1 ;
-(void)_recordIncrementCountOfPendingFacesToAdd:(unsigned long long)arg1 ;
-(void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
-(void)_recordClusteringState:(BOOL)arg1 ;
-(id)_faceObservationsFromFaceCSNs:(id)arg1 ;
-(void)setClustererBringUpState:(long long)arg1 ;
-(BOOL)_performAndPersistClustersByAddingFaceObs:(id)arg1 removingFaceObs:(id)arg2 updateFaces:(id)arg3 canceler:(id)arg4 error:(id*)arg5 ;
-(id)_faceObservationsFromFaceIdStrs:(id)arg1 assignClusterSeqNumberIfNeeded:(BOOL)arg2 updatedFaces:(id)arg3 excludeClustered:(BOOL)arg4 ;
-(void)_recordCountOfPendingFacesToAdd:(unsigned long long)arg1 ;
-(BOOL)needsFullSync;
-(void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 withCanceler:(id)arg2 ;
-(BOOL)_processingQueuePerformForcedFaceClustering:(BOOL)arg1 withCanceler:(id)arg2 ;
-(BOOL)_processingQueueSaveClusterCache:(id*)arg1 ;
-(id)_faceObservationsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(BOOL)arg2 updatedFaces:(id)arg3 ;
-(id)_stringForPVClustererBringUpState:(long long)arg1 ;
-(void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 cvmlClusters:(id*)arg2 withCanceler:(id)arg3 ;
-(BOOL)_processingQueueGetCVMLClusters:(id)arg1 minimumClusterSize:(unsigned long long)arg2 returnClusterAsCountedSet:(BOOL)arg3 error:(id*)arg4 ;
-(void)_removeEmptyGroups;
-(void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_processingQueueResetClusterCache:(id*)arg1 ;
-(void)_recordCurrentStatus:(SCD_Struct_PV3)arg1 ;
-(long long)clustererBringUpState;
-(void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1 ;
-(BOOL)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id*)arg1 lastClusterSequenceNumber:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id*)arg4 ;
-(id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id*)arg3 ;
-(id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(BOOL)arg1 error:(id*)arg2 ;
-(void)_recordClusterRebuildRequired:(BOOL)arg1 ;
-(id)_propertyDictionaryFileURL;
-(id)clusterFaceIdsArrayForClusterid:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_appendToClusterLog:(id)arg1 ;
-(BOOL)isReady;
-(id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id*)arg3 ;
-(id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)cancelAllSuggestionRequests;
-(long long)clustererState;
-(PVEventManager *)eventManager;
-(void)setEventManager:(PVEventManager *)arg1 ;
@end

