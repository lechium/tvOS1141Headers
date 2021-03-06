//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImage;

@interface IMCroppedBackgroundButton : UIButton
{
    UIImage *_normalImage;	// 8 = 0x8
    UIImage *_highlightedImage;	// 16 = 0x10
    UIImage *_disabledImage;	// 24 = 0x18
    UIImage *_selectedImage;	// 32 = 0x20
    struct UIEdgeInsets _capInsets;	// 40 = 0x28
}

@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(nonatomic) struct UIEdgeInsets capInsets; // @synthesize capInsets=_capInsets;
- (id)imageForSelfWidth:(id)arg1;	// IMP=0x000000010027912c
- (void)resizeImages;	// IMP=0x0000000100278f54
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000100278eb4
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000100278e14
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000100278d04
- (void)dealloc;	// IMP=0x0000000100278c6c
- (void)sharedInit;	// IMP=0x0000000100278b64
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100278b0c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100278ab4

@end

