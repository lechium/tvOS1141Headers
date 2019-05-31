/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore;

@interface ACRemoteCommandHandler : NSObject {

	ACAccountStore* _accountStore;

}
-(id)init;
-(void)_addAccount:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_promptUserForAccountCredential:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_deleteAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_authenticateAccount:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeAllAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidateFetchedAccountsCacheWithCompletion:(/*^block*/id)arg1 ;
-(id)_localAccountMatchingRemoteAccount:(id)arg1 ;
-(void)handleCommand:(id)arg1 forAccount:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

