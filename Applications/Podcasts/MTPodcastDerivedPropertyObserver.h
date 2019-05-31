//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPodcastAndEpisodeProcessor.h"

@class NSArray, NSMutableDictionary;

@interface MTPodcastDerivedPropertyObserver : MTPodcastAndEpisodeProcessor
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    NSMutableDictionary *_handlers;	// 16 = 0x10
    NSMutableDictionary *_podcastCache;	// 24 = 0x18
    NSArray *_podcastDependencies;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *podcastDependencies; // @synthesize podcastDependencies=_podcastDependencies;
@property(retain, nonatomic) NSMutableDictionary *podcastCache; // @synthesize podcastCache=_podcastCache;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;	// IMP=0x00000001000e84c4
- (void)removeDerivedPropertyChangeHandler:(id)arg1;	// IMP=0x00000001000e83b0
- (id)addDerivedPropertyChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e82d4
- (void)notifyObserversForPodcast:(id)arg1;	// IMP=0x00000001000e7fd8
- (id)countOfUserEpisodesForEpisodes:(id)arg1 andPredicateForUserEpisodes:(id)arg2;	// IMP=0x00000001000e7f08
- (id)countOfFeedEpisodesForEpisodes:(id)arg1;	// IMP=0x00000001000e7e28
- (id)countOfSavedEpisodesForEpisodes:(id)arg1;	// IMP=0x00000001000e7d48
- (id)countOfAudioEpisodesForEpisodes:(id)arg1;	// IMP=0x00000001000e7c68
- (id)countOfMyMediaEpisodesForEpisodes:(id)arg1 andPredicateForMyEpisodes:(id)arg2;	// IMP=0x00000001000e7b44
- (id)countOfUnplayedMediaEpisodesForEpisodes:(id)arg1 andPredicateForEpisodesOnUnplayedTab:(id)arg2;	// IMP=0x00000001000e79c8
- (id)countOfUnplayedEpisodesForEpisodes:(id)arg1 andPredicateForEpisodesOnUnplayedTab:(id)arg2;	// IMP=0x00000001000e78a4
- (id)countOfNewEpisodesForEpisodes:(id)arg1;	// IMP=0x00000001000e77c4
- (id)uuidOfNewestEpisodeForEpisodes:(id)arg1;	// IMP=0x00000001000e772c
- (id)dateOfNewestEpisodeForEpisodes:(id)arg1;	// IMP=0x00000001000e7694
- (void)setDependentPropertyValue:(id)arg1 forKey:(id)arg2 forPodcastUuid:(id)arg3;	// IMP=0x00000001000e7594
- (id)dependentPropertyForKey:(id)arg1 forPodcastUuid:(id)arg2;	// IMP=0x00000001000e7504
- (_Bool)setDerivedPropertyValue:(id)arg1 forKey:(id)arg2 forPodcast:(id)arg3;	// IMP=0x00000001000e73b0
- (id)derivedPropertyValueForKey:(id)arg1 forPodcast:(id)arg2;	// IMP=0x00000001000e72d0
- (id)derivedPropertiesForPodcast:(id)arg1;	// IMP=0x00000001000e71f0
- (id)countOfMyMediaEpisodesForPodcast:(id)arg1;	// IMP=0x00000001000e71d4
- (id)countOfUnplayedEpisodesForPodcast:(id)arg1;	// IMP=0x00000001000e71b8
- (id)countOfNewEpisodesForPodcast:(id)arg1;	// IMP=0x00000001000e719c
- (void)updateFlagForEpisodes:(id)arg1 predicateForUnplayedTab:(id)arg2 predicateForUserEpisodes:(id)arg3 podcastUuid:(id)arg4 ctx:(id)arg5;	// IMP=0x00000001000e6870
- (void)episodeResultsChangedForPodcastUuid:(id)arg1;	// IMP=0x00000001000e6378
- (id)createEpisodeObserverForPodcastUuid:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x00000001000e6180
- (id)episodeSortDescriptorsForPodcast:(id)arg1;	// IMP=0x00000001000e601c
- (id)episodePredicateForPodcast:(id)arg1;	// IMP=0x00000001000e6008
- (id)podcastPredicate;	// IMP=0x00000001000e5ff4
- (void)reportStatsForPodcasts:(id)arg1;	// IMP=0x00000001000e59e4
- (id)createQueryObserver;	// IMP=0x00000001000e5490
- (void)updateEpisodePredicateForChangedResults:(id)arg1;	// IMP=0x00000001000e4cf0
- (id)init;	// IMP=0x00000001000e4b80

@end
