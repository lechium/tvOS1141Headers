/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSData;

@interface SAMLRSAKeyValue : SAMLBaseElement

@property (nonatomic,readonly) NSData * modulus; 
@property (nonatomic,readonly) NSData * exponent; 
+(id)createElement:(id*)arg1 ;
-(NSData *)exponent;
-(NSData *)modulus;
@end
