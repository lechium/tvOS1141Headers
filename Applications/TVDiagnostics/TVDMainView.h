//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DACheckAnimationView, DADeviceIdentifierView, NSLayoutConstraint, TVDMarqueeButton, UIActivityIndicatorView, UILabel, UIProgressView;

@interface TVDMainView : UIView
{
    id <TVDMainViewDelegate> _delegate;	// 8 = 0x8
    DACheckAnimationView *_checkAnimationView;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicator;	// 32 = 0x20
    UIProgressView *_progressView;	// 40 = 0x28
    UILabel *_applicationTitleLabel;	// 48 = 0x30
    UILabel *_statusLabel;	// 56 = 0x38
    TVDMarqueeButton *_closeButton;	// 64 = 0x40
    TVDMarqueeButton *_historyButton;	// 72 = 0x48
    DADeviceIdentifierView *_deviceIdentifier;	// 80 = 0x50
    NSLayoutConstraint *_deviceIdentifierHeightConstraint;	// 88 = 0x58
}

@property(retain, nonatomic) NSLayoutConstraint *deviceIdentifierHeightConstraint; // @synthesize deviceIdentifierHeightConstraint=_deviceIdentifierHeightConstraint;
@property(retain, nonatomic) DADeviceIdentifierView *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) TVDMarqueeButton *historyButton; // @synthesize historyButton=_historyButton;
@property(retain, nonatomic) TVDMarqueeButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *applicationTitleLabel; // @synthesize applicationTitleLabel=_applicationTitleLabel;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) DACheckAnimationView *checkAnimationView; // @synthesize checkAnimationView=_checkAnimationView;
@property(nonatomic) __weak id <TVDMainViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010000a108
- (void)updateConstraints;	// IMP=0x0000000100008a60
- (_Bool)displayDeviceIdentifier:(id)arg1;	// IMP=0x00000001000089ec
- (_Bool)setDeviceIdentifierVisible:(_Bool)arg1;	// IMP=0x00000001000088e0
- (void)showCloseButtonWithDone:(_Bool)arg1;	// IMP=0x00000001000084d8
- (void)showButtonsAndApplicationTitle;	// IMP=0x00000001000083fc
- (void)historyTapped:(id)arg1;	// IMP=0x00000001000083b4
- (void)doneTapped:(id)arg1;	// IMP=0x000000010000836c
- (void)closeTapped:(id)arg1;	// IMP=0x0000000100008324
- (void)hideProgressView:(_Bool)arg1;	// IMP=0x00000001000082dc
- (void)updateProgress:(id)arg1;	// IMP=0x000000010000823c
- (void)showActivityIndicator:(_Bool)arg1;	// IMP=0x00000001000081e4
- (void)hideText:(_Bool)arg1;	// IMP=0x000000010000819c
- (void)updateText:(id)arg1;	// IMP=0x0000000100008130
- (void)updateWithDeviceState:(id)arg1;	// IMP=0x00000001000080c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100007398

@end

