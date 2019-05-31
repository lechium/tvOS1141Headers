/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>

@class _SFAESKeySpecifier, NSString;

@interface _SFAuthenticatedEncryptionOperation : NSObject <_SFEncryptionOperation> {

	id _authenticatedEncryptionOperationInternal;

}

@property (nonatomic,copy) _SFAESKeySpecifier * encryptionKeySpecifier; 
@property (assign,nonatomic) long long authenticationMode; 
@property (assign,nonatomic) long long authenticationCodeLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_defaultEncryptionOperation;
+(long long)_defaultAuthenticationMode;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 ;
-(long long)authenticationMode;
-(long long)authenticationCodeLength;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(_SFAESKeySpecifier *)encryptionKeySpecifier;
-(id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id*)arg4 ;
-(void)setEncryptionKeySpecifier:(_SFAESKeySpecifier *)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 authenticationMode:(long long)arg2 ;
-(void)setAuthenticationMode:(long long)arg1 ;
-(void)setAuthenticationCodeLength:(long long)arg1 ;
@end

