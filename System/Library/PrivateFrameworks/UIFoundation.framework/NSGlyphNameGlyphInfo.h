/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSIdentityGlyphInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo <NSSecureCoding> {

	NSString* _name;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithGlyphName:(id)arg1 glyph:(unsigned)arg2 forFont:(id)arg3 baseString:(id)arg4 ;
-(id)glyphName;
@end
