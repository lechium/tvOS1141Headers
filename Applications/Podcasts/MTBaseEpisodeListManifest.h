//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPlayerManifest.h"

@class NSArray, NSMutableDictionary, NSString;

@interface MTBaseEpisodeListManifest : MTPlayerManifest
{
    _Bool _isInitialPrepare;	// 8 = 0x8
    NSString *_initialEpisodeUuid;	// 16 = 0x10
    NSMutableDictionary *_indexToPlayerItemMap;	// 24 = 0x18
    NSArray *_episodeUuids;	// 32 = 0x20
}

+ (id)_mediaItemForEpisode:(id)arg1;	// IMP=0x00000001001620f0
+ (id)mediaItemForEpisodeWithUUID:(id)arg1;	// IMP=0x0000000100161b9c
+ (id)episodeUuidForActivity:(id)arg1;	// IMP=0x00000001001618a0
@property(retain, nonatomic) NSArray *episodeUuids; // @synthesize episodeUuids=_episodeUuids;
@property(nonatomic) _Bool isInitialPrepare; // @synthesize isInitialPrepare=_isInitialPrepare;
@property(retain, nonatomic) NSMutableDictionary *indexToPlayerItemMap; // @synthesize indexToPlayerItemMap=_indexToPlayerItemMap;
@property(retain, nonatomic) NSString *initialEpisodeUuid; // @synthesize initialEpisodeUuid=_initialEpisodeUuid;
- (void).cxx_destruct;	// IMP=0x0000000100162864
- (id)_predicateForFilteringExplicitEpisodes;	// IMP=0x000000010016206c
- (_Bool)defaultToInitialIndexZero;	// IMP=0x0000000100162064
- (void)postManifestDidChangeNotification;	// IMP=0x0000000100161dec
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100161600
- (unsigned long long)count;	// IMP=0x00000001001615b4
- (id)init;	// IMP=0x00000001001615a4
- (id)initWithInitialEpisodeUuid:(id)arg1;	// IMP=0x00000001001614d4

@end

