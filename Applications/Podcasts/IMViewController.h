//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IMTransitionParent.h"

@class IMTheme, IMViewControllerTransition, NSMutableArray, NSString;

@interface IMViewController : UIViewController <IMTransitionParent>
{
    _Bool _visible;	// 8 = 0x8
    _Bool _rotating;	// 9 = 0x9
    IMTheme *_theme;	// 16 = 0x10
    IMViewControllerTransition *_transitionItem;	// 24 = 0x18
    _Bool _definesTransitionContext;	// 32 = 0x20
    NSMutableArray *_pendingTransitions;	// 40 = 0x28
    IMViewControllerTransition *_currentTransition;	// 48 = 0x30
}

+ (_Bool)canHostChildViewControllers;	// IMP=0x00000001001fa3d4
@property(retain, nonatomic) IMViewControllerTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) NSMutableArray *pendingTransitions; // @synthesize pendingTransitions=_pendingTransitions;
@property(nonatomic) _Bool definesTransitionContext; // @synthesize definesTransitionContext=_definesTransitionContext;
@property(retain, nonatomic) IMViewControllerTransition *transitionItem; // @synthesize transitionItem=_transitionItem;
@property(retain, nonatomic) IMTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (void)processPendingTransitions;	// IMP=0x00000001001fae08
- (void)fireTransition:(id)arg1;	// IMP=0x00000001001faad0
- (void)addTransition:(id)arg1;	// IMP=0x00000001001faa44
- (id)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(id)arg3 reverse:(_Bool)arg4;	// IMP=0x00000001001fa8ac
- (id)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(id)arg3 reverse:(_Bool)arg4;	// IMP=0x00000001001fa750
- (void)childTransitionDidComplete:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000001001fa6bc
- (void)childTransitionDidStart:(id)arg1;	// IMP=0x00000001001fa6b8
- (void)childTransitionWillStart:(id)arg1;	// IMP=0x00000001001fa6b4
- (_Bool)shouldPerformChildTransition:(id)arg1;	// IMP=0x00000001001fa6ac
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x00000001001fa66c
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000001001fa628
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000001001fa5d4
- (void)viewDidUnload;	// IMP=0x00000001001fa588
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001001fa530
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001001fa4dc
- (void)dealloc;	// IMP=0x00000001001fa43c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001001fa3e4
- (void)releaseViews;	// IMP=0x00000001001fa3e0
- (void)initCommon;	// IMP=0x00000001001fa3dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
