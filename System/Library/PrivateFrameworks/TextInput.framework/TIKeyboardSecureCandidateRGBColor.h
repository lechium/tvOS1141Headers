/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding> {

	double _colorR;
	double _colorG;
	double _colorB;
	double _colorA;

}

@property (assign,nonatomic) double colorR;              //@synthesize colorR=_colorR - In the implementation block
@property (assign,nonatomic) double colorG;              //@synthesize colorG=_colorG - In the implementation block
@property (assign,nonatomic) double colorB;              //@synthesize colorB=_colorB - In the implementation block
@property (assign,nonatomic) double colorA;              //@synthesize colorA=_colorA - In the implementation block
+(id)whiteColor;
+(id)blackColor;
+(BOOL)supportsSecureCoding;
+(id)lightGrayColor;
-(id)initWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4 ;
-(void)setColorR:(double)arg1 ;
-(void)setColorG:(double)arg1 ;
-(void)setColorB:(double)arg1 ;
-(void)setColorA:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)colorA;
-(double)colorB;
-(double)colorG;
-(double)colorR;
@end

