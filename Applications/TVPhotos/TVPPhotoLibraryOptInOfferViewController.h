//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIButton, UILabel;

@interface TVPPhotoLibraryOptInOfferViewController : UIViewController
{
    CDUnknownBlockType _optInBlock;	// 8 = 0x8
    CDUnknownBlockType _optOutBlock;	// 16 = 0x10
    UIButton *_optInButton;	// 24 = 0x18
    UILabel *_footerLabel;	// 32 = 0x20
}

@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *optInButton; // @synthesize optInButton=_optInButton;
@property(copy, nonatomic) CDUnknownBlockType optOutBlock; // @synthesize optOutBlock=_optOutBlock;
@property(copy, nonatomic) CDUnknownBlockType optInBlock; // @synthesize optInBlock=_optInBlock;
- (void).cxx_destruct;	// IMP=0x000000010007f448
- (void)_optOut:(id)arg1;	// IMP=0x000000010007f38c
- (void)_optIn:(id)arg1;	// IMP=0x000000010007f350
- (id)_footerColor;	// IMP=0x000000010007f330
- (id)_descriptionColor;	// IMP=0x000000010007f310
- (id)_titleColor;	// IMP=0x000000010007f2f0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010007f1d0
- (void)viewDidLoad;	// IMP=0x000000010007dbe0

@end
