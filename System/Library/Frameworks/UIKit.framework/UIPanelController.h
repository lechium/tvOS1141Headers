/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UILayoutContainerViewDelegate.h>

@class NSMutableArray, UIViewController, UIView, UILayoutContainerView, NSArray, UILayoutGuide, _UIPanelInternalState, UISlidingBarState, UILongPressGestureRecognizer, UISlidingBarConfiguration, UISlidingBarStateRequest, NSString;

@interface UIPanelController : NSObject <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate> {

	struct {
		unsigned isUpdatingState : 1;
		unsigned needsDeferredUpdateWhileUpdatingState : 1;
		unsigned isPerformingDeferredUpdate : 1;
		unsigned nextLayoutIsForConstraintBasedAnimationStart : 1;
		unsigned inWillTransitionToTraitCollection : 1;
		unsigned inViewWillTransitionToSize : 1;
		unsigned inViewWillTransitionToSizeRecursingToChildren : 1;
		unsigned constraintsAndViewsLocked : 1;
		unsigned takingDestinationSnapshot : 1;
		unsigned registeredForKeyboardNotifications : 1;
	}  _panelControllerFlags;
	NSMutableArray* _wrapperBlocksForNextUpdate;
	BOOL __hasUpdatedForTraitCollection;
	BOOL __needsFirstTimeUpdateForTraitCollection;
	BOOL __changingViewControllerParentage;
	UIViewController* _owningViewController;
	UIView* _dimmingView;
	UILayoutContainerView* _view;
	NSArray* __constraints;
	UILayoutGuide* __layoutGuide;
	_UIPanelInternalState* __internalState;
	_UIPanelInternalState* __previousInternalState;
	UISlidingBarState* __lastComputedPublicState;
	NSArray* __lastPossiblePublicStates;
	UILongPressGestureRecognizer* __gestureRecognizer;
	UIView* __leadingBorderView;
	UIView* __trailingBorderView;
	UIView* __sourceSnapshotView;
	UIView* __destinationSnapshotView;
	CGSize __lastViewSize;

}

