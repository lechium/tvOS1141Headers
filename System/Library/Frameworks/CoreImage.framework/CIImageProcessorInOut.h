/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLTexture;
#import <CoreImage/CoreImage-Structs.h>
@interface CIImageProcessorInOut : NSObject {

	CGRect _region;
	IOSurfaceRef _surface;
	BOOL _usesSRGB;
	Context* _context;
	id<MTLTexture> _mtlTexture;
	BOOL _surfaceLocked;

}

@property (nonatomic,readonly) CGRect region;                               //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) BOOL usesSRGBTransferFunction; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 allowSRGB:(BOOL)arg3 bounds:(CGRect)arg4 context:(Context*)arg5 ;
-(IOSurfaceRef)surface;
-(BOOL)usesSRGBTransferFunction;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(id)description;
-(unsigned long long)bytesPerRow;
-(int)format;
-(CGRect)region;
@end
