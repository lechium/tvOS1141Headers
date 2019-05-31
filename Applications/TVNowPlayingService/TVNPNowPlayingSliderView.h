//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class TVNPNowPlayingProgressView, UIImage, UIImageView, UIView;

@interface TVNPNowPlayingSliderView : UIControl
{
    double _maxBarWidth;	// 8 = 0x8
    _Bool _continuous;	// 16 = 0x10
    float _value;	// 20 = 0x14
    float _minimumValue;	// 24 = 0x18
    float _maximumValue;	// 28 = 0x1c
    UIImage *_minimumValueImage;	// 32 = 0x20
    UIImage *_maximumValueImage;	// 40 = 0x28
    TVNPNowPlayingProgressView *_progressBarView;	// 48 = 0x30
    UIImageView *_minValueIconView;	// 56 = 0x38
    UIImageView *_maxValueIconView;	// 64 = 0x40
    UIView *_thumbView;	// 72 = 0x48
    struct CGPoint _lastThumbLocation;	// 80 = 0x50
}

@property(readonly, nonatomic) struct CGPoint lastThumbLocation; // @synthesize lastThumbLocation=_lastThumbLocation;
@property(readonly, nonatomic) UIView *thumbView; // @synthesize thumbView=_thumbView;
@property(readonly, nonatomic) UIImageView *maxValueIconView; // @synthesize maxValueIconView=_maxValueIconView;
@property(readonly, nonatomic) UIImageView *minValueIconView; // @synthesize minValueIconView=_minValueIconView;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(readonly, nonatomic) TVNPNowPlayingProgressView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) UIImage *maximumValueImage; // @synthesize maximumValueImage=_maximumValueImage;
@property(retain, nonatomic) UIImage *minimumValueImage; // @synthesize minimumValueImage=_minimumValueImage;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
- (void).cxx_destruct;	// IMP=0x0000000100003060
- (id)_unfocusedProgressColor;	// IMP=0x0000000100002f00
- (id)_focusedProgressColor;	// IMP=0x0000000100002e74
- (void)_panUpdated:(id)arg1;	// IMP=0x0000000100002c2c
- (void)_menuPressed;	// IMP=0x0000000100002c28
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100002c24
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100002c1c
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100002c14
- (_Bool)shouldTrack;	// IMP=0x0000000100002c0c
- (double)maxBarWidth;	// IMP=0x0000000100002bfc
- (void)setMaxBarWidth:(double)arg1;	// IMP=0x0000000100002bd4
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100002988
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100002960
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010000294c
- (void)layoutSubviews;	// IMP=0x00000001000027cc
- (_Bool)canBecomeFocused;	// IMP=0x00000001000027c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100002314

@end
