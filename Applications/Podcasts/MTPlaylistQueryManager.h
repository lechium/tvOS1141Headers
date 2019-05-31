//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseProcessor.h"

@interface MTPlaylistQueryManager : MTBaseProcessor
{
}

+ (id)_allPodcastsInCtx:(id)arg1;	// IMP=0x00000001000ec85c
+ (void)updateEpisodesForSettings:(id)arg1 ctx:(id)arg2;	// IMP=0x00000001000eb94c
+ (void)_sortUngroupedList:(id)arg1 inPlaylist:(id)arg2;	// IMP=0x00000001000eb520
+ (_Bool)updatePlaylist:(id)arg1 inContext:(id)arg2;	// IMP=0x00000001000eaa28
+ (void)_fixSortOrder:(id)arg1 generated_p:(_Bool *)arg2;	// IMP=0x00000001000ea62c
- (void)createDefaultPlaylists;	// IMP=0x00000001000ec5f8
- (void)updatePlaylistsWithUuids:(id)arg1;	// IMP=0x00000001000ec35c
- (void)updateAllPlaylistsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ebdc4
- (_Bool)updatePlaylistWithUuid:(id)arg1 inContext:(id)arg2;	// IMP=0x00000001000ebd44
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x00000001000ea508
- (id)predicate;	// IMP=0x00000001000ea4ec
- (id)entityName;	// IMP=0x00000001000ea4dc
- (void)feedUpdateDidComplete:(id)arg1;	// IMP=0x00000001000ea4cc
- (id)init;	// IMP=0x00000001000ea40c

@end
