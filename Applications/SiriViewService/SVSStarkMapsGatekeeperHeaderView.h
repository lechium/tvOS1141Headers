//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVSStarkCancelButtonGatekeeperHeaderView.h"

@class AVExternalDevice, UIButton, UILabel;

@interface SVSStarkMapsGatekeeperHeaderView : SVSStarkCancelButtonGatekeeperHeaderView
{
    UILabel *_titleLabel;	// 32 = 0x20
    UIButton *_keyboardButton;	// 40 = 0x28
    AVExternalDevice *_externalDevice;	// 48 = 0x30
}

@property(readonly, nonatomic, getter=_externalDevice) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(readonly, nonatomic, getter=_keyboardButton) UIButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property(readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100034c8c
- (void)_keyboardButtonTapped:(id)arg1;	// IMP=0x0000000100034bac
- (void)_keyboardButtonPressed:(id)arg1;	// IMP=0x0000000100034afc
- (void)_cancelButtonTapped:(id)arg1;	// IMP=0x0000000100034a68
- (void)layoutSubviews;	// IMP=0x000000010003478c
- (void)_updateLimitedUI;	// IMP=0x000000010003452c
- (void)_addKeyboardGestureRecognizers;	// IMP=0x000000010003433c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100034290
- (void)_updateLimitedUIOnMainThread:(id)arg1;	// IMP=0x0000000100034274
- (_Bool)limitedUIEnabled;	// IMP=0x00000001000341b4
- (id)initWithRequestOptions:(id)arg1;	// IMP=0x0000000100033ff4

@end

