/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TVSignInLandingViewDelegate.h>

@class TVSignInLandingView, NSString;

@interface TVLiCloudAuthenticationViewController : UIViewController <TVSignInLandingViewDelegate> {

	/*^block*/id _callbackBlock;
	TVSignInLandingView* _signInView;

}

@property (nonatomic,retain) TVSignInLandingView * signInView;              //@synthesize signInView=_signInView - In the implementation block
@property (nonatomic,copy) id callbackBlock;                                //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(id)callbackBlock;
-(void)setCallbackBlock:(id)arg1 ;
-(void)_menuOutGestureRecognized;
-(TVSignInLandingView *)signInView;
-(void)setSignInView:(TVSignInLandingView *)arg1 ;
-(void)authenticateUserOnSelectSignIn;
@end

