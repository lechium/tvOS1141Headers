/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@interface MCKeychain : NSObject
+(id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id*)arg7 ;
+(id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id*)arg7 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 useSystemKeychain:(BOOL)arg7 outError:(id*)arg8 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 useSystemKeychain:(BOOL)arg8 outError:(id*)arg9 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 useSystemKeychain:(BOOL)arg8 outError:(id*)arg9 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 useSystemKeychain:(BOOL)arg7 outError:(id*)arg8 ;
+(CFDictionaryRef)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id*)arg7 ;
+(const void*)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 ;
+(id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(id*)arg6 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id*)arg7 ;
+(id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(id*)arg6 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id*)arg7 ;
+(void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 group:(id)arg6 ;
+(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 ;
+(SecIdentityRef)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 ;
+(id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(BOOL)arg4 ;
+(void)removeItemWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 ;
+(BOOL)itemExistsInKeychain:(void*)arg1 useSystemKeychain:(BOOL)arg2 ;
+(id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5 ;
+(id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id*)arg6 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 outError:(id*)arg7 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 outError:(id*)arg8 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id*)arg6 ;
+(id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5 ;
+(id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id*)arg6 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id*)arg6 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 outError:(id*)arg7 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 outError:(id*)arg8 ;
+(void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 ;
+(const void*)copyItemWithPersistentID:(id)arg1 ;
+(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 ;
+(SecIdentityRef)copyIdentityWithPersistentID:(id)arg1 ;
+(id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 ;
+(void)removeItemWithPersistentID:(id)arg1 ;
+(BOOL)itemExistsInKeychain:(void*)arg1 ;
@end

