//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObjectContext.h"

@interface NSManagedObjectContext (MTPodcast)
- (unsigned long long)_nextSortOrderWithRequest:(id)arg1;	// IMP=0x00000001001b0460
- (unsigned long long)nextSortOrderForNotSubscribedPodcasts;	// IMP=0x00000001001b02e4
- (unsigned long long)nextSortOrderForSubscribedPodcasts;	// IMP=0x00000001001b0168
- (unsigned long long)countOfPodcasts;	// IMP=0x00000001001b00b4
- (id)valueForProperty:(id)arg1 podcastUuid:(id)arg2;	// IMP=0x00000001001b0044
- (id)dictionaryWithProperties:(id)arg1 podcastUuid:(id)arg2;	// IMP=0x00000001001affd4
- (id)dictionaryForPodcastUuid:(id)arg1;	// IMP=0x00000001001affbc
- (id)podcastForFeedUrl:(id)arg1;	// IMP=0x00000001001afd78
- (id)podcastForUuid:(id)arg1;	// IMP=0x00000001001afd60
- (id)podcastIdWithUuid:(id)arg1;	// IMP=0x00000001001afd48
- (id)existingPodcastWithID:(id)arg1;	// IMP=0x00000001001afc7c
@end

