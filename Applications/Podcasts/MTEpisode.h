//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "IMMetricsDataSource.h"
#import "MTEpisodeIdentifierProvider.h"

@class MTPodcast, NSAttributedString, NSSet, NSString;

@interface MTEpisode : NSManagedObject <IMMetricsDataSource, MTEpisodeIdentifierProvider>
{
}

+ (void)parseAndPersistHTMLDescriptionIfNeededForEpisodeUuid:(id)arg1;	// IMP=0x000000010001a0cc
+ (_Bool)isExternalMedia:(id)arg1;	// IMP=0x00000001000192e8
+ (_Bool)exists:(id)arg1;	// IMP=0x00000001000190a8
+ (_Bool)isSaveSupported;	// IMP=0x00000001000190a0
+ (long long)downloadSizeLimitForVideo:(_Bool)arg1;	// IMP=0x0000000100019098
+ (long long)downloadSizeLimitForEpisode:(id)arg1;	// IMP=0x000000010001905c
+ (id)timeRemainingStringForEpisode:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x0000000100018e84
+ (id)timeRemainingStringForEpisode:(id)arg1;	// IMP=0x0000000100018e74
+ (id)friendlyPubDateStringForEpisode:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x0000000100018dc0
+ (id)friendlyPubDateStringForEpisode:(id)arg1;	// IMP=0x0000000100018db0
+ (id)dateLabelDescriptionForEpisode:(id)arg1 download:(id)arg2;	// IMP=0x0000000100018b84
+ (id)episodeWithEnclosureURL:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x00000001000189a8
+ (id)episodeWithMetadataIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x00000001000187d8
+ (id)insertNewEpisodeInManagedObjectContext:(id)arg1;	// IMP=0x0000000100018668
+ (id)insertNewEpisodeInManagedObjectContext:(id)arg1 title:(id)arg2 podcast:(id)arg3 pubDate:(id)arg4 byteSize:(long long)arg5 guid:(id)arg6 uti:(id)arg7 contentId:(long long)arg8 enclosureUrl:(id)arg9 playStateSource:(int)arg10 importSource:(int)arg11;	// IMP=0x0000000100018420
+ (id)formattedStringCache;	// IMP=0x00000001000183c8
+ (_Bool)isPlayhead:(double)arg1 resumableForDuration:(double)arg2;	// IMP=0x00000001000efe68
+ (double)endOfTrackForDuration:(double)arg1;	// IMP=0x00000001000efe48
+ (id)predicateForPodcastIsHidden:(_Bool)arg1;	// IMP=0x00000001000efdb8
+ (id)sortDescriptorsForSeasonsWithOldestEpisodesFirst:(_Bool)arg1;	// IMP=0x0000000100150148
+ (id)sortDescriptorsForListenNow;	// IMP=0x0000000100150024
+ (id)sortDescriptorsForTitle;	// IMP=0x000000010014fefc
+ (id)sortDescriptorsForLastDatePlayedAscending:(_Bool)arg1;	// IMP=0x000000010014fdc8
+ (id)sortDescriptorsForPubDateAscending:(_Bool)arg1;	// IMP=0x000000010014fc94
+ (id)predicateForEpisodesWithSeasonNumbersOnPodcastUuid:(id)arg1;	// IMP=0x000000010018be9c
+ (id)predicateForSeasonNumber:(long long)arg1;	// IMP=0x000000010018bdd8
+ (id)predicateForHasSeasonNumber;	// IMP=0x000000010018bd94
+ (id)predicateForEpisodeTitle:(id)arg1 onPodcastUuid:(id)arg2;	// IMP=0x000000010018bd10
+ (id)predicateForEpisodeGuid:(id)arg1 onPodcastUuid:(id)arg2;	// IMP=0x000000010018bc8c
+ (id)predicateForEpisodeStoreTrackIds:(id)arg1;	// IMP=0x000000010018bb18
+ (id)predicateForEpisodeStoreTrackId:(long long)arg1;	// IMP=0x000000010018ba1c
+ (id)predicateForMyEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010018b9b8
+ (id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010018b758
+ (id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010018b4f8
+ (id)predicateForEpisodesInStationShow:(id)arg1;	// IMP=0x000000010018b4a4
+ (id)predicateForNewEpisodesOnPodcastUuid:(id)arg1;	// IMP=0x000000010018b414
+ (id)predicateForEpisodesPublishedThisMonth;	// IMP=0x000000010018b1f0
+ (id)predicateForEpisodesPublishedThisWeek;	// IMP=0x000000010018afcc
+ (id)predicateForEpisodesPublishedToday;	// IMP=0x000000010018ae1c
+ (id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x000000010018ad00
+ (id)predicateForEpisodesOnSavedTabForPodcastUuid:(id)arg1;	// IMP=0x000000010018ac18
+ (id)predicateForEpisodesInFeedForPodcastUuid:(id)arg1;	// IMP=0x000000010018ab88
+ (id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x000000010018aa58
+ (id)predicateForMyEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x000000010018aa4c
+ (id)predicateForEpisodesFromiTunesOnPodcastUuid:(id)arg1;	// IMP=0x000000010018a9bc
+ (id)predicateForRecentlyPlayedEpisodesToBeDeletedOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(_Bool)arg2;	// IMP=0x000000010018a800
+ (id)predicateForOtherEpisodesOnPodcastUuid:(id)arg1 limittedEpisodesPredicate:(id)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x000000010018a544
+ (id)predicateForEpisodeTypeFilter:(long long)arg1;	// IMP=0x000000010018a400
+ (id)predicateForEpisodeType:(long long)arg1;	// IMP=0x000000010018a304
+ (id)predicateForEpisodesImportedAfterDate:(id)arg1;	// IMP=0x000000010018a2a8
+ (id)predicateForEpisodeTitle:(id)arg1;	// IMP=0x000000010018a264
+ (id)predicateForPersitentId:(id)arg1;	// IMP=0x000000010018a220
+ (id)predicateForEpisodeGuids:(id)arg1;	// IMP=0x000000010018a194
+ (id)predicateForEpisodeGuid:(id)arg1;	// IMP=0x000000010018a150
+ (id)predicateForEpisodeUuids:(id)arg1;	// IMP=0x000000010018a0c4
+ (id)predicateForEpisodeUuid:(id)arg1;	// IMP=0x000000010018a080
+ (id)predicateForHasBeenPlayed;	// IMP=0x000000010018a03c
+ (id)predicateForRecentlyPlayed;	// IMP=0x0000000100189f00
+ (id)predicateForExternalType:(_Bool)arg1;	// IMP=0x0000000100189e70
+ (id)predicateForMetadataFirstSyncEligible:(_Bool)arg1;	// IMP=0x0000000100189de0
+ (id)predicateForAudio:(_Bool)arg1;	// IMP=0x0000000100189d50
+ (id)predicateForVideo:(_Bool)arg1;	// IMP=0x0000000100189cc0
+ (id)predicateForFeedDeleted:(_Bool)arg1;	// IMP=0x0000000100189c30
+ (id)predicateForFromiTunes:(_Bool)arg1;	// IMP=0x0000000100189ba0
+ (id)predicateForDownloaded:(_Bool)arg1;	// IMP=0x0000000100189b38
+ (id)predicateForPlayStateManuallySet:(_Bool)arg1;	// IMP=0x0000000100189aa8
+ (id)predicateForListenNow;	// IMP=0x0000000100189968
+ (id)predicateForUserEpisodes;	// IMP=0x00000001001898d4
+ (id)predicateForEpisodesOnUnplayedTab;	// IMP=0x0000000100189840
+ (id)predicateForPreviouslyPlayed;	// IMP=0x00000001001897b0
+ (id)predicateForVisuallyPlayed:(_Bool)arg1;	// IMP=0x00000001001896c4
+ (id)predicateForIsBackCatalogItem;	// IMP=0x00000001001895d8
+ (id)predicateForBacklog:(_Bool)arg1;	// IMP=0x0000000100189548
+ (id)predicateForSavedTab:(_Bool)arg1;	// IMP=0x000000010018945c
+ (id)predicateForUserEpisode:(_Bool)arg1;	// IMP=0x00000001001893cc
+ (id)predicateForUnplayedTabFlag:(_Bool)arg1;	// IMP=0x000000010018933c
+ (id)predicateForPlayed:(_Bool)arg1;	// IMP=0x0000000100189240
+ (id)predicateForExplicit:(_Bool)arg1;	// IMP=0x00000001001891b0
+ (id)predicateForSentNotification:(_Bool)arg1;	// IMP=0x0000000100189120
+ (id)predicateForIsNew:(_Bool)arg1;	// IMP=0x0000000100189090
+ (id)predicateForSuppressAutoDownload:(_Bool)arg1;	// IMP=0x0000000100189000
+ (id)predicateForSaved:(_Bool)arg1;	// IMP=0x0000000100188f70
+ (id)predicateForSavedEpisodesOnPodcastUuid:(id)arg1;	// IMP=0x0000000100188ee0
+ (id)predicateForAllEpisodesOnPodcastUuid:(id)arg1;	// IMP=0x0000000100188e9c
+ (id)predicateForLimittedEpisodesOnPodcastUuid:(id)arg1 determinedByLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x0000000100188cc8
+ (id)predicateForEpisodesDeterminedByLimitSettings:(long long)arg1;	// IMP=0x0000000100188ad8
+ (id)userDefaultPropertiesAffectingPredicates;	// IMP=0x0000000100188a20
+ (id)artworkForEpisodeUuid:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000001001a7c84
- (id)metricsContentIdentifier;	// IMP=0x000000010001c108
@property(nonatomic) long long storeTrackId; // @dynamic storeTrackId;
- (_Bool)isCurrentPlayerItem;	// IMP=0x000000010001bfcc
- (_Bool)isSaved;	// IMP=0x000000010001bfc0
@property(nonatomic) _Bool saved; // @dynamic saved;
- (void)setNew:(_Bool)arg1 source:(int)arg2;	// IMP=0x000000010001bd00
@property(nonatomic) _Bool listenNowEpisode; // @dynamic listenNowEpisode;
@property(nonatomic) double lastDatePlayed; // @dynamic lastDatePlayed;
@property(nonatomic) float playhead; // @dynamic playhead;
- (void)setPlayState:(long long)arg1 manually:(_Bool)arg2 source:(int)arg3;	// IMP=0x000000010001b248
- (void)setPlayed:(_Bool)arg1 manually:(_Bool)arg2 source:(int)arg3;	// IMP=0x000000010001b230
- (void)incremementPlayCount;	// IMP=0x000000010001b1f8
@property(nonatomic) long long playCount; // @dynamic playCount;
@property(retain, nonatomic) MTPodcast *podcast; // @dynamic podcast;
@property(nonatomic) _Bool metadataFirstSyncEligible; // @dynamic metadataFirstSyncEligible;
- (void)updateUPPTimestamp;	// IMP=0x000000010001af1c
- (void)updateUPPIdentifierIfNeeded;	// IMP=0x000000010001adf8
@property(nonatomic) long long persistentID; // @dynamic persistentID;
@property(retain, nonatomic) NSString *assetURL; // @dynamic assetURL;
- (_Bool)isMedia;	// IMP=0x000000010001ab00
@property(retain, nonatomic) NSString *uti; // @dynamic uti;
- (_Bool)isExternalType;	// IMP=0x000000010001a91c
- (_Bool)isAudio;	// IMP=0x000000010001a910
- (_Bool)isVideo;	// IMP=0x000000010001a904
- (id)playedTextForCarplay;	// IMP=0x000000010001a698
- (id)playedText;	// IMP=0x000000010001a524
- (void)_setValue:(id)arg1 forKey:(id)arg2 asynchronously:(_Bool)arg3;	// IMP=0x000000010001a2a0
- (id)lazyDescriptionWithHTML:(_Bool)arg1;	// IMP=0x0000000100019fb8
@property(retain, nonatomic) NSString *itemDescription; // @dynamic itemDescription;
@property(retain, nonatomic) NSString *itunesSubtitle; // @dynamic itunesSubtitle;
- (_Bool)isInPodcastDetailsUnplayedTab;	// IMP=0x0000000100019b24
- (_Bool)isInMyEpisodes;	// IMP=0x0000000100019a24
- (_Bool)isUserEpisode;	// IMP=0x0000000100019924
- (_Bool)isDownloadable;	// IMP=0x000000010001991c
- (unsigned long long)reasonForNotPlayable;	// IMP=0x0000000100019900
- (_Bool)isPlayable;	// IMP=0x00000001000198dc
- (_Bool)isRestricted;	// IMP=0x000000010001988c
- (_Bool)isShareable;	// IMP=0x0000000100019820
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *guid; // @dynamic guid;
- (id)displayURL;	// IMP=0x00000001000f03e4
- (id)playURL;	// IMP=0x00000001000f02f4
- (long long)episodeTypeResolvedValue;	// IMP=0x00000001000f0204
- (_Bool)isTrailer;	// IMP=0x00000001000f01e0
- (_Bool)isBonus;	// IMP=0x00000001000f01bc
- (_Bool)isExplicit;	// IMP=0x00000001000f0150
- (_Bool)isLatestEpisodeInPodcast;	// IMP=0x00000001000efebc
- (_Bool)hasValidDownloadManagerPath;	// IMP=0x00000001000efc9c
- (id)bestUrl;	// IMP=0x00000001000efbb8
- (_Bool)isDownloaded;	// IMP=0x00000001000efb58
- (_Bool)isPlayheadPartiallyPlayed;	// IMP=0x00000001000efb30
- (_Bool)isPlayheadResumable;	// IMP=0x00000001000efad0
- (double)endOfTrack;	// IMP=0x00000001000efa98
- (double)timeRemaining;	// IMP=0x00000001000efa4c
- (double)playbackProgress;	// IMP=0x00000001000ef9e4
- (_Bool)isPartiallyPlayedBackCatalogItem;	// IMP=0x00000001000ef998
- (_Bool)isBackCatalogItem;	// IMP=0x00000001000ef93c
- (_Bool)isVisuallyPlayed;	// IMP=0x00000001000ef8f4
- (_Bool)isUnplayed;	// IMP=0x00000001000ef8d0
- (_Bool)isPartiallyPlayed;	// IMP=0x00000001000ef8ac
- (_Bool)isPlayed;	// IMP=0x00000001000ef888
- (id)bestSummary;	// IMP=0x00000001000ef87c
- (id)bestTitle;	// IMP=0x00000001000ef7c8
@property(nonatomic) double pubDate; // @dynamic pubDate;
@property(retain, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(nonatomic) long long trackNum; // @dynamic trackNum;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) long long seasonNumber; // @dynamic seasonNumber;
@property(nonatomic) long long episodeNumber; // @dynamic episodeNumber;
@property(retain, nonatomic) NSString *webpageURL; // @dynamic webpageURL;
@property(retain, nonatomic) NSString *episodeType; // @dynamic episodeType;
@property(retain, nonatomic) NSString *itunesTitle; // @dynamic itunesTitle;
@property(nonatomic) long long episodeLevel; // @dynamic episodeLevel;
@property(nonatomic) _Bool explicit; // @dynamic explicit;
@property(retain, nonatomic) NSString *enclosureURL; // @dynamic enclosureURL;
@property(nonatomic) long long byteSize; // @dynamic byteSize;
@property(retain, nonatomic) NSString *cleanedTitle; // @dynamic cleanedTitle;
@property(nonatomic) _Bool feedDeleted; // @dynamic feedDeleted;
- (_Bool)isEpisodeVisited;	// IMP=0x000000010011ff74
@property(readonly, nonatomic) id <MTEpisodeIdentifier> episodeIdentifier;
- (id)playStatusImageForDarkBackground:(_Bool)arg1;	// IMP=0x00000001001a7fcc
- (id)playStatusImageForTheme:(id)arg1;	// IMP=0x00000001001a7eb4
- (id)playStatusImage;	// IMP=0x00000001001a7ea4
- (id)artworkWithSize:(struct CGSize)arg1;	// IMP=0x00000001001a7d88

// Remaining properties
@property(nonatomic) _Bool audio; // @dynamic audio;
@property(nonatomic) _Bool backCatalog; // @dynamic backCatalog;
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double downloadDate; // @dynamic downloadDate;
@property(retain, nonatomic) NSString *downloadManagerPath; // @dynamic downloadManagerPath;
@property(retain, nonatomic) NSString *downloadPath; // @dynamic downloadPath;
@property(nonatomic) _Bool externalType; // @dynamic externalType;
@property(nonatomic) long long flags; // @dynamic flags;
@property(nonatomic) _Bool fromiTunes; // @dynamic fromiTunes;
@property(nonatomic) _Bool hasBeenPlayed; // @dynamic hasBeenPlayed;
@property(readonly) unsigned long long hash;
@property(nonatomic) double importDate; // @dynamic importDate;
@property(nonatomic) int importSource; // @dynamic importSource;
@property(readonly, nonatomic) _Bool isNew; // @dynamic isNew;
@property(readonly, nonatomic) long long isNewSource; // @dynamic isNewSource;
@property(nonatomic) _Bool itemDescriptionHasHTML; // @dynamic itemDescriptionHasHTML;
@property(retain, nonatomic) NSAttributedString *itemDescriptionWithHTML; // @dynamic itemDescriptionWithHTML;
@property(retain, nonatomic) NSString *itemDescriptionWithoutHTML; // @dynamic itemDescriptionWithoutHTML;
@property(nonatomic) double lastUserMarkedAsPlayedDate; // @dynamic lastUserMarkedAsPlayedDate;
@property(nonatomic) _Bool manuallyAdded; // @dynamic manuallyAdded;
@property(retain, nonatomic) NSString *metadataIdentifier; // @dynamic metadataIdentifier;
@property(nonatomic) double metadataTimestamp; // @dynamic metadataTimestamp;
@property(readonly, nonatomic) long long playState; // @dynamic playState;
@property(nonatomic) double playStateLastModifiedDate; // @dynamic playStateLastModifiedDate;
@property(readonly, nonatomic) _Bool playStateManuallySet; // @dynamic playStateManuallySet;
@property(readonly, nonatomic) long long playStateSource; // @dynamic playStateSource;
@property(retain, nonatomic) NSSet *playlists; // @dynamic playlists;
@property(retain, nonatomic) NSString *podcastUuid; // @dynamic podcastUuid;
@property(nonatomic) _Bool sentNotification; // @dynamic sentNotification;
@property(retain, nonatomic) NSSet *settings; // @dynamic settings;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressAutoDownload; // @dynamic suppressAutoDownload;
@property(nonatomic) _Bool unplayedTab; // @dynamic unplayedTab;
@property(nonatomic) _Bool userDeleted; // @dynamic userDeleted;
@property(nonatomic) _Bool userEpisode; // @dynamic userEpisode;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(nonatomic) _Bool video; // @dynamic video;
@property(nonatomic) _Bool visible; // @dynamic visible;

@end

