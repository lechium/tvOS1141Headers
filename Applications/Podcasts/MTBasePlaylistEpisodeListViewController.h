//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTEpisodeListViewController.h"

@class NSMutableOrderedSet, NSString;

@interface MTBasePlaylistEpisodeListViewController : MTEpisodeListViewController
{
    NSMutableOrderedSet *_items;	// 8 = 0x8
    _Bool _editable;	// 16 = 0x10
    NSString *_playlistUuid;	// 24 = 0x18
    NSString *_settingsUuid;	// 32 = 0x20
}

@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) NSString *settingsUuid; // @synthesize settingsUuid=_settingsUuid;
@property(retain, nonatomic) NSString *playlistUuid; // @synthesize playlistUuid=_playlistUuid;
- (void).cxx_destruct;	// IMP=0x0000000100067090
- (id)metricDataSource;	// IMP=0x0000000100066f9c
- (id)metricsName;	// IMP=0x0000000100066f70
- (void)updateTableWithEpisodes:(id)arg1 originalItems:(id)arg2 animated:(_Bool)arg3 section:(long long)arg4;	// IMP=0x00000001000668a8
- (void)_loadItems;	// IMP=0x000000010006649c
- (void)reloadData;	// IMP=0x0000000100066490
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x0000000100066290
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010006622c
- (void)removeSelectedItems:(id)arg1;	// IMP=0x0000000100065ed4
- (void)markSelectedItemsAsSaved:(_Bool)arg1;	// IMP=0x0000000100065e48
- (void)markEpisodesAtIndexPaths:(id)arg1 asSaved:(_Bool)arg2;	// IMP=0x0000000100065af8
- (void)markSelectedItems:(_Bool)arg1;	// IMP=0x0000000100065888
- (void)playEpisodeAtIndexPath:(id)arg1;	// IMP=0x00000001000657a4
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000656d8
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000100065650
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000001000652a0
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000650c4
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100065014
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100064ffc
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100064ff4
- (unsigned long long)indexOfUuid:(id)arg1;	// IMP=0x0000000100064fdc
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0000000100064edc
- (id)indexPathForObject:(id)arg1;	// IMP=0x0000000100064e40
- (id)items;	// IMP=0x0000000100064de8
- (id)initWithPlaylist:(id)arg1;	// IMP=0x0000000100064b98
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000100064ae0

@end

