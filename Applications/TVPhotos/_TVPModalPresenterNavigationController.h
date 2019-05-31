//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "TVPModalPresenterFocusing.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSMapTable, NSString, UIView, UIViewController;

@interface _TVPModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, TVPModalPresenterFocusing>
{
    UIViewController *_rootViewController;	// 8 = 0x8
    NSMapTable *_pushCompletionBlocks;	// 16 = 0x10
    NSMapTable *_popCompletionBlocks;	// 24 = 0x18
    NSArray *_previousViewControllers;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *previousViewControllers; // @synthesize previousViewControllers=_previousViewControllers;
- (void).cxx_destruct;	// IMP=0x0000000100007608
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;	// IMP=0x0000000100007554
- (void)_dismissForLastViewController:(_Bool)arg1;	// IMP=0x0000000100007444
- (void)_dismissForLastViewController;	// IMP=0x0000000100007434
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100007270
- (void)reset;	// IMP=0x000000010000719c
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000001000070b8
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100007014
- (void)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006f4c
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006eb4
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000100006dbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end
