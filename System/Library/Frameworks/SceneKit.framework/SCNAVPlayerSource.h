/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>

@protocol MTLTexture;
@class AVPlayer, AVPlayerItemVideoOutput;

@interface SCNAVPlayerSource : SCNTextureSource {

	AVPlayer* _player;
	AVPlayerItemVideoOutput* _videoOutput;
	CVMetalTextureCacheRef _textureCache;
	CVBufferRef _pixelBuffer;
	id<MTLTexture> _mtlTexture;
	unsigned long long _width;
	unsigned long long _height;

}

@property (nonatomic,retain) AVPlayer * player; 
-(id)init;
-(void)dealloc;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)connectToProxy:(C3DImageProxyRef)arg1 ;
-(void)discardVideoData;
@end

