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

@interface CIFaceBalance : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputOrigI;
	NSNumber* inputOrigQ;
	NSNumber* inputStrength;
	NSNumber* inputWarmth;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputOrigI; 
@property (nonatomic,retain) NSNumber * inputOrigQ; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputWarmth; 
+(id)customAttributes;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(void)setInputOrigI:(NSNumber *)arg1 ;
-(void)setInputOrigQ:(NSNumber *)arg1 ;
-(void)setInputWarmth:(NSNumber *)arg1 ;
-(NSNumber *)inputOrigI;
-(NSNumber *)inputOrigQ;
-(NSNumber *)inputWarmth;
-(id)outputImage;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(BOOL)_isIdentity;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

