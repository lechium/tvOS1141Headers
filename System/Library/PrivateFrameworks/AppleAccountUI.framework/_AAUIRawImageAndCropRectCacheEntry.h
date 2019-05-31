/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccountUI/AppleAccountUI-Structs.h>
@class UIImage, NSString, NSDate;

@interface _AAUIRawImageAndCropRectCacheEntry : NSObject {

	UIImage* _rawImage;
	NSString* _serverCacheTag;
	NSDate* _expirationDate;
	CGRect _rawCropRect;

}

@property (nonatomic,readonly) UIImage * rawImage;                     //@synthesize rawImage=_rawImage - In the implementation block
@property (nonatomic,readonly) CGRect rawCropRect;                     //@synthesize rawCropRect=_rawCropRect - In the implementation block
@property (nonatomic,readonly) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
+(id)entryWithRawImage:(id)arg1 rawCropRect:(CGRect)arg2 serverCacheTag:(id)arg3 ;
-(NSDate *)expirationDate;
-(BOOL)valid;
-(NSString *)serverCacheTag;
-(UIImage *)rawImage;
-(CGRect)rawCropRect;
@end

