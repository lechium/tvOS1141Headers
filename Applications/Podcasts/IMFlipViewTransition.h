//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class CALayer, UIColor, UIView, UIViewController;

@interface IMFlipViewTransition : UIControl
{
    struct CGRect _fromFrame;	// 8 = 0x8
    struct CGRect _toFrame;	// 40 = 0x28
    UIView *_startView;	// 72 = 0x48
    UIView *_endView;	// 80 = 0x50
    CALayer *_backgroundBlocker;	// 88 = 0x58
    UIViewController *_endViewController;	// 96 = 0x60
    struct CGPoint _startPosition;	// 104 = 0x68
    UIView *_rootView;	// 120 = 0x78
    double _transitionDuration;	// 128 = 0x80
    _Bool _noShadow;	// 136 = 0x88
    id _delegate;	// 144 = 0x90
    UIColor *_backgroundViewColor;	// 152 = 0x98
}

@property(retain, nonatomic) UIColor *backgroundViewColor; // @synthesize backgroundViewColor=_backgroundViewColor;
@property(nonatomic) _Bool noShadow; // @synthesize noShadow=_noShadow;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) struct CGPoint startPosition; // @synthesize startPosition=_startPosition;
@property(retain, nonatomic) UIViewController *endViewController; // @synthesize endViewController=_endViewController;
@property(retain, nonatomic) UIView *endView; // @synthesize endView=_endView;
@property(retain, nonatomic) UIView *startView; // @synthesize startView=_startView;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(nonatomic) struct CGRect fromFrame; // @synthesize fromFrame=_fromFrame;
- (void)endCloseTransition;	// IMP=0x00000001002030b8
- (void)startCloseSecondHalf;	// IMP=0x0000000100202e5c
- (void)flipClosed;	// IMP=0x0000000100202110
- (void)endOpenTransition;	// IMP=0x000000010020203c
- (void)startOpenSecondHalf;	// IMP=0x0000000100201d90
- (void)flipOpen;	// IMP=0x0000000100200ee0
- (void)updateShadowPath;	// IMP=0x0000000100200dc4
- (void)updateCenterPoint:(struct CGPoint)arg1;	// IMP=0x0000000100200d6c
- (id)endImage;	// IMP=0x0000000100200ce0
- (id)startImage;	// IMP=0x0000000100200c54
- (id)imageFromViewController:(id)arg1;	// IMP=0x0000000100200a5c
- (void)dealloc;	// IMP=0x000000010020076c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002006cc

@end

