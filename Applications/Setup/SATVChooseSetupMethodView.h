//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SATVButton, SATVHeaderView, UILabel;

@interface SATVChooseSetupMethodView : UIView
{
    NSString *_automaticSetupFooterText;	// 8 = 0x8
    NSString *_manualSetupFooterText;	// 16 = 0x10
    id <SATVChooseSetupMethodViewDelegate> _delegate;	// 24 = 0x18
    SATVHeaderView *_headerView;	// 32 = 0x20
    SATVButton *_automaticSetupButton;	// 40 = 0x28
    SATVButton *_manualSetupButton;	// 48 = 0x30
    UILabel *_footerLabel;	// 56 = 0x38
    UIView *_lastPreferredFocusedButton;	// 64 = 0x40
}

@property(retain, nonatomic) UIView *lastPreferredFocusedButton; // @synthesize lastPreferredFocusedButton=_lastPreferredFocusedButton;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) SATVButton *manualSetupButton; // @synthesize manualSetupButton=_manualSetupButton;
@property(retain, nonatomic) SATVButton *automaticSetupButton; // @synthesize automaticSetupButton=_automaticSetupButton;
@property(retain, nonatomic) SATVHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <SATVChooseSetupMethodViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *manualSetupFooterText; // @synthesize manualSetupFooterText=_manualSetupFooterText;
@property(copy, nonatomic) NSString *automaticSetupFooterText; // @synthesize automaticSetupFooterText=_automaticSetupFooterText;
- (void).cxx_destruct;	// IMP=0x000000010000b204
- (void)_manualSetupButtonSelected;	// IMP=0x000000010000b0a8
- (void)_automaticSetupButtonSelected;	// IMP=0x000000010000b060
- (struct CGSize)_computeFramesForBounds:(struct CGRect)arg1 forCalculationOnly:(_Bool)arg2;	// IMP=0x000000010000ab84
- (void)_updateFooterText;	// IMP=0x000000010000aa30
@property(copy, nonatomic) NSString *manualSetupButtonTitle;
@property(copy, nonatomic) NSString *automaticSetupButtonTitle;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *titleText;
- (id)preferredFocusEnvironments;	// IMP=0x000000010000a478
- (_Bool)canBecomeFocused;	// IMP=0x000000010000a3f4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010000a2c0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010000a29c
- (void)layoutSubviews;	// IMP=0x000000010000a264
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100009de0

@end

