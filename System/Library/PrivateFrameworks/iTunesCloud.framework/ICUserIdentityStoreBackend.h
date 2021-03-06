/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICUserIdentityStoreBackend <NSObject,NSCopying,NSSecureCoding>
@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate; 
@required
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)synchronize;
-(void)setDelegate:(id)arg1;
-(void)activeAccountDSIDWithCompletion:(/*^block*/id)arg1;
-(void)updateActiveAccountDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)activeLockerAccountDSIDWithCompletion:(/*^block*/id)arg1;
-(void)updateActiveLockerAccountDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)identityPropertiesForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)identityPropertiesForPrimaryICloudAccountWithCompletion:(/*^block*/id)arg1;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)verificationContextForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)verificationContextForAccountEstablishmentWithCompletion:(/*^block*/id)arg1;

@end

