/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICUserIdentityStoreBackendDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ICUserIdentityStoreBackend, OS_dispatch_queue;
@class ACAccountStore, ICValueHistory, ICUserIdentityStoreCoding, ICDelegateAccountStore, ICDelegateAccountStoreOptions, NSOperationQueue, NSObject, NSString;

@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding> {

	ACAccountStore* _accountStore;
	ICValueHistory* _activeAccountHistory;
	ICValueHistory* _activeLockerAccountHistory;
	id<ICUserIdentityStoreBackend> _backend;
	ICUserIdentityStoreCoding* _codingHelper;
	ICDelegateAccountStore* _delegateAccountStore;
	ICDelegateAccountStoreOptions* _delegateAccountStoreOptions;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) id<ICUserIdentityStoreBackend> _unsafeBackend;              //@synthesize backend=_backend - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)_claimSingleWriterStatus;
+(id)testingIdentityStoreWithDatabasePath:(id)arg1 ;
+(id)testingIdentityStoreWithSingleWriterService:(id)arg1 ;
+(id)defaultIdentityStore;
-(void)synchronize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)_initCommon;
-(void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enumerateDelegateTokensWithType:(long long)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)userIdentityStoreBackendDidChange:(id)arg1 ;
-(void)_prepareDelegateAccountStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_resetDelegateAccountStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAllDelegateTokensWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removePropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDelegateTokenForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDelegateTokensExpiringBeforeDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getPropertiesForActiveICloudAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_reloadForExternalChange;
-(id)_initWithStyle:(long long)arg1 delegateAccountStoreOptions:(id)arg2 ;
-(void)_dispatchDidChangeNotification:(BOOL)arg1 didDelegateAccountStoreChange:(BOOL)arg2 ;
-(void)_openDelegateAccountStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_existingIdentityPropertiesForUserIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_openDelegateAccountStoreForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_dsidForUserIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saveIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_allowsDelegationForUserIdentity:(id)arg1 ;
-(void)_unregisterForDelegateAccountStoreNotifications:(id)arg1 ;
-(void)_registerForDelegateAccountStoreNotifications:(id)arg1 ;
-(void)_importValuesFromCodingHelper:(id)arg1 ;
-(id)_dsidForTimestamp:(unsigned long long)arg1 history:(id)arg2 ;
-(void)_delegateAccountStoreDidChangeNotification:(id)arg1 ;
-(void)enumerateDelegateTokensUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setActiveAccountWithDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setActiveLockerAccountWithDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_unsafe_deleteDelegateAccountStore;
-(void)_updateDelegateAccountStoreUsingBlock:(/*^block*/id)arg1 ;
-(id<ICUserIdentityStoreBackend>)_unsafeBackend;
-(void)getPropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getDelegationUUIDsForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getVerificationContextForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

