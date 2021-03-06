/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CVML/CVML-Structs.h>
@class CIImage, NSData, NSURL;

@interface CVMLImageBuffer : NSObject {

	CVBufferRef _origPixelBuffer;
	CGImageRef _origCGImage;
	CIImage* _origCIImage;
	NSData* _origData;
	NSURL* _origURL;
	CGImageSourceRef _origImageSource;
	CGImageSourceRef _origImageSourceSubsample8;
	CGImageSourceRef _origImageSourceSubsample4;
	CGImageSourceRef _origImageSourceSubsample2;
	CFArrayRef _pixelBufferReps;
	int _orientation;
	BOOL _orientationPassedIn;
	unsigned long long _origImageWidth;
	unsigned long long _origImageHeight;

}

@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
@property (readonly) NSURL * fileURL; 
+(id)imageBufferWithBufferOrImage:(id)arg1 options:(id)arg2 ;
+(id)imageBufferWithBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
+(id)imageBufferWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
+(id)imageBufferWithCIImage:(id)arg1 options:(id)arg2 ;
+(id)imageBufferWithURL:(id)arg1 options:(id)arg2 ;
+(id)imageBufferWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(unsigned long long)height;
-(unsigned long long)width;
-(id)initWithOptions:(id)arg1 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(NSURL *)fileURL;
-(CVBufferRef)croppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 cropRect:(CGRect)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)initWithBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(void)purgeCachedRepresentations;
-(CGColorSpaceRef)copyColorspaceForFormat:(unsigned)arg1 bitmapInfo:(unsigned*)arg2 ;
-(BOOL)_useCoreImageForFormat:(unsigned)arg1 ;
-(CVBufferRef)bufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)initWithBufferOrImage:(id)arg1 options:(id)arg2 ;
-(BOOL)isBufferInMemoryWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 ;
-(BOOL)processInChunksOfSize:(unsigned long long)arg1 overlapFraction:(float)arg2 options:(id)arg3 roi:(CGRect)arg4 handler:(/*^block*/id)arg5 error:(id*)arg6 ;
-(CGRect)makeClippedRectAgainstImageExtentUsingOriginalRect:(CGRect)arg1 ;
-(CVBufferRef)createBufferWithMaxSideLengthOf:(unsigned long long)arg1 andPixelFormat:(unsigned)arg2 andOptions:(id)arg3 error:(id*)arg4 ;
-(CVBufferRef)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)arg1 andCropBounds:(CGRect)arg2 andPixelFormat:(unsigned)arg3 andOptions:(id)arg4 error:(id*)arg5 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
@end

