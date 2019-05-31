//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVTableViewCell.h"

@class UIImage, UIView;

@interface TVMusicTableViewCell : TVTableViewCell
{
    UIImage *_accessoryImage;	// 8 = 0x8
    UIView *_badgeView;	// 16 = 0x10
    long long _placeholderAssetType;	// 24 = 0x18
}

@property(nonatomic) long long placeholderAssetType; // @synthesize placeholderAssetType=_placeholderAssetType;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;	// IMP=0x000000010001b778
- (void)_updatePlaceholderImageIfNeeded;	// IMP=0x000000010001b6f4
- (void)_setAccessoryViewColor;	// IMP=0x000000010001b678
- (void)_setAccessoryViewWithTextLabelColor:(id)arg1 detailTextLabelColor:(id)arg2;	// IMP=0x000000010001b4e0
- (_Bool)_isFocusedInDarkMode;	// IMP=0x000000010001b468
- (id)_focusedInDarkModeTextLabelColor;	// IMP=0x000000010001b3ec
- (id)_defaultDetailTextLabelColor;	// IMP=0x000000010001b3d8
- (id)_defaultTextLabelColor;	// IMP=0x000000010001b3c4
- (id)_detailTextLabelColor;	// IMP=0x000000010001b368
- (id)_textLabelColor;	// IMP=0x000000010001b30c
- (void)_updateColorsWithTextLabelColor:(id)arg1 detailTextLabelColor:(id)arg2;	// IMP=0x000000010001b224
- (void)_updateColors;	// IMP=0x000000010001b1a8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010001b0d8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010001b060
- (void)setAccessoryView:(id)arg1;	// IMP=0x000000010001af50
- (void)layoutSubviews;	// IMP=0x000000010001aa8c

@end

