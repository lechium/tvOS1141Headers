/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaCollection.h>

@class TVHKMediaEntityType, NSString, TVHKMediaEntityIdentifier, NSArray, TVHKDAAPSeasonMediaCollectionIdentifier;

@interface TVHKDAAPSeasonMediaCollection : TVHKMediaCollection {

	BOOL _splitSeason;
	TVHKMediaEntityType* _type;
	NSString* _title;
	NSString* _albumTitle;
	NSString* _sortAlbumTitle;
	TVHKMediaEntityIdentifier* _albumIdentifier;
	NSArray* _episodes;
	NSString* _episodeAlbumTitle;
	NSString* _episodesMetadataHash;
	NSArray* _episodesSortedByAddedDate;
	NSArray* _episodesSortedByReleaseDate;
	TVHKDAAPSeasonMediaCollectionIdentifier* _seasonIdentifier;

}

@property (assign,getter=isSplitSeason,nonatomic) BOOL splitSeason;                                   //@synthesize splitSeason=_splitSeason - In the implementation block
@property (nonatomic,copy) NSString * episodeAlbumTitle;                                              //@synthesize episodeAlbumTitle=_episodeAlbumTitle - In the implementation block
@property (nonatomic,copy) NSString * episodesMetadataHash;                                           //@synthesize episodesMetadataHash=_episodesMetadataHash - In the implementation block
@property (nonatomic,copy) NSArray * episodesSortedByAddedDate;                                       //@synthesize episodesSortedByAddedDate=_episodesSortedByAddedDate - In the implementation block
@property (nonatomic,copy) NSArray * episodesSortedByReleaseDate;                                     //@synthesize episodesSortedByReleaseDate=_episodesSortedByReleaseDate - In the implementation block
@property (nonatomic,retain) TVHKDAAPSeasonMediaCollectionIdentifier * seasonIdentifier;              //@synthesize seasonIdentifier=_seasonIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * episodes;                                               //@synthesize episodes=_episodes - In the implementation block
-(id)identifier;
-(id)title;
-(id)type;
-(unsigned long long)protocol;
-(id)albumIdentifier;
-(id)addedDate;
-(unsigned long long)persistentID;
-(id)releaseDate;
-(id)seasonNumber;
-(id)albumTitle;
-(id)genreTitle;
-(id)imageIdentifier;
-(id)contentDescription;
-(unsigned long long)nonPersistentID;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(id)sortAlbumTitle;
-(NSArray *)episodes;
-(void)setSeasonIdentifier:(TVHKDAAPSeasonMediaCollectionIdentifier *)arg1 ;
-(TVHKDAAPSeasonMediaCollectionIdentifier *)seasonIdentifier;
-(void)setPlayedState:(long long)arg1 ;
-(unsigned long long)imageNonPersistentID;
-(id)addedToDate;
-(id)metadataKeyPaths;
-(long long)playedState;
-(id)mediaItemCount;
-(BOOL)isSplitSeason;
-(id)_titleIgnoringSeasonNumber;
-(id)_firstAddedEpisode;
-(BOOL)_allEpisodesHaveReleaseDates;
-(id)_latestEpisodeWithReleaseDate;
-(id)_lastAddedEpisode;
-(NSString *)episodeAlbumTitle;
-(NSArray *)episodesSortedByAddedDate;
-(NSArray *)episodesSortedByReleaseDate;
-(id)initWithMediaEntityServer:(id)arg1 seasonIdentifier:(id)arg2 show:(id)arg3 episodes:(id)arg4 isSplitSeason:(BOOL)arg5 ;
-(NSString *)episodesMetadataHash;
-(id)_earliestEpisodeWithReleaseDate;
-(void)setSplitSeason:(BOOL)arg1 ;
-(void)setEpisodeAlbumTitle:(NSString *)arg1 ;
-(void)setEpisodesMetadataHash:(NSString *)arg1 ;
-(void)setEpisodesSortedByAddedDate:(NSArray *)arg1 ;
-(void)setEpisodesSortedByReleaseDate:(NSArray *)arg1 ;
@end