@property (assign,nonatomic,__weak) UIViewController * owningViewController;                                                               //@synthesize owningViewController=_owningViewController - In the implementation block
@property (nonatomic,retain) UILayoutContainerView * view;                                                                                 //@synthesize view=_view - In the implementation block
@property (setter=_setConstraints:,nonatomic,retain) NSArray * _constraints;                                                               //@synthesize _constraints=__constraints - In the implementation block
@property (setter=_setLayoutGuide:,nonatomic,retain) UILayoutGuide * _layoutGuide;                                                         //@synthesize _layoutGuide=__layoutGuide - In the implementation block
@property (setter=_setInternalState:,nonatomic,retain) _UIPanelInternalState * _internalState;                                             //@synthesize _internalState=__internalState - In the implementation block
@property (setter=_setPreviousInternalState:,nonatomic,retain) _UIPanelInternalState * _previousInternalState;                             //@synthesize _previousInternalState=__previousInternalState - In the implementation block
@property (setter=_setLastComputedPublicState:,nonatomic,copy) UISlidingBarState * _lastComputedPublicState;                               //@synthesize _lastComputedPublicState=__lastComputedPublicState - In the implementation block
@property (setter=_setLastPossiblePublicStates:,nonatomic,copy) NSArray * _lastPossiblePublicStates;                                       //@synthesize _lastPossiblePublicStates=__lastPossiblePublicStates - In the implementation block
@property (assign,setter=_setLastViewSize:,nonatomic) CGSize _lastViewSize;                                                                //@synthesize _lastViewSize=__lastViewSize - In the implementation block
@property (setter=_setGestureRecognizer:,nonatomic,retain) UILongPressGestureRecognizer * _gestureRecognizer;                              //@synthesize _gestureRecognizer=__gestureRecognizer - In the implementation block
@property (setter=_setLeadingBorderView:,nonatomic,retain) UIView * _leadingBorderView;                                                    //@synthesize _leadingBorderView=__leadingBorderView - In the implementation block
@property (setter=_setTrailingBorderView:,nonatomic,retain) UIView * _trailingBorderView;                                                  //@synthesize _trailingBorderView=__trailingBorderView - In the implementation block
@property (setter=_setSourceSnapshotView:,nonatomic,retain) UIView * _sourceSnapshotView;                                                  //@synthesize _sourceSnapshotView=__sourceSnapshotView - In the implementation block
@property (setter=_setDestinationSnapshotView:,nonatomic,retain) UIView * _destinationSnapshotView;                                        //@synthesize _destinationSnapshotView=__destinationSnapshotView - In the implementation block
@property (assign,setter=_setHasUpdatedForTraitCollection:,nonatomic) BOOL _hasUpdatedForTraitCollection;                                  //@synthesize _hasUpdatedForTraitCollection=__hasUpdatedForTraitCollection - In the implementation block
@property (assign,setter=_setNeedsFirstTimeUpdateForTraitCollection:,nonatomic) BOOL _needsFirstTimeUpdateForTraitCollection;              //@synthesize _needsFirstTimeUpdateForTraitCollection=__needsFirstTimeUpdateForTraitCollection - In the implementation block
@property (assign,setter=_setChangingViewControllerParentage:,nonatomic) BOOL _changingViewControllerParentage;                            //@synthesize _changingViewControllerParentage=__changingViewControllerParentage - In the implementation block
@property (nonatomic,retain) UIViewController * mainViewController; 
@property (nonatomic,retain) UIViewController * leadingViewController; 
@property (nonatomic,retain) UIViewController * trailingViewController; 
@property (assign,nonatomic,__weak) id<UIPanelControllerDelegate> delegate; 
@property (nonatomic,copy) UISlidingBarConfiguration * configuration; 
@property (nonatomic,readonly) UISlidingBarState * currentState; 
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest; 
@property (nonatomic,readonly) UIViewController * collapsedViewController; 
@property (nonatomic,retain) UIView * dimmingView;                                                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,readonly) long long collapsedState; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIPanelControllerDelegate>)delegate;
-(void)setDelegate:(id<UIPanelControllerDelegate>)arg1 ;
-(void)dealloc;
-(UILayoutContainerView *)view;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UILongPressGestureRecognizer *)_gestureRecognizer;
-(void)setView:(UILayoutContainerView *)arg1 ;
-(void)loadView;
-(UISlidingBarState *)currentState;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(void)updateViewConstraints;
-(void)_layoutContainerViewWillMoveToWindow:(id)arg1 ;
-(void)_layoutContainerViewDidMoveToWindow:(id)arg1 ;
-(NSArray *)_constraints;
-(void)__viewWillLayoutSubviews;
-(id)allViewControllers;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(UIView *)dimmingView;
-(void)_stopObservingKeyboardNotifications;
-(UISlidingBarConfiguration *)configuration;
-(BOOL)isCollapsed;
-(UISlidingBarStateRequest *)stateRequest;
-(UIViewController *)leadingViewController;
-(void)setLeadingViewController:(UIViewController *)arg1 ;
-(UIViewController *)mainViewController;
-(void)setMainViewController:(UIViewController *)arg1 ;
-(UIViewController *)trailingViewController;
-(void)setTrailingViewController:(UIViewController *)arg1 ;
-(NSArray *)possibleStates;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)animateToRequest:(id)arg1 ;
-(void)_setConstraints:(id)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)_gestureChanged:(id)arg1 ;
-(id)initWithOwningViewController:(id)arg1 ;
-(UIViewController *)collapsedViewController;
-(void)setNeedsUpdate;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(/*^block*/id)arg3 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(/*^block*/id)arg3 ;
-(BOOL)isInteractingOrAnimating;
-(void)addWrapperBlockForNextUpdate:(/*^block*/id)arg1 ;
-(long long)collapsedState;
-(void)setOwningViewController:(UIViewController *)arg1 ;
-(void)_setInternalState:(id)arg1 ;
-(_UIPanelInternalState *)_internalState;
-(void)_setNeedsFirstTimeUpdateForTraitCollection:(BOOL)arg1 ;
-(void)_removeIdentifiedChildViewController:(id)arg1 ;
-(void)_addIdentifiedChildViewController:(id)arg1 ;
-(void)_setNeedsDeferredUpdate;
-(UISlidingBarState *)_lastComputedPublicState;
-(NSArray *)_lastPossiblePublicStates;
-(UIViewController *)owningViewController;
-(void)_setGestureRecognizer:(id)arg1 ;
-(BOOL)_changingViewControllerParentage;
-(BOOL)_hasUpdatedForTraitCollection;
-(BOOL)_willCollapseWithNewTraitCollection:(id)arg1 ;
-(void)_collapseWithTransitionCoordinator:(id)arg1 ;
-(BOOL)_willExpandWithNewTraitCollection:(id)arg1 ;
-(void)_expandWithTransitionCoordinator:(id)arg1 ;
-(void)_setHasUpdatedForTraitCollection:(BOOL)arg1 ;
-(void)_setChangingViewControllerParentage:(BOOL)arg1 ;
-(void)_setSourceSnapshotView:(id)arg1 ;
-(void)_updateForTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setLastComputedPublicState:(id)arg1 ;
-(void)_setLastPossiblePublicStates:(id)arg1 ;
-(UIView *)_sourceSnapshotView;
-(UIView *)_destinationSnapshotView;
-(void)_setDestinationSnapshotView:(id)arg1 ;
-(BOOL)_needsFirstTimeUpdateForTraitCollection;
-(void)_observeKeyboardNotificationsOnScreen:(id)arg1 ;
-(void)_adjustForKeyboardInfo:(id)arg1 ;
-(CGSize)_lastViewSize;
-(void)_performDeferredUpdate;
-(void)_performSingleDeferredUpdatePass;
-(_UIPanelInternalState *)_previousInternalState;
-(void)_updateToNewPublicState:(id)arg1 withSize:(CGSize)arg2 ;
-(void)_performWrappedUpdate:(/*^block*/id)arg1 ;
-(void)_setPreviousInternalState:(id)arg1 ;
-(void)_setLastViewSize:(CGSize)arg1 ;
-(UIView *)_leadingBorderView;
-(id)_createBorderView;
-(void)_setLeadingBorderView:(id)arg1 ;
-(UIView *)_trailingBorderView;
-(void)_setTrailingBorderView:(id)arg1 ;
-(UILayoutGuide *)_layoutGuide;
-(void)_setLayoutGuide:(id)arg1 ;
-(BOOL)_pointHitsAffordance:(CGPoint)arg1 returningSide:(long long*)arg2 ;
-(void)_beginInteractingForSide:(long long)arg1 ;
-(void)_updateInteractionWithOffset:(double)arg1 ;
-(void)_endInteractingWithSuccess:(BOOL)arg1 ;
-(void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3 ;
-(void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1 ;
@end

