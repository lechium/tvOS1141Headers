/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAUIAccountRepairRemoteUIDelegate.h>
#import <libobjc.A.dylib/AAUIGenericTermsRemoteUIDelegate.h>
#import <libobjc.A.dylib/AAUISignInOperationDelegate.h>

@class ACAccountStore, ACAccountType, AAUIGenericTermsRemoteUI, AAUIAccountRepairRemoteUI, NSMutableDictionary, NSLock, UIViewController, CUMessageSession, NSString;

@interface AAUISignInFlowController : NSObject <AAUIAccountRepairRemoteUIDelegate, AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate> {

	ACAccountStore* _accountStore;
	ACAccountType* _appleAccountType;
	AAUIGenericTermsRemoteUI* _genericTermsRemoteUI;
	AAUIAccountRepairRemoteUI* _accountRepairRemoteUI;
	/*^block*/id _pendingCompletion;
	NSMutableDictionary* _cdpContextsByAccountID;
	NSLock* _cdpContextsByAccountIDLock;
	BOOL _shouldAutomaticallySaveSignInResults;
	BOOL _shouldStashLoginResponse;
	UIViewController* _presentingViewController;
	CUMessageSession* _messageSession;
	unsigned long long _activationAction;

}

@property (nonatomic,retain) CUMessageSession * messageSession;                               //@synthesize messageSession=_messageSession - In the implementation block
@property (assign,nonatomic) unsigned long long activationAction;                             //@synthesize activationAction=_activationAction - In the implementation block
@property (assign,nonatomic) BOOL shouldStashLoginResponse;                                   //@synthesize shouldStashLoginResponse=_shouldStashLoginResponse - In the implementation block
@property (assign,nonatomic) BOOL shouldHideActivationLockAlert; 
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallySaveSignInResults;                       //@synthesize shouldAutomaticallySaveSignInResults=_shouldAutomaticallySaveSignInResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(unsigned long long)activationAction;
-(void)setActivationAction:(unsigned long long)arg1 ;
-(void)_updateAppleAccountIfNecessary:(id)arg1 withAltDSID:(id)arg2 rawPassword:(id)arg3 ;
-(id)_appleAccountType;
-(void)_presentExistingAccountAlert:(id)arg1 ;
-(CUMessageSession *)messageSession;
-(void)_promptToEnableFindMyIfPossibleWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stashLoginResponseWithAuthenticationResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_verifyLoginResponseForiCloudAccount:(id)arg1 withSuccess:(BOOL)arg2 response:(id)arg3 error:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_showGenericTermsUIforAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showSecondFactorUIForAccount:(id)arg1 loginResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveAccount:(id)arg1 withAllDataclassesEnabledIfPossibleWithCompletion:(/*^block*/id)arg2 ;
-(void)_validateCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentUnableToSaveAccountAlert;
-(BOOL)shouldAutomaticallySaveSignInResults;
-(BOOL)_carrierBundleSaysHideFindMyiPhone;
-(void)_hasActivationLockSupportedWatchWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadAccountRepairRemoteUIWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(BOOL)arg3 ;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)signInOperationManager:(id)arg1 didSaveAccount:(id)arg2 error:(id)arg3 ;
-(BOOL)shouldHideActivationLockAlert;
-(void)setShouldHideActivationLockAlert:(BOOL)arg1 ;
-(void)signInWithIDMSAuthenticationResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldAutomaticallySaveSignInResults:(BOOL)arg1 ;
-(void)setMessageSession:(CUMessageSession *)arg1 ;
-(BOOL)shouldStashLoginResponse;
-(void)setShouldStashLoginResponse:(BOOL)arg1 ;
-(id)_titleForError:(id)arg1 account:(id)arg2 ;
@end

