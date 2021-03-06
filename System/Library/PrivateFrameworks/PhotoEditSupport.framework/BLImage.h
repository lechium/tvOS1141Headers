/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, CIImage;

@interface BLImage : NSObject <NSCopying> {

	UIImage* _UIImage;
	CGImageRef _CGImage;
	CIImage* _CIImage;
	int _storageType;
	CGSize _size;
	BOOL _isPlaceholder;
	int _askedImageType;
	int _obtainedImageType;

}

@property (nonatomic,readonly) int storageType;                             //@synthesize storageType=_storageType - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) double scale; 
@property (assign,nonatomic) int askedImageType;                            //@synthesize askedImageType=_askedImageType - In the implementation block
@property (assign,nonatomic) int obtainedImageType;                         //@synthesize obtainedImageType=_obtainedImageType - In the implementation block
@property (assign,nonatomic) BOOL isPlaceholder;                            //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,readonly) unsigned long long memoryUsage; 
+(id)imageWithImage:(id)arg1 ;
+(id)descriptionWithImageType:(int)arg1 ;
+(id)abbreviatedDescriptionWithImageType:(int)arg1 ;
-(id)init;
-(double)scale;
-(CGSize)size;
-(void)dealloc;
-(id)description;
-(CGImageRef)CGImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)imageOrientation;
-(id)CIImage;
-(BOOL)isPlaceholder;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(int)storageType;
-(id)initWithFileAtURL:(id)arg1 ;
-(int)askedImageType;
-(void)setAskedImageType:(int)arg1 ;
-(int)obtainedImageType;
-(void)setObtainedImageType:(int)arg1 ;
-(id)UIImage;
-(unsigned long long)memoryUsage;
@end

