//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, TVPImageStack, TVUINamedLayerStack, UIColor, _UIStackedImageConfiguration, _UIStackedImageContainerLayer;

@interface TVPImageStackView : UIView
{
    _UIStackedImageContainerLayer *_imageStackLayer;	// 8 = 0x8
    _UIStackedImageConfiguration *_imageStackConfig;	// 16 = 0x10
    TVPImageStack *_imageStack;	// 24 = 0x18
    struct CGSize _imageStackSize;	// 32 = 0x20
    TVUINamedLayerStack *_uiLayerStack;	// 48 = 0x30
    double _layerSelectionDuration;	// 56 = 0x38
    double _layerUnselectionDuration;	// 64 = 0x40
    double _shadowSelectionDuration;	// 72 = 0x48
    double _shadowUnselectionDuration;	// 80 = 0x50
    double _repositionUnselectionDuration;	// 88 = 0x58
    _Bool _imageLoaded;	// 96 = 0x60
    UIView *_overlayView;	// 104 = 0x68
    UIView *_unmaskedOverlayView;	// 112 = 0x70
}

+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;	// IMP=0x000000010008b094
+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 selectionStyle:(long long)arg2;	// IMP=0x000000010008b000
+ (id)imageStackViewWithSize:(struct CGSize)arg1;	// IMP=0x0000000100088b7c
+ (id)imageStackViewWithImageStack:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000100088af4
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(retain, nonatomic) UIView *unmaskedOverlayView; // @synthesize unmaskedOverlayView=_unmaskedOverlayView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (void).cxx_destruct;	// IMP=0x000000010008b100
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000010008b0a8
- (void)_updateStackedImageConfiguration;	// IMP=0x000000010008adfc
- (double)_unpressedDuration;	// IMP=0x000000010008ade4
- (void)_setUnpressedDuration:(double)arg1;	// IMP=0x000000010008adcc
- (void)_setSelectionStyle:(long long)arg1;	// IMP=0x000000010008adb4
- (void)_setPressedScaleAdjustment:(double)arg1;	// IMP=0x000000010008ad9c
- (void)_setPressedDuration:(double)arg1;	// IMP=0x000000010008ad84
- (void)_setImageStackContentsGravity:(id)arg1;	// IMP=0x000000010008ad6c
- (void)_setIdleModeFocusSizeOffset:(double)arg1;	// IMP=0x000000010008ad54
- (void)_setFocusDirection:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x000000010008ad3c
- (long long)_selectionStyle;	// IMP=0x000000010008ad24
- (id)_layeredImageContainerLayer;	// IMP=0x000000010008ad14
- (id)_shadowLayer;	// IMP=0x000000010008acfc
- (double)_pressedScaleAdjustment;	// IMP=0x000000010008ace4
- (double)_pressedDuration;	// IMP=0x000000010008accc
- (void)_resetShadowSettings;	// IMP=0x000000010008ab4c
- (void)_setShadowVerticalOffset:(double)arg1;	// IMP=0x000000010008aae8
- (void)_setShadowRadius:(double)arg1;	// IMP=0x000000010008aa84
- (void)_setShadowOpacity:(double)arg1;	// IMP=0x000000010008aa20
- (id)_newImageConfiguration;	// IMP=0x000000010008a9dc
- (id)_flatLayer;	// IMP=0x000000010008a9c4
- (id)_layerBelowTitles;	// IMP=0x000000010008a9ac
- (id)_imageStackContentsGravity;	// IMP=0x000000010008a994
- (id)_imageConfiguration;	// IMP=0x000000010008a97c
- (double)_idleModeFocusSizeOffset;	// IMP=0x000000010008a964
@property(nonatomic) double focusSizeIncrease;
@property(readonly, nonatomic) unsigned long long primaryControlState;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x000000010008a8dc
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010008a8c4
@property(nonatomic) unsigned long long controlState;
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000010008a724
@property(nonatomic) struct CGPoint focusDirection;
- (void)setPressed:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008a50c
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008a4f4
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010008a4dc
@property(nonatomic, getter=isPressed) _Bool pressed;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x000000010008a418
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010008a384
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010008a324
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic) double layerUnselectionDuration;
@property(nonatomic) double layerSelectionDuration;
@property(nonatomic, getter=isHueShiftEnabled) _Bool hueShiftEnabled;
@property(nonatomic, getter=isBrightnessBoostEnabled) _Bool brightnessBoostEnabled;
@property(nonatomic) double radiosityAmount;
@property(nonatomic) double specularHighlightVerticalPositionSensitivity;
@property(nonatomic) double specularHighlightVerticalPosition;
@property(nonatomic) double specularHighlightHorizontalPositionSensitivity;
@property(retain, nonatomic) UIColor *specularHighlightColor;
@property(nonatomic) double rotationAmount;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double perspectiveZDepth;
@property(copy, nonatomic) NSArray *parallaxImageDepths;
@property(nonatomic) double maxParallaxImageDepth;
- (void)_loadImage;	// IMP=0x000000010008934c
@property(retain, nonatomic) TVPImageStack *imageStack;
- (void)setImageStack:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x000000010008911c
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100089088
- (void)layoutSubviews;	// IMP=0x000000010008901c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100088fb4
- (void)dealloc;	// IMP=0x0000000100088f20
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x0000000100088e34
- (id)initWithImageStack:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000100088c14
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100088bc8

@end

