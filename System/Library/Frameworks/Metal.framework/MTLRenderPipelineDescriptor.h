/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLVertexDescriptor, MTLRenderPipelineColorAttachmentDescriptorArray, MTLPipelineBufferDescriptorArray;

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying> {

	unsigned long long _inputPrimitiveTopology;

}

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> vertexFunction; 
@property (nonatomic,retain) id<MTLFunction> fragmentFunction; 
@property (nonatomic,copy) MTLVertexDescriptor * vertexDescriptor; 
@property (assign,nonatomic) unsigned long long sampleCount; 
@property (assign,nonatomic) unsigned long long rasterSampleCount; 
@property (assign,getter=isAlphaToCoverageEnabled,nonatomic) BOOL alphaToCoverageEnabled; 
@property (assign,getter=isAlphaToOneEnabled,nonatomic) BOOL alphaToOneEnabled; 
@property (assign,getter=isRasterizationEnabled,nonatomic) BOOL rasterizationEnabled; 
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray * colorAttachments; 
@property (assign,nonatomic) unsigned long long depthAttachmentPixelFormat; 
@property (assign,nonatomic) unsigned long long stencilAttachmentPixelFormat; 
@property (assign,nonatomic) unsigned long long inputPrimitiveTopology;                                                //@synthesize inputPrimitiveTopology=_inputPrimitiveTopology - In the implementation block
@property (assign,nonatomic) unsigned long long tessellationPartitionMode; 
@property (assign,nonatomic) unsigned long long maxTessellationFactor; 
@property (assign,getter=isTessellationFactorScaleEnabled,nonatomic) BOOL tessellationFactorScaleEnabled; 
@property (assign,nonatomic) unsigned long long tessellationFactorFormat; 
@property (assign,nonatomic) unsigned long long tessellationControlPointIndexType; 
@property (assign,nonatomic) unsigned long long tessellationFactorStepFunction; 
@property (assign,nonatomic) unsigned long long tessellationOutputWindingOrder; 
@property (readonly) MTLPipelineBufferDescriptorArray * vertexBuffers; 
@property (readonly) MTLPipelineBufferDescriptorArray * fragmentBuffers; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)inputPrimitiveTopology;
-(void)setInputPrimitiveTopology:(unsigned long long)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

