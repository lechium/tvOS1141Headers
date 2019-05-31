/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputShadowAmount;
	NSNumber* inputHighlightAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputShadowAmount; 
@property (nonatomic,retain) NSNumber * inputHighlightAmount; 
+(id)customAttributes;
-(NSNumber *)inputShadowAmount;
-(int)_defaultVersion;
-(int)_maxVersion;
-(id)_kernelSnoB_v0;
-(id)_kernelSHnoB_v0;
-(id)_kernelSH_v0;
-(id)_kernelSHnoB_v1;
-(id)_kernelSH_v1;
-(id)_kernelSHnoB_v2;
-(id)_kernelSH_v2;
-(void)setInputShadowAmount:(NSNumber *)arg1 ;
-(void)setInputHighlightAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputHighlightAmount;
-(id)outputImage;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(BOOL)_isIdentity;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setDefaults;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
@end
