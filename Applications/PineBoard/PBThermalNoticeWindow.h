//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBWindow.h"

@class UILabel;

@interface PBThermalNoticeWindow : PBWindow
{
    UILabel *_icon;	// 8 = 0x8
    UILabel *_text;	// 16 = 0x10
    UILabel *_subtext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000fac84
- (void)layoutSubviews;	// IMP=0x00000001000faa48
- (_Bool)_ignoresHitTest;	// IMP=0x00000001000faa40
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000fa6ac

@end
