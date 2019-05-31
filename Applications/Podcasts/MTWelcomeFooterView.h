//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MTWelcomeButton, UIButton, UILabel;

@interface MTWelcomeFooterView : UIView
{
    id <MTWelcomeFooterViewDelegate> _delegate;	// 8 = 0x8
    UILabel *_privacyLabel;	// 16 = 0x10
    UIButton *_privacyButton;	// 24 = 0x18
    MTWelcomeButton *_startButton;	// 32 = 0x20
}

+ (id)privacyFont;	// IMP=0x0000000100163780
@property(retain, nonatomic) MTWelcomeButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) UIButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property(retain, nonatomic) UILabel *privacyLabel; // @synthesize privacyLabel=_privacyLabel;
@property(nonatomic) __weak id <MTWelcomeFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100163ae4
- (void)didTapStartButton:(id)arg1;	// IMP=0x0000000100163990
- (void)didTapPrivacyButton:(id)arg1;	// IMP=0x00000001001638dc
- (id)preferredFocusEnvironments;	// IMP=0x0000000100163840
- (double)distanceBetweenPrivacyButtonAndStartButton;	// IMP=0x0000000100163658
- (double)distanceBetweenPrivacyLabelAndPrivacyButton;	// IMP=0x000000010016354c
- (void)updateFonts;	// IMP=0x0000000100163318
- (struct CGSize)startButtonSizeFittingSize:(struct CGSize)arg1;	// IMP=0x00000001001632ac
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001001631a4
- (void)layoutSubviews;	// IMP=0x0000000100162f04
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100162bac

@end

