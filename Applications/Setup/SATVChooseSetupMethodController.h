//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVBluetoothKeyboardManagerDelegate.h"
#import "SATVBranchStep.h"
#import "SATVChooseOptionViewDataSource.h"
#import "SATVChooseOptionViewDelegate.h"
#import "TVSUIDigitEntryViewControllerDelegate.h"

@class NSString, SATVBluetoothKeyboardManager, SATVChooseOptionView, SATVNavigationController, TVSUIDigitEntryViewController;

@interface SATVChooseSetupMethodController : SATVStepViewController <SATVChooseOptionViewDataSource, SATVChooseOptionViewDelegate, SATVBluetoothKeyboardManagerDelegate, TVSUIDigitEntryViewControllerDelegate, SATVBranchStep>
{
    _Bool _bluetoothPairing;	// 8 = 0x8
    CDUnknownBlockType selectionHandler;	// 16 = 0x10
    SATVChooseOptionView *_chooseOptionView;	// 24 = 0x18
    SATVBluetoothKeyboardManager *_bluetoothKeyboardManager;	// 32 = 0x20
    TVSUIDigitEntryViewController *_digitEntryViewController;	// 40 = 0x28
    NSString *_declineOptionFooterText;	// 48 = 0x30
}

+ (id)stableKey;	// IMP=0x0000000100036598
@property(nonatomic, getter=isBluetoothPairing) _Bool bluetoothPairing; // @synthesize bluetoothPairing=_bluetoothPairing;
@property(copy, nonatomic) NSString *declineOptionFooterText; // @synthesize declineOptionFooterText=_declineOptionFooterText;
@property(retain, nonatomic) TVSUIDigitEntryViewController *digitEntryViewController; // @synthesize digitEntryViewController=_digitEntryViewController;
@property(retain, nonatomic) SATVBluetoothKeyboardManager *bluetoothKeyboardManager; // @synthesize bluetoothKeyboardManager=_bluetoothKeyboardManager;
@property(retain, nonatomic) SATVChooseOptionView *chooseOptionView; // @synthesize chooseOptionView=_chooseOptionView;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler;
- (void).cxx_destruct;	// IMP=0x0000000100037cf4
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x0000000100037b28
- (void)willAttemptToPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x00000001000379f8
- (void)didFailToPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x00000001000378b8
- (void)didPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x0000000100037760
- (void)presentPIN:(long long)arg1 forKeyboardWithName:(id)arg2;	// IMP=0x0000000100037228
- (void)didSelectSecondOptionForView:(id)arg1;	// IMP=0x0000000100037184
- (void)didSelectFirstOptionForView:(id)arg1;	// IMP=0x00000001000370e0
- (id)secondOptionButtonFooterTextForView:(id)arg1;	// IMP=0x00000001000370d0
- (id)firstOptionButtonFooterTextForView:(id)arg1;	// IMP=0x0000000100037048
- (id)secondOptionButtonTextForView:(id)arg1;	// IMP=0x0000000100036fc0
- (id)firstOptionButtonTextForView:(id)arg1;	// IMP=0x0000000100036f38
- (id)subtitleTextForView:(id)arg1;	// IMP=0x0000000100036e88
- (id)titleTextForView:(id)arg1;	// IMP=0x0000000100036e00
- (void)_popDigitEntryController;	// IMP=0x0000000100036d3c
- (void)_stopBluetoothKeyboardPairing;	// IMP=0x0000000100036cc4
- (void)_beginBluetoothKeyboardPairing;	// IMP=0x0000000100036c4c
- (id)preferredFocusEnvironments;	// IMP=0x0000000100036b90
@property(readonly, nonatomic) SATVNavigationController *navigationController;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100036b0c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100036a78
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000368a8
- (void)loadView;	// IMP=0x00000001000367bc
- (void)autoAdvance;	// IMP=0x0000000100036728
- (void)dealloc;	// IMP=0x00000001000366dc
- (id)init;	// IMP=0x00000001000365c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConfigured;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

