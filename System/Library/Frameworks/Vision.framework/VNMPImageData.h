/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class NSString;

@interface VNMPImageData : NSObject {

	BOOL _freeImageInDealloc;
	vImage_Buffer* _image;
	CVBufferRef _imageCVPixelBuffer;
	NSString* _imageFilePath;
	NSString* _externalImageId;
	long long _exifTimestamp;

}

@property (readonly) vImage_Buffer* image;                        //@synthesize image=_image - In the implementation block
@property (readonly) CVBufferRef imageCVPixelBuffer;              //@synthesize imageCVPixelBuffer=_imageCVPixelBuffer - In the implementation block
@property (retain) NSString * imageFilePath;                      //@synthesize imageFilePath=_imageFilePath - In the implementation block
@property (assign) BOOL freeImageInDealloc;                       //@synthesize freeImageInDealloc=_freeImageInDealloc - In the implementation block
@property (readonly) NSString * externalImageId;                  //@synthesize externalImageId=_externalImageId - In the implementation block
@property (readonly) long long exifTimestamp;                     //@synthesize exifTimestamp=_exifTimestamp - In the implementation block
-(void)dealloc;
-(vImage_Buffer*)image;
-(long long)exifTimestamp;
-(id)initWithVImage:(vImage_Buffer*)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id*)arg4 ;
-(id)initWithCVPixelBufferImage:(CVBufferRef)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id*)arg4 ;
-(id)initWithVImage:(vImage_Buffer*)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id*)arg4 ;
-(id)initWithCVPixelBufferImage:(CVBufferRef)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id*)arg4 ;
-(CVBufferRef)imageCVPixelBuffer;
-(NSString *)imageFilePath;
-(void)setImageFilePath:(NSString *)arg1 ;
-(BOOL)freeImageInDealloc;
-(void)setFreeImageInDealloc:(BOOL)arg1 ;
-(NSString *)externalImageId;
@end

