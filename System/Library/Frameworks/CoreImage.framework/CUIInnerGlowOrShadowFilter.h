/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIInnerGlowOrShadowFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputOffset;
	NSNumber* inputRange;
	NSNumber* inputRadius;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRange; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(CIVector *)inputOffset;
-(void)setInputOffset:(CIVector *)arg1 ;
-(id)outputImage;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(NSNumber *)inputRange;
-(void)setInputRange:(NSNumber *)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
@end

