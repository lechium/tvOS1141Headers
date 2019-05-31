//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHListViewCell.h"

@class TVHKMediaEntityIdentifier, TVHMediaItemTitleView, TVHNowPlayingBarsView, UIImageView, UILabel;

@interface TVHMediaItemListViewCell : TVHListViewCell
{
    TVHKMediaEntityIdentifier *_mediaEntityIdentifier;	// 8 = 0x8
    TVHNowPlayingBarsView *_nowPlayingBarsView;	// 16 = 0x10
    TVHMediaItemTitleView *_titleView;	// 24 = 0x18
    UILabel *_durationLabel;	// 32 = 0x20
    UIImageView *_thumbnailImageView;	// 40 = 0x28
}

+ (id)_labelWithExistingLabel:(id)arg1;	// IMP=0x000000010003d490
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) TVHMediaItemTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TVHNowPlayingBarsView *nowPlayingBarsView; // @synthesize nowPlayingBarsView=_nowPlayingBarsView;
@property(copy, nonatomic) TVHKMediaEntityIdentifier *mediaEntityIdentifier; // @synthesize mediaEntityIdentifier=_mediaEntityIdentifier;
- (void).cxx_destruct;	// IMP=0x000000010003df9c
- (void)_showNowPlayingBars:(_Bool)arg1;	// IMP=0x000000010003ddbc
- (struct CGRect)_nowPlayingBarsFrameWithSuperview:(id)arg1;	// IMP=0x000000010003dcfc
- (struct CGRect)_nowPlayingBarsFrame;	// IMP=0x000000010003dce4
- (void)_updateNowPlayingBars;	// IMP=0x000000010003dae4
- (void)_stopObservingPlayer;	// IMP=0x000000010003da94
- (void)_startObservingPlayer;	// IMP=0x000000010003d988
- (void)_handlePlayerPlaybackStateDidChange:(id)arg1;	// IMP=0x000000010003d97c
- (void)_handlePlayerCurrentMediaItemDidChange:(id)arg1;	// IMP=0x000000010003d970
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010003d8a0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010003d6f8
- (void)prepareForReuse;	// IMP=0x000000010003d670
- (void)layoutSubviews;	// IMP=0x000000010003d5b8
- (void)didMoveToSuperview;	// IMP=0x000000010003d568
- (void)_nowPlayingBarsVisibilityDidChange:(_Bool)arg1;	// IMP=0x000000010003d564
- (void)_updateColors;	// IMP=0x000000010003d560
- (id)_nowPlayingBarsSuperview;	// IMP=0x000000010003d50c
- (void)dealloc;	// IMP=0x000000010003d130
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010003d0fc

@end

