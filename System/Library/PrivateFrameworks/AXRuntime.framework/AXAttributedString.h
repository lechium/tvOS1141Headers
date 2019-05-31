/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXAttributedString : NSString <NSCopying> {

	CFAttributedStringRef _string;

}
+(id)string;
+(id)axAttributedStringWithString:(id)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasAttributes;
-(void)dealloc;
-(id)description;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)initWithString:(id)arg1 ;
-(id)attributeValueForKey:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)lowercaseString;
-(id)uppercaseString;
-(id)attributedString;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)setAttributes:(id)arg1 ;
-(id)attributesAtIndex:(long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(BOOL)hasAttribute:(id)arg1 ;
-(void)convertAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateAttributesUsingBlock:(/*^block*/id)arg1 ;
-(id)axAttributedStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(void)appendStringOrAXAttributedString:(id)arg1 ;
-(id)axAttributedStringDescription;
-(BOOL)isAXAttributedString;
-(void)appendAXAttributedString:(id)arg1 ;
-(id)coalescedAttributes;
-(void)setAttributes:(id)arg1 withRange:(NSRange)arg2 ;
-(id)axStringByReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(const CFAttributedStringRef)cfAttributedString;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(NSRange)arg3 ;
-(void)removeAttributes:(id)arg1 ;
-(id)initWithCFAttributedString:(CFAttributedStringRef)arg1 ;
-(id)initWithStringOrAttributedString:(id)arg1 ;
-(id)coalescedFontAttributes;
-(void)replaceString:(CFStringRef)arg1 ;
@end
