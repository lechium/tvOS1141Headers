/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector, CIFilter;

@interface BLUnderwaterBalanceFilter : CIFilter {

	BOOL _needsReprocess;
	float _lastDepthStrength;
	float _lastWaterBlend;
	CIImage* _inputImage;
	NSNumber* _inputDepthStrength;
	NSNumber* _inputWaterBlend;
	CIVector* _inputAverageLinearColor;
	CIFilter* _underwaterBalanceFilter;
	CIFilter* _underwaterGamma1Filter;
	CIFilter* _underwaterGamma2Filter;
	CIFilter* _underwaterColorMatrixRGB2YIQFilter;
	CIFilter* _underwaterColorMatrixYFilter;
	CIFilter* _underwaterColorMatrixIQFilter;
	CIFilter* _underwaterColorMatrixScaleFilter;
	CIFilter* _underwaterAdditionFilter;
	CIFilter* _underwaterColorMatrixYIQ2RGBFilter;

}

@property (nonatomic,retain) CIFilter * underwaterBalanceFilter;                         //@synthesize underwaterBalanceFilter=_underwaterBalanceFilter - In the implementation block
@property (nonatomic,retain) CIFilter * underwaterGamma1Filter;                          //@synthesize underwaterGamma1Filter=_underwaterGamma1Filter - In the implementation block
@property (nonatomic,retain) CIFilter * underwaterGamma2Filter;                          //@synthesize underwaterGamma2Filter=_underwaterGamma2Filter - In the implementation block
@property (nonatomic,retain) CIFilter * underwaterColorMatrixRGB2YIQFilter;              //@synthesize underwaterColorMatrixRGB2YIQFilter=_underwaterColorMatrixRGB2YIQFilter - In the implementation block
@property (nonatomic,retain) CIFilter * underwaterColorMatrixYFilter;                    //@synthesize underwaterColorMatrixYFilter=_underwaterColorMatrixYFilter - In the implementation block
@property (nonatomic,retain) CIFilter * underwaterColorMatrixIQFilter;                   //@synthesize underwaterColorMatrixIQFilter=_underwaterColorMatrixIQFilter - In the implementation block
@property (nonatomic,retain) CIFilter * underwaterColorMatrixScaleFilter;                //@synthesize underwaterColorMatrixScaleFilter=_underwaterColorMatrixScaleFilter - In the implementation block
@property (nonatomic,retain) CIFilter * underwaterAdditionFilter;                        //@synthesize underwaterAdditionFilter=_underwaterAdditionFilter - In the implementation block
@property (nonatomic,retain) CIFilter * underwaterColorMatrixYIQ2RGBFilter;              //@synthesize underwaterColorMatrixYIQ2RGBFilter=_underwaterColorMatrixYIQ2RGBFilter - In the implementation block
@property (nonatomic,retain) CIImage * inputImage;                                       //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputDepthStrength;                                //@synthesize inputDepthStrength=_inputDepthStrength - In the implementation block
@property (nonatomic,copy) NSNumber * inputWaterBlend;                                   //@synthesize inputWaterBlend=_inputWaterBlend - In the implementation block
@property (nonatomic,copy) CIVector * inputAverageLinearColor;                           //@synthesize inputAverageLinearColor=_inputAverageLinearColor - In the implementation block
-(id)init;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputDepthStrength:(NSNumber *)arg1 ;
-(void)setInputWaterBlend:(NSNumber *)arg1 ;
-(CIFilter *)underwaterBalanceFilter;
-(void)setUnderwaterBalanceFilter:(CIFilter *)arg1 ;
-(CIFilter *)underwaterGamma1Filter;
-(void)setUnderwaterGamma1Filter:(CIFilter *)arg1 ;
-(void)setUnderwaterGamma2Filter:(CIFilter *)arg1 ;
-(CIFilter *)underwaterGamma2Filter;
-(void)setUnderwaterColorMatrixRGB2YIQFilter:(CIFilter *)arg1 ;
-(CIFilter *)underwaterColorMatrixRGB2YIQFilter;
-(void)setUnderwaterColorMatrixYFilter:(CIFilter *)arg1 ;
-(CIFilter *)underwaterColorMatrixYFilter;
-(void)setUnderwaterColorMatrixIQFilter:(CIFilter *)arg1 ;
-(CIFilter *)underwaterColorMatrixIQFilter;
-(void)setUnderwaterAdditionFilter:(CIFilter *)arg1 ;
-(void)setUnderwaterColorMatrixScaleFilter:(CIFilter *)arg1 ;
-(CIFilter *)underwaterColorMatrixScaleFilter;
-(void)setUnderwaterColorMatrixYIQ2RGBFilter:(CIFilter *)arg1 ;
-(CIFilter *)underwaterColorMatrixYIQ2RGBFilter;
-(CIFilter *)underwaterAdditionFilter;
-(void)setInputAverageLinearColor:(CIVector *)arg1 ;
-(NSNumber *)inputDepthStrength;
-(NSNumber *)inputWaterBlend;
-(CIVector *)inputAverageLinearColor;
-(void)setDefaults;
@end

