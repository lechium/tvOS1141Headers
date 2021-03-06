//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MPArtworkCatalog, NSString, UIImage, UIImageView, UILabel, _UIFloatingContentView;

@interface TVMusicLibraryCollectionViewCell : UICollectionViewCell
{
    _UIFloatingContentView *_floatingView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subTitleLabel;	// 24 = 0x18
    UIImageView *_explicitBadgeView;	// 32 = 0x20
    _Bool _isExplicit;	// 40 = 0x28
    _Bool _showImage;	// 41 = 0x29
    long long _imageShape;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    NSString *_subTitle;	// 64 = 0x40
    double _maximumImageHeight;	// 72 = 0x48
    MPArtworkCatalog *_artworkCatalog;	// 80 = 0x50
    UIImageView *_imageView;	// 88 = 0x58
    UIImageView *_placeholderImageView;	// 96 = 0x60
}

@property(nonatomic) _Bool showImage; // @synthesize showImage=_showImage;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(nonatomic) double maximumImageHeight; // @synthesize maximumImageHeight=_maximumImageHeight;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long imageShape; // @synthesize imageShape=_imageShape;
- (void).cxx_destruct;	// IMP=0x0000000100063bf0
- (void)_updateShadowForLabel:(id)arg1 inFocus:(_Bool)arg2;	// IMP=0x0000000100063a18
- (void)_updateColorsForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100063a0c
- (void)_setLabelTextColorsForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100063714
- (void)_setLabelTextColors;	// IMP=0x00000001000636bc
- (void)_setSizeForLabel:(id)arg1;	// IMP=0x00000001000635c8
- (void)_setLabelPositionsChangeY:(_Bool)arg1;	// IMP=0x00000001000631c0
- (void)_adjustToArtworkSize:(struct CGSize)arg1;	// IMP=0x000000010006301c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100062f14
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100062cd0
- (id)_addSubheadLabelWithFont:(id)arg1 textColor:(id)arg2;	// IMP=0x0000000100062b78
- (unsigned long long)controlState;	// IMP=0x0000000100062b30
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100062abc
- (_Bool)canBecomeFocused;	// IMP=0x0000000100062ab4
- (void)layoutSubviews;	// IMP=0x0000000100062a60
- (void)prepareForReuse;	// IMP=0x0000000100062954
- (void)_setShadows;	// IMP=0x000000010006275c
@property(retain, nonatomic) UIImage *placeholderImage;
- (void)setArtworkCatalog:(id)arg1 withFittingSize:(struct CGSize)arg2;	// IMP=0x000000010006207c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100061b4c

@end

