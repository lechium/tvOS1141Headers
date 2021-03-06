/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class UIView, NSString;

@interface AMPPrivacyPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {

	UIView* _dimmingView;

}

@property (nonatomic,retain) UIView * dimmingView;                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)containerViewDidLayoutSubviews;
-(BOOL)shouldRemovePresentersView;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(long long)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(UIView *)dimmingView;
-(void)_prepareDimmingViewIfNecessary;
-(void)setDimmingView:(UIView *)arg1 ;
@end

