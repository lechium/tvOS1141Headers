/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <TVContentPartnerKitUI/TVCKStoreFavoritesViewDelegate.h>
#import <TVContentPartnerKitUI/TVCKStoreFavoritesControllerDelegate.h>
#import <TVContentPartnerKitUI/TVAppTemplateController.h>

@protocol TVCKStoreFavoritesViewControllerDelegate;
@class TVCKStoreFavoritesController, NSArray, UIViewController, _TVCKErrorViewController, TVSStateMachine, NSString;

@interface TVCKStoreFavoritesViewController : UIViewController <TVCKStoreFavoritesViewDelegate, TVCKStoreFavoritesControllerDelegate, TVAppTemplateController> {

	unsigned long long _category;
	id<TVCKStoreFavoritesViewControllerDelegate> _delegate;
	TVCKStoreFavoritesController* _favoritesController;
	NSArray* _contentItems;
	UIViewController* _activityIndicatorViewController;
	_TVCKErrorViewController* _errorViewController;
	TVSStateMachine* _stateMachine;

}

@property (nonatomic,retain) TVCKStoreFavoritesController * favoritesController;                        //@synthesize favoritesController=_favoritesController - In the implementation block
@property (nonatomic,copy) NSArray * contentItems;                                                      //@synthesize contentItems=_contentItems - In the implementation block
@property (nonatomic,retain) UIViewController * activityIndicatorViewController;                        //@synthesize activityIndicatorViewController=_activityIndicatorViewController - In the implementation block
@property (nonatomic,retain) _TVCKErrorViewController * errorViewController;                            //@synthesize errorViewController=_errorViewController - In the implementation block
@property (nonatomic,retain) TVSStateMachine * stateMachine;                                            //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                                             //@synthesize category=_category - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKStoreFavoritesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)_itemSizeForCategory:(unsigned long long)arg1 ;
-(void)_setupStateMachine;
-(id<TVCKStoreFavoritesViewControllerDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TVCKStoreFavoritesViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(unsigned long long)category;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateItems;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(_TVCKErrorViewController *)errorViewController;
-(void)setErrorViewController:(_TVCKErrorViewController *)arg1 ;
-(void)setContentItems:(NSArray *)arg1 ;
-(NSArray *)contentItems;
-(void)_showSpinner;
-(void)_hideSpinner;
-(BOOL)supportsIdleModeVisualEffects;
-(id)initWithContentCategory:(unsigned long long)arg1 ;
-(id)_errorMessage;
-(void)storeFavoritesController:(id)arg1 finishedFetchingItems:(id)arg2 ;
-(void)storeFavoritesController:(id)arg1 failedToFetchItemsWithError:(id)arg2 ;
-(void)storeFavoritesView:(id)arg1 didSelectItem:(id)arg2 ;
-(void)storeFavoritesView:(id)arg1 willBeginEditingItemAtIndex:(unsigned long long)arg2 ;
-(void)storeFavoritesView:(id)arg1 didEndEditingItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)storeFavoritesView:(id)arg1 canMoveItemAtIndex:(unsigned long long)arg2 ;
-(void)storeFavoritesView:(id)arg1 moveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)_didSelectItem:(id)arg1 ;
-(TVCKStoreFavoritesController *)favoritesController;
-(void)_favoritesDidChange:(id)arg1 ;
-(void)_displayMessage:(id)arg1 ;
-(void)_willBecomeActive;
-(void)_willEndActive;
-(void)_willBecomeBackground;
-(void)_willEndBackground;
-(UIViewController *)activityIndicatorViewController;
-(void)setActivityIndicatorViewController:(UIViewController *)arg1 ;
-(id)_titleForUnavailableItem;
-(id)_messageForUnavailableItem;
-(id)_titleForKeepUnavailableItemButton;
-(id)_titleForRemoveUnavailableItemButton;
-(void)_askToRemoveUnavailableItem:(id)arg1 ;
-(id)_messageForZeroItems;
-(id)favoritesView;
-(void)setFavoritesController:(TVCKStoreFavoritesController *)arg1 ;
-(void)setStateMachine:(TVSStateMachine *)arg1 ;
-(TVSStateMachine *)stateMachine;
@end

