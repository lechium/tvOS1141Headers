/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWPreserveHueGamutMap : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	BOOL inputEnabled;
	BOOL inputShouldWarn;
	NSNumber* inputVersion;

}
+(id)customAttributes;
-(void)setInputEnabled:(id)arg1 ;
-(id)outputImage;
-(id)customAttributes;
-(id)inputShouldWarn;
-(id)inputEnabled;
-(void)setInputShouldWarn:(id)arg1 ;
@end

