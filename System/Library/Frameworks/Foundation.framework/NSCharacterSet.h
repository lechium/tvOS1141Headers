/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy,readonly) NSData * bitmapRepresentation; 
@property (copy,readonly) NSCharacterSet * invertedSet; 
+(id)nonBaseCharacterSet;
+(id)decomposableCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)illegalCharacterSet;
+(id)characterSetWithContentsOfFile:(id)arg1 ;
+(id)characterSetWithRange:(NSRange)arg1 ;
+(id)characterSetWithBitmapRepresentation:(id)arg1 ;
+(id)URLUserAllowedCharacterSet;
+(id)URLPasswordAllowedCharacterSet;
+(id)URLHostAllowedCharacterSet;
+(id)URLFragmentAllowedCharacterSet;
+(id)alphanumericCharacterSet;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)controlCharacterSet;
+(id)newlineCharacterSet;
+(id)whitespaceAndNewlineCharacterSet;
+(id)punctuationCharacterSet;
+(id)symbolCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)whitespaceCharacterSet;
+(id)characterSetWithCharactersInString:(id)arg1 ;
+(id)URLQueryAllowedCharacterSet;
+(id)lowercaseLetterCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)URLPathAllowedCharacterSet;
+(id)letterCharacterSet;
-(unsigned long long)_cfTypeID;
-(NSData *)bitmapRepresentation;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(BOOL)isMutable;
-(void)makeImmutable;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(id)_retainedBitmapRepresentation;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSCharacterSet *)invertedSet;
-(id)init;
-(unsigned long long)count;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
@end
