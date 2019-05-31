//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPopoverBackgroundView.h"

@class IMTheme, NSString, UIImageView;

@interface IMPopoverBackgroundView : UIPopoverBackgroundView
{
    IMTheme *_theme;	// 8 = 0x8
    NSString *_templateName;	// 16 = 0x10
    double _arrowOffset;	// 24 = 0x18
    unsigned long long _arrowDirection;	// 32 = 0x20
    NSString *_lastBackgroundImageName;	// 40 = 0x28
    UIImageView *_backgroundSliceNoArrow;	// 48 = 0x30
    UIImageView *_backgroundSliceArrow;	// 56 = 0x38
}

+ (id)itm_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;	// IMP=0x00000001002816bc
+ (struct UIEdgeInsets)contentViewInsets;	// IMP=0x0000000100280b80
+ (double)arrowBase;	// IMP=0x0000000100280b74
+ (double)arrowHeight;	// IMP=0x0000000100280b6c
@property(retain, nonatomic) UIImageView *backgroundSliceArrow; // @synthesize backgroundSliceArrow=_backgroundSliceArrow;
@property(retain, nonatomic) UIImageView *backgroundSliceNoArrow; // @synthesize backgroundSliceNoArrow=_backgroundSliceNoArrow;
@property(copy, nonatomic) NSString *lastBackgroundImageName; // @synthesize lastBackgroundImageName=_lastBackgroundImageName;
- (unsigned long long)arrowDirection;	// IMP=0x0000000100281950
- (double)arrowOffset;	// IMP=0x0000000100281940
@property(copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(retain, nonatomic) IMTheme *theme; // @synthesize theme=_theme;
- (void)itm_updateShadow;	// IMP=0x000000010028185c
- (id)itm_shadowPath;	// IMP=0x00000001002817d0
- (void)layoutSubviews;	// IMP=0x0000000100280f74
- (id)backgroundImageName;	// IMP=0x0000000100280e0c
- (void)setArrowDirection:(unsigned long long)arg1;	// IMP=0x0000000100280d68
- (void)setArrowOffset:(double)arg1;	// IMP=0x0000000100280d50
- (void)dealloc;	// IMP=0x0000000100280ca4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100280b94

@end
