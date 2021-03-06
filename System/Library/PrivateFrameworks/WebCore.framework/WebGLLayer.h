/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@interface WebGLLayer : CAEAGLLayer {

	GraphicsContext3D* _context;
	float _devicePixelRatio;

}

@property (assign,nonatomic) GraphicsContext3D* context;              //@synthesize context=_context - In the implementation block
-(id)initWithGraphicsContext3D:(GraphicsContext3D*)arg1 ;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(GraphicsContext3D*)context;
-(void)setContext:(GraphicsContext3D*)arg1 ;
-(void)display;
@end

