//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVCKDataClient.h"

#import "TVPMyPSAccessObjectDelegate.h"
#import "TVPSharedPSAccessObjectDelegate.h"

@class NSArray, NSDictionary, NSString, TVCKDataCollection, TVPAOSynchronizer, TVSiCloudAccountManager;

@interface TVPDataClient : TVCKDataClient <TVPMyPSAccessObjectDelegate, TVPSharedPSAccessObjectDelegate>
{
    _Bool _didFinishSyncForSharedStreams;	// 8 = 0x8
    NSArray *_activityPhotoAssets;	// 16 = 0x10
    TVCKDataCollection *_activityCollection;	// 24 = 0x18
    TVSiCloudAccountManager *_manager;	// 32 = 0x20
    TVPAOSynchronizer *_myPSAOSynchronizer;	// 40 = 0x28
    TVPAOSynchronizer *_sharedPSAOSynchronizer;	// 48 = 0x30
    NSDictionary *_pendingUserNotificationInfo;	// 56 = 0x38
}

@property(nonatomic) _Bool didFinishSyncForSharedStreams; // @synthesize didFinishSyncForSharedStreams=_didFinishSyncForSharedStreams;
@property(retain, nonatomic) NSDictionary *pendingUserNotificationInfo; // @synthesize pendingUserNotificationInfo=_pendingUserNotificationInfo;
@property(retain, nonatomic) TVPAOSynchronizer *sharedPSAOSynchronizer; // @synthesize sharedPSAOSynchronizer=_sharedPSAOSynchronizer;
@property(retain, nonatomic) TVPAOSynchronizer *myPSAOSynchronizer; // @synthesize myPSAOSynchronizer=_myPSAOSynchronizer;
@property(readonly, retain, nonatomic) TVSiCloudAccountManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) TVCKDataCollection *activityCollection; // @synthesize activityCollection=_activityCollection;
@property(copy, nonatomic) NSArray *activityPhotoAssets; // @synthesize activityPhotoAssets=_activityPhotoAssets;
- (void).cxx_destruct;	// IMP=0x0000000100058678
- (void)cancelLoad:(id)arg1;	// IMP=0x00000001000582b4
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100057494
- (id)imageKeyForObject:(id)arg1;	// IMP=0x0000000100057230
- (id)_sharedPhotoStreamItemForAssetID:(id)arg1 inAlbumWithAlbumID:(id)arg2 accessObject:(id)arg3;	// IMP=0x0000000100057140
- (id)_sharedPhotoStreamItemForAsset:(id)arg1 inAlbum:(id)arg2 accessObject:(id)arg3;	// IMP=0x0000000100056fe8
- (id)_myPhotoStreamItemForAsset:(id)arg1 accessObject:(id)arg2;	// IMP=0x0000000100056ee4
- (void)_updatePSCollectionTypeForCollectionID:(id)arg1 queryContext:(id)arg2;	// IMP=0x0000000100056a2c
- (void)_updateHasNewContentForCollectionID:(id)arg1 queryContext:(id)arg2;	// IMP=0x0000000100056664
- (void)_updateLikedForAssetID:(id)arg1 queryContext:(id)arg2;	// IMP=0x00000001000561e8
- (void)_updateLastAccessedItemForAssetID:(id)arg1 queryContext:(id)arg2;	// IMP=0x0000000100055e6c
- (void)_collectSharedPhotoStreamItemsForCollectionID:(id)arg1 mediaType:(id)arg2 range:(CDStruct_912cb5d2)arg3 inItems:(id)arg4 queryContext:(id)arg5;	// IMP=0x000000010005582c
- (void)_collectRecentUpdatesItemsForCollectionID:(id)arg1 mediaType:(id)arg2 range:(CDStruct_912cb5d2)arg3 inItems:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100054f5c
- (void)_collectMyPhotoStreamItemsForCollectionID:(id)arg1 mediaType:(id)arg2 range:(CDStruct_912cb5d2)arg3 inItems:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100054b1c
- (void)_collectSharedPhotoStreamsForCollectionID:(id)arg1 type:(id)arg2 includeItems:(_Bool)arg3 inCollections:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100053d00
- (void)_collectRecentUpdatesStreamForCollectionID:(id)arg1 type:(id)arg2 includeItems:(_Bool)arg3 inCollections:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100052e3c
- (void)_collectMyPhotoStreamForCollectionID:(id)arg1 type:(id)arg2 includeItems:(_Bool)arg3 inCollections:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100052908
- (void)_tearDownSharedPS;	// IMP=0x0000000100052854
- (void)_setupSharedPS;	// IMP=0x0000000100052634
- (void)_tearDownMyPS;	// IMP=0x0000000100052580
- (void)_setupMyPS;	// IMP=0x0000000100052360
- (void)_onDisconnect;	// IMP=0x000000010005232c
- (void)_onConnect;	// IMP=0x000000010005216c
- (void)_performConnection;	// IMP=0x0000000100052160
- (void)_handleDeleteQueryWithContext:(id)arg1;	// IMP=0x0000000100051948
- (void)_handleUpdateQueryWithContext:(id)arg1;	// IMP=0x0000000100051280
- (void)_handleItemsQueryWithContext:(id)arg1;	// IMP=0x000000010005093c
- (void)_handleCollectionsQueryWithContext:(id)arg1;	// IMP=0x000000010004fe60
- (void)_iCloudPhotosSettingsDidChange:(id)arg1;	// IMP=0x000000010004fe5c
- (void)_accountActivityHandler:(id)arg1;	// IMP=0x000000010004fe58
- (void)sharedPSAccessObject:(id)arg1 finishedCheckingForChangesInfo:(id)arg2 error:(id)arg3;	// IMP=0x000000010004fa44
- (void)sharedPSAccessObject:(id)arg1 isAssetUnviewedDidChangeForAssetID:(id)arg2 albumID:(id)arg3;	// IMP=0x000000010004f720
- (void)sharedPSAccessObject:(id)arg1 commentsDidChangeForAssetID:(id)arg2 albumID:(id)arg3 likeStatusDidChange:(_Bool)arg4;	// IMP=0x000000010004f204
- (void)sharedPSAccessObject:(id)arg1 assetsDidRemoveForAssetIDs:(id)arg2 albumID:(id)arg3;	// IMP=0x000000010004eba8
- (void)sharedPSAccessObject:(id)arg1 assetsDidAddForAlbumID:(id)arg2 album:(id)arg3 assets:(id)arg4;	// IMP=0x000000010004e294
- (void)sharedPSAccessObject:(id)arg1 isAlbumUnviewedDidChangeForAlbumID:(id)arg2 album:(id)arg3;	// IMP=0x000000010004dc70
- (void)sharedPSAccessObject:(id)arg1 subsribersDidChangeForAlbumID:(id)arg2 subscriptionStatusDidChange:(_Bool)arg3;	// IMP=0x000000010004d934
- (void)sharedPSAccessObject:(id)arg1 albumMetadataDidChangeForAlbum:(id)arg2 albumID:(id)arg3;	// IMP=0x000000010004d594
- (void)sharedPSAccessObject:(id)arg1 albumsDidRemoveForAlbumIDs:(id)arg2 byAlsoRemovingViewableAlbums:(_Bool)arg3;	// IMP=0x000000010004d0e0
- (void)sharedPSAccessObject:(id)arg1 albumsDidAddByAlsoAddingViewableAlbums:(id)arg2 viewableAlbumsAdded:(_Bool)arg3;	// IMP=0x000000010004c804
- (void)sharedPSAccessObject:(id)arg1 willBeginSyncForPersonID:(id)arg2;	// IMP=0x000000010004c7f4
- (void)finishedCheckingChangesForMyPSAccessObject:(id)arg1 photoStreamAssets:(id)arg2;	// IMP=0x000000010004c268
- (void)assetsDidChangeForMyPSAccessObject:(id)arg1;	// IMP=0x000000010004bf10
- (void)executeQuery:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004bc80
- (_Bool)processQueryAsync:(id)arg1;	// IMP=0x000000010004bc78
- (_Bool)supportsProperty:(id)arg1;	// IMP=0x000000010004bc44
- (void)concreteDataClientDisconnect;	// IMP=0x000000010004bc38
- (void)concreteDataClientConnect;	// IMP=0x000000010004bb94
- (_Bool)didFinishSharedStreamsSync;	// IMP=0x000000010004bb84
- (id)photoStreamID;	// IMP=0x000000010004bb14
- (void)resolveMediaURLForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004b698
- (void)dealloc;	// IMP=0x000000010004b620
- (id)initWithSavedPersonID:(id)arg1;	// IMP=0x000000010004b564

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

