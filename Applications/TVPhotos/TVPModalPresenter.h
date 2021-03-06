//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, TVPModalPresentationAnimator, UINavigationController, UIViewController;

@interface TVPModalPresenter : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>
{
    TVPModalPresentationAnimator *_presentingAnimator;	// 8 = 0x8
    TVPModalPresentationAnimator *_dismissingAnimator;	// 16 = 0x10
    UINavigationController *_modalRootViewController;	// 24 = 0x18
}

+ (id)presenter;	// IMP=0x0000000100005df8
@property(readonly, nonatomic) UINavigationController *modalRootViewController; // @synthesize modalRootViewController=_modalRootViewController;
- (void).cxx_destruct;	// IMP=0x0000000100006d68
- (void)_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006ac8
- (void)hideAllAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006abc
- (void)hideController:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000666c
- (void)showController:(id)arg1 fromController:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006018
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000100005f9c
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000100005f8c
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000100005f7c
@property(readonly, nonatomic) UIViewController *presentedViewController;
- (id)hidden_init;	// IMP=0x0000000100005c7c
- (id)init;	// IMP=0x0000000100005bb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

