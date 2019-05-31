//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, SATVHighlightView, UIImageView, UILabel;

@interface SATVPasscodeDigitView : UIView
{
    _Bool _showDigit;	// 8 = 0x8
    double _fontSize;	// 16 = 0x10
    unsigned long long _maxDigitValue;	// 24 = 0x18
    id <SATVPasscodeDigitViewDelegate> _delegate;	// 32 = 0x20
    UIView *_clippingView;	// 40 = 0x28
    UILabel *_label;	// 48 = 0x30
    SATVHighlightView *_highlight;	// 56 = 0x38
    UIImageView *_bulletView;	// 64 = 0x40
    UIImageView *_upArrowView;	// 72 = 0x48
    UIImageView *_downArrowView;	// 80 = 0x50
    NSArray *_recognizers;	// 88 = 0x58
}

@property(retain, nonatomic) NSArray *recognizers; // @synthesize recognizers=_recognizers;
@property(retain, nonatomic) UIImageView *downArrowView; // @synthesize downArrowView=_downArrowView;
@property(retain, nonatomic) UIImageView *upArrowView; // @synthesize upArrowView=_upArrowView;
@property(retain, nonatomic) UIImageView *bulletView; // @synthesize bulletView=_bulletView;
@property(retain, nonatomic) SATVHighlightView *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) __weak id <SATVPasscodeDigitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showDigit; // @synthesize showDigit=_showDigit;
@property(nonatomic) unsigned long long maxDigitValue; // @synthesize maxDigitValue=_maxDigitValue;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;	// IMP=0x000000010002b1e4
- (id)hiddenDigitImage;	// IMP=0x000000010002ad70
- (id)arrowImage:(_Bool)arg1;	// IMP=0x000000010002ab60
- (void)downGesture:(id)arg1;	// IMP=0x000000010002aa18
- (void)upGesture:(id)arg1;	// IMP=0x000000010002a8e4
@property(copy, nonatomic) NSString *text;
- (void)setHighlightProgress:(double)arg1;	// IMP=0x000000010002a7d8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010002a678
- (_Bool)canBecomeFocused;	// IMP=0x000000010002a670
- (void)layoutSubviews;	// IMP=0x000000010002a3d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100029c7c

@end

