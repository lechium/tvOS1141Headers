//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TVWLLowerThirdsScreenshotZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    CDUnknownBlockType _postScreenshotBlock;	// 8 = 0x8
    id <TVWLLowerThirdsScreenshotZoomAnimatorDelegate> _delegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <TVWLLowerThirdsScreenshotZoomAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType postScreenshotBlock; // @synthesize postScreenshotBlock=_postScreenshotBlock;
- (void).cxx_destruct;	// IMP=0x0000000100005e90
- (id)screenshot;	// IMP=0x0000000100005a68
- (void)animateTransition:(id)arg1;	// IMP=0x0000000100005440
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000100005434

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

