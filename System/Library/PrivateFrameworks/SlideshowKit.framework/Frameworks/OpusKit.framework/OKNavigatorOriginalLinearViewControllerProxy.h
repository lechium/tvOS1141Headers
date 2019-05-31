/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKNavigatorViewController.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>

@class UIPageViewController, NSArray, NSString;

@interface OKNavigatorOriginalLinearViewControllerProxy : OKNavigatorViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource> {

	UIPageViewController* _pagesViewController;
	NSArray* _orderedPagesNames;
	long long _transitionStyle;
	long long _navigationOrientation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)commonInit;
-(BOOL)prepareForDisplay;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)applySettings;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadPagesViewController;
-(void)gotoNext:(id)arg1 ;
-(void)gotoPrevious:(id)arg1 ;
-(void)prepareAdjacentPageViewControllers;
-(void)updatePagesViewController;
-(id)nameForPageBeforePage:(id)arg1 ;
-(id)nameForPageAfterPage:(id)arg1 ;
-(void)setSettingTransition:(unsigned long long)arg1 ;
-(void)setSettingOrientation:(unsigned long long)arg1 ;
@end

