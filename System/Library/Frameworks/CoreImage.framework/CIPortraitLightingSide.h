/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPortraitLightingSide : CIFilter {

	CIImage* inputImage;
	CIVector* inputPt1;
	CIVector* inputPt2;
	CIVector* inputPt3;
	CIVector* inputPt4;
	CIVector* inputPt5;
	CIVector* inputPt6;
	NSNumber* inputWidth;
	NSNumber* inputStrength;
	NSNumber* inputRotate;
	NSNumber* inputOrientation;
	NSNumber* inputCenterBottom;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPt1; 
@property (nonatomic,retain) CIVector * inputPt2; 
@property (nonatomic,retain) CIVector * inputPt3; 
@property (nonatomic,retain) CIVector * inputPt4; 
@property (nonatomic,retain) CIVector * inputPt5; 
@property (nonatomic,retain) CIVector * inputPt6; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputRotate; 
@property (nonatomic,retain) NSNumber * inputOrientation; 
@property (nonatomic,retain) NSNumber * inputCenterBottom; 
+(id)customAttributes;
-(NSNumber *)inputWidth;
-(id)_kickLightKernel_pos;
-(id)_kickLightKernel_neg;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputRotate;
-(void)setInputRotate:(NSNumber *)arg1 ;
-(CIVector *)inputPt1;
-(void)setInputPt1:(CIVector *)arg1 ;
-(CIVector *)inputPt2;
-(void)setInputPt2:(CIVector *)arg1 ;
-(CIVector *)inputPt3;
-(void)setInputPt3:(CIVector *)arg1 ;
-(CIVector *)inputPt4;
-(void)setInputPt4:(CIVector *)arg1 ;
-(CIVector *)inputPt5;
-(void)setInputPt5:(CIVector *)arg1 ;
-(CIVector *)inputPt6;
-(void)setInputPt6:(CIVector *)arg1 ;
-(NSNumber *)inputCenterBottom;
-(void)setInputCenterBottom:(NSNumber *)arg1 ;
-(id)outputImage;
-(NSNumber *)inputOrientation;
-(void)setInputOrientation:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

