//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSArray, NSString, UIFocusGuide, UILabel, UIVisualEffectView;

@interface TVPPhotoBannerBrowserView : UICollectionReusableView
{
    _Bool _requiresHorizontalMargins;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSArray *_buttons;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_subtitleLabel;	// 48 = 0x30
    UIVisualEffectView *__hostView;	// 56 = 0x38
    UIFocusGuide *__focusGuide;	// 64 = 0x40
}

@property(retain) UIFocusGuide *_focusGuide; // @synthesize _focusGuide=__focusGuide;
@property(retain) UIVisualEffectView *_hostView; // @synthesize _hostView=__hostView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) _Bool requiresHorizontalMargins; // @synthesize requiresHorizontalMargins=_requiresHorizontalMargins;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010005e0d8
- (struct CGSize)_getAttributedTextSize:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x000000010005df44
- (struct CGSize)_getAttributedSubtitleSize;	// IMP=0x000000010005de5c
- (struct CGSize)_getAttributedTitleSize;	// IMP=0x000000010005dd74
- (void)layoutSubviews;	// IMP=0x000000010005d5dc
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010005d5b4
- (id)preferredFocusEnvironments;	// IMP=0x000000010005d3ec
- (_Bool)canBecomeFocused;	// IMP=0x000000010005d3e4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010005d280
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010005c7e8

@end

