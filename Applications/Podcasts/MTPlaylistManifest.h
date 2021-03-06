//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPredicateManifest.h"

@class NSString;

@interface MTPlaylistManifest : MTPredicateManifest
{
    NSString *_playlistUuid;	// 8 = 0x8
}

+ (id)activityTypeSuffix;	// IMP=0x00000001001310cc
+ (id)createManifestForActivity:(id)arg1;	// IMP=0x0000000100130fd0
@property(readonly, nonatomic) NSString *playlistUuid; // @synthesize playlistUuid=_playlistUuid;
- (void).cxx_destruct;	// IMP=0x0000000100131554
- (void)_propertyDidChange;	// IMP=0x0000000100131500
- (_Bool)_updatePlaylistEpisodes;	// IMP=0x0000000100131144
- (void)_load;	// IMP=0x00000001001310f8
- (id)activitySpotlightIdentifier;	// IMP=0x0000000100130f5c
- (id)initWithPlaylistUuid:(id)arg1 initialEpisodeUuid:(id)arg2;	// IMP=0x0000000100130c50

@end

