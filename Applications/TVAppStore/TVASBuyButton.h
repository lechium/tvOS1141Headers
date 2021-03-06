//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class CALayer, CAShapeLayer, TVASVibrantLabel, UIImage, UIImageView, UILabel, UIView, UIVisualEffectView, _TVASEnhancedAnimationsView, _UIFloatingContentView;

@interface TVASBuyButton : UIControl
{
    _Bool _isFreeApp;	// 8 = 0x8
    long long _backdropStyle;	// 16 = 0x10
    long long _textVibrancyStyle;	// 24 = 0x18
    UILabel *_primaryLabel;	// 32 = 0x20
    UILabel *_actionLabel;	// 40 = 0x28
    UIImage *_actionImage;	// 48 = 0x30
    long long _buyButtonState;	// 56 = 0x38
    double _progress;	// 64 = 0x40
    _UIFloatingContentView *_floatingView;	// 72 = 0x48
    UIVisualEffectView *_backdropView;	// 80 = 0x50
    UIImageView *_actionImageView;	// 88 = 0x58
    UIView *_overlayView;	// 96 = 0x60
    CALayer *_actionImageMask;	// 104 = 0x68
    UILabel *_primaryLabelMask;	// 112 = 0x70
    TVASVibrantLabel *_vibrantLabel;	// 120 = 0x78
    CAShapeLayer *_unfocusedPieLayer;	// 128 = 0x80
    CAShapeLayer *_focusedPieLayer;	// 136 = 0x88
    _TVASEnhancedAnimationsView *_viewProxy;	// 144 = 0x90
    unsigned long long _pieState;	// 152 = 0x98
    struct CGSize _buttonSize;	// 160 = 0xa0
}

@property(nonatomic) unsigned long long pieState; // @synthesize pieState=_pieState;
@property(retain, nonatomic) _TVASEnhancedAnimationsView *viewProxy; // @synthesize viewProxy=_viewProxy;
@property(retain, nonatomic) CAShapeLayer *focusedPieLayer; // @synthesize focusedPieLayer=_focusedPieLayer;
@property(retain, nonatomic) CAShapeLayer *unfocusedPieLayer; // @synthesize unfocusedPieLayer=_unfocusedPieLayer;
@property(retain, nonatomic) TVASVibrantLabel *vibrantLabel; // @synthesize vibrantLabel=_vibrantLabel;
@property(retain, nonatomic) UILabel *primaryLabelMask; // @synthesize primaryLabelMask=_primaryLabelMask;
@property(retain, nonatomic) CALayer *actionImageMask; // @synthesize actionImageMask=_actionImageMask;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *actionImageView; // @synthesize actionImageView=_actionImageView;
@property(retain, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) long long buyButtonState; // @synthesize buyButtonState=_buyButtonState;
@property(nonatomic) _Bool isFreeApp; // @synthesize isFreeApp=_isFreeApp;
@property(retain, nonatomic) UIImage *actionImage; // @synthesize actionImage=_actionImage;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(readonly, nonatomic) long long textVibrancyStyle; // @synthesize textVibrancyStyle=_textVibrancyStyle;
@property(readonly, nonatomic) long long backdropStyle; // @synthesize backdropStyle=_backdropStyle;
- (void).cxx_destruct;	// IMP=0x000000010000bd68
- (void)_selectButtonAction:(id)arg1;	// IMP=0x000000010000baa0
- (id)_contentView;	// IMP=0x000000010000ba4c
- (_Bool)_shouldShowPie;	// IMP=0x000000010000ba28
- (id)_pieLayerWithDiameter:(double)arg1;	// IMP=0x000000010000b8fc
- (id)_progressPieLayerWithDiameter:(double)arg1;	// IMP=0x000000010000b624
- (id)_spinningPieLayerWithDiameter:(double)arg1;	// IMP=0x000000010000b4e4
- (void)_updatePieLayers;	// IMP=0x000000010000b050
- (void)_removePieLayers;	// IMP=0x000000010000af98
- (void)_installPieLayers;	// IMP=0x000000010000aba4
- (void)_updateButtonAppearance;	// IMP=0x000000010000a948
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000010000a8f0
- (void)layoutSubviews;	// IMP=0x000000010000a478
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010000a3fc
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010000a2ec
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010000a208
- (void)setBuyButtonState:(long long)arg1 withProgress:(double)arg2;	// IMP=0x0000000100009f88
- (void)dealloc;	// IMP=0x0000000100009330
- (id)initWithFrame:(struct CGRect)arg1 backdropStyle:(long long)arg2 textVibrancyStyle:(long long)arg3;	// IMP=0x0000000100008e50
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100008e3c
- (void)tvas_configureWithViewElement:(id)arg1 suppressUpdate:(_Bool)arg2;	// IMP=0x0000000100010fe4
- (void)tvas_configureWithViewElement:(id)arg1;	// IMP=0x0000000100010fd4

@end

