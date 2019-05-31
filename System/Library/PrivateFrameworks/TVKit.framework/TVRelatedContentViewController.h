/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TVRelatedContentViewControllerDelegate;
@class UIViewController, TVRelatedContent, UIGestureRecognizer, NSString;

@interface TVRelatedContentViewController : UIViewController <UIGestureRecognizerDelegate> {

	id<TVRelatedContentViewControllerDelegate> _delegate;
	UIViewController* _primaryViewController;
	TVRelatedContent* _relatedContent;
	unsigned long long _preferredDisplayMode;
	unsigned long long _displayMode;
	UIGestureRecognizer* _interactionGestureRecognizer;
	unsigned long long _numberOfAppearanceTransitions;

}

@property (nonatomic,retain) UIGestureRecognizer * interactionGestureRecognizer;                      //@synthesize interactionGestureRecognizer=_interactionGestureRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAppearanceTransitions;                        //@synthesize numberOfAppearanceTransitions=_numberOfAppearanceTransitions - In the implementation block
@property (assign,nonatomic,__weak) id<TVRelatedContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * primaryViewController;                                //@synthesize primaryViewController=_primaryViewController - In the implementation block
@property (nonatomic,retain) TVRelatedContent * relatedContent;                                       //@synthesize relatedContent=_relatedContent - In the implementation block
@property (assign,nonatomic) unsigned long long preferredDisplayMode;                                 //@synthesize preferredDisplayMode=_preferredDisplayMode - In the implementation block
@property (nonatomic,readonly) unsigned long long displayMode;                                        //@synthesize displayMode=_displayMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVRelatedContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVRelatedContentViewControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(unsigned long long)preferredDisplayMode;
-(void)setPreferredDisplayMode:(unsigned long long)arg1 ;
-(unsigned long long)displayMode;
-(unsigned long long)numberOfAppearanceTransitions;
-(void)setNumberOfAppearanceTransitions:(unsigned long long)arg1 ;
-(TVRelatedContent *)relatedContent;
-(id)_viewControllerForContentType:(long long)arg1 withRelatedContent:(id)arg2 ;
-(UIViewController *)primaryViewController;
-(double)_widthForContentType:(long long)arg1 withRelatedContent:(id)arg2 displayMode:(unsigned long long)arg3 parentContainerSize:(CGSize)arg4 ;
-(double)_heightForContentType:(long long)arg1 withRelatedContent:(id)arg2 displayMode:(unsigned long long)arg3 parentContainerSize:(CGSize)arg4 ;
-(id)_viewControllersForDisplayMode:(unsigned long long)arg1 withRelatedContent:(id)arg2 ;
-(void)_willTransitionToDisplayMode:(unsigned long long)arg1 ;
-(id)_relatedContentView;
-(void)_augmentOverrideTraitCollectionForChildViewController:(id)arg1 withContentType:(long long)arg2 ;
-(void)_incrementNumberOfAppearanceTransitions;
-(void)_decrementNumberOfAppearanceTransitions;
-(void)_didTransitionToDisplayMode:(unsigned long long)arg1 ;
-(double)_presentationProgressForDisplayMode:(unsigned long long)arg1 ;
-(void)_performViewAnimations:(/*^block*/id)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_actualDisplayModeForPreferredDisplayMode:(unsigned long long)arg1 withRelatedContent:(id)arg2 ;
-(void)_setDisplayMode:(unsigned long long)arg1 relatedContent:(id)arg2 animated:(BOOL)arg3 ;
-(void)setRelatedContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPreferredDisplayMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(UIGestureRecognizer *)interactionGestureRecognizer;
-(long long)_contentTypeForContainer:(id)arg1 withRelatedContent:(id)arg2 ;
-(void)_menuButtonTapRecognized:(id)arg1 ;
-(void)_userInteractionBegan:(id)arg1 ;
-(void)setInteractionGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(id)_visibleViewControllers;
-(void)setPrimaryViewController:(UIViewController *)arg1 ;
-(void)setRelatedContent:(TVRelatedContent *)arg1 ;
@end

