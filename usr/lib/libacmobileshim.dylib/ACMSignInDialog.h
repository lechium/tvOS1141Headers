/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMDialog.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/ACMSignInDialogProtocol.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol ACMSignInDialogDelegate;
@class NSString, UITextField;

@interface ACMSignInDialog : ACMDialog <UIAlertViewDelegate, ACMSignInDialogProtocol, UITextFieldDelegate> {

	id<ACMSignInDialogDelegate> _delegate;
	long long _signInDialogState;
	UITextField* _accountNameField;
	UITextField* _passwordField;
	BOOL _userHasBegunEditingText;
	NSString* _requestedUserName;
	unsigned long long _stateChangeCounter;

}

@property (assign,nonatomic) long long signInDialogState;                        //@synthesize signInDialogState=_signInDialogState - In the implementation block
@property (assign,nonatomic) BOOL userHasBegunEditingText;                       //@synthesize userHasBegunEditingText=_userHasBegunEditingText - In the implementation block
@property (assign,nonatomic) unsigned long long stateChangeCounter;              //@synthesize stateChangeCounter=_stateChangeCounter - In the implementation block
@property (nonatomic,retain) UITextField * accountNameField;                     //@synthesize accountNameField=_accountNameField - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;                        //@synthesize passwordField=_passwordField - In the implementation block
@property (assign) NSString * passwordString; 
@property (readonly) NSString * userNameString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<ACMSignInDialogDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * requestedUserName;                       //@synthesize requestedUserName=_requestedUserName - In the implementation block
-(void)cancel;
-(id<ACMSignInDialogDelegate>)delegate;
-(void)setDelegate:(id<ACMSignInDialogDelegate>)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)passwordField;
-(void)setPasswordField:(UITextField *)arg1 ;
-(unsigned long long)stateChangeCounter;
-(long long)signInDialogState;
-(void)setSignInDialogState:(long long)arg1 ;
-(void)setStateChangeCounter:(unsigned long long)arg1 ;
-(BOOL)userHasBegunEditingText;
-(void)setUserHasBegunEditingText:(BOOL)arg1 ;
-(void)setAccountNameField:(UITextField *)arg1 ;
-(NSString *)requestedUserName;
-(UITextField *)accountNameField;
-(BOOL)canSignIn;
-(void)controlsWillChangeState:(BOOL)arg1 ;
-(void)controlsDidChangeState:(BOOL)arg1 ;
-(void)disableControls:(BOOL)arg1 ;
-(NSString *)passwordString;
-(void)setPasswordString:(NSString *)arg1 ;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setRequestedUserName:(NSString *)arg1 ;
-(void)onIForgot:(id)arg1 ;
-(NSString *)userNameString;
-(void)onSignIn:(id)arg1 ;
-(void)onSignInCancel:(id)arg1 ;
@end

