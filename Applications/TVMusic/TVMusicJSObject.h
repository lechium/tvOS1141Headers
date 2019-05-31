//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVJSITunesStore.h"

#import "TVCKPushNotificationListener.h"
#import "TVMusicJSObject.h"

@class NSString, TVMusicLibraryManager;

@interface TVMusicJSObject : TVJSITunesStore <TVCKPushNotificationListener, TVMusicJSObject>
{
    _Bool _isMusicLibrarySynced;	// 8 = 0x8
    _Bool _radioHistoryInitialized;	// 9 = 0x9
    TVMusicLibraryManager *_libraryManager;	// 16 = 0x10
    _Bool _isProcessingPlayCommand;	// 24 = 0x18
}

+ (void)getPlayingStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a6094
+ (void)getURLForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a5dfc
+ (void)getURLForArtworkCatalog:(id)arg1 mpObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a5a4c
+ (void)findItemInLibraryWithType:(id)arg1 cloudID:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000a4e44
+ (void)querySongsForAlbumWithPersistentID:(id)arg1 options:(id)arg2 range:(struct _NSRange)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000a4798
+ (void)queryRecentlyAdded:(id)arg1 range:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a3050
+ (void)queryMediaLibrary:(id)arg1 maxItems:(long long)arg2 searchTerm:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000a1bd4
+ (void)removePlaylistFromMusicLibraryWithGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a1a58
+ (void)queryMusicLibraryForPlaylistWithCloudGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a15a0
@property _Bool isProcessingPlayCommand; // @synthesize isProcessingPlayCommand=_isProcessingPlayCommand;
- (void).cxx_destruct;	// IMP=0x0000000100086ba4
- (void)pushNotificationServerTokenDidChange:(id)arg1;	// IMP=0x0000000100086b74
- (void)pushNotificationServer:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100086a7c
- (_Bool)_needsSubscriptionForPlayItem:(id)arg1;	// IMP=0x00000001000869b4
- (void)_jsCallbackWithIdentifier:(id)arg1 args:(id)arg2;	// IMP=0x0000000100086780
- (id)_prepareCallback:(id)arg1;	// IMP=0x00000001000866d0
- (id)_modelKindForItemTypeString:(id)arg1;	// IMP=0x00000001000864e0
- (id)_getPlayEventFromOptions:(id)arg1;	// IMP=0x0000000100086044
- (id)_getRecommendationDataFromOptions:(id)arg1;	// IMP=0x0000000100085f90
- (id)_getFeatureNameFromOptions:(id)arg1;	// IMP=0x0000000100085f24
- (_Bool)_isItemInLibraryWithIdentifiers:(id)arg1 itemKind:(id)arg2;	// IMP=0x0000000100085cc4
- (_Bool)_isItemInLibraryWithStoreDictionary:(id)arg1;	// IMP=0x0000000100085afc
- (void)_registerForStorePushNotifications;	// IMP=0x0000000100085a58
- (void)_callJSMusicUpdatedNotification;	// IMP=0x0000000100085a40
- (void)_callJSMusicInitializedNotification;	// IMP=0x0000000100085834
- (void)_callJSMethodNamed:(id)arg1 withArgs:(id)arg2;	// IMP=0x000000010008553c
- (void)_libraryWasUpdated:(id)arg1;	// IMP=0x0000000100085530
- (void)_libraryManagerStateChanged:(id)arg1;	// IMP=0x00000001000854a4
- (void)_setupMusicLibraryNotification;	// IMP=0x00000001000852a8
- (void)_getDictionaryForGenericObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100084854
- (void)_playbackErrorDidOccur:(id)arg1;	// IMP=0x0000000100084360
- (void)_playbackContainerDidChange:(id)arg1;	// IMP=0x0000000100084270
- (void)_subscriptionStatusDidChange:(id)arg1;	// IMP=0x00000001000840fc
- (void)_recentRadioStationsDidChange:(id)arg1;	// IMP=0x0000000100083e38
- (_Bool)_isStoreSongExplicit:(id)arg1;	// IMP=0x0000000100083e14
- (long long)_ratingRankingFromStoreDictionary:(id)arg1;	// IMP=0x0000000100083d1c
- (id)_firstPlayIdentifierForSongDict:(id)arg1;	// IMP=0x0000000100083c44
- (id)_storeDictForSongInCollection:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000001000839a8
- (id)_stringifyID:(id)arg1;	// IMP=0x0000000100083900
- (void)_addPAFDataToPlaybackIntent:(id)arg1 options:(id)arg2;	// IMP=0x0000000100083778
- (id)_dictionaryForRadioStation:(id)arg1;	// IMP=0x00000001000835b8
- (void)getBookmarkDataForItems:(id)arg1:(id)arg2;	// IMP=0x0000000100082bac
- (id)_storeObjectFromPlatformDictionary:(id)arg1;	// IMP=0x00000001000828b0
- (id)_songFromPlatformDictionary:(id)arg1;	// IMP=0x0000000100082784
- (void)presentContextMenuForItemWithOptions:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000100080a58
- (void)presentContextMenuForItem:(id)arg1:(id)arg2;	// IMP=0x0000000100080a04
- (void)presentDetailView:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x000000010007f6f0
- (void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1:(id)arg2;	// IMP=0x000000010007f4d8
@property(readonly) _Bool isMusicLibraryInitialized;
- (void)getCurrentIsPlayingState:(id)arg1;	// IMP=0x000000010007f2f8
- (void)getNowPlayingInfoWithOptions:(id)arg1:(id)arg2;	// IMP=0x000000010007eb44
- (void)getNowPlayingInfo:(id)arg1;	// IMP=0x000000010007ea48
- (void)findItemInLibraryByCloudID:(id)arg1:(id)arg2:(id)arg3:(id)arg4;	// IMP=0x000000010007e820
- (void)querySongsForAlbumWithPersistentID:(id)arg1:(id)arg2:(struct _NSRange)arg3:(id)arg4;	// IMP=0x000000010007e5fc
- (void)queryRecentlyAdded:(id)arg1:(struct _NSRange)arg2:(id)arg3;	// IMP=0x000000010007e3fc
- (void)queryMusicLibraryForSongsWithAdamIDs:(id)arg1:(id)arg2;	// IMP=0x000000010007daa0
- (void)removeItemFromMediaLibraryWithPersistentID:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x000000010007d494
- (_Bool)isStoreItemInLibrary:(id)arg1;	// IMP=0x000000010007d488
- (void)queryMediaLibraryWithStoreID:(id)arg1:(id)arg2:(id)arg3:(id)arg4;	// IMP=0x000000010007cd88
- (void)queryMediaLibrary:(id)arg1:(long long)arg2:(id)arg3:(id)arg4:(id)arg5;	// IMP=0x000000010007cb28
- (void)removeItemsFromMusicLibraryWithSagaIDs:(id)arg1:(id)arg2;	// IMP=0x000000010007c850
- (void)removePlaylistFromMusicLibraryWithGlobalID:(id)arg1:(id)arg2;	// IMP=0x000000010007c610
- (void)addPlaylistToMusicLibraryWithGlobalID:(id)arg1:(id)arg2;	// IMP=0x000000010007c1e4
- (void)addToMusicLibraryWithAdamID:(id)arg1:(id)arg2;	// IMP=0x000000010007bf30
- (void)queryMusicLibraryForPlaylistWithCloudGlobalID:(id)arg1:(id)arg2;	// IMP=0x000000010007bd48
- (void)getRecentRadioStations:(id)arg1;	// IMP=0x000000010007b6dc
- (void)playRadioStation:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x000000010007b1a8
- (void)playItems:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000100077e24
@property(readonly) unsigned long long musicAppAPIVersion;
- (void)dealloc;	// IMP=0x0000000100077d6c
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000100077b90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

