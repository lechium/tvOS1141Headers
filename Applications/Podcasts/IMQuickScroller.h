//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView;

@interface IMQuickScroller : UIControl
{
    float _value;	// 8 = 0x8
    UIImageView *_background;	// 16 = 0x10
    UIImageView *_foreground;	// 24 = 0x18
    _Bool _userScrolling;	// 32 = 0x20
}

+ (id)foregroundForSize:(struct CGSize)arg1;	// IMP=0x000000010020de94
+ (id)backgroundForSize:(struct CGSize)arg1;	// IMP=0x000000010020de58
@property(nonatomic) float value; // @synthesize value=_value;
@property(readonly, nonatomic) _Bool userScrolling; // @synthesize userScrolling=_userScrolling;
- (void)layoutSubviews;	// IMP=0x000000010020e584
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000010020e534
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010020e4e4
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010020e4c4
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010020e460
- (void)updateValueForTouch:(id)arg1;	// IMP=0x000000010020e378
- (void)dealloc;	// IMP=0x000000010020e308
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010020e0e8

@end
