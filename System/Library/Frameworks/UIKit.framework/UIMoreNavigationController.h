/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class UIMoreListController, UINavigationController, UIViewController, NSArray;

@interface UIMoreNavigationController : UINavigationController {

	UIMoreListController* _moreListController;
	UINavigationController* _originalNavigationController;
	UIViewController* _originalRootViewController;

}

@property (nonatomic,readonly) UIViewController * moreListController;                 //@synthesize moreListController=_moreListController - In the implementation block
@property (nonatomic,retain) NSArray * moreViewControllers; 
@property (assign,nonatomic) BOOL allowsCustomizing; 
@property (assign,nonatomic) UIViewController * displayedViewController; 
@property (assign,nonatomic) BOOL moreViewControllersChanged; 
+(Class)_moreListControllerClass;
-(id)init;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(UIViewController *)moreListController;
-(void)setMoreViewControllers:(NSArray *)arg1 ;
-(void)_restoreOriginalNavigationController;
-(void)restoreOriginalNavigationControllerIfNecessary:(id)arg1 ;
-(UIViewController *)displayedViewController;
-(NSArray *)moreViewControllers;
-(void)setDisplayedViewController:(UIViewController *)arg1 ;
-(void)setAllowsCustomizing:(BOOL)arg1 ;
-(void)setMoreViewControllersChanged:(BOOL)arg1 ;
-(void)_redisplayMoreTableView;
-(id)_preparedViewController:(id)arg1 ;
-(void)_ensureChildrenHaveParentViewController;
-(BOOL)allowsCustomizing;
-(BOOL)moreViewControllersChanged;
-(id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned long long*)arg2 ;
@end

