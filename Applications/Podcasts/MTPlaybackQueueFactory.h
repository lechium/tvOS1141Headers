//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTPlaybackQueueFactory : NSObject
{
}

+ (id)_uuidForEpisode:(id)arg1;	// IMP=0x00000001001c28b4
+ (id)_latestOrOldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(_Bool)arg2 excludeExplicit:(long long)arg3 latest:(_Bool)arg4 ctx:(id)arg5;	// IMP=0x00000001001c25b0
+ (id)_oldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(_Bool)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;	// IMP=0x00000001001c2530
+ (id)_latestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(_Bool)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;	// IMP=0x00000001001c24b0
+ (id)_episodeToPlayForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;	// IMP=0x00000001001c2274
+ (id)episodeUuidsForPlayStationUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001001c1d28
+ (id)episodeUuidsForPlayPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long *)arg4;	// IMP=0x00000001001c15b4
+ (_Bool)_isContinuousPlaybackEnabledForLimit:(long long)arg1;	// IMP=0x00000001001c1530
+ (id)_manifestForPlayMyOldestPodcasts;	// IMP=0x00000001001c14e0
+ (id)_manifestForPlayMyLatestPodcasts;	// IMP=0x00000001001c1490
+ (id)_manifestForPlayMyPodcasts;	// IMP=0x00000001001c13fc
+ (id)playEpisodeUuid:(id)arg1 context:(long long)arg2 limit:(long long)arg3;	// IMP=0x00000001001c1134
+ (id)playEpisodeUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001001c111c
+ (id)playEpisodeUuid:(id)arg1 context:(long long)arg2;	// IMP=0x00000001001c110c
+ (id)playEpisodeUuid:(id)arg1;	// IMP=0x00000001001c10fc
+ (id)playStationUuid:(id)arg1 episodeUuid:(id)arg2 limit:(long long)arg3;	// IMP=0x00000001001c0d88
+ (id)playStationUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001001c0d70
+ (id)playStationUuid:(id)arg1 episodeUuid:(id)arg2;	// IMP=0x00000001001c0d08
+ (id)playStationUuid:(id)arg1;	// IMP=0x00000001001c0cf8
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3;	// IMP=0x00000001001c0ce8
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long *)arg4;	// IMP=0x00000001001c0984
+ (id)playPodcastUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001001c096c
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2;	// IMP=0x00000001001c095c
+ (id)playPodcastUuid:(id)arg1;	// IMP=0x00000001001c094c
+ (id)playMyPodcastsWithOrder:(long long)arg1;	// IMP=0x00000001001c08f0
+ (id)playListenNow;	// IMP=0x00000001001c05d0

@end

