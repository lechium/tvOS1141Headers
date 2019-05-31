/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVCornerUtilities : NSObject
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 isContinuous:(BOOL)arg3 ;
+(double)radiusFromCornerRadii:(TVCornerRadii)arg1 ;
+(BOOL)radiiIsZero:(TVCornerRadii)arg1 ;
+(TVCornerRadii)radiiFromRadius:(double)arg1 ;
+(TVCornerRadii)flipCGOriginRadii:(TVCornerRadii)arg1 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 ;
@end

