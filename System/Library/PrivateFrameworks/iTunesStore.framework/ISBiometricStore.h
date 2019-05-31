/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache, NSLock, NSNumber;

@interface ISBiometricStore : NSObject {

	NSCache* _contextCache;
	NSLock* _lock;

}

@property (assign) long long biometricState; 
@property (getter=isBiometricStateEnabled,readonly) BOOL biometricStateEnabled; 
@property (readonly) NSNumber * lastRegisteredAccountIdentifier; 
+(id)sharedInstance;
+(id)keychainLabelForAccountID:(id)arg1 purpose:(long long)arg2 ;
+(id)diskBasedPaymentSheet;
+(id)keychainLabelForAccountID:(id)arg1 ;
-(id)init;
-(void)addContextToCache:(id)arg1 withToken:(id)arg2 ;
-(long long)biometricState;
-(long long)biometricAvailabilityForAccountIdentifier:(id)arg1 ;
-(BOOL)canPerformBiometricOptIn;
-(BOOL)canPerformExtendedBiometricActionsForAccountIdentifier:(id)arg1 ;
-(void)clearLastRegisteredAccountIdentifier;
-(id)fetchContextFromCacheWithToken:(id)arg1 evict:(BOOL)arg2 ;
-(unsigned long long)identityMapCount;
-(BOOL)isBiometricStateEnabled;
-(BOOL)isIdentityMapValidForAccountIdentifier:(id)arg1 ;
-(unsigned long long)keyCountForAccountIdentifier:(id)arg1 ;
-(NSNumber *)lastRegisteredAccountIdentifier;
-(void)registerAccountIdentifier:(id)arg1 ;
-(void)saveIdentityMapForAccountIdentifier:(id)arg1 ;
-(void)setBiometricState:(long long)arg1 ;
-(id)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3 ;
-(BOOL)deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)publicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3 ;
-(id)signData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
@end
