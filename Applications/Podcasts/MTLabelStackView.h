//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSCache, NSString, UIColor, UILabel;

@interface MTLabelStackView : UIView
{
    _Bool _heightWillChange;	// 8 = 0x8
    NSCache *_textSizeCache;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
    NSString *_titleTextStyle;	// 32 = 0x20
    NSString *_subtitleTextStyle;	// 40 = 0x28
    UIColor *_titleTextColor;	// 48 = 0x30
    UIColor *_subtitleTextColor;	// 56 = 0x38
    id <MTLabelStackViewDelegate> _delegate;	// 64 = 0x40
    double _subtitleMaxWidth;	// 72 = 0x48
    UILabel *_titleLabel;	// 80 = 0x50
    UILabel *_subtitleLabel;	// 88 = 0x58
}

+ (unsigned long long)defaultSubtitleNumberOfLines;	// IMP=0x00000001000e8cfc
+ (unsigned long long)defaultTitleNumberOfLines;	// IMP=0x00000001000e8cf4
+ (id)defaultSubtitleFont;	// IMP=0x00000001000e8c90
+ (id)defaultTitleFont;	// IMP=0x00000001000e8c2c
+ (id)defaultSubtitleTextStyle;	// IMP=0x00000001000e8c1c
+ (id)defaultTitleTextStyle;	// IMP=0x00000001000e8c0c
+ (double)distanceBetweenLabelFramesWithTitleFont:(id)arg1 subtitleFont:(id)arg2 multilineTitle:(_Bool)arg3;	// IMP=0x00000001000e8b4c
+ (double)distanceBetweenLabelFrames;	// IMP=0x00000001000e8a84
+ (double)maxHeightForTitleNumberOfLines:(unsigned long long)arg1 subtitleNumberOfLines:(unsigned long long)arg2;	// IMP=0x00000001000e897c
+ (double)maxHeight;	// IMP=0x00000001000e890c
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double subtitleMaxWidth; // @synthesize subtitleMaxWidth=_subtitleMaxWidth;
@property(nonatomic) __weak id <MTLabelStackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000ea358
@property(nonatomic) unsigned long long subtitleNumberOfLines;
@property(nonatomic) unsigned long long titleNumberOfLines;
@property(retain, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) NSString *subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(retain, nonatomic) NSString *titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)_notifyDelegateIfHeightChanged;	// IMP=0x00000001000e9700
- (void)_heightWillChange;	// IMP=0x00000001000e96e4
- (void)_updateSubtitleFont;	// IMP=0x00000001000e9630
- (void)_updateTitleFont;	// IMP=0x00000001000e957c
- (id)sizeCacheKeyForLabel:(id)arg1 width:(double)arg2;	// IMP=0x00000001000e9540
- (double)subtitleHeightForWidth:(double)arg1;	// IMP=0x00000001000e9418
- (double)titleHeightForWidth:(double)arg1;	// IMP=0x00000001000e92f0
- (double)distanceBetweenLabelFrames;	// IMP=0x00000001000e917c
- (double)heightForWidth:(double)arg1;	// IMP=0x00000001000e90f8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000e90c8
- (void)layoutSubviews;	// IMP=0x00000001000e8f20
- (void)updateFonts;	// IMP=0x00000001000e8e30
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000e8d04

@end

