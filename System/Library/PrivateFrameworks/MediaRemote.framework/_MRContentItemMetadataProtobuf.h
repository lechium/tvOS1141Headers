/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying> {

	double _duration;
	double _elapsedTime;
	double _elapsedTimeTimestamp;
	long long _iTunesStoreAlbumIdentifier;
	long long _iTunesStoreArtistIdentifier;
	long long _iTunesStoreIdentifier;
	long long _iTunesStoreSubscriptionIdentifier;
	double _inferredTimestamp;
	long long _legacyUniqueIdentifier;
	long long _radioStationIdentifier;
	double _releaseDate;
	double _startTime;
	NSString* _albumArtistName;
	NSString* _albumName;
	NSData* _appMetricsData;
	int _artworkDataHeightDeprecated;
	int _artworkDataWidthDeprecated;
	NSString* _artworkIdentifier;
	NSString* _artworkMIMEType;
	NSString* _artworkURL;
	NSData* _artworkURLTemplatesData;
	NSString* _assetURLString;
	int _chapterCount;
	NSString* _collectionIdentifier;
	NSData* _collectionInfoData;
	NSString* _composer;
	NSString* _contentIdentifier;
	NSData* _currentPlaybackDateData;
	float _defaultPlaybackRate;
	NSData* _deviceSpecificUserInfoData;
	NSString* _directorName;
	int _discNumber;
	float _downloadProgress;
	int _downloadState;
	int _editingStyleFlags;
	int _episodeNumber;
	NSString* _genre;
	NSString* _localizedContentRating;
	NSString* _lyricsURL;
	int _mediaSubType;
	int _mediaType;
	NSData* _nowPlayingInfoData;
	int _numberOfSections;
	int _playCount;
	float _playbackProgress;
	float _playbackRate;
	int _playlistType;
	NSString* _profileIdentifier;
	NSData* _purchaseInfoData;
	NSString* _radioStationName;
	NSString* _radioStationString;
	int _radioStationType;
	int _seasonNumber;
	NSString* _seriesName;
	NSString* _serviceIdentifier;
	NSString* _subtitle;
	NSString* _title;
	int _totalDiscCount;
	int _totalTrackCount;
	NSString* _trackArtistName;
	int _trackNumber;
	NSData* _userInfoData;
	BOOL _artworkAvailable;
	BOOL _infoAvailable;
	BOOL _isAlwaysLive;
	BOOL _isContainer;
	BOOL _isCurrentlyPlaying;
	BOOL _isExplicitItem;
	BOOL _isInWishList;
	BOOL _isLiked;
	BOOL _isLoading;
	BOOL _isPlayable;
	BOOL _isSharable;
	BOOL _isSteerable;
	BOOL _isStreamingContent;
	BOOL _languageOptionsAvailable;
	BOOL _lyricsAvailable;
	SCD_Struct_MR8 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL hasIsContainer; 
@property (assign,nonatomic) BOOL isContainer;                                         //@synthesize isContainer=_isContainer - In the implementation block
@property (assign,nonatomic) BOOL hasIsPlayable; 
@property (assign,nonatomic) BOOL isPlayable;                                          //@synthesize isPlayable=_isPlayable - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackProgress; 
@property (assign,nonatomic) float playbackProgress;                                   //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) NSString * albumName;                                     //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,readonly) BOOL hasTrackArtistName; 
@property (nonatomic,retain) NSString * trackArtistName;                               //@synthesize trackArtistName=_trackArtistName - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbumArtistName; 
@property (nonatomic,retain) NSString * albumArtistName;                               //@synthesize albumArtistName=_albumArtistName - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectorName; 
@property (nonatomic,retain) NSString * directorName;                                  //@synthesize directorName=_directorName - In the implementation block
@property (assign,nonatomic) BOOL hasSeasonNumber; 
@property (assign,nonatomic) int seasonNumber;                                         //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (assign,nonatomic) BOOL hasEpisodeNumber; 
@property (assign,nonatomic) int episodeNumber;                                        //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (assign,nonatomic) BOOL hasReleaseDate; 
@property (assign,nonatomic) double releaseDate;                                       //@synthesize releaseDate=_releaseDate - In the implementation block
@property (assign,nonatomic) BOOL hasPlayCount; 
@property (assign,nonatomic) int playCount;                                            //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedContentRating; 
@property (nonatomic,retain) NSString * localizedContentRating;                        //@synthesize localizedContentRating=_localizedContentRating - In the implementation block
@property (assign,nonatomic) BOOL hasIsExplicitItem; 
@property (assign,nonatomic) BOOL isExplicitItem;                                      //@synthesize isExplicitItem=_isExplicitItem - In the implementation block
@property (assign,nonatomic) BOOL hasPlaylistType; 
@property (assign,nonatomic) int playlistType;                                         //@synthesize playlistType=_playlistType - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationType; 
@property (assign,nonatomic) int radioStationType;                                     //@synthesize radioStationType=_radioStationType - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkAvailable; 
@property (assign,nonatomic) BOOL artworkAvailable;                                    //@synthesize artworkAvailable=_artworkAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasInfoAvailable; 
@property (assign,nonatomic) BOOL infoAvailable;                                       //@synthesize infoAvailable=_infoAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasLanguageOptionsAvailable; 
@property (assign,nonatomic) BOOL languageOptionsAvailable;                            //@synthesize languageOptionsAvailable=_languageOptionsAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSections; 
@property (assign,nonatomic) int numberOfSections;                                     //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (assign,nonatomic) BOOL hasLyricsAvailable; 
@property (assign,nonatomic) BOOL lyricsAvailable;                                     //@synthesize lyricsAvailable=_lyricsAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasEditingStyleFlags; 
@property (assign,nonatomic) int editingStyleFlags;                                    //@synthesize editingStyleFlags=_editingStyleFlags - In the implementation block
@property (assign,nonatomic) BOOL hasIsStreamingContent; 
@property (assign,nonatomic) BOOL isStreamingContent;                                  //@synthesize isStreamingContent=_isStreamingContent - In the implementation block
@property (assign,nonatomic) BOOL hasIsCurrentlyPlaying; 
@property (assign,nonatomic) BOOL isCurrentlyPlaying;                                  //@synthesize isCurrentlyPlaying=_isCurrentlyPlaying - In the implementation block
@property (nonatomic,readonly) BOOL hasCollectionIdentifier; 
@property (nonatomic,retain) NSString * collectionIdentifier;                          //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasProfileIdentifier; 
@property (nonatomic,retain) NSString * profileIdentifier;                             //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkMIMEType; 
@property (nonatomic,retain) NSString * artworkMIMEType;                               //@synthesize artworkMIMEType=_artworkMIMEType - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetURLString; 
@property (nonatomic,retain) NSString * assetURLString;                                //@synthesize assetURLString=_assetURLString - In the implementation block
@property (nonatomic,readonly) BOOL hasComposer; 
@property (nonatomic,retain) NSString * composer;                                      //@synthesize composer=_composer - In the implementation block
@property (assign,nonatomic) BOOL hasDiscNumber; 
@property (assign,nonatomic) int discNumber;                                           //@synthesize discNumber=_discNumber - In the implementation block
@property (assign,nonatomic) BOOL hasElapsedTime; 
@property (assign,nonatomic) double elapsedTime;                                       //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,readonly) BOOL hasGenre; 
@property (nonatomic,retain) NSString * genre;                                         //@synthesize genre=_genre - In the implementation block
@property (assign,nonatomic) BOOL hasIsAlwaysLive; 
@property (assign,nonatomic) BOOL isAlwaysLive;                                        //@synthesize isAlwaysLive=_isAlwaysLive - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackRate; 
@property (assign,nonatomic) float playbackRate;                                       //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) BOOL hasChapterCount; 
@property (assign,nonatomic) int chapterCount;                                         //@synthesize chapterCount=_chapterCount - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDiscCount; 
@property (assign,nonatomic) int totalDiscCount;                                       //@synthesize totalDiscCount=_totalDiscCount - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTrackCount; 
@property (assign,nonatomic) int totalTrackCount;                                      //@synthesize totalTrackCount=_totalTrackCount - In the implementation block
@property (assign,nonatomic) BOOL hasTrackNumber; 
@property (assign,nonatomic) int trackNumber;                                          //@synthesize trackNumber=_trackNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasContentIdentifier; 
@property (nonatomic,retain) NSString * contentIdentifier;                             //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIsSharable; 
@property (assign,nonatomic) BOOL isSharable;                                          //@synthesize isSharable=_isSharable - In the implementation block
@property (assign,nonatomic) BOOL hasIsLiked; 
@property (assign,nonatomic) BOOL isLiked;                                             //@synthesize isLiked=_isLiked - In the implementation block
@property (assign,nonatomic) BOOL hasIsInWishList; 
@property (assign,nonatomic) BOOL isInWishList;                                        //@synthesize isInWishList=_isInWishList - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationIdentifier; 
@property (assign,nonatomic) long long radioStationIdentifier;                         //@synthesize radioStationIdentifier=_radioStationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationName; 
@property (nonatomic,retain) NSString * radioStationName;                              //@synthesize radioStationName=_radioStationName - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationString; 
@property (nonatomic,retain) NSString * radioStationString;                            //@synthesize radioStationString=_radioStationString - In the implementation block
@property (assign,nonatomic) BOOL hasITunesStoreIdentifier; 
@property (assign,nonatomic) long long iTunesStoreIdentifier;                          //@synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasITunesStoreSubscriptionIdentifier; 
@property (assign,nonatomic) long long iTunesStoreSubscriptionIdentifier;              //@synthesize iTunesStoreSubscriptionIdentifier=_iTunesStoreSubscriptionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasITunesStoreArtistIdentifier; 
@property (assign,nonatomic) long long iTunesStoreArtistIdentifier;                    //@synthesize iTunesStoreArtistIdentifier=_iTunesStoreArtistIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasITunesStoreAlbumIdentifier; 
@property (assign,nonatomic) long long iTunesStoreAlbumIdentifier;                     //@synthesize iTunesStoreAlbumIdentifier=_iTunesStoreAlbumIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPurchaseInfoData; 
@property (nonatomic,retain) NSData * purchaseInfoData;                                //@synthesize purchaseInfoData=_purchaseInfoData - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultPlaybackRate; 
@property (assign,nonatomic) float defaultPlaybackRate;                                //@synthesize defaultPlaybackRate=_defaultPlaybackRate - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadState; 
@property (assign,nonatomic) int downloadState;                                        //@synthesize downloadState=_downloadState - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadProgress; 
@property (assign,nonatomic) float downloadProgress;                                   //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMetricsData; 
@property (nonatomic,retain) NSData * appMetricsData;                                  //@synthesize appMetricsData=_appMetricsData - In the implementation block
@property (nonatomic,readonly) BOOL hasSeriesName; 
@property (nonatomic,retain) NSString * seriesName;                                    //@synthesize seriesName=_seriesName - In the implementation block
@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                            //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) BOOL hasMediaSubType; 
@property (assign,nonatomic) int mediaSubType;                                         //@synthesize mediaSubType=_mediaSubType - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingInfoData; 
@property (nonatomic,retain) NSData * nowPlayingInfoData;                              //@synthesize nowPlayingInfoData=_nowPlayingInfoData - In the implementation block
@property (nonatomic,readonly) BOOL hasUserInfoData; 
@property (nonatomic,retain) NSData * userInfoData;                                    //@synthesize userInfoData=_userInfoData - In the implementation block
@property (assign,nonatomic) BOOL hasIsSteerable; 
@property (assign,nonatomic) BOOL isSteerable;                                         //@synthesize isSteerable=_isSteerable - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkURL; 
@property (nonatomic,retain) NSString * artworkURL;                                    //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,readonly) BOOL hasLyricsURL; 
@property (nonatomic,retain) NSString * lyricsURL;                                     //@synthesize lyricsURL=_lyricsURL - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceSpecificUserInfoData; 
@property (nonatomic,retain) NSData * deviceSpecificUserInfoData;                      //@synthesize deviceSpecificUserInfoData=_deviceSpecificUserInfoData - In the implementation block
@property (nonatomic,readonly) BOOL hasCollectionInfoData; 
@property (nonatomic,retain) NSData * collectionInfoData;                              //@synthesize collectionInfoData=_collectionInfoData - In the implementation block
@property (assign,nonatomic) BOOL hasElapsedTimeTimestamp; 
@property (assign,nonatomic) double elapsedTimeTimestamp;                              //@synthesize elapsedTimeTimestamp=_elapsedTimeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInferredTimestamp; 
@property (assign,nonatomic) double inferredTimestamp;                                 //@synthesize inferredTimestamp=_inferredTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIdentifier; 
@property (nonatomic,retain) NSString * serviceIdentifier;                             //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkDataWidthDeprecated; 
@property (assign,nonatomic) int artworkDataWidthDeprecated;                           //@synthesize artworkDataWidthDeprecated=_artworkDataWidthDeprecated - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkDataHeightDeprecated; 
@property (assign,nonatomic) int artworkDataHeightDeprecated;                          //@synthesize artworkDataHeightDeprecated=_artworkDataHeightDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentPlaybackDateData; 
@property (nonatomic,retain) NSData * currentPlaybackDateData;                         //@synthesize currentPlaybackDateData=_currentPlaybackDateData - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkIdentifier; 
@property (nonatomic,retain) NSString * artworkIdentifier;                             //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIsLoading; 
@property (assign,nonatomic) BOOL isLoading;                                           //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkURLTemplatesData; 
@property (nonatomic,retain) NSData * artworkURLTemplatesData;                         //@synthesize artworkURLTemplatesData=_artworkURLTemplatesData - In the implementation block
@property (assign,nonatomic) BOOL hasLegacyUniqueIdentifier; 
@property (assign,nonatomic) long long legacyUniqueIdentifier;                         //@synthesize legacyUniqueIdentifier=_legacyUniqueIdentifier - In the implementation block
+(void)initialize;
-(id)initWithData:(id)arg1 ;
-(id)init;
-(BOOL)hasServiceIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(int)numberOfSections;
-(id)_init;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)composer;
-(double)startTime;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)dictionaryRepresentation;
-(BOOL)isLoading;
-(BOOL)hasTitle;
-(void)setComposer:(NSString *)arg1 ;
-(NSData *)userInfoData;
-(void)setUserInfoData:(NSData *)arg1 ;
-(double)elapsedTime;
-(BOOL)hasAlbumName;
-(id)_initWithData:(id)arg1 ;
-(NSString *)contentIdentifier;
-(void)setContentIdentifier:(NSString *)arg1 ;
-(BOOL)hasMediaType;
-(void)setHasMediaType:(BOOL)arg1 ;
-(void)setHasElapsedTime:(BOOL)arg1 ;
-(BOOL)hasElapsedTime;
-(void)setHasPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasPlaybackRate;
-(void)setRadioStationIdentifier:(long long)arg1 ;
-(void)setHasRadioStationIdentifier:(BOOL)arg1 ;
-(BOOL)hasRadioStationIdentifier;
-(BOOL)hasRadioStationName;
-(void)setIsAlwaysLive:(BOOL)arg1 ;
-(void)setHasIsAlwaysLive:(BOOL)arg1 ;
-(BOOL)hasIsAlwaysLive;
-(long long)radioStationIdentifier;
-(void)setArtworkMIMEType:(NSString *)arg1 ;
-(void)setAssetURLString:(NSString *)arg1 ;
-(void)setRadioStationString:(NSString *)arg1 ;
-(void)setPurchaseInfoData:(NSData *)arg1 ;
-(void)setAppMetricsData:(NSData *)arg1 ;
-(void)setNowPlayingInfoData:(NSData *)arg1 ;
-(void)setLyricsURL:(NSString *)arg1 ;
-(void)setDeviceSpecificUserInfoData:(NSData *)arg1 ;
-(void)setCollectionInfoData:(NSData *)arg1 ;
-(void)setCurrentPlaybackDateData:(NSData *)arg1 ;
-(void)setArtworkURLTemplatesData:(NSData *)arg1 ;
-(void)setIsContainer:(BOOL)arg1 ;
-(void)setHasIsContainer:(BOOL)arg1 ;
-(BOOL)hasIsContainer;
-(void)setIsPlayable:(BOOL)arg1 ;
-(void)setHasIsPlayable:(BOOL)arg1 ;
-(BOOL)hasIsPlayable;
-(void)setHasPlaybackProgress:(BOOL)arg1 ;
-(BOOL)hasPlaybackProgress;
-(BOOL)hasTrackArtistName;
-(BOOL)hasAlbumArtistName;
-(BOOL)hasDirectorName;
-(void)setHasSeasonNumber:(BOOL)arg1 ;
-(BOOL)hasSeasonNumber;
-(void)setHasEpisodeNumber:(BOOL)arg1 ;
-(BOOL)hasEpisodeNumber;
-(void)setHasReleaseDate:(BOOL)arg1 ;
-(BOOL)hasReleaseDate;
-(void)setHasPlayCount:(BOOL)arg1 ;
-(BOOL)hasPlayCount;
-(BOOL)hasLocalizedContentRating;
-(void)setIsExplicitItem:(BOOL)arg1 ;
-(void)setHasIsExplicitItem:(BOOL)arg1 ;
-(BOOL)hasIsExplicitItem;
-(void)setHasPlaylistType:(BOOL)arg1 ;
-(BOOL)hasPlaylistType;
-(void)setHasRadioStationType:(BOOL)arg1 ;
-(BOOL)hasRadioStationType;
-(void)setArtworkAvailable:(BOOL)arg1 ;
-(void)setHasArtworkAvailable:(BOOL)arg1 ;
-(BOOL)hasArtworkAvailable;
-(void)setInfoAvailable:(BOOL)arg1 ;
-(void)setHasInfoAvailable:(BOOL)arg1 ;
-(BOOL)hasInfoAvailable;
-(void)setLanguageOptionsAvailable:(BOOL)arg1 ;
-(void)setHasLanguageOptionsAvailable:(BOOL)arg1 ;
-(BOOL)hasLanguageOptionsAvailable;
-(void)setNumberOfSections:(int)arg1 ;
-(void)setHasNumberOfSections:(BOOL)arg1 ;
-(BOOL)hasNumberOfSections;
-(void)setLyricsAvailable:(BOOL)arg1 ;
-(void)setHasLyricsAvailable:(BOOL)arg1 ;
-(BOOL)hasLyricsAvailable;
-(void)setHasEditingStyleFlags:(BOOL)arg1 ;
-(BOOL)hasEditingStyleFlags;
-(void)setIsStreamingContent:(BOOL)arg1 ;
-(void)setHasIsStreamingContent:(BOOL)arg1 ;
-(BOOL)hasIsStreamingContent;
-(void)setIsCurrentlyPlaying:(BOOL)arg1 ;
-(void)setHasIsCurrentlyPlaying:(BOOL)arg1 ;
-(BOOL)hasIsCurrentlyPlaying;
-(BOOL)hasCollectionIdentifier;
-(BOOL)hasProfileIdentifier;
-(BOOL)hasArtworkMIMEType;
-(BOOL)hasAssetURLString;
-(BOOL)hasComposer;
-(void)setHasDiscNumber:(BOOL)arg1 ;
-(BOOL)hasDiscNumber;
-(BOOL)hasGenre;
-(void)setChapterCount:(int)arg1 ;
-(void)setHasChapterCount:(BOOL)arg1 ;
-(BOOL)hasChapterCount;
-(void)setHasTotalDiscCount:(BOOL)arg1 ;
-(BOOL)hasTotalDiscCount;
-(void)setHasTotalTrackCount:(BOOL)arg1 ;
-(BOOL)hasTotalTrackCount;
-(void)setHasTrackNumber:(BOOL)arg1 ;
-(BOOL)hasTrackNumber;
-(BOOL)hasContentIdentifier;
-(void)setIsSharable:(BOOL)arg1 ;
-(void)setHasIsSharable:(BOOL)arg1 ;
-(BOOL)hasIsSharable;
-(void)setIsLiked:(BOOL)arg1 ;
-(void)setHasIsLiked:(BOOL)arg1 ;
-(BOOL)hasIsLiked;
-(void)setIsInWishList:(BOOL)arg1 ;
-(void)setHasIsInWishList:(BOOL)arg1 ;
-(BOOL)hasIsInWishList;
-(BOOL)hasRadioStationString;
-(void)setHasITunesStoreIdentifier:(BOOL)arg1 ;
-(BOOL)hasITunesStoreIdentifier;
-(void)setITunesStoreSubscriptionIdentifier:(long long)arg1 ;
-(void)setHasITunesStoreSubscriptionIdentifier:(BOOL)arg1 ;
-(BOOL)hasITunesStoreSubscriptionIdentifier;
-(void)setITunesStoreArtistIdentifier:(long long)arg1 ;
-(void)setHasITunesStoreArtistIdentifier:(BOOL)arg1 ;
-(BOOL)hasITunesStoreArtistIdentifier;
-(void)setITunesStoreAlbumIdentifier:(long long)arg1 ;
-(void)setHasITunesStoreAlbumIdentifier:(BOOL)arg1 ;
-(BOOL)hasITunesStoreAlbumIdentifier;
-(BOOL)hasPurchaseInfoData;
-(void)setHasDefaultPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasDefaultPlaybackRate;
-(void)setHasDownloadState:(BOOL)arg1 ;
-(BOOL)hasDownloadState;
-(void)setHasDownloadProgress:(BOOL)arg1 ;
-(BOOL)hasDownloadProgress;
-(BOOL)hasAppMetricsData;
-(BOOL)hasSeriesName;
-(void)setMediaSubType:(int)arg1 ;
-(void)setHasMediaSubType:(BOOL)arg1 ;
-(BOOL)hasMediaSubType;
-(BOOL)hasNowPlayingInfoData;
-(BOOL)hasUserInfoData;
-(void)setIsSteerable:(BOOL)arg1 ;
-(void)setHasIsSteerable:(BOOL)arg1 ;
-(BOOL)hasIsSteerable;
-(BOOL)hasArtworkURL;
-(BOOL)hasLyricsURL;
-(BOOL)hasDeviceSpecificUserInfoData;
-(BOOL)hasCollectionInfoData;
-(void)setElapsedTimeTimestamp:(double)arg1 ;
-(void)setHasElapsedTimeTimestamp:(BOOL)arg1 ;
-(BOOL)hasElapsedTimeTimestamp;
-(void)setInferredTimestamp:(double)arg1 ;
-(void)setHasInferredTimestamp:(BOOL)arg1 ;
-(BOOL)hasInferredTimestamp;
-(void)setArtworkDataWidthDeprecated:(int)arg1 ;
-(void)setHasArtworkDataWidthDeprecated:(BOOL)arg1 ;
-(BOOL)hasArtworkDataWidthDeprecated;
-(void)setArtworkDataHeightDeprecated:(int)arg1 ;
-(void)setHasArtworkDataHeightDeprecated:(BOOL)arg1 ;
-(BOOL)hasArtworkDataHeightDeprecated;
-(BOOL)hasCurrentPlaybackDateData;
-(void)setHasIsLoading:(BOOL)arg1 ;
-(BOOL)hasIsLoading;
-(BOOL)hasArtworkURLTemplatesData;
-(void)setLegacyUniqueIdentifier:(long long)arg1 ;
-(void)setHasLegacyUniqueIdentifier:(BOOL)arg1 ;
-(BOOL)hasLegacyUniqueIdentifier;
-(BOOL)artworkAvailable;
-(BOOL)languageOptionsAvailable;
-(BOOL)lyricsAvailable;
-(BOOL)isCurrentlyPlaying;
-(NSString *)artworkMIMEType;
-(NSString *)assetURLString;
-(int)chapterCount;
-(BOOL)isSharable;
-(BOOL)isLiked;
-(NSString *)radioStationString;
-(long long)iTunesStoreIdentifier;
-(long long)iTunesStoreSubscriptionIdentifier;
-(long long)iTunesStoreArtistIdentifier;
-(long long)iTunesStoreAlbumIdentifier;
-(NSData *)purchaseInfoData;
-(NSData *)appMetricsData;
-(int)mediaSubType;
-(NSData *)nowPlayingInfoData;
-(NSString *)lyricsURL;
-(NSData *)deviceSpecificUserInfoData;
-(NSData *)collectionInfoData;
-(double)inferredTimestamp;
-(int)artworkDataWidthDeprecated;
-(int)artworkDataHeightDeprecated;
-(NSData *)currentPlaybackDateData;
-(NSData *)artworkURLTemplatesData;
-(long long)legacyUniqueIdentifier;
-(void)setPlayCount:(int)arg1 ;
-(BOOL)isPlayable;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(NSString *)collectionIdentifier;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumName;
-(void)setMediaType:(int)arg1 ;
-(BOOL)hasArtworkIdentifier;
-(BOOL)infoAvailable;
-(float)downloadProgress;
-(void)setDownloadProgress:(float)arg1 ;
-(void)setDefaultPlaybackRate:(float)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(float)defaultPlaybackRate;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(void)setArtworkURL:(NSString *)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)setPlaybackRate:(float)arg1 ;
-(void)setTrackArtistName:(NSString *)arg1 ;
-(void)setAlbumArtistName:(NSString *)arg1 ;
-(NSString *)genre;
-(int)discNumber;
-(void)setDiscNumber:(int)arg1 ;
-(void)setTotalDiscCount:(int)arg1 ;
-(void)setTrackNumber:(int)arg1 ;
-(void)setTotalTrackCount:(int)arg1 ;
-(BOOL)isAlwaysLive;
-(void)setRadioStationName:(NSString *)arg1 ;
-(void)setEditingStyleFlags:(int)arg1 ;
-(BOOL)isInWishList;
-(int)playlistType;
-(double)releaseDate;
-(int)trackNumber;
-(int)seasonNumber;
-(NSString *)albumArtistName;
-(void)setGenre:(NSString *)arg1 ;
-(float)playbackRate;
-(float)playbackProgress;
-(NSString *)artworkIdentifier;
-(BOOL)isExplicitItem;
-(NSString *)artworkURL;
-(void)setEpisodeNumber:(int)arg1 ;
-(NSString *)directorName;
-(NSString *)localizedContentRating;
-(NSString *)profileIdentifier;
-(NSString *)radioStationName;
-(NSString *)seriesName;
-(NSString *)trackArtistName;
-(int)episodeNumber;
-(int)totalDiscCount;
-(int)totalTrackCount;
-(BOOL)isSteerable;
-(int)radioStationType;
-(int)editingStyleFlags;
-(double)elapsedTimeTimestamp;
-(void)setReleaseDate:(double)arg1 ;
-(void)setDirectorName:(NSString *)arg1 ;
-(void)setLocalizedContentRating:(NSString *)arg1 ;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(void)setSeriesName:(NSString *)arg1 ;
-(void)setSeasonNumber:(int)arg1 ;
-(void)setPlaylistType:(int)arg1 ;
-(void)setRadioStationType:(int)arg1 ;
-(BOOL)isContainer;
-(BOOL)isStreamingContent;
-(void)setPlaybackProgress:(float)arg1 ;
-(int)mediaType;
-(int)playCount;
-(BOOL)hasSubtitle;
-(NSString *)serviceIdentifier;
-(void)setDownloadState:(int)arg1 ;
-(int)downloadState;
-(void)setITunesStoreIdentifier:(long long)arg1 ;
@end

