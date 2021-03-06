/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString;

@interface SACFScriptEncryptionParameters : SABaseAceObject

@property (nonatomic,copy) NSData * encryptionKey; 
@property (nonatomic,copy) NSData * hmac; 
@property (nonatomic,copy) NSData * hmacKey; 
@property (nonatomic,copy) NSData * initializationVector; 
@property (nonatomic,copy) NSString * type; 
+(id)scriptEncryptionParameters;
+(id)scriptEncryptionParametersWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)encodedClassName;
-(NSData *)encryptionKey;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(NSData *)hmac;
-(void)setHmac:(NSData *)arg1 ;
-(NSData *)hmacKey;
-(void)setHmacKey:(NSData *)arg1 ;
-(NSData *)initializationVector;
-(void)setInitializationVector:(NSData *)arg1 ;
@end

