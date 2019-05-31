/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWEdgeSharpen : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputPreSharpenAmount;
	NSNumber* inputPreSharpenBlurAmount;
	NSNumber* inputVersion;

}
+(id)customAttributes;
-(id)outputImage;
-(id)customAttributes;
-(CGRect)regionOf:(int)arg1 rect:(CGRect)arg2 userInfo:(id)arg3 ;
@end
