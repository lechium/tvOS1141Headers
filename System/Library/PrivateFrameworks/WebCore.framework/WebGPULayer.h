/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAMetalLayer.h>

@interface WebGPULayer : CAMetalLayer {

	GPUDevice* _context;
	float _devicePixelRatio;

}

@property (assign,nonatomic) GPUDevice* context;              //@synthesize context=_context - In the implementation block
-(id)initWithGPUDevice:(GPUDevice*)arg1 ;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(GPUDevice*)context;
-(void)setContext:(GPUDevice*)arg1 ;
-(void)display;
@end

