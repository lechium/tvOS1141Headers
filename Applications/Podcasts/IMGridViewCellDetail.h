//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMGridViewCell.h"

@class UIImageView, UILabel;

@interface IMGridViewCellDetail : IMGridViewCell
{
    UIImageView *_currentlyPlayingIcon;	// 136 = 0x88
    UILabel *_detailText;	// 144 = 0x90
}

@property(retain, nonatomic) UILabel *detailText; // @synthesize detailText=_detailText;
- (void)layoutSubviews;	// IMP=0x000000010020c0e4
- (struct CGRect)detailRectForBounds:(struct CGRect)arg1;	// IMP=0x000000010020c03c
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;	// IMP=0x000000010020bf94
- (void)dealloc;	// IMP=0x000000010020bf28
- (void)prepareForReuse;	// IMP=0x000000010020becc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010020bd60
@property(nonatomic) _Bool isCurrentlyPlaying;
@property(readonly, nonatomic) UIImageView *currentlyPlayingIcon; // @synthesize currentlyPlayingIcon=_currentlyPlayingIcon;
- (void)setEnlargedSelectedState:(_Bool)arg1;	// IMP=0x000000010020ba54
- (id)nowPlayingListItemIconSelected;	// IMP=0x000000010020ba38
- (id)nowPlayingListItemIcon;	// IMP=0x000000010020ba1c

@end

