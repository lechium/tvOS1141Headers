/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

@interface TVSUIModalPresentationController : UIPresentationController {

	UIVisualEffectView* _visualEffectView;
	long long _blurStyle;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,readonly) long long blurStyle;                                //@synthesize blurStyle=_blurStyle - In the implementation block
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(long long)blurStyle;
-(void)_configureSubviews;
-(void)_animateWithCoordinator:(id)arg1 isPresenting:(BOOL)arg2 ;
-(UIVisualEffectView *)visualEffectView;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(long long)arg3 ;
@end

