//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SATVAnimationViewController, UITapGestureRecognizer;

@interface SATVNavigationController : UINavigationController <UIGestureRecognizerDelegate>
{
    SATVAnimationViewController *_animationViewController;	// 8 = 0x8
    UITapGestureRecognizer *_menuRecognizer;	// 16 = 0x10
}

@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) SATVAnimationViewController *animationViewController; // @synthesize animationViewController=_animationViewController;
- (void).cxx_destruct;	// IMP=0x000000010007530c
- (void)_mutateStepController:(id)arg1 presentationDefaults:(CDUnknownBlockType)arg2;	// IMP=0x00000001000751ac
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000001000750c4
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100074fb0
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100074dc0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;	// IMP=0x0000000100074d4c
- (void)_didSelectMenu;	// IMP=0x0000000100074c90
- (id)backgroundColor;	// IMP=0x0000000100074c7c
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100074bac
- (void)loadView;	// IMP=0x000000010007487c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

