/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKit/UIForcePresentationController.h>

@protocol _UIForcePresentationControllerDelegate;
@class UIGestureRecognizer, UIView, _UIKeyboardLayoutAlignmentView, UIAlertVisualStyleUpdatableConstraints, NSLayoutConstraint, NSString;

@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate, UIForcePresentationController> {

	UIView* _dimmingView;
	_UIKeyboardLayoutAlignmentView* keyboardLayoutAlignmentView;
	UIView* keyboardLayoutAlignmentAvailableSpaceView;
	UIAlertVisualStyleUpdatableConstraints* _visualStyleUpdatableConstraints;
	NSLayoutConstraint* _topAvailableSpaceConstraint;
	NSLayoutConstraint* _bottomAvailableSpaceConstraint;
	BOOL constraintsPrepared;
	BOOL _sourceViewSnapshotAndScaleTransformSuppressed;
	BOOL _chromeHidden;
	BOOL __isCurrentContext;
	BOOL __shouldRespectNearestCurrentContextPresenter;
	UIGestureRecognizer* _panningGestureRecognizer;
	/*^block*/id _presentationPhaseCompletionBlock;
	id<_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;
	UIView* _revealContainerView;

}

@property (readonly) UIView * _dimmingView;                                                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (setter=_setIsCurrentContext:) BOOL _isCurrentContext;                                                                    //@synthesize _isCurrentContext=__isCurrentContext - In the implementation block
@property (setter=_setShouldRespectNearestCurrentContextPresenter:) BOOL _shouldRespectNearestCurrentContextPresenter;              //@synthesize _shouldRespectNearestCurrentContextPresenter=__shouldRespectNearestCurrentContextPresenter - In the implementation block
@property (assign,setter=_setChromeHidden:,getter=_isChromeHidden,nonatomic) BOOL _chromeHidden;                                    //@synthesize chromeHidden=_chromeHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id presentationPhaseCompletionBlock;                                                                     //@synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer;                                                        //@synthesize panningGestureRecognizer=_panningGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed;                                                   //@synthesize sourceViewSnapshotAndScaleTransformSuppressed=_sourceViewSnapshotAndScaleTransformSuppressed - In the implementation block
@property (nonatomic,readonly) UIView * _revealContainerView;                                                                       //@synthesize revealContainerView=_revealContainerView - In the implementation block
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;                 //@synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)containerViewDidLayoutSubviews;
-(BOOL)shouldRemovePresentersView;
-(BOOL)_canDismissPresentation;
-(BOOL)_canCommitPresentation;
-(id)presentationPhaseCompletionBlock;
-(void)setPresentationPhaseCompletionBlock:(id)arg1 ;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(void)setPanningGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1 ;
-(UIView *)_revealContainerView;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(void)setForcePresentationControllerDelegate:(id<_UIForcePresentationControllerDelegate>)arg1 ;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(BOOL)_shouldOccludeDuringPresentation;
-(void)presentationTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(BOOL)_preserveResponderAcrossWindows;
-(UIView *)_dimmingView;
-(id)_presentedAlertController;
-(void)_prepareDimmingViewIfNecessary;
-(void)_prepareConstraintsIfNecessary;
-(BOOL)_isCurrentContext;
-(BOOL)_shouldRespectNearestCurrentContextPresenter;
-(void)_updateConstraintsIfNecessary;
-(void)_presentedAlertControllerDidAdapt;
-(void)_setChromeHidden:(BOOL)arg1 ;
-(BOOL)_isChromeHidden;
-(void)_setIsCurrentContext:(BOOL)arg1 ;
-(void)_setShouldRespectNearestCurrentContextPresenter:(BOOL)arg1 ;
@end

