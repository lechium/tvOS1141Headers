//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHMediaItemListViewCell.h"

@class UIImageView, UILabel;

@interface TVHMusicAlbumItemListViewCell : TVHMediaItemListViewCell
{
    _Bool _ordinalVisible;	// 8 = 0x8
    _Bool _playIconVisible;	// 9 = 0x9
    UIImageView *_playIconImageView;	// 16 = 0x10
    UILabel *_ordinalLabel;	// 24 = 0x18
    unsigned long long _ordinalValue;	// 32 = 0x20
}

@property(nonatomic) _Bool playIconVisible; // @synthesize playIconVisible=_playIconVisible;
@property(nonatomic) unsigned long long ordinalValue; // @synthesize ordinalValue=_ordinalValue;
@property(nonatomic) _Bool ordinalVisible; // @synthesize ordinalVisible=_ordinalVisible;
@property(retain, nonatomic) UILabel *ordinalLabel; // @synthesize ordinalLabel=_ordinalLabel;
@property(retain, nonatomic) UIImageView *playIconImageView; // @synthesize playIconImageView=_playIconImageView;
- (void).cxx_destruct;	// IMP=0x000000010001a790
- (double)_contentViewHeight;	// IMP=0x000000010001a6a8
- (_Bool)_shouldShowPlayIconImageView;	// IMP=0x000000010001a64c
- (_Bool)_showingPlayIconImageView;	// IMP=0x000000010001a5f0
- (_Bool)_shouldShowOrdinalLabel;	// IMP=0x000000010001a594
- (void)_showPlayIconImageView:(_Bool)arg1;	// IMP=0x000000010001a428
- (void)_showOrdinalLabel:(_Bool)arg1;	// IMP=0x000000010001a3e0
- (void)_updatePlayIconImageViewAndOrdinalLabelState;	// IMP=0x000000010001a384
- (double)_ordinalWidth;	// IMP=0x000000010001a354
- (struct CGRect)_ordinalFrame;	// IMP=0x000000010001a2c4
- (void)layoutSubviews;	// IMP=0x0000000100019f98
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100019f20
- (void)_nowPlayingBarsVisibilityDidChange:(_Bool)arg1;	// IMP=0x0000000100019f14
- (void)_updateColors;	// IMP=0x0000000100019d44
- (id)_nowPlayingBarsSuperview;	// IMP=0x0000000100019cf0
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000100019668
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000195b4

@end

