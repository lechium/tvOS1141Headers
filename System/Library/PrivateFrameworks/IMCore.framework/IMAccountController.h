/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, IMAccount;

@interface IMAccountController : NSObject {

	NSMutableDictionary* _accountMap;
	BOOL _isReadOnly;
	BOOL _cachesEnabled;
	NSArray* _operationalAccountsCache;
	NSMutableDictionary* _serviceToActiveAccountsMap;
	NSMutableDictionary* _serviceToAccountsMap;
	NSMutableDictionary* _serviceToConnectedAccountsMap;
	NSMutableDictionary* _serviceToOperationalAccountsMap;
	NSArray* _accounts;

}

@property (copy) NSArray * accounts;                                           //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,readonly) id bestAccountForStatus; 
@property (nonatomic,readonly) int numberOfAccounts; 
@property (nonatomic,readonly) IMAccount * activeIMessageAccount; 
@property (nonatomic,readonly) IMAccount * activeSMSAccount; 
@property (nonatomic,readonly) NSArray * activeAccounts; 
@property (nonatomic,readonly) NSArray * connectedAccounts; 
@property (nonatomic,readonly) NSArray * operationalAccounts; 
+(id)sharedInstance;
+(id)bestAccountFromAccounts:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)readOnly;
-(NSArray *)activeAccounts;
-(BOOL)deleteAccount:(id)arg1 ;
-(id)accountForUniqueID:(id)arg1 ;
-(id)_bestAccountForAddresses:(id)arg1 ;
-(id)accountsForService:(id)arg1 ;
-(id)_bestOperationalAccountForSendingForService:(id)arg1 ;
-(id)activeAccountsForService:(id)arg1 ;
-(id)connectedAccountsForService:(id)arg1 ;
-(id)accountsWithCapability:(unsigned long long)arg1 ;
-(id)connectedAccountsWithCapability:(unsigned long long)arg1 ;
-(id)operationalAccountsWithCapability:(unsigned long long)arg1 ;
-(id)bestAccountForService:(id)arg1 ;
-(void)autoLogin;
-(id)bestAccountForStatus;
-(NSArray *)connectedAccounts;
-(BOOL)activateAccount:(id)arg1 locally:(BOOL)arg2 ;
-(BOOL)_deactivateAccount:(id)arg1 ;
-(BOOL)addAccount:(id)arg1 locally:(BOOL)arg2 ;
-(BOOL)deleteAccount:(id)arg1 locally:(BOOL)arg2 ;
-(BOOL)deactivateAccount:(id)arg1 withDisable:(BOOL)arg2 ;
-(BOOL)activateAccounts:(id)arg1 ;
-(BOOL)deactivateAccounts:(id)arg1 ;
-(void)_activeAccountChanged:(id)arg1 ;
-(void)_accountRegistrationStatusChanged:(id)arg1 ;
-(BOOL)accountActive:(id)arg1 ;
-(NSArray *)operationalAccounts;
-(void)_rebuildOperationalAccountsCache:(BOOL)arg1 ;
-(BOOL)deactivateAccount:(id)arg1 ;
-(BOOL)deactivateAccounts:(id)arg1 withDisable:(BOOL)arg2 ;
-(BOOL)_deactivateAccounts:(id)arg1 ;
-(BOOL)canActivateAccounts:(id)arg1 ;
-(BOOL)activateAccounts:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3 ;
-(BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3 ;
-(BOOL)activateAndHandleReconnectAccounts:(id)arg1 ;
-(BOOL)canActivateAccount:(id)arg1 ;
-(id)operationalAccountsForService:(id)arg1 ;
-(id)bestActiveAccountForService:(id)arg1 ;
-(IMAccount *)activeIMessageAccount;
-(IMAccount *)activeSMSAccount;
-(id)accountAtIndex:(int)arg1 ;
-(int)numberOfAccounts;
-(BOOL)canDeleteAccount:(id)arg1 ;
-(BOOL)addAccount:(id)arg1 atIndex:(int)arg2 ;
-(BOOL)addAccount:(id)arg1 atIndex:(int)arg2 locally:(BOOL)arg3 ;
-(BOOL)activateAccount:(id)arg1 ;
-(BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)activateAndHandleReconnectAccount:(id)arg1 ;
-(BOOL)accountConnecting:(id)arg1 ;
-(BOOL)accountConnected:(id)arg1 ;
-(id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3 ;
-(id)bestAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestOperationalAccountForService:(id)arg1 ;
-(id)bestConnectedAccountForService:(id)arg1 ;
-(id)bestAccountWithCapability:(unsigned long long)arg1 ;
-(id)mostLoggedInAccount;
-(id)aimAccount;
-(id)jabberAccount;
-(void)_enableCache;
-(void)_disableCache;
-(id)__iCloudSystemAccountForService:(id)arg1 ;
-(id)_operationalPhoneAccountForService:(id)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)addAccount:(id)arg1 ;
@end

