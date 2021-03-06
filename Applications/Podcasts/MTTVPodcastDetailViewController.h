//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTVEpisodeSplitViewController.h"

@class MTArtworkBackgroundView, MTColorTheme, MTPodcast, MTTVPodcastEpisodeListViewController, MTTVPodcastGoneDarkDetailViewController;

@interface MTTVPodcastDetailViewController : MTTVEpisodeSplitViewController
{
    MTPodcast *_podcast;	// 8 = 0x8
    MTTVPodcastGoneDarkDetailViewController *_goneDarkDetailViewController;	// 16 = 0x10
    MTArtworkBackgroundView *_backgroundView;	// 24 = 0x18
    MTColorTheme *_colorTheme;	// 32 = 0x20
}

@property(retain, nonatomic) MTColorTheme *colorTheme; // @synthesize colorTheme=_colorTheme;
@property(retain, nonatomic) MTArtworkBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MTTVPodcastGoneDarkDetailViewController *goneDarkDetailViewController; // @synthesize goneDarkDetailViewController=_goneDarkDetailViewController;
@property(readonly, nonatomic) MTPodcast *podcast; // @synthesize podcast=_podcast;
- (void).cxx_destruct;	// IMP=0x00000001000c1128
- (void)_setupBackgroundView;	// IMP=0x00000001000c0e54
- (void)_showDetailsForIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000c0d4c
- (id)overrideTraitCollectionForChildViewController:(id)arg1;	// IMP=0x00000001000c0a78
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000c085c
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000c07b8
- (void)viewDidLoad;	// IMP=0x00000001000c0678
- (void)highlightEpisodeUuid:(id)arg1;	// IMP=0x00000001000c04c4
- (id)initWithPodcast:(id)arg1;	// IMP=0x00000001000c0414

// Remaining properties
@property(retain, nonatomic) MTTVPodcastEpisodeListViewController *episodeList; // @dynamic episodeList;

@end

