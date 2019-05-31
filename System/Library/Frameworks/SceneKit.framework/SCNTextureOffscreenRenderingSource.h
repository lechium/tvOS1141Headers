/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>

@interface SCNTextureOffscreenRenderingSource : SCNTextureSource {

	BOOL _usesIOSurface;
	CGSize _framebufferSize;
	C3DFramebufferRef _framebuffer;

}
-(void)_bindFramebuffer:(C3DEngineContextRef)arg1 ;
-(void)_unbindFramebuffer:(C3DEngineContextRef)arg1 ;
-(void)_buildMipmaps:(C3DEngineContextRef)arg1 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(C3DTextureRef)__prepareFramebufferWithSize:(CGSize)arg1 withEngineContext:(C3DEngineContextRef)arg2 textureSampler:(_C3DTextureSampler*)arg3 needsStencil:(BOOL)arg4 ;
-(1)textureSize;
-(void)_createFramebufferWithEngineContext:(C3DEngineContextRef)arg1 size:(CGSize)arg2 ;
@end

