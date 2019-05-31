/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIVariableBoxBlur : CIFilter {

	CIImage* inputImage;
	CIImage* inputRadiusImage;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputRadiusImage; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(CIImage *)inputRadiusImage;
-(void)setInputRadiusImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
@end

