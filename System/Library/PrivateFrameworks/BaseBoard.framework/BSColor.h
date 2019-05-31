/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface BSColor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {

	double _red;
	double _green;
	double _blue;
	double _alpha;
	CGColorRef _colorRef;

}

@property (nonatomic,readonly) double red;                          //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;                        //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double blue;                         //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;                        //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) CGColorRef CGColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)blackColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)CGColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(double)alpha;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)red;
-(double)green;
-(double)blue;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

