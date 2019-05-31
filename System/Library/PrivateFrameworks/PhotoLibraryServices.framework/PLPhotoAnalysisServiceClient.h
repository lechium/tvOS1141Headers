/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSXPCConnection, NSDictionary;

@interface PLPhotoAnalysisServiceClient : NSObject {

	NSURL* _libraryURL;
	NSXPCConnection* _xpcConnection;
	NSDictionary* _cachedRequestContextDictionary;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection; 
+(id)defaultClient;
-(id)init;
-(void)invalidate;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)searchResultNodesForSceneClassifications:(id)arg1 error:(id*)arg2 ;
-(void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)requestContextDictionary;
-(id)requestContextDictionaryWithOperationId:(BOOL)arg1 ;
-(id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)localizedLabelForSceneIdentifier:(unsigned)arg1 error:(id*)arg2 ;
-(id)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(long long)suggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)resetFaceClusteringState:(id*)arg1 ;
-(BOOL)resetPeople:(id*)arg1 ;
-(BOOL)reclusterFacesWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)processPersonsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)faceClusteringInformation:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1 ;
-(void)faceProcessingStatusForUserInterface:(/*^block*/id)arg1 ;
-(id)requestSuggestedMePersonIdentifierWithError:(id*)arg1 ;
-(void)personPromoterStatus:(/*^block*/id)arg1 ;
-(void)personPromoterAdvancedStatus:(/*^block*/id)arg1 ;
-(BOOL)rebuildPersonsWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithLibraryURL:(id)arg1 ;
-(void)setupXpcConnection;
-(void)configureXPCConnection;
-(id)dumpAnalysisStatusError:(id*)arg1 ;
-(void)dispatchBlockWithoutBoost:(/*^block*/id)arg1 ;
-(id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateMemoriesWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)requestSortedArrayOfPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestAllSocialGroupsForPersonIdentifier:(id)arg1 withError:(id*)arg2 ;
-(id)requestSocialGroupsForPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestRelatedMomentsForPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestAssetsForPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rebuildGraphWithProgress:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateGraphWithReply:(/*^block*/id)arg1 ;
-(id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)requestMemoryTreeDebugInformationWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestTransientMemoriesWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestTransientMemoryPropertiesWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)requestHighlightEstimatesWithReply:(/*^block*/id)arg1 ;
-(id)requestGraphStatus:(id*)arg1 ;
-(void)requestGraphRebuildFractionCompletedWithReply:(/*^block*/id)arg1 ;
-(BOOL)requestInvalidateTransientCaches:(id*)arg1 ;
-(BOOL)requestInvalidatePersistentCaches:(id*)arg1 ;
-(id)requestMetadataSnapshotFolderCreation:(id*)arg1 ;
-(id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id*)arg4 ;
-(void)generateMemoriesRelatedDiagnosticsLogsWithReply:(/*^block*/id)arg1 ;
-(id)requestDefaultsObjectForKey:(id)arg1 withError:(id*)arg2 ;
-(BOOL)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 withError:(id*)arg3 ;
-(BOOL)requestTitleForMemoryWithLocalIdentifier:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3 error:(id*)arg4 ;
-(BOOL)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5 ;
-(BOOL)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5 ;
-(BOOL)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5 ;
-(id)requestSnapshotServiceForCurationResultsWithGraphOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 error:(id*)arg2 ;
-(void)cancelOperationsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)faceCandidatesForKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)requestExportGraphForPurpose:(id)arg1 error:(id*)arg2 ;
-(id)requestGraphStatisticsWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)requestSnapshotServiceForMomentWithLocalIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2 ;
-(NSXPCConnection *)xpcConnection;
@end

