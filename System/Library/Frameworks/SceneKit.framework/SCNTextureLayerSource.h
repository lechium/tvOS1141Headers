/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class CALayer;

@interface SCNTextureLayerSource : SCNTextureOffscreenRenderingSource {

	CALayer* _layer;
	double _lastUpdate;
	double _nextUpdateDate;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(CALayer *)layer;
-(void)dealloc;
-(void)setLayer:(CALayer *)arg1 ;
-(double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 engineContext:(C3DEngineContextRef)arg3 viewport:(double)arg4 atTime:(BOOL)arg5 forceUpdate:(BOOL*)arg6 ;
-(id)layerToFocusForRenderedLayer:(id)arg1 ;
-(float)clearValue;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(CGSize)layerSizeInPixels;
-(C3DTextureRef)_textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(double)__updateTextureWithLayer:(id)arg1 engineContext:(C3DEngineContextRef)arg2 sampler:(_C3DTextureSampler*)arg3 ;
-(BOOL)supportsMetal;
-(BOOL)prefersGL3;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(double)layerContentsScaleFactor;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
@end

