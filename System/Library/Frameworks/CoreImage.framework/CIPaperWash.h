/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPaperWash : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSaturation;
	NSNumber* inputGreyscale;

}

@property (nonatomic,copy) NSNumber * inputSaturation; 
@property (nonatomic,copy) NSNumber * inputGreyscale; 
+(id)customAttributes;
-(NSNumber *)inputGreyscale;
-(void)setInputGreyscale:(NSNumber *)arg1 ;
-(id)outputImage;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(NSNumber *)inputSaturation;
@end

