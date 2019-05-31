/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPortraitLightingFront : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter1;
	CIVector* inputCenter2;
	CIVector* inputBottom1;
	CIVector* inputBottom2;
	NSNumber* inputWidth1;
	NSNumber* inputHeight1;
	NSNumber* inputWidth2;
	NSNumber* inputHeight2;
	NSNumber* inputStrength;
	NSNumber* inputBrighten;
	NSNumber* inputRotate1;
	NSNumber* inputRotate2;
	NSNumber* inputContrast;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter1; 
@property (nonatomic,retain) CIVector * inputCenter2; 
@property (nonatomic,retain) CIVector * inputBottom1; 
@property (nonatomic,retain) CIVector * inputBottom2; 
@property (nonatomic,retain) NSNumber * inputWidth1; 
@property (nonatomic,retain) NSNumber * inputWidth2; 
@property (nonatomic,retain) NSNumber * inputHeight1; 
@property (nonatomic,retain) NSNumber * inputHeight2; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputBrighten; 
@property (nonatomic,retain) NSNumber * inputRotate1; 
@property (nonatomic,retain) NSNumber * inputRotate2; 
@property (nonatomic,retain) NSNumber * inputContrast; 
+(id)customAttributes;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(id)_dualLightKernel;
-(CIVector *)inputCenter1;
-(void)setInputCenter1:(CIVector *)arg1 ;
-(CIVector *)inputCenter2;
-(void)setInputCenter2:(CIVector *)arg1 ;
-(CIVector *)inputBottom1;
-(void)setInputBottom1:(CIVector *)arg1 ;
-(CIVector *)inputBottom2;
-(void)setInputBottom2:(CIVector *)arg1 ;
-(NSNumber *)inputWidth1;
-(void)setInputWidth1:(NSNumber *)arg1 ;
-(NSNumber *)inputWidth2;
-(void)setInputWidth2:(NSNumber *)arg1 ;
-(NSNumber *)inputHeight1;
-(void)setInputHeight1:(NSNumber *)arg1 ;
-(NSNumber *)inputHeight2;
-(void)setInputHeight2:(NSNumber *)arg1 ;
-(NSNumber *)inputRotate1;
-(void)setInputRotate1:(NSNumber *)arg1 ;
-(NSNumber *)inputRotate2;
-(void)setInputRotate2:(NSNumber *)arg1 ;
-(NSNumber *)inputBrighten;
-(void)setInputBrighten:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(NSNumber *)inputContrast;
@end
