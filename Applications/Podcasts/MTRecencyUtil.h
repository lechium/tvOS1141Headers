//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTRecencyUtil : NSObject
{
}

+ (id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 uuidsToExclude:(id)arg3 watchedAtTheEnd:(_Bool)arg4;	// IMP=0x00000001000bc050
+ (id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 uuidsToExclude:(id)arg3;	// IMP=0x00000001000bbfe0
+ (id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001000bbfd0
+ (id)recentlyPlayedPodcastsWithContext:(id)arg1;	// IMP=0x00000001000bbfc0
+ (id)episodesForListenNowWithContext:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001000bbd9c
+ (id)episodeToResumeWithContext:(id)arg1;	// IMP=0x00000001000bbba8
+ (id)nextEpisodeForEpisodicPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3;	// IMP=0x00000001000bb584
+ (id)nextEpisodeForSerialPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3;	// IMP=0x00000001000bb1a0
+ (id)nextEpisodeToPlayForPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3;	// IMP=0x00000001000baf10
+ (id)nextEpisodeToPlayForPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x00000001000baea8

@end

