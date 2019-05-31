//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTDetailViewController.h"

#import "MTEpisodeListViewControllerDelegate.h"
#import "UIViewControllerRestoration.h"

@class NSString;

@interface MTPlaylistSettingsUpcomingViewController : MTDetailViewController <MTEpisodeListViewControllerDelegate, UIViewControllerRestoration>
{
    NSString *_settingsUuid;	// 8 = 0x8
    NSString *_playlistUuid;	// 16 = 0x10
    _Bool _subscribed;	// 24 = 0x18
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;	// IMP=0x00000001000180ec
- (void).cxx_destruct;	// IMP=0x0000000100018388
- (_Bool)metricsEnabled;	// IMP=0x0000000100018380
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000010001834c
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000100018168
- (id)newListController;	// IMP=0x0000000100017fc0
- (void)setupNewListController:(id)arg1;	// IMP=0x0000000100017ea0
- (void)_setupWithSettingsUuid:(id)arg1;	// IMP=0x00000001000179d8
- (id)initWithSettingsUuid:(id)arg1;	// IMP=0x0000000100017938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

