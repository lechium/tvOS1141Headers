/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class NSMapTable, MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelMovieBuilder, MPStoreModelPlaylistBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelTVShowBuilder;

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {

	NSMapTable* _baseContentItemIDToOccurrenceCount;
	MPStoreModelAlbumBuilder* _albumBuilder;
	MPStoreModelArtistBuilder* _artistBuilder;
	MPStoreModelMovieBuilder* _movieBuilder;
	MPStoreModelPlaylistBuilder* _playlistBuilder;
	MPStoreModelSongBuilder* _songBuilder;
	MPStoreModelTVEpisodeBuilder* _tvEpisodeBuilder;
	MPStoreModelTVSeasonBuilder* _tvSeasonBuilder;
	MPStoreModelTVShowBuilder* _tvShowBuilder;
	BOOL _shouldUsePlaylistEntry;
	BOOL _shouldUseUniqueContentItemIDs;

}

@property (assign,nonatomic) BOOL shouldUsePlaylistEntry;                     //@synthesize shouldUsePlaylistEntry=_shouldUsePlaylistEntry - In the implementation block
@property (assign,nonatomic) BOOL shouldUseUniqueContentItemIDs;              //@synthesize shouldUseUniqueContentItemIDs=_shouldUseUniqueContentItemIDs - In the implementation block
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 ;
-(id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg1 ;
-(BOOL)shouldUsePlaylistEntry;
-(void)setShouldUsePlaylistEntry:(BOOL)arg1 ;
-(BOOL)shouldUseUniqueContentItemIDs;
-(void)setShouldUseUniqueContentItemIDs:(BOOL)arg1 ;
@end

