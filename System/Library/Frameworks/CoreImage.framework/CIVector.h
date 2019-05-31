/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _count;
	SCD_Union_CI26* _u;

}

@property (readonly) double* _values; 
@property (readonly) unsigned long long count; 
@property (readonly) double X; 
@property (readonly) double Y; 
@property (readonly) double Z; 
@property (readonly) double W; 
@property (readonly) CGPoint CGPointValue; 
@property (readonly) CGRect CGRectValue; 
@property (readonly) CGAffineTransform CGAffineTransformValue; 
@property (readonly) NSString * stringRepresentation; 
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
+(id)vectorWithString:(id)arg1 ;
+(id)vectorWithX:(double)arg1 ;
+(id)vectorWithCGPoint:(CGPoint)arg1 ;
+(id)vectorWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
+(id)vectorWithCGRect:(CGRect)arg1 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 ;
+(id)vectorWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
-(void)finalize;
-(double*)_values;
-(id)initWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithX:(double)arg1 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
-(id)initWithCGPoint:(CGPoint)arg1 ;
-(id)initWithCGRect:(CGRect)arg1 ;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(double)valueAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGAffineTransform)CGAffineTransformValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)CGRectValue;
-(CGPoint)CGPointValue;
-(id)initWithString:(id)arg1 ;
-(double)X;
-(double)Y;
-(NSString *)stringRepresentation;
-(double)Z;
-(double)W;
@end

