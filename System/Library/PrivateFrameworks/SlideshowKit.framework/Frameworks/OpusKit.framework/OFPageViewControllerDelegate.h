/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFPageViewControllerDelegate <NSObject>
@optional
-(BOOL)pageViewController:(id)arg1 canAutomaticallyHandleGestureRecognizer:(id)arg2;
-(void)pageViewController:(id)arg1 willStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withDirection:(long long)arg4;
-(void)pageViewController:(id)arg1 didStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3;
-(void)pageViewController:(id)arg1 willFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionWillComplete:(BOOL)arg4;
-(void)pageViewController:(id)arg1 didFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionCompleted:(BOOL)arg4;
-(void)pageViewController:(id)arg1 didUpdateTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withProgress:(double)arg4 andVelocity:(double)arg5;
-(void)pageViewController:(id)arg1 willStartBouncingWithDirection:(long long)arg2;
-(void)pageViewControllerDidFinishBouncing:(id)arg1;

@end

