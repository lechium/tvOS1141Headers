/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _MPAudioAndSubtitlesController, UINavigationController, UIViewController;

@interface MPAudioAndSubtitlesController : UIViewController {

	_MPAudioAndSubtitlesController* _viewController;
	UINavigationController* _navController;
	UIViewController* _viewControllerForOrientation;

}

@property (assign,nonatomic,__weak) UIViewController * viewControllerForOrientation;              //@synthesize viewControllerForOrientation=_viewControllerForOrientation - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(id)initWithAVItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setViewControllerForOrientation:(UIViewController *)arg1 ;
-(UIViewController *)viewControllerForOrientation;
@end

