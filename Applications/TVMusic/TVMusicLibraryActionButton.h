//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "UIGestureRecognizerDelegate.h"

@class CALayer, NSString, UIGestureRecognizer, UIImage, UIImageView, UILabel, _UIFloatingContentView;

@interface TVMusicLibraryActionButton : UIButton <UIGestureRecognizerDelegate>
{
    _UIFloatingContentView *_floatingView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UIImageView *_focusedImageView;	// 24 = 0x18
    CALayer *_maskImageLayer;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_textLabel;	// 48 = 0x30
    UIGestureRecognizer *_selectRecognizer;	// 56 = 0x38
    long long _buttonStyle;	// 64 = 0x40
    _Bool _circular;	// 72 = 0x48
    NSString *_title;	// 80 = 0x50
    NSString *_text;	// 88 = 0x58
    UIImage *_image;	// 96 = 0x60
}

@property(nonatomic) _Bool circular; // @synthesize circular=_circular;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010008e234
- (void)_selectButtonAction:(id)arg1;	// IMP=0x000000010008dc7c
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010008dc74
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010008da84
- (void)layoutSubviews;	// IMP=0x000000010008d3cc
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010008d3a8
- (void)_setButtonShadows;	// IMP=0x000000010008d31c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010008d0fc
- (_Bool)canBecomeFocused;	// IMP=0x000000010008d0f0
@property(readonly, nonatomic) long long buttonStyle;
- (void)_buttonActionTriggered;	// IMP=0x000000010008d0d0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000010008d05c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008cb28
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010008ca98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

