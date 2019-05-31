//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMPlayerItem.h"

#import "IMMetricsDataSource.h"
#import "MTEpisodeIdentifierProvider.h"

@class MTEpisode, NSDate, NSString, NSURL;

@interface MTPlayerItem : IMPlayerItem <MTEpisodeIdentifierProvider, IMMetricsDataSource>
{
    _Bool _isNotSubscribeable;	// 8 = 0x8
    _Bool _enqueuedByAnotherUser;	// 9 = 0x9
    _Bool _isExplicit;	// 10 = 0xa
    NSString *_podcastUuid;	// 16 = 0x10
    NSString *_podcastFeedUrl;	// 24 = 0x18
    long long _podcastStoreId;	// 32 = 0x20
    NSURL *_artworkUrl;	// 40 = 0x28
    NSString *_episodeUuid;	// 48 = 0x30
    NSString *_episodeGuid;	// 56 = 0x38
    long long _episodeStoreId;	// 64 = 0x40
    long long _episodePID;	// 72 = 0x48
    NSDate *_pubDate;	// 80 = 0x50
    NSString *_subtitle;	// 88 = 0x58
    NSString *_itemDescription;	// 96 = 0x60
    NSURL *_episodeShareUrl;	// 104 = 0x68
    NSString *_storeReportingParams;	// 112 = 0x70
}

+ (id)subtitleStringForEpisode:(id)arg1;	// IMP=0x0000000100015fa4
+ (id)subtitleStringForArtist:(id)arg1 album:(id)arg2;	// IMP=0x0000000100015e58
+ (id)createAssetForUrl:(id)arg1;	// IMP=0x0000000100013e58
@property(retain, nonatomic) NSString *storeReportingParams; // @synthesize storeReportingParams=_storeReportingParams;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(retain, nonatomic) NSURL *episodeShareUrl; // @synthesize episodeShareUrl=_episodeShareUrl;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSDate *pubDate; // @synthesize pubDate=_pubDate;
@property(nonatomic) long long episodePID; // @synthesize episodePID=_episodePID;
@property(nonatomic) long long episodeStoreId; // @synthesize episodeStoreId=_episodeStoreId;
@property(retain, nonatomic) NSString *episodeGuid; // @synthesize episodeGuid=_episodeGuid;
@property(retain, nonatomic) NSString *episodeUuid; // @synthesize episodeUuid=_episodeUuid;
@property(nonatomic) _Bool enqueuedByAnotherUser; // @synthesize enqueuedByAnotherUser=_enqueuedByAnotherUser;
@property(nonatomic) _Bool isNotSubscribeable; // @synthesize isNotSubscribeable=_isNotSubscribeable;
@property(retain, nonatomic) NSURL *artworkUrl; // @synthesize artworkUrl=_artworkUrl;
@property(nonatomic) long long podcastStoreId; // @synthesize podcastStoreId=_podcastStoreId;
@property(retain, nonatomic) NSString *podcastFeedUrl; // @synthesize podcastFeedUrl=_podcastFeedUrl;
@property(retain, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
- (void).cxx_destruct;	// IMP=0x0000000100016694
- (id)metricsContentIdentifier;	// IMP=0x000000010001626c
- (void)updateActivity:(id)arg1;	// IMP=0x0000000100015d80
- (void)updateContentItem;	// IMP=0x00000001000155c8
- (id)_episodeArtworkIdentifier;	// IMP=0x00000001000154d4
- (id)_podcastArtworkIdentifier;	// IMP=0x0000000100015410
- (id)artworkIdentifier;	// IMP=0x0000000100015388
- (id)contentItemIdentifier;	// IMP=0x000000010001536c
- (id)externalMetadata;	// IMP=0x0000000100014d20
- (_Bool)_supportsArtworkURL;	// IMP=0x0000000100014d18
- (void)retrieveArtwork:(CDUnknownBlockType)arg1 withSize:(struct CGSize)arg2;	// IMP=0x0000000100014860
@property(readonly, nonatomic) long long mpItemType;
- (void)setAreChaptersLoaded:(_Bool)arg1;	// IMP=0x0000000100014804
- (void)notifyUserIsNotPlayable;	// IMP=0x0000000100014648
- (void)setManifestIndex:(unsigned long long)arg1;	// IMP=0x00000001000145f4
- (id)streamUrl;	// IMP=0x0000000100014388
- (_Bool)isStreamable;	// IMP=0x0000000100014310
- (_Bool)isShareable;	// IMP=0x000000010001425c
- (_Bool)isPlayable;	// IMP=0x00000001000141c0
@property(readonly, nonatomic) MTEpisode *episode;
- (id)initWithAsset:(id)arg1;	// IMP=0x0000000100013d88
@property(readonly, nonatomic) id <MTEpisodeIdentifier> episodeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

