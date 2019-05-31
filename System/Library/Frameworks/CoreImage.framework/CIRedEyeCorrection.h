/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSString, NSDictionary;

@interface CIRedEyeCorrection : CIFilter {

	CIImage* inputImage;
	NSString* inputCameraModel;
	NSDictionary* inputCorrectionInfo;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSString * inputCameraModel; 
@property (nonatomic,copy) NSDictionary * inputCorrectionInfo; 
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSDictionary *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSDictionary *)arg1 ;
-(id)outputImage;
-(BOOL)_isIdentity;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setDefaults;
@end
