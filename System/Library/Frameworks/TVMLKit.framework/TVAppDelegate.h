/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <TVMLKit/TVApplicationControllerDelegate.h>

@class UIWindow, TVApplicationController, BKSProcessAssertion, NSString;

@interface TVAppDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate> {

	BOOL _headLess;
	BOOL _shouldTerminateOnEnterBackground;
	UIWindow* _window;
	TVApplicationController* _appController;
	BKSProcessAssertion* _launchAssertion;

}

@property (nonatomic,retain) TVApplicationController * appController;              //@synthesize appController=_appController - In the implementation block
@property (assign,nonatomic) BOOL shouldTerminateOnEnterBackground;                //@synthesize shouldTerminateOnEnterBackground=_shouldTerminateOnEnterBackground - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * launchAssertion;                //@synthesize launchAssertion=_launchAssertion - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                    //@synthesize window=_window - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIWindow *)window;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)appController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(id)_launchContext;
-(void)_presetDialogWithError:(long long)arg1 appController:(id)arg2 ;
-(id)launchOptionsWithDefaultOptions:(id)arg1 ;
-(void)_controllerDidDisplay:(id)arg1 ;
-(BOOL)shouldTerminateOnEnterBackground;
-(TVApplicationController *)appController;
-(void)_runfocusSwipeTest:(id)arg1 callback:(id)arg2 ;
-(void)_runfocusMoveTest:(id)arg1 callback:(id)arg2 ;
-(void)_runfocusFastScrollingTest:(id)arg1 callback:(id)arg2 ;
-(void)_runScrollMoveTest:(id)arg1 ;
-(void)setShouldTerminateOnEnterBackground:(BOOL)arg1 ;
-(void)setAppController:(TVApplicationController *)arg1 ;
-(BKSProcessAssertion *)launchAssertion;
-(void)setLaunchAssertion:(BKSProcessAssertion *)arg1 ;
@end

