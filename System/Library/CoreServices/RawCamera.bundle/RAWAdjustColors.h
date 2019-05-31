/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustColors : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputVersion;
	NSNumber* inputM00;
	NSNumber* inputM01;
	NSNumber* inputM02;
	NSNumber* inputM10;
	NSNumber* inputM11;
	NSNumber* inputM12;
	NSNumber* inputM20;
	NSNumber* inputM21;
	NSNumber* inputM22;
	NSNumber* inputTRCs0;
	NSNumber* inputTRCy1;
	NSNumber* inputTRCs1;
	NSNumber* inputTRCy2;
	NSNumber* inputTRCs2;
	NSNumber* inputTRCy3;
	NSNumber* inputTRCs3;
	NSNumber* inputTRCs4;
	NSNumber* inputBoostKind;
	NSNumber* inputBoostAmount;
	NSNumber* inputBoostLuminanceAmount;
	NSNumber* inputBoostTransitionPoint;
	NSNumber* inputBoostTransitionWidth;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)outputImage;
-(id)customAttributes;
-(void)setInputBoostAmount:(id)arg1 ;
@end

