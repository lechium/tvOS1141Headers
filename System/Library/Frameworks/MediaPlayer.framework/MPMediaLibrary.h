/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;
@class NSObject, NSArray, QueryCriteriaResultsCache, NSMutableDictionary, NSMutableArray, NSPointerArray, NSURL, NSString, ML3MusicLibrary, NSDate;

@interface MPMediaLibrary : NSObject <NSSecureCoding> {

	id<MPMediaLibraryDataProviderPrivate> _libraryDataProvider;
	long long _libraryChangeObservers;
	NSObject*<OS_dispatch_queue> _entityCacheQueue;
	NSObject*<OS_dispatch_queue> _fixedQueue;
	NSArray* _notificationObservers;
	QueryCriteriaResultsCache* _itemsForCriteriaCache;
	QueryCriteriaResultsCache* _hasItemsForCriteriaCache;
	QueryCriteriaResultsCache* _countOfItemsForCriteriaCache;
	QueryCriteriaResultsCache* _itemResultSetsForCriteriaCache;
	QueryCriteriaResultsCache* _collectionsForCriteriaCache;
	QueryCriteriaResultsCache* _hasCollectionsForCriteriaCache;
	QueryCriteriaResultsCache* _countOfCollectionsForCriteriaCache;
	QueryCriteriaResultsCache* _collectionsResultSetsForCriteriaCache;
	NSMutableDictionary* _hasItemsDidLoadForCriteria;
	NSMutableDictionary* _hasCollectionsDidLoadForCriteria;
	NSMutableDictionary* _countOfCollectionsDidLoadForCriteria;
	NSMutableDictionary* _countOfItemsDidLoadForCriteria;
	NSMutableArray* _additionalLibraryFilterPredicates;
	NSObject*<OS_dispatch_queue> _additionalLibraryFilterPredicatesAccessQueue;
	NSPointerArray* _connectionAssertions;
	NSObject*<OS_dispatch_queue> _connectionAssertionsQueue;
	BOOL _disconnectAfterReleasingAssertions;
	float _connectionProgress;
	long long _removalReason;
	unsigned _determinedHasMedia : 1;
	unsigned _hasMedia : 1;
	unsigned _determinedHasSongs : 1;
	unsigned _hasSongs : 1;
	unsigned _determinedHasGeniusMixes : 1;
	unsigned _hasGeniusMixes : 1;
	unsigned _determinedHasPlaylists : 1;
	unsigned _hasPlaylists : 1;
	unsigned _determinedHasComposers : 1;
	unsigned _hasComposers : 1;
	unsigned _determinedHasPodcasts : 1;
	unsigned _hasPodcasts : 1;
	unsigned _determinedHasUbiquitousBookmarkableItems : 1;
	unsigned _hasUbiquitousBookmarkableContent : 1;
	unsigned _determinedHasAudiobooks : 1;
	unsigned _hasAudiobooks : 1;
	long long _cloudFilteringType;
	BOOL _filteringDisabled;
	BOOL _hasVideos;
	BOOL _determinedHasVideos;
	BOOL _hasMusicVideos;
	BOOL _determinedHasMusicVideos;
	BOOL _hasAudibleAudioBooks;
	BOOL _determinedHasAudibleAudioBooks;
	BOOL _hasMovies;
	BOOL _determinedHasMovies;
	BOOL _hasCompilations;
	BOOL _determinedHasCompilations;
	BOOL _hasITunesU;
	BOOL _determinedHasITunesU;
	BOOL _hasVideoITunesU;
	BOOL _determinedHasVideoITunesU;
	BOOL _hasMovieRentals;
	BOOL _determinedHasMovieRentals;
	BOOL _hasTVShows;
	BOOL _determinedHasTVShows;
	BOOL _hasHomeVideos;
	BOOL _determinedHasHomeVideos;
	BOOL _hasVideoPodcasts;
	BOOL _determinedHasVideoPodcasts;
	unsigned char _originalCellNetworkFlags;
	unsigned char _originalWiFiNetworkFlags;
	id __MLCoreStorage;

}

