/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@protocol OS_dispatch_queue;
@class NSObject, MPMediaItem, NSDictionary;

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasValidMediaItemValuesForProperties;
	BOOL _hasEvaluatedOfflineHLS;
	BOOL _isOfflineHLS;
	MPMediaItem* _mediaItem;
	NSDictionary* _mediaItemValuesForProperties;
	NSDictionary* _playbackKeys;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (getter=_writeQueue,nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;              //@synthesize writeQueue=_writeQueue - In the implementation block
@property (nonatomic,retain) MPMediaItem * mediaItem; 
+(id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)arg1 storeAdamID:(long long)arg2 storeSagaID:(unsigned long long)arg3 assetQuality:(unsigned long long)arg4 assetFlavor:(id)arg5 protectionType:(unsigned long long)arg6 pathExtension:(id)arg7 ;
+(id)_highQualityCachedAssetDestinationDirectory;
+(id)_lowQualityCachedAssetDestinationDirectory;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(MPMediaItem *)mediaItem;
-(double)bookmarkTime;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(long long)storeSubscriptionAdamID;
-(BOOL)isExplicitTrack;
-(id)modelGenericObject;
-(BOOL)isSubscriptionRequired;
-(long long)endpointType;
-(BOOL)shouldRememberBookmarkTime;
-(id)copyrightText;
-(id)artistName;
-(id)composerName;
-(BOOL)showComposer;
-(long long)storeAdamID;
-(id)albumArtistName;
-(long long)albumStoreAdamID;
-(id)albumTitle;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(long long)artistStoreAdamID;
-(id)contentTitle;
-(double)expectedDuration;
-(unsigned long long)storeSagaID;
-(id)buyParameters;
-(id)initWithMediaItem:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(id)_mediaItemValuesForProperties;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(BOOL*)arg4 ;
-(id)_onqueue_mediaItemValuesForProperties;
-(unsigned long long)storeAccountID;
-(BOOL)shouldReportPlayEventsToStore;
-(id)localNetworkContentURL;
-(id)protectedContentSupportStorageURL;
-(id)_writeQueue;
-(long long)mediaLibraryPersistentID;
-(void)_invalidateMediaItemProperties;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
-(long long)downloadIdentifier;
-(BOOL)prefersStoreContentInfo;
-(id)hlsPlaylistURLString;
-(id)hlsOfflinePlaybackKeys;
-(BOOL)isOfflineHLS;
-(id)iTunesStoreContentID;
-(id)iTunesStoreContentDSID;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)storeUbiquitousIdentifier;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4 ;
-(float)volumeNormalization;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(void)_persistURI:(id)arg1 persistentContentKey:(id)arg2 ;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)contentType;
@end

