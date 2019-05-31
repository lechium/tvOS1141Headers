/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelCommandEncoder.h>

@interface MTLIOAccelRenderCommandEncoder : MTLIOAccelCommandEncoder
-(unsigned long long)getType;
-(void)bindEmulationArguments;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)useHeap:(id)arg1 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(BOOL)isMemorylessRender;
-(id)getRenderPipelineState;
-(void*)getVertexBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)setEmulationVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setEmulationVertexTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setEmulationVertexSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void*)getFragmentBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)setEmulationFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setEmulationFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setEmulationFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)textureBarrier;
-(void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2 ;
-(void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2 ;
-(void)setDepthCleared;
-(void)setStencilCleared;
-(void)setDepthClipModeSPI:(unsigned long long)arg1 ;
@end

