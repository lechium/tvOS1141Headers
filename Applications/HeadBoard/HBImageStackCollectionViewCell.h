//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIColor, UIFont, UILabel, UIMotionEffectGroup, UIView, _TVImageStackView, _UIStackedImageConfiguration, _UIStackedImageContainerView;

@interface HBImageStackCollectionViewCell : UICollectionViewCell
{
    _Bool _layoutIsDrawingFocused;	// 8 = 0x8
    UIMotionEffectGroup *_motionEffectGroup;	// 16 = 0x10
    _Bool _pressIsAnimating;	// 24 = 0x18
    _Bool _preventUnpress;	// 25 = 0x19
    double _titleHeight;	// 32 = 0x20
    double _titleWidthForAccessory;	// 40 = 0x28
    _Bool _unpressIsAnimating;	// 48 = 0x30
    _Bool _unpressOnEndAnimating;	// 49 = 0x31
    _Bool _alwaysDisplaysTitle;	// 50 = 0x32
    _Bool _showsPersistentFocus;	// 51 = 0x33
    _Bool _centeredImageStackWithoutResize;	// 52 = 0x34
    _Bool _holdsPress;	// 53 = 0x35
    _UIStackedImageContainerView *_layeredImageView;	// 56 = 0x38
    _TVImageStackView *_imageStackView;	// 64 = 0x40
    NSString *_title;	// 72 = 0x48
    double _titleSpacing;	// 80 = 0x50
    long long _selectionStyle;	// 88 = 0x58
    UIView *_titleAccessoryView;	// 96 = 0x60
    UIView *_overlayView;	// 104 = 0x68
    UILabel *_titleLabel;	// 112 = 0x70
    UIColor *_textColor;	// 120 = 0x78
    UIFont *_titleFont;	// 128 = 0x80
    UIColor *_highlightedTextColor;	// 136 = 0x88
    UIColor *_unhighlightedTextColor;	// 144 = 0x90
    struct CGPoint _focusDirection;	// 152 = 0x98
}

+ (id)_titleHeightCache;	// IMP=0x000000010005f184
+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 sizeIncreaseOffset:(double)arg2;	// IMP=0x000000010005cb3c
@property(nonatomic, getter=_holdsPress, setter=_setHoldsPress:) _Bool holdsPress; // @synthesize holdsPress=_holdsPress;
@property(nonatomic, getter=_focusDirection, setter=_setFocusDirection:) struct CGPoint focusDirection; // @synthesize focusDirection=_focusDirection;
@property(retain, nonatomic) UIColor *unhighlightedTextColor; // @synthesize unhighlightedTextColor=_unhighlightedTextColor;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, nonatomic, getter=_textColor) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=_centeredImageStackWithoutResize, setter=_setCenteredImageStackWithoutResize:) _Bool centeredImageStackWithoutResize; // @synthesize centeredImageStackWithoutResize=_centeredImageStackWithoutResize;
@property(nonatomic) _Bool showsPersistentFocus; // @synthesize showsPersistentFocus=_showsPersistentFocus;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) _Bool alwaysDisplaysTitle; // @synthesize alwaysDisplaysTitle=_alwaysDisplaysTitle;
@property(retain, nonatomic) UIView *titleAccessoryView; // @synthesize titleAccessoryView=_titleAccessoryView;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) double titleSpacing; // @synthesize titleSpacing=_titleSpacing;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) _TVImageStackView *imageStackView; // @synthesize imageStackView=_imageStackView;
@property(retain, nonatomic) _UIStackedImageContainerView *layeredImageView; // @synthesize layeredImageView=_layeredImageView;
- (void).cxx_destruct;	// IMP=0x000000010005fb74
- (void)_updateTitleShadowForFocus:(_Bool)arg1;	// IMP=0x000000010005f8c0
- (void)_updateTitleTextColorForFocus:(_Bool)arg1;	// IMP=0x000000010005f86c
- (void)_updateTitleLayerAlphas;	// IMP=0x000000010005f7d4
- (void)_updateTitleLayers;	// IMP=0x000000010005f568
- (void)_updateTitleWidthAndHeight;	// IMP=0x000000010005f3c8
- (void)_updateTitleWidthForAccessory;	// IMP=0x000000010005f348
- (void)_updateTitleHeightCache;	// IMP=0x000000010005f220
- (id)_textColorForFocus:(_Bool)arg1;	// IMP=0x000000010005f138
- (void)_showPressState;	// IMP=0x000000010005ef44
@property(readonly, nonatomic, getter=_imageViewCenter) struct CGPoint imageViewCenter;
- (void)_layoutSubviewsAnimated:(_Bool)arg1 focused:(_Bool)arg2 focusUpdateContext:(id)arg3 focusAnimationCoordinator:(id)arg4;	// IMP=0x000000010005d400
- (double)_maxTitleWidthWithFocus:(_Bool)arg1;	// IMP=0x000000010005d2cc
- (id)_highlightFilterChain:(_Bool)arg1;	// IMP=0x000000010005d178
- (void)_ensureTitle;	// IMP=0x000000010005d0dc
- (void)_detachMotionEffects;	// IMP=0x000000010005d0c4
- (void)_attachMotionEffects;	// IMP=0x000000010005ce4c
@property(readonly, nonatomic, getter=_imageConfiguration) _UIStackedImageConfiguration *imageConfiguration;
- (Class)_labelClass;	// IMP=0x000000010005cdb0
- (double)_scaleForImageViewState;	// IMP=0x000000010005cb88
- (id)layeredImageContainerLayer;	// IMP=0x000000010005c218
@property(readonly, nonatomic, getter=_isPressStateAnimating) _Bool pressStateAnimating;
@property(readonly, nonatomic, getter=_isPressed) _Bool pressed;
- (void)clearPressStateWithDuration:(double)arg1;	// IMP=0x000000010005be8c
- (void)clearPressState;	// IMP=0x000000010005be7c
@property(readonly, nonatomic) _Bool allowsMotionEffects;
- (void)setOverlay:(id)arg1;	// IMP=0x000000010005bd84
- (void)prepareForReuse;	// IMP=0x000000010005bccc
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000010005bb84
- (_Bool)_unapplyMotionEffect:(id)arg1;	// IMP=0x000000010005bb7c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000010005ba04
- (void)layoutSubviews;	// IMP=0x000000010005b994
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x000000010005b8b0
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005b8a4
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005b7d8
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005b70c
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005b640
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010005b518
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x000000010005b4a8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010005b41c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010005b1e0

@end

