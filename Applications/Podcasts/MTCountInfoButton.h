//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class MTTouchInsetsButton, UIColor, UIFont, UILabel;

@interface MTCountInfoButton : UIControl
{
    unsigned long long _index;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    MTTouchInsetsButton *_button;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MTTouchInsetsButton *button; // @synthesize button=_button;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;	// IMP=0x00000001000ed674
- (void)buttonTapped:(id)arg1;	// IMP=0x00000001000ed440
- (struct CGSize)labelSize;	// IMP=0x00000001000ed3e4
- (struct CGSize)buttonSize;	// IMP=0x00000001000ed388
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000ed32c
- (void)layoutSubviews;	// IMP=0x00000001000ed1c0
- (id)_createLabelTextForCurrentState;	// IMP=0x00000001000ed028
- (void)_updateLabelText;	// IMP=0x00000001000ecf70
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
- (void)setIndex:(unsigned long long)arg1 forCount:(unsigned long long)arg2;	// IMP=0x00000001000ecd14
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000ecc54

@end
