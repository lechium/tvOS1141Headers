/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CFSecurityUtils : NSObject
+(BOOL)verifyScriptData:(id)arg1 hmac:(id)arg2 hmacKey:(id)arg3 iv:(id)arg4 ;
+(id)decryptData:(id)arg1 withKey:(id)arg2 iv:(id)arg3 salt:(id)arg4 ;
+(id)_dataForOperation:(unsigned)arg1 withInputData:(id)arg2 key:(id)arg3 iv:(id)arg4 ;
+(id)deriveKeyForPassword:(id)arg1 withSalt:(id)arg2 ;
+(id)encryptData:(id)arg1 withKey:(id)arg2 iv:(id)arg3 ;
+(id)decryptData:(id)arg1 withKey:(id)arg2 ;
+(id)encryptData:(id)arg1 withPassword:(id)arg2 iv:(id*)arg3 salt:(id*)arg4 ;
+(id)decryptData:(id)arg1 withPassword:(id)arg2 iv:(id)arg3 salt:(id)arg4 ;
+(id)deriveKeyForSaltedKey:(id)arg1 withSalt:(id)arg2 ;
+(id)deriveConsistentKeyForPassword:(id)arg1 ;
+(id)randomDataOfLength:(unsigned long long)arg1 ;
@end

