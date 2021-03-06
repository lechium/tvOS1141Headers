//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSViewServicePresenter.h"
#import "TVApplicationControllerDelegate.h"
#import "TVWLLowerThirdsScreenshotZoomAnimatorDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSLayoutConstraint, NSString, TVNavigationController, TVStoreApplicationSetupHelper, TVWLLowerThirdsView, UIView;

__attribute__((visibility("hidden")))
@interface TVWLLowerThirdsServiceViewController : UIViewController <PBSViewServicePresenter, TVWLLowerThirdsScreenshotZoomAnimatorDelegate, UIGestureRecognizerDelegate, TVApplicationControllerDelegate>
{
    UIView *_backgroundDimmingView;	// 8 = 0x8
    TVWLLowerThirdsView *_lowerThirdsView;	// 16 = 0x10
    NSLayoutConstraint *_backgroundDimmingViewHeightConstraint;	// 24 = 0x18
    NSLayoutConstraint *_lowerThirdsTopAnchorConstraint;	// 32 = 0x20
    NSLayoutConstraint *_lowerThirdsHeightAnchorConstraint;	// 40 = 0x28
    TVNavigationController *_navigationController;	// 48 = 0x30
    TVStoreApplicationSetupHelper *_setUpHelper;	// 56 = 0x38
    double _currentPannedVerticalOffset;	// 64 = 0x40
    _Bool _isPanning;	// 72 = 0x48
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100008964
+ (id)_exportedInterface;	// IMP=0x0000000100008948
- (void).cxx_destruct;	// IMP=0x0000000100008980
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008944
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000085fc
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100008174
- (double)verticalOffsetForAnimator:(id)arg1;	// IMP=0x000000010000814c
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100007f88
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100007f38
- (void)_handlePanGesture:(id)arg1;	// IMP=0x0000000100007b90
- (void)_menuPressed:(id)arg1;	// IMP=0x0000000100007b84
- (id)preferredFocusEnvironments;	// IMP=0x0000000100007a90
- (id)_animatorForToElement:(id)arg1 operation:(long long)arg2;	// IMP=0x000000010000741c
- (double)_backgroundDimmingViewOriginalHeight;	// IMP=0x00000001000073ac
- (double)_lowerThirdsViewActualHeight;	// IMP=0x0000000100007384
- (double)_lowerThirdsViewOriginalVisibleHeight;	// IMP=0x0000000100007324
- (id)cachedBagPath;	// IMP=0x0000000100007258
- (id)appLocalBootURL;	// IMP=0x00000001000071b4
- (id)defaultBootURL;	// IMP=0x0000000100007110
- (void)_registerCustomAnimators;	// IMP=0x0000000100006f60
- (void)_animatePanningEnded;	// IMP=0x0000000100006dc0
- (void)_dismissLowerThirdsViewService;	// IMP=0x0000000100006d7c
- (void)_stageAppController;	// IMP=0x0000000100006c20
- (void)_setUpAppController;	// IMP=0x0000000100006568
- (void)_setUpViews;	// IMP=0x0000000100005ecc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