@property (nonatomic,readonly) shared_ptr<mlcore::DeviceLibrary>* _MediaLibrary_coreLibrary; 
@property (nonatomic,readonly) NSURL * protectedContentSupportStorageURL; 
@property (nonatomic,readonly) NSString * _syncValidity; 
@property (assign,nonatomic) long long removalReason; 
@property (nonatomic,retain) id _MLCoreStorage;                                                           //@synthesize _MLCoreStorage=__MLCoreStorage - In the implementation block
@property (nonatomic,readonly) ML3MusicLibrary * ml3Library; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(long long)authorizationStatus;
+(id)deviceMediaLibrary;
+(id)defaultMediaLibrary;
+(void)setRunLoopForNotifications:(id)arg1 ;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(id)mediaLibraries;
+(void)_endDiscoveringMediaLibrariesIfAllowed;
+(id)_mediaLibraries;
+(id)_libraryDataProviders;
+(id)_libraryForDataProvider:(id)arg1 ;
+(void)setDefaultMediaLibrary:(id)arg1 ;
+(void)beginDiscoveringMediaLibraries;
+(void)endDiscoveringMediaLibraries;
+(BOOL)isLibraryServerDisabled;
+(void)setLibraryServerDisabled:(BOOL)arg1 ;
+(id)sharedMediaLibraries;
+(id)mediaLibraryWithUniqueIdentifier:(id)arg1 ;
+(id)libraryDataProviders;
+(void)addLibraryDataProvider:(id)arg1 ;
+(void)removeLibraryDataProvider:(id)arg1 removalReason:(long long)arg2 ;
+(void)reloadLibraryDataProvider:(id)arg1 ;
+(void)postEntitiesAddedOrRemovedNotificationForLibraryDataProvider:(id)arg1 ;
+(void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1 ;
+(void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1 ;
+(void)reloadDisplayValuesForLibraryDataProvider:(id)arg1 ;
+(void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1 ;
+(void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(void)_disconnect;
-(long long)status;
-(void)disconnect;
-(id)uniqueIdentifier;
-(id)databasePath;
-(void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3 ;
-(shared_ptr<mlcore::DeviceLibrary>*)_MediaLibrary_coreLibrary;
-(id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(BOOL)arg2 ;
-(id)playlistWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)removePlaylist:(id)arg1 ;
-(BOOL)deleteItems:(id)arg1 ;
-(id)errorResolverForItem:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(id)connectionAssertionWithIdentifier:(id)arg1 ;
-(ML3MusicLibrary *)ml3Library;
-(id)preferredAudioLanguages;
-(id)preferredSubtitleLanguages;
-(id)completeMyCollectionArtworkDataSource;
-(id)artworkDataSource;
-(void)beginGeneratingLibraryChangeNotifications;
-(void)endGeneratingLibraryChangeNotifications;
-(NSURL *)protectedContentSupportStorageURL;
-(id)_MLCoreStorage;
-(void)set_MLCoreStorage:(id)arg1 ;
-(BOOL)isGeniusEnabled;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performStoreItemLibraryImport:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 ;
-(id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 verifyExistence:(BOOL)arg3 ;
-(id)libraryDataProvider;
-(BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4 ;
-(BOOL)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 ;
-(BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5 ;
-(void)addItemWithProductID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)itemExistsWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 ;
-(id)entityWithMultiverseIdentifier:(id)arg1 ;
-(id)_itemsForQueryCriteria:(id)arg1 ;
-(id)_collectionsForQueryCriteria:(id)arg1 ;
-(BOOL)_hasItemsForQueryCriteria:(id)arg1 ;
-(BOOL)_hasCollectionsForQueryCriteria:(id)arg1 ;
-(unsigned long long)_countOfItemsForQueryCriteria:(id)arg1 ;
-(unsigned long long)_countOfCollectionsForQueryCriteria:(id)arg1 ;
-(id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1 ;
-(id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1 ;
-(id)newPlaylistWithPersistentID:(unsigned long long)arg1 ;
-(id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2 ;
-(id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1 ;
-(id)entityWithPersistentID:(long long)arg1 entityType:(long long)arg2 ;
-(id)itemWithPersistentID:(unsigned long long)arg1 ;
-(id)decodeItemWithCoder:(id)arg1 ;
-(void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 ;
-(void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)clearLocationPropertiesOfItem:(id)arg1 ;
-(void)_clearPendingDisconnection;
-(void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1 ;
-(void)_scheduleLibraryChangeNotificationPostingBlock:(/*^block*/id)arg1 ;
-(void)_setupNotifications;
-(void)setLibraryFilterPredicates;
-(void)_tearDownNotifications;
-(void)_clearCachedEntitiesIncludingResultSets:(BOOL)arg1 ;
-(void)_clearCachedContentDataAndResultSets:(BOOL)arg1 ;
-(void)_reloadLibraryForRestrictionsChange;
-(unsigned long long)currentEntityRevision;
-(unsigned long long)syncGenerationID;
-(long long)playlistGeneration;
-(BOOL)writable;
-(BOOL)hasMediaOfType:(unsigned long long)arg1 ;
-(BOOL)hasGeniusMixes;
-(BOOL)hasSongs;
-(BOOL)hasUbiquitousBookmarkableItems;
-(BOOL)_checkHasContent:(BOOL*)arg1 determined:(BOOL*)arg2 mediaType:(unsigned long long)arg3 queryHasEntitiesBlock:(/*^block*/id)arg4 ;
-(BOOL)_checkHasContent:(BOOL*)arg1 determined:(BOOL*)arg2 queryHasEntitiesBlock:(/*^block*/id)arg3 ;
-(BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1 ;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(id)localizedSectionIndexTitles;
-(id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(BOOL)arg2 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(void)geniusItemsForSeedItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)requiresAuthentication;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performReadTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCurrentThreadInTransaction;
-(id)syncValidity;
-(id)entityCache;
-(id)entityWithLibraryURL:(id)arg1 ;
-(unsigned long long)_persistentIDForAssetURL:(id)arg1 ;
-(BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(BOOL)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(/*^block*/id)arg5 loadValueFromDataProviderBlock:(/*^block*/id)arg6 ;
-(id)additionalLibraryFilterPredicates;
-(long long)cloudFilteringType;
-(void)_canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)_displayValuesDidChangeNotification:(id)arg1 ;
-(id)_initWithLibraryDataProvider:(id)arg1 ;
-(void)setRemovalReason:(long long)arg1 ;
-(void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1 ;
-(void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1 ;
-(void)addStoreItemIDs:(id)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addTracksToMyLibrary:(id)arg1 ;
-(void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1 ;
-(BOOL)recordPlayEventForPlaylistPersistentID:(long long)arg1 ;
-(void)addLibraryFilterPredicate:(id)arg1 ;
-(void)removeLibraryFilterPredicate:(id)arg1 ;
-(long long)removalReason;
-(BOOL)hasMedia;
-(BOOL)hasPlaylists;
-(BOOL)hasArtists;
-(BOOL)hasAlbums;
-(BOOL)hasPodcasts;
-(BOOL)hasGenres;
-(BOOL)hasComposers;
-(BOOL)hasAudiobooks;
-(BOOL)hasVideos;
-(BOOL)hasMusicVideos;
-(BOOL)hasAudibleAudioBooks;
-(BOOL)hasMovies;
-(BOOL)hasCompilations;
-(BOOL)hasITunesUContent;
-(BOOL)hasAudioITunesUContent;
-(BOOL)hasVideoITunesUContent;
-(BOOL)hasMovieRentals;
-(BOOL)hasTVShows;
-(BOOL)hasHomeVideos;
-(BOOL)hasVideoPodcasts;
-(BOOL)itemExistsInDatabaseWithPersistentID:(unsigned long long)arg1 ;
-(id)itemWithStoreID:(unsigned long long)arg1 ;
-(id)playbackHistoryPlaylist;
-(id)addPlaylistWithName:(id)arg1 ;
-(void)setSyncPlaylistId:(unsigned long long)arg1 ;
-(unsigned long long)syncPlaylistId;
-(unsigned)homeSharingDatabaseID;
-(id)URLForHomeSharingRequest:(id)arg1 ;
-(BOOL)removeItems:(id)arg1 ;
-(void)downloadAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)connectWithAuthenticationData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(float)connectionProgress;
-(id)entityWithSpotlightIdentifier:(id)arg1 ;
-(BOOL)isValidAssetURL:(id)arg1 ;
-(id)pathForAssetURL:(id)arg1 ;
-(void)setCloudFilteringType:(long long)arg1 ;
-(void)_removeConnectionAssertion:(id)arg1 ;
-(void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addAdvertisementItemWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPlaylistWithUUID:(id)arg1 creationMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addPlaylistStoreItemsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 inUsersLibrary:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSString *)_syncValidity;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)filterAvailableContentGroups:(unsigned long long)arg1 withOptions:(unsigned long long)arg2 ;
@end

