/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController, UINavigationController;

@interface UISnapshotModalViewController : UIViewController {

	long long _interfaceOrientation;
	UIViewController* _disappearingViewController;
	UINavigationController* _parentController;

}

@property (nonatomic,retain) UIViewController * disappearingViewController;              //@synthesize disappearingViewController=_disappearingViewController - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(UIViewController *)disappearingViewController;
-(id)initWithInterfaceOrientation:(long long)arg1 ;
-(void)setDisappearingViewController:(UIViewController *)arg1 ;
@end

