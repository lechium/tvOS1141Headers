//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVURLAsset, IMPlayerManifest, MPNowPlayingContentItem, NSArray, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface IMPlayerItem : NSObject
{
    NSObject<OS_dispatch_queue> *_chapterLoadingQueue;	// 8 = 0x8
    _Bool _video;	// 16 = 0x10
    _Bool _areChaptersLoaded;	// 17 = 0x11
    _Bool _areChaptersLoading;	// 18 = 0x12
    AVURLAsset *_asset;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_album;	// 40 = 0x28
    NSString *_author;	// 48 = 0x30
    NSURL *_url;	// 56 = 0x38
    double _duration;	// 64 = 0x40
    double _playhead;	// 72 = 0x48
    IMPlayerManifest *_manifest;	// 80 = 0x50
    unsigned long long _manifestIndex;	// 88 = 0x58
    NSArray *_chapters;	// 96 = 0x60
    MPNowPlayingContentItem *_contentItem;	// 104 = 0x68
}

+ (id)createAssetForUrl:(id)arg1;	// IMP=0x00000001001f10b4
@property(nonatomic) _Bool areChaptersLoading; // @synthesize areChaptersLoading=_areChaptersLoading;
@property(retain, nonatomic) MPNowPlayingContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
@property(nonatomic) unsigned long long manifestIndex; // @synthesize manifestIndex=_manifestIndex;
@property(nonatomic) __weak IMPlayerManifest *manifest; // @synthesize manifest=_manifest;
@property(nonatomic) _Bool areChaptersLoaded; // @synthesize areChaptersLoaded=_areChaptersLoaded;
@property(nonatomic) double playhead; // @synthesize playhead=_playhead;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic, getter=isVideo, setter=setIsVideo:) _Bool video; // @synthesize video=_video;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001001f433c
- (void)loadChapters;	// IMP=0x00000001001f2508
@property(readonly, nonatomic) __weak NSArray *metadataChapters;
@property(readonly, nonatomic) __weak NSArray *timeChapters;
- (void)retrieveArtwork:(CDUnknownBlockType)arg1 withSize:(struct CGSize)arg2 atTime:(double)arg3;	// IMP=0x00000001001f20b4
- (void)retrieveArtwork:(CDUnknownBlockType)arg1 withSize:(struct CGSize)arg2;	// IMP=0x00000001001f20a4
- (id)artworkIdentifier;	// IMP=0x00000001001f2098
- (void)updateActivity:(id)arg1;	// IMP=0x00000001001f1f58
- (_Bool)_isContentItemLoaded;	// IMP=0x00000001001f1f40
- (void)updateContentItem;	// IMP=0x00000001001f1cd4
- (void)invalidateContentItem;	// IMP=0x00000001001f1cbc
- (id)contentItemIdentifier;	// IMP=0x00000001001f1b4c
- (void)beginLoadingArtworkForAVPlayerItem:(id)arg1;	// IMP=0x00000001001f17d4
- (id)subtitle;	// IMP=0x00000001001f17c8
- (id)externalMetadata;	// IMP=0x00000001001f1608
- (void)notifyUserIsNotPlayable;	// IMP=0x00000001001f1604
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
- (void)invalidateAsset;	// IMP=0x00000001001f1434
@property(readonly, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001f1118
- (unsigned long long)hash;	// IMP=0x00000001001f10cc
- (void)reset;	// IMP=0x00000001001f102c
- (id)init;	// IMP=0x00000001001f0f90
- (id)initWithAsset:(id)arg1;	// IMP=0x00000001001f0ef4
- (id)initWithUrl:(id)arg1;	// IMP=0x00000001001f0e88

@end
