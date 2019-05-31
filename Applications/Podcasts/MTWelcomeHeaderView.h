//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface MTWelcomeHeaderView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

+ (id)titleFont;	// IMP=0x000000010004d7b8
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;	// IMP=0x000000010004d8a0
- (double)distanceBetweenImageAndTitle;	// IMP=0x000000010004d7e0
- (void)updateFonts;	// IMP=0x000000010004d390
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010004d1d4
- (void)layoutSubviews;	// IMP=0x000000010004ce00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004cc74

@end

