/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol UISplitViewControllerImpl <NSObject>
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL presentsWithGesture; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode; 
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction; 
@property (assign,nonatomic) double minimumPrimaryColumnWidth; 
@property (assign,nonatomic) double maximumPrimaryColumnWidth; 
@property (assign,nonatomic) long long primaryEdge; 
@property (assign,nonatomic) float masterColumnWidth; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle; 
@optional
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
-(void)removeChildViewController:(id)arg1;
-(void)updateViewConstraints;

@required
-(id<UISplitViewControllerDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)traitCollectionDidChange:(id)arg1;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)encodeRestorableStateWithCoder:(id)arg1;
-(void)decodeRestorableStateWithCoder:(id)arg1;
-(id)preferredFocusedView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
-(void)_commonInit;
-(id)preferredFocusEnvironments;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(BOOL)shouldUpdateFocusInContext:(id)arg1;
-(void)viewDidLayoutSubviews;
-(CGRect*)_frameForChildContentContainer:(id)arg1;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(CGSize*)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
-(double)_contentMarginForChildViewController:(id)arg1;
-(UIEdgeInsets*)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
-(void)_updateChildContentMargins;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)unloadViewForced:(BOOL)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)purgeMemoryForReason:(int)arg1;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)didRotateFromInterfaceOrientation:(long long)arg1;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(BOOL)_shouldSynthesizeSupportedOrientations;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(void)_getRotationContentSettings:(SCD_Struct_UI29*)arg1;
-(BOOL)_handlesCounterRotationForPresentation;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(void)showViewController:(id)arg1 sender:(id)arg2;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
-(NSArray *)viewControllers;
-(void)setViewControllers:(id)arg1;
-(id)detailViewController;
-(id)_primaryContentResponder;
-(void)_didChangeToFirstResponder:(id)arg1;
-(BOOL)isCollapsed;
-(id)masterViewController;
-(id)initWithSplitViewController:(id)arg1;
-(void)_willBeginSnapshotSession;
-(void)_didEndSnapshotSession;
-(void)_initWithCoder:(id)arg1;
-(BOOL)presentsWithGesture;
-(void)setPresentsWithGesture:(BOOL)arg1;
-(long long)preferredDisplayMode;
-(void)setPreferredDisplayMode:(long long)arg1;
-(long long)displayMode;
-(id)displayModeButtonItem;
-(double)preferredPrimaryColumnWidthFraction;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
-(double)minimumPrimaryColumnWidth;
-(void)setMinimumPrimaryColumnWidth:(double)arg1;
-(double)maximumPrimaryColumnWidth;
-(void)setMaximumPrimaryColumnWidth:(double)arg1;
-(double)primaryColumnWidth;
-(void)setPrimaryEdge:(long long)arg1;
-(long long)primaryEdge;
-(float)masterColumnWidth;
-(void)setMasterColumnWidth:(float)arg1;
-(float)gutterWidth;
-(void)setGutterWidth:(float)arg1;
-(BOOL)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1;
-(NSString *)_displayModeButtonItemTitle;
-(void)_setDisplayModeButtonItemTitle:(id)arg1;
-(id)_primaryDimmingView;
-(BOOL)_isCollapsed;
-(BOOL)_isRotating;
-(CGSize*)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
-(void)toggleMasterVisible:(id)arg1;

@end

