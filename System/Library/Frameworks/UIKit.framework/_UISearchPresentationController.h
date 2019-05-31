/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <UIKit/_UISearchControllerPresenting.h>

@class _UISearchPresentationAssistant, UIView, NSMapTable, NSString;

@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	UIView* _placeholderView;
	NSMapTable* _excisedSearchBarConstraitMap;
	NSMapTable* _placeholderConstraitMap;
	CGRect _finalFrameForContainerView;
	SCD_Struct_UI47 _controllerFlags;

}

@property (nonatomic,readonly) UIView * backgroundObscuringView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIView * searchBarContainerView; 
@property (nonatomic,readonly) BOOL shouldAccountForStatusBar; 
@property (nonatomic,readonly) double statusBarAdjustment; 
@property (nonatomic,readonly) BOOL searchBarToBecomeTopAttached; 
@property (nonatomic,readonly) BOOL resultsUnderlapsSearchBar; 
@property (nonatomic,readonly) BOOL searchBarCanContainScopeBar; 
@property (nonatomic,readonly) BOOL searchBarShouldClipToBounds; 
@property (nonatomic,readonly) double resultsControllerContentOffset; 
@property (nonatomic,readonly) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController; 
@property (nonatomic,readonly) CGRect finalFrameForContainerView;                                                                    //@synthesize finalFrameForContainerView=_finalFrameForContainerView - In the implementation block
@property (nonatomic,readonly) BOOL animatorShouldLayoutPresentationViews; 
@property (nonatomic,readonly) BOOL forceObeyNavigationBarInsets; 
@property (nonatomic,readonly) unsigned long long edgeForHidingNavigationBar; 
+(BOOL)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2 ;
-(void)dealloc;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)shouldRemovePresentersView;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_transitionToDidEnd;
-(void)_transitionFromDidEnd;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)_transitionFromWillBegin;
-(void)_transitionToWillBegin;
-(void)containerViewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(UIView *)searchBarContainerView;
-(BOOL)searchBarToBecomeTopAttached;
-(double)statusBarAdjustment;
-(void)setContentVisible:(BOOL)arg1 ;
-(double)resultsControllerContentOffset;
-(BOOL)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(BOOL)resultsUnderlapsSearchBar;
-(BOOL)searchBarCanContainScopeBar;
-(BOOL)searchBarShouldClipToBounds;
-(CGRect)finalFrameForContainerView;
-(BOOL)animatorShouldLayoutPresentationViews;
-(BOOL)forceObeyNavigationBarInsets;
-(unsigned long long)edgeForHidingNavigationBar;
-(UIView *)backgroundObscuringView;
-(void)showBackgroundObscuringView;
-(void)hideBackgroundObscuringView;
-(double)_visibleRefreshControlHeightForTableView:(id)arg1 ;
-(void)_exciseSearchBarFromCurrentContext;
-(void)_updateContainerFinalFrameForNonExcisedSearchBar;
-(void)_updatePresentingViewControllerContentScrollViewWithOffsets:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(void)_placeSearchBarBackIntoOriginalContext;
-(id)_constraintCopyOfConstraint:(id)arg1 replaceItem:(id)arg2 withItem:(id)arg3 ;
-(void)_layoutPresentationWithSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
@end

