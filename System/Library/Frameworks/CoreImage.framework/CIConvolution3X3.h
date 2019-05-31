/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIConvolution3X3 : CIFilter {

	CIImage* inputImage;
	CIVector* inputWeights;
	NSNumber* inputBias;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputWeights; 
@property (nonatomic,retain) NSNumber * inputBias; 
+(id)customAttributes;
-(CIVector *)inputWeights;
-(void)setInputWeights:(CIVector *)arg1 ;
-(id)outputImage;
-(BOOL)_isIdentity;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputBias;
-(void)setInputBias:(NSNumber *)arg1 ;
@end

