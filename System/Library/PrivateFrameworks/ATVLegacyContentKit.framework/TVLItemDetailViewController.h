/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/TVLListScrollerSplitDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLItemDetailView, NSArray, UIView, UIViewController, TVImageProxy, UIFocusGuide, NSNumber, NSDictionary, NSString;

@interface TVLItemDetailViewController : UIViewController <UIViewControllerTransitioningDelegate, TVLListScrollerSplitDelegate, UIGestureRecognizerDelegate, ATVUpdatable> {

	TVLItemDetailView* _itemDetailView;
	NSArray* _buttonElements;
	NSArray* _buttonViews;
	UIView* _bottomShelfView;
	UIViewController* _moreInfoController;
	TVImageProxy* _proxy;
	UIFocusGuide* _focusGuide;
	BOOL _transitioning;
	UIView* _lastFocusedView;
	NSNumber* _focusedShelfButtonIndexState;
	NSDictionary* _bottomShelfState;

}

@property (assign,nonatomic,__weak) UIView * lastFocusedView;                      //@synthesize lastFocusedView=_lastFocusedView - In the implementation block
@property (nonatomic,retain) NSNumber * focusedShelfButtonIndexState;              //@synthesize focusedShelfButtonIndexState=_focusedShelfButtonIndexState - In the implementation block
@property (nonatomic,retain) NSDictionary * bottomShelfState;                      //@synthesize bottomShelfState=_bottomShelfState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)loadView;
-(id)titleView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)footerView;
-(void)_updateCurrentState;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2 ;
-(UIView *)lastFocusedView;
-(void)setLastFocusedView:(UIView *)arg1 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(void)tvl_saveStateWithCoder:(id)arg1 ;
-(void)tvl_restoreStateWithCoder:(id)arg1 ;
-(void)imageHeaderDidLoadImage:(id)arg1 ;
-(NSNumber *)focusedShelfButtonIndexState;
-(NSDictionary *)bottomShelfState;
-(void)setBottomShelfState:(NSDictionary *)arg1 ;
-(void)setFocusedShelfButtonIndexState:(NSNumber *)arg1 ;
-(id)imageHeaderView;
-(void)updateArtworkView;
-(id)summaryViews;
-(void)handleSelectForButton:(id)arg1 ;
-(void)handleButtonLongPress:(id)arg1 ;
-(void)handleSelectForButtonAtIndex:(unsigned long long)arg1 ;
-(void)handlePlayForButtonAtIndex:(unsigned long long)arg1 ;
-(BOOL)wantsRatingToSnapToTitle;
-(long long)numberOfLinesOfTextInCollapsedSummary;
-(void)transitionToMoreInfoView;
-(void)handleLongPressForButtonAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldDismissListScrollerSplitViewController:(id)arg1 ;
-(id)customAnimatorForDismissingListScrollerSplitViewController:(id)arg1 ;
-(id)initWithItemDetailElement:(id)arg1 ;
@end

