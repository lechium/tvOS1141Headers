/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@interface MTLPixelFormatQuery : NSObject {

	id<MTLDevice> _device;
	long long _iFeatureSet;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(id)initWithFeatureSet:(unsigned long long)arg1 ;
-(BOOL)isASTCPixelFormatsSupported;
-(BOOL)supportsFeatureSet:(unsigned long long)arg1 ;
-(BOOL)isDepth24Stencil8PixelFormatSupported;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
@end

