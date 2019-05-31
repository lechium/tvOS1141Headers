/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAlbum.h>
#import <libobjc.A.dylib/PLSearchableAssetCollection.h>
#import <libobjc.A.dylib/PLUserEditableAlbumProtocol.h>

@class NSMutableOrderedSet, NSString, NSOrderedSet, NSSet, PLManagedAsset, NSArray, NSDate, NSNumber, UIImage, NSDictionary, NSURL;

@interface PLManagedAlbum : _PLManagedAlbum <PLSearchableAssetCollection, PLUserEditableAlbumProtocol> {

	BOOL _albumShouldBeAutomaticallyDeleted;
	BOOL _needsPersistenceUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL albumShouldBeAutomaticallyDeleted;                         //@synthesize albumShouldBeAutomaticallyDeleted=_albumShouldBeAutomaticallyDeleted - In the implementation block
@property (assign,nonatomic) BOOL needsPersistenceUpdate;                                    //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (nonatomic,retain) NSOrderedSet * assets; 
@property (nonatomic,retain) NSSet * assetOrders; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isWallpaperAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * userEditableAssets; 
+(void)clearAssetOrderByAbumUUIDs;
+(id)baseSearchIndexPredicate;
+(id)validKindsForPersistence;
+(id)pathToAssetAlbumOrderStructure;
+(id)assetOrderByAbumUUIDs;
+(id)albumSupportsAssetOrderKeysPredicate;
+(id)childKeyForOrdering;
+(id)keyPathsForValuesAffectingApproximateCount;
+(id)keyPathsForValuesAffectingPhotosCount;
+(id)keyPathsForValuesAffectingVideosCount;
+(id)searchIndexAllowedPredicate;
-(unsigned long long)photosCount;
-(BOOL)isEmpty;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)approximateCount;
-(unsigned long long)assetsCount;
-(unsigned long long)videosCount;
-(NSMutableOrderedSet *)mutableAssets;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(void)addAssetUsingiTunesAlbumOrder:(id)arg1 ;
-(void)updateKeyAssetsIfNeeded;
-(void)refreshAssets;
-(void)persistMetadataToFileSystem;
-(id)searchIndexContents;
-(unsigned long long)searchIndexCategory;
-(void)willSave;
-(void)prepareForDeletion;
-(BOOL)isValidKindForPersistence;
-(void)removePersistedFileSystemData;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(void)didSave;
-(BOOL)albumShouldBeAutomaticallyDeleted;
-(void)setAlbumShouldBeAutomaticallyDeleted:(BOOL)arg1 ;
-(BOOL)needsPersistenceUpdate;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4 ;
-(BOOL)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1 ;
-(void)_updateKeyAssetsIfNeeded:(id)arg1 ;
-(id)_expectedKeyAssets:(id)arg1 ;
-(id)_keysToBeObserved;
-(void)registerForChanges;
-(void)unregisterForChanges;
-(unsigned long long)_albumStandInCount;
-(id)_assetOrderByAssetUUID;
-(id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2 ;
-(id)childKeyForOrdering;
-(NSMutableOrderedSet *)userEditableAssets;
-(BOOL)supportsAssetOrderKeys;
-(unsigned long long)countOfInternalUserEditableAssets;
-(unsigned long long)indexInInternalUserEditableAssetsOfObject:(id)arg1 ;
-(id)objectInInternalUserEditableAssetsAtIndex:(unsigned long long)arg1 ;
-(void)getInternalUserEditableAssets:(id*)arg1 range:(NSRange)arg2 ;
-(id)internalUserEditableAssetsAtIndexes:(id)arg1 ;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeInternalUserEditableAssetsAtIndexes:(id)arg1 ;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(void)recalculateCachedCounts;
-(void)sortAssetsUsingiTunesAlbumOrder;
-(id)descriptionOfAssetOrderValues;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1 ;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
@end

