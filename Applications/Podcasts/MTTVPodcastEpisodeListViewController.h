//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPodcastSectionedDetailListController.h"

#import "MTShowSettingsViewControllerDelegate.h"
#import "MTTVListViewControllerProtocol.h"
#import "MTTVPodcastHeaderViewDelegate.h"

@class MTAllPropertyChangesQueryObserver, MTPodcast, MTTVEpisodeActionController, MTTVPodcastHeaderView, NSIndexPath, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface MTTVPodcastEpisodeListViewController : MTPodcastSectionedDetailListController <MTTVPodcastHeaderViewDelegate, MTShowSettingsViewControllerDelegate, MTTVListViewControllerProtocol>
{
    MTPodcast *_podcast;	// 8 = 0x8
    NSIndexPath *_selectedIndexPath;	// 16 = 0x10
    NSIndexPath *_lastFocusedIndexPath;	// 24 = 0x18
    MTTVPodcastHeaderView *_podcastHeaderView;	// 32 = 0x20
    UITapGestureRecognizer *_playButtonRecognizer;	// 40 = 0x28
    UITapGestureRecognizer *_playButtonRecognizerForHeader;	// 48 = 0x30
    UILongPressGestureRecognizer *_longPressRecognizer;	// 56 = 0x38
    MTTVEpisodeActionController *_actionController;	// 64 = 0x40
    MTAllPropertyChangesQueryObserver *_darkObserver;	// 72 = 0x48
}

@property(retain, nonatomic) MTAllPropertyChangesQueryObserver *darkObserver; // @synthesize darkObserver=_darkObserver;
@property(retain, nonatomic) MTTVEpisodeActionController *actionController; // @synthesize actionController=_actionController;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *playButtonRecognizerForHeader; // @synthesize playButtonRecognizerForHeader=_playButtonRecognizerForHeader;
@property(retain, nonatomic) UITapGestureRecognizer *playButtonRecognizer; // @synthesize playButtonRecognizer=_playButtonRecognizer;
@property(retain, nonatomic) MTTVPodcastHeaderView *podcastHeaderView; // @synthesize podcastHeaderView=_podcastHeaderView;
@property(retain, nonatomic) NSIndexPath *lastFocusedIndexPath; // @synthesize lastFocusedIndexPath=_lastFocusedIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(readonly, nonatomic) MTPodcast *podcast; // @synthesize podcast=_podcast;
- (void).cxx_destruct;	// IMP=0x0000000100134504
- (void)showSettings:(id)arg1 changedDeletedPlayedEpisodes:(long long)arg2;	// IMP=0x00000001001343ec
- (void)showSettings:(id)arg1 changedEpisodeLimit:(long long)arg2;	// IMP=0x00000001001343e0
- (void)showSettings:(id)arg1 changedNotifications:(_Bool)arg2;	// IMP=0x00000001001343dc
- (void)showSettings:(id)arg1 changedSubscribed:(_Bool)arg2;	// IMP=0x00000001001343d8
- (void)showSettings:(id)arg1 changedEpisodeOrderAscending:(_Bool)arg2;	// IMP=0x00000001001343cc
- (void)showSettings:(id)arg1 changedShowType:(long long)arg2;	// IMP=0x00000001001343c0
- (void)updateDarkPlacard;	// IMP=0x00000001001342a8
- (_Bool)hasDarkPlacard;	// IMP=0x0000000100134214
- (void)_refreshFeedIfNeeded;	// IMP=0x0000000100133ec8
- (void)_resetGoDark;	// IMP=0x0000000100133ce4
- (void)_showSettings;	// IMP=0x0000000100133c04
- (_Bool)_isSectionForSettings:(long long)arg1;	// IMP=0x0000000100133b88
- (_Bool)_isIndexPathForSettings:(id)arg1;	// IMP=0x0000000100133b4c
- (_Bool)_isSectionForDarkPlacard:(long long)arg1;	// IMP=0x0000000100133b28
- (_Bool)_isIndexPathForDarkPlacard:(id)arg1;	// IMP=0x0000000100133ad8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100133a18
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001001339e0
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000100133860
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100133598
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000100133488
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100133384
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x0000000100133134
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x00000001001330e8
- (id)messageForEmptySection;	// IMP=0x0000000100133038
- (id)createEmptySectionCell;	// IMP=0x0000000100132fb0
- (_Bool)hasEmptySection;	// IMP=0x0000000100132f60
- (void)reloadData;	// IMP=0x0000000100132e8c
- (void)switchToTab:(unsigned long long)arg1;	// IMP=0x0000000100132e38
- (void)selectedItemAtIndexPath:(id)arg1;	// IMP=0x0000000100132d68
- (void)setCellStyle:(unsigned long long)arg1;	// IMP=0x0000000100132d64
- (id)rightButtonItems;	// IMP=0x0000000100132d5c
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100132b7c
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x0000000100132a18
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x0000000100132948
- (void)podcastHeaderDidSwitchToTab:(unsigned long long)arg1;	// IMP=0x00000001001328f8
- (void)longPressAction:(id)arg1;	// IMP=0x0000000100132750
- (void)playPauseButtonAction:(id)arg1;	// IMP=0x00000001001325f0
- (id)deleteEpisodeAction;	// IMP=0x00000001001321ec
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100131cd4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100131c84
- (void)viewDidLoad;	// IMP=0x0000000100131710
- (id)initWithPodcast:(id)arg1;	// IMP=0x0000000100131638
- (id)initWithPodcastUUID:(id)arg1;	// IMP=0x0000000100131568

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

