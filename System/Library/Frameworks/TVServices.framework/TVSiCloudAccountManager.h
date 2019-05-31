/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, NSOperationQueue;

@interface TVSiCloudAccountManager : NSObject {

	BOOL _shouldFailSilently;
	ACAccount* _activeAccount;
	ACAccountStore* _accountStore;
	NSOperationQueue* _networkingQueue;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                   //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) NSOperationQueue * networkingQueue;              //@synthesize networkingQueue=_networkingQueue - In the implementation block
@property (nonatomic,retain) ACAccount * activeAccount;                       //@synthesize activeAccount=_activeAccount - In the implementation block
@property (assign,nonatomic) BOOL shouldFailSilently;                         //@synthesize shouldFailSilently=_shouldFailSilently - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setActiveAccount:(ACAccount *)arg1 ;
-(ACAccountStore *)accountStore;
-(ACAccount *)activeAccount;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)signInWithUsername:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticateAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_isPasswordRequiredToValidateAccount:(id)arg1 ;
-(void)_renewCredentialsForAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_saveAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleAuthenticationError:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isAccountInLilacMode:(id)arg1 ;
-(void)_performTermsAndConditionsUpdateForAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_titleForError:(id)arg1 account:(id)arg2 ;
-(id)_messageForError:(id)arg1 ;
-(void)_standardErrorDialogWithHeader:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 ;
-(void)_handleTOCAgreedForAccount:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadTOCForAccount:(id)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)fetchActiveAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)signInWithAuthenticationContext:(id)arg1 displayingReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reauthenticateActiveAccountWithAuthenticationContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signOutActiveAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFamilyDetailsForActiveAccountWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldFailSilently;
-(void)setShouldFailSilently:(BOOL)arg1 ;
-(NSOperationQueue *)networkingQueue;
-(void)setNetworkingQueue:(NSOperationQueue *)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

