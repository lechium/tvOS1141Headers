/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UINavigationControllerDelegate <NSObject>
@optional
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
-(long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;

@end

