/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalKit/MetalKit-Structs.h>
#import <libobjc.A.dylib/CAMetalDrawable.h>

@protocol MTLTexture, MTLDevice;
@class CAMetalLayer, NSString;

@interface MTKOffscreenDrawable : NSObject <CAMetalDrawable> {

	id<MTLTexture> _texture;
	unsigned long long _pixelFormat;
	CGSize _size;
	BOOL _textureDirty;
	CAMetalLayer* _layer;
	double _presentedTime;
	unsigned long long _drawableID;
	id<MTLDevice> _device;

}

@property (readonly) CAMetalLayer * layer;                                 //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) double presentedTime;                       //@synthesize presentedTime=_presentedTime - In the implementation block
@property (nonatomic,readonly) unsigned long long drawableID;              //@synthesize drawableID=_drawableID - In the implementation block
@property (nonatomic,retain) id<MTLDevice> device;                         //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) unsigned long long pixelFormat; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLTexture> texture; 
-(void)presentAtTime:(double)arg1 ;
-(void)presentAfterMinimumDuration:(double)arg1 ;
-(void)addPresentedHandler:(/*^block*/id)arg1 ;
-(unsigned long long)drawableID;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(CAMetalLayer *)layer;
-(void)present;
-(id<MTLTexture>)texture;
-(id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 size:(CGSize)arg3 drawableID:(unsigned long long)arg4 ;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(double)presentedTime;
@end

