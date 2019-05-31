/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, UIImage, NSValue;

@interface AAUIUpdateMyPhotoRequest : AARequest {

	ACAccount* _account;
	UIImage* _photo;
	NSValue* _cropRect;

}
+(id)_downsampleImage:(id)arg1 fromStartingQuality:(double)arg2 toEndingQuality:(double)arg3 increment:(double)arg4 maxLength:(unsigned long long)arg5 ;
+(id)_fullScreen2ImageFromImage:(id)arg1 cropRect:(id)arg2 fullScreenCropRect:(id*)arg3 ;
-(id)urlRequest;
-(id)urlString;
-(id)initWithAccount:(id)arg1 photo:(id)arg2 cropRect:(id)arg3 ;
@end
