/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore, MTLCommandQueue, TXRBufferAllocator, MTLDevice;
#import <MetalKit/MetalKit-Structs.h>
@class NSObject;

@interface MTKTextureLoader : NSObject {

	NSObject*<OS_dispatch_queue> _loadQueue;
	NSObject*<OS_dispatch_queue> _uploadQueue;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	NSObject*<OS_dispatch_semaphore> _loadSemaphore;
	id<MTLCommandQueue> _blitQueue;
	id<TXRBufferAllocator> _bufferAllocator;
	id<MTLDevice> _device;

}

@property (nonatomic,readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(void)dealloc;
-(void)newTexturesWithContentsOfURLs:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newUploaderForOptions:(id)arg1 ;
-(void)_loadData:(id)arg1 options:(id)arg2 uploader:(id)arg3 label:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_loadData:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_loadCGImage:(CGImageRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_loadMDLTexture:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newTextureWithData:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newTextureWithCGImage:(CGImageRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newTextureWithMDLTexture:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_determineFileType:(id)arg1 ;
-(BOOL)validateGenerateMipmapsForPixelFormat:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_newAsyncTexturesFromTXRTextures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newTextureWithCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)_newAsyncTextureWithNames:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)newTexturesWithNames:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)newTexturesWithNames:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newTexturesWithContentsOfURLs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newTextureWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newTextureWithMDLTexture:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newTexturesFromTXRTextures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newTextureFromTXRTexture:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
@end

