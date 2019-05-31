/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISmartBlackAndWhite : CIFilter {

	CIImage* inputImage;
	NSNumber* inputStrength;
	NSNumber* inputNeutralGamma;
	NSNumber* inputTone;
	NSNumber* inputHue;
	NSNumber* inputGrain;
	NSNumber* inputSeed;
	NSNumber* inputScaleFactor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputStrength; 
@property (nonatomic,copy) NSNumber * inputNeutralGamma; 
@property (nonatomic,copy) NSNumber * inputTone; 
@property (nonatomic,copy) NSNumber * inputHue; 
@property (nonatomic,copy) NSNumber * inputGrain; 
@property (nonatomic,copy) NSNumber * inputSeed; 
@property (nonatomic,copy) NSNumber * inputScaleFactor; 
+(id)customAttributes;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(void)getNonNormalizedSettings:(SCD_Struct_CI30*)arg1 ;
-(float*)createHueArray;
-(id)hueArrayImage:(float*)arg1 ;
-(NSNumber *)inputNeutralGamma;
-(void)setInputNeutralGamma:(NSNumber *)arg1 ;
-(NSNumber *)inputTone;
-(void)setInputTone:(NSNumber *)arg1 ;
-(NSNumber *)inputHue;
-(void)setInputHue:(NSNumber *)arg1 ;
-(NSNumber *)inputGrain;
-(void)setInputGrain:(NSNumber *)arg1 ;
-(NSNumber *)inputSeed;
-(void)setInputSeed:(NSNumber *)arg1 ;
-(id)outputImage;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end
