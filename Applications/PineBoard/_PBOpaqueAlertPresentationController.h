//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPresentationController.h"

@class UIView;

@interface _PBOpaqueAlertPresentationController : UIPresentationController
{
    UIView *_opaqueView;	// 8 = 0x8
}

@property(readonly, nonatomic) UIView *opaqueView; // @synthesize opaqueView=_opaqueView;
- (void).cxx_destruct;	// IMP=0x00000001000fa504
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(_Bool)arg2;	// IMP=0x00000001000fa2e8
- (void)_configureSubviews;	// IMP=0x00000001000fa234
- (void)dismissalTransitionWillBegin;	// IMP=0x00000001000fa1ac
- (void)presentationTransitionWillBegin;	// IMP=0x00000001000fa124

@end
