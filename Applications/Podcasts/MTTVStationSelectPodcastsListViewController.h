//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSpecialIndexPathTableViewController.h"

@class NSMutableSet, NSString;

@interface MTTVStationSelectPodcastsListViewController : MTSpecialIndexPathTableViewController
{
    _Bool _allPodcastsSelected;	// 8 = 0x8
    NSString *_playlistName;	// 16 = 0x10
    NSMutableSet *_podcastUuids;	// 24 = 0x18
    NSString *_playlistUuid;	// 32 = 0x20
    id <MTPlaylistSelectPodcastListViewControllerSaveDelegate> _saveDelegate;	// 40 = 0x28
}

@property(nonatomic) __weak id <MTPlaylistSelectPodcastListViewControllerSaveDelegate> saveDelegate; // @synthesize saveDelegate=_saveDelegate;
@property(retain, nonatomic) NSString *playlistUuid; // @synthesize playlistUuid=_playlistUuid;
@property(nonatomic) _Bool allPodcastsSelected; // @synthesize allPodcastsSelected=_allPodcastsSelected;
@property(retain, nonatomic) NSMutableSet *podcastUuids; // @synthesize podcastUuids=_podcastUuids;
@property(retain, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
- (void).cxx_destruct;	// IMP=0x000000010005a344
- (void)main_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010005a138
- (_Bool)main_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x000000010005a118
- (double)main_tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010005a10c
- (void)main_configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;	// IMP=0x0000000100059f98
- (id)main_tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100059f3c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100059f34
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100059ec4
- (void)save;	// IMP=0x0000000100059c68
- (_Bool)toggleUuid:(id)arg1;	// IMP=0x0000000100059b34
- (void)toggleAllPodcastsSelected;	// IMP=0x0000000100059acc
- (void)setupIncludeAllCell;	// IMP=0x0000000100059710
- (void)setupFRC;	// IMP=0x0000000100059530
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100059280
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100059230
- (void)viewDidLoad;	// IMP=0x0000000100059140

@end

