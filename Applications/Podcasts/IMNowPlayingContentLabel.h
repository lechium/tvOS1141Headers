//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSString;

@interface IMNowPlayingContentLabel : UIView
{
    NSString *_fullString;	// 8 = 0x8
    NSDictionary *_stringAttributes;	// 16 = 0x10
    struct __CTFramesetter *_framesetter;	// 24 = 0x18
    struct __CTFrame *_frame;	// 32 = 0x20
    _Bool _highlighted;	// 40 = 0x28
}

@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;	// IMP=0x000000010025d1ac
- (id)stringAttributes;	// IMP=0x000000010025cff0
- (void)dealloc;	// IMP=0x000000010025cf88
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010025ce50
- (void)update;	// IMP=0x000000010025cddc
- (void)tintColorDidChange;	// IMP=0x000000010025cd64
- (void)layoutSubviews;	// IMP=0x000000010025c958
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010025c864

@end

