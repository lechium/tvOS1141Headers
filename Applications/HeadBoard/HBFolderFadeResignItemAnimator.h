//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class HBApp, NSString, UIView;

@interface HBFolderFadeResignItemAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _resignTransitionToLeft;	// 8 = 0x8
    HBApp *_transitioningApp;	// 16 = 0x10
    UIView *_transitioningView;	// 24 = 0x18
}

@property(nonatomic) _Bool resignTransitionToLeft; // @synthesize resignTransitionToLeft=_resignTransitionToLeft;
@property(retain, nonatomic) UIView *transitioningView; // @synthesize transitioningView=_transitioningView;
@property(retain, nonatomic) HBApp *transitioningApp; // @synthesize transitioningApp=_transitioningApp;
- (void).cxx_destruct;	// IMP=0x0000000100042110
- (void)animateTransition:(id)arg1;	// IMP=0x0000000100041bc0
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000100041bb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

