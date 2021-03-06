//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DADeviceWithUIDelegate.h"
#import "DKViewControllerDelegate.h"
#import "TVDMainViewDelegate.h"

@class DASessionSettings, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, TVDAppDelegate, TVDMainView, UIVisualEffectView, _UIContentUnavailableView;

@interface TVDViewController : UIViewController <TVDMainViewDelegate, DKViewControllerDelegate, DADeviceWithUIDelegate>
{
    _Bool _termsAndConditionsStarted;	// 8 = 0x8
    id <DADevice> _device;	// 16 = 0x10
    TVDAppDelegate *_appDelegate;	// 24 = 0x18
    TVDMainView *_mainView;	// 32 = 0x20
    _UIContentUnavailableView *_noFreeSpaceView;	// 40 = 0x28
    _UIContentUnavailableView *_failureView;	// 48 = 0x30
    _UIContentUnavailableView *_networkRequiredView;	// 56 = 0x38
    unsigned long long _currentViewControllerState;	// 64 = 0x40
    NSMutableArray *_history;	// 72 = 0x48
    NSMutableSet *_errorsShowing;	// 80 = 0x50
    DASessionSettings *_sessionSettings;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_stagingQueue;	// 96 = 0x60
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stagingQueue; // @synthesize stagingQueue=_stagingQueue;
@property(retain, nonatomic) DASessionSettings *sessionSettings; // @synthesize sessionSettings=_sessionSettings;
@property(retain, nonatomic) NSMutableSet *errorsShowing; // @synthesize errorsShowing=_errorsShowing;
@property(retain, nonatomic) NSMutableArray *history; // @synthesize history=_history;
@property(nonatomic) _Bool termsAndConditionsStarted; // @synthesize termsAndConditionsStarted=_termsAndConditionsStarted;
@property(nonatomic) unsigned long long currentViewControllerState; // @synthesize currentViewControllerState=_currentViewControllerState;
@property(retain, nonatomic) _UIContentUnavailableView *networkRequiredView; // @synthesize networkRequiredView=_networkRequiredView;
@property(retain, nonatomic) _UIContentUnavailableView *failureView; // @synthesize failureView=_failureView;
@property(retain, nonatomic) _UIContentUnavailableView *noFreeSpaceView; // @synthesize noFreeSpaceView=_noFreeSpaceView;
@property(retain, nonatomic) TVDMainView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) TVDAppDelegate *appDelegate; // @synthesize appDelegate=_appDelegate;
@property(retain, nonatomic) id <DADevice> device; // @synthesize device=_device;
- (void).cxx_destruct;	// IMP=0x00000001000154f4
- (void)_enqueueUIUpdateWithMinimumExecution:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000151bc
- (void)updateViewConstraints;	// IMP=0x0000000100014f38
- (void)setupView;	// IMP=0x0000000100014250
- (void)showDiagosticsErrorWithReason:(id)arg1;	// IMP=0x0000000100014138
- (void)openSettings;	// IMP=0x00000001000140b8
- (void)hideEverything;	// IMP=0x0000000100014004
- (void)mainViewDidReceiveHistoryAction:(id)arg1;	// IMP=0x0000000100013cb4
- (void)mainViewDidReceiveDoneAction:(id)arg1;	// IMP=0x0000000100013c74
- (void)mainViewDidReceiveCloseAction:(id)arg1;	// IMP=0x0000000100013a0c
- (void)_hideFailure;	// IMP=0x0000000100013958
- (void)_hideNetworkRequired;	// IMP=0x00000001000138a4
- (void)_showNetworkRequired;	// IMP=0x00000001000137a8
- (void)_showFailureWithMessage:(id)arg1;	// IMP=0x000000010001360c
- (void)_updateErrors:(id)arg1;	// IMP=0x0000000100013274
- (void)_updateHistory:(id)arg1;	// IMP=0x0000000100013120
- (void)_updateSessionSettings:(id)arg1;	// IMP=0x0000000100012f74
- (void)_updateProgress:(id)arg1;	// IMP=0x0000000100012d0c
- (void)_updateTestSuiteName:(id)arg1 description:(id)arg2;	// IMP=0x0000000100012b6c
- (void)_inactive;	// IMP=0x0000000100012918
- (void)_idle;	// IMP=0x0000000100012790
- (void)_updatePhase:(long long)arg1;	// IMP=0x000000010001271c
- (void)updateWithInfo:(id)arg1;	// IMP=0x00000001000123e8
- (void)checkForSession;	// IMP=0x00000001000120d0
- (void)hideOutOfSpace;	// IMP=0x000000010001201c
- (void)displayOutOfSpace;	// IMP=0x0000000100011f20
- (_Bool)checkIfFreeSpaceAvailable;	// IMP=0x0000000100011e00
- (void)updateViewsIfSpaceAvailable;	// IMP=0x0000000100011d8c
- (unsigned long long)getFreeUserSpaceThreshold;	// IMP=0x0000000100011cb4
- (unsigned long long)getFreeSystemSpaceThreshold;	// IMP=0x0000000100011bdc
- (void)device:(id)arg1 shouldStartTestWithTestId:(id)arg2 fullscreen:(_Bool)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x0000000100011bcc
- (void)diagnosticManager:(id)arg1 dismissViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011b7c
- (void)diagnosticManager:(id)arg1 presentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011af0
- (void)didDisagreeToTerms;	// IMP=0x0000000100011ab0
- (void)didAgreeToTerms;	// IMP=0x000000010001168c
- (void)presentSecondaryConsent;	// IMP=0x0000000100011408
- (void)presentTermsAndConditions;	// IMP=0x00000001000111b4
- (id)_preferredFocusedItem;	// IMP=0x00000001000110ac
- (id)preferredFocusEnvironments;	// IMP=0x0000000100010fdc
- (void)applicationDidResume;	// IMP=0x0000000100010f8c
- (void)viewDidLoad;	// IMP=0x0000000100010eb4
- (id)init;	// IMP=0x0000000100010d64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIVisualEffectView *view; // @dynamic view;

@end

