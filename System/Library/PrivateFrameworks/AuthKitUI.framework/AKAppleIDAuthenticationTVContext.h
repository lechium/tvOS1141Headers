/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>
#import <libobjc.A.dylib/AKTVSignInViewControllerDelegate.h>

@class AKTVSignInViewController, NSString;

@interface AKAppleIDAuthenticationTVContext : AKAppleIDAuthenticationInAppContext <AKTVSignInViewControllerDelegate> {

	AKTVSignInViewController* _signInViewController;

}

@property (nonatomic,retain) AKTVSignInViewController * signInViewController;              //@synthesize signInViewController=_signInViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentKeepUsingUIForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissKeepUsingUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signInViewControllerDidPresent:(id)arg1 ;
-(void)signInViewControllerWillDismiss:(id)arg1 ;
-(void)signInViewControllerDidDismiss:(id)arg1 ;
-(void)_cleanUpBasicLoginWithCompletion:(/*^block*/id)arg1 ;
-(AKTVSignInViewController *)signInViewController;
-(void)setSignInViewController:(AKTVSignInViewController *)arg1 ;
@end
