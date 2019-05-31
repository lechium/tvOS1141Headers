/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLTextEntryViewController.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class NSString, UITapGestureRecognizer, UIView;

@interface TVLAuthenticationViewController : TVLTextEntryViewController <ATVUpdatable> {

	NSString* _accountName;
	UITapGestureRecognizer* _menuRecognizer;
	NSString* _password;
	long long _state;
	UIView* preferedFocusView;

}

@property (assign,setter=_setState:,getter=_state,nonatomic) long long _state; 
@property (setter=_setAccountName:,getter=_accountName,nonatomic,copy) NSString * _accountName; 
@property (setter=_setPassword:,getter=_password,nonatomic,copy) NSString * _password; 
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(long long)_state;
-(void)_setState:(long long)arg1 ;
-(NSString *)_password;
-(void)_setPassword:(id)arg1 ;
-(void)_menuButtonAction:(id)arg1 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(id)initWithAuthenticationElement:(id)arg1 ;
-(id)_authenticationElement;
-(void)_didSelectDefaultButton;
-(void)_cancelAuthentication;
-(void)_authenticationFinished:(BOOL)arg1 withFailureMessage:(id)arg2 ;
-(NSString *)_accountName;
-(void)_setAccountName:(id)arg1 ;
-(void)_attemptJSAuthentication;
@end

