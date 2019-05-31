/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFKey.h>

@interface _SFPublicKey : _SFKey {

	id _publicKeyInternal;

}

@property (getter=_secKey,nonatomic,readonly) SecKeyRef secKey; 
+(Class)_attributesClass;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(SecKeyRef)_secKey;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initWithSecKey:(SecKeyRef)arg1 ;
-(id)keyData;
@end

