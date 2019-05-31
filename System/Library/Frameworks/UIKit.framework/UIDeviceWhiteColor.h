/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIColor.h>

@interface UIDeviceWhiteColor : UIColor {

	double whiteComponent;
	double alphaComponent;
	CGColorRef _cachedColor;

}
-(CGColorRef)CGColor;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(void)set;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(double)alphaComponent;
-(void)setStroke;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(BOOL)_isDeepColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)colorSpaceName;
-(void)setFill;
-(CGColorRef)_createCGColorWithAlpha:(double)arg1 ;
@end

