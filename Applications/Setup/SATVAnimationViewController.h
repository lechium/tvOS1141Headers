//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CAStateControllerDelegate.h"

@class CAAnimationGroup, CALayer, CAStateController, SATVIntroAnimator, TVPVideoView;

@interface SATVAnimationViewController : UIViewController <CAStateControllerDelegate>
{
    double _clickDuration;	// 8 = 0x8
    CAStateController *_stateController;	// 16 = 0x10
    CALayer *_rootLayer;	// 24 = 0x18
    CALayer *_remoteClickLayer;	// 32 = 0x20
    CAAnimationGroup *_remoteClickAnimation;	// 40 = 0x28
    CALayer *_remoteClickShadowLayer;	// 48 = 0x30
    CAAnimationGroup *_remoteClickShadowAnimation;	// 56 = 0x38
    CDUnknownBlockType _animationCompletion;	// 64 = 0x40
    SATVIntroAnimator *_introAnimator;	// 72 = 0x48
    TVPVideoView *_flyoverPreviewVideoView;	// 80 = 0x50
}

@property(retain, nonatomic) TVPVideoView *flyoverPreviewVideoView; // @synthesize flyoverPreviewVideoView=_flyoverPreviewVideoView;
@property(retain, nonatomic) SATVIntroAnimator *introAnimator; // @synthesize introAnimator=_introAnimator;
@property(copy, nonatomic) CDUnknownBlockType animationCompletion; // @synthesize animationCompletion=_animationCompletion;
@property(retain, nonatomic) CAAnimationGroup *remoteClickShadowAnimation; // @synthesize remoteClickShadowAnimation=_remoteClickShadowAnimation;
@property(retain, nonatomic) CALayer *remoteClickShadowLayer; // @synthesize remoteClickShadowLayer=_remoteClickShadowLayer;
@property(retain, nonatomic) CAAnimationGroup *remoteClickAnimation; // @synthesize remoteClickAnimation=_remoteClickAnimation;
@property(retain, nonatomic) CALayer *remoteClickLayer; // @synthesize remoteClickLayer=_remoteClickLayer;
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(retain, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
@property(nonatomic) double clickDuration; // @synthesize clickDuration=_clickDuration;
- (void).cxx_destruct;	// IMP=0x0000000100021804
- (void)_updateContentsScaleForLayer:(id)arg1;	// IMP=0x0000000100021510
- (id)_CAStateForState:(unsigned long long)arg1;	// IMP=0x0000000100021358
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100021258
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;	// IMP=0x0000000100021114
- (void)stopFlyoverVideo;	// IMP=0x00000001000210b4
- (void)startFlyoverVideo;	// IMP=0x0000000100021054
- (void)stopTrackpadClickAnimation;	// IMP=0x0000000100021014
- (void)beginTrackpadClickAnimationWithCyclingViews:(id)arg1;	// IMP=0x0000000100020d74
- (void)hideAnimation;	// IMP=0x0000000100020d64
- (void)setAnimationState:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020c4c
- (void)setAnimationState:(unsigned long long)arg1;	// IMP=0x0000000100020c3c
- (void)dealloc;	// IMP=0x0000000100020bc4
- (void)loadView;	// IMP=0x00000001000203a4

@end

