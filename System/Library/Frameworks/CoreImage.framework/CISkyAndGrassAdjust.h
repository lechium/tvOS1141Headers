/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISkyAndGrassAdjust : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSkyAmount;
	NSNumber* inputGrassAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSkyAmount; 
@property (nonatomic,retain) NSNumber * inputGrassAmount; 
+(id)customAttributes;
-(NSNumber *)inputSkyAmount;
-(void)setInputSkyAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputGrassAmount;
-(void)setInputGrassAmount:(NSNumber *)arg1 ;
-(id)outputImage;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

