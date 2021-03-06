//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface MTTVContentUnavailableView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UIButton *_button;	// 32 = 0x20
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x000000010006ba5c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010006b738
- (void)layoutSubviews;	// IMP=0x000000010006b304
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010006b098
- (void)updateColors;	// IMP=0x000000010006af74
- (void)configureSubviews;	// IMP=0x000000010006aea4
- (void)setButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x000000010006adbc
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *message;
@property(retain, nonatomic) NSString *title;
- (id)init;	// IMP=0x000000010006aa70

@end

