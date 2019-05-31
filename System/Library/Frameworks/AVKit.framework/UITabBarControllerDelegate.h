/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITabBarControllerDelegate <NSObject>
@optional
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
-(long long)tabBarControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
-(void)tabBarController:(id)arg1 willBeginCustomizingViewControllers:(id)arg2;
-(void)tabBarController:(id)arg1 willEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
-(void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
-(id)tabBarController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
-(id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;

@end

