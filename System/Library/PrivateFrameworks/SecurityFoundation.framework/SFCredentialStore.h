/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SFCredentialStore : NSObject {

	id _credentialStoreInternal;

}
-(id)_init;
-(void)credentialForServiceIdentifier:(id)arg1 username:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)credentialsFilteredBy:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)addCredential:(id)arg1 forService:(id)arg2 accessPolicy:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)removeCredentialForUsername:(id)arg1 fromService:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)removeAllCredentialsFromService:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)replaceOldCredential:(id)arg1 withNewCredential:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

