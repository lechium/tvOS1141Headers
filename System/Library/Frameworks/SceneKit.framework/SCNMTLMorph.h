/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer, MTLComputePipelineState;
#import <SceneKit/SceneKit-Structs.h>
@class NSArray;

@interface SCNMTLMorph : NSObject {

	id<MTLBuffer> _baseBuffer;
	unsigned _baseVertexCount;
	short _baseBufferTypes[3];
	unsigned _baseBufferTypesCount;
	unsigned _baseBufferStride;
	short _targetBufferTypes[3];
	unsigned _targetBufferTypesCount;
	unsigned _targetBufferStride;
	unsigned _dstSemanticUsageMask;
	unsigned _srcSemanticUsageMask;
	BOOL _unifyPostMorphNormals;
	BOOL _shouldMorphNormals;
	unsigned char _dataKindForMorphing;
	id<MTLBuffer> _splatProvokingVertices;
	SCD_Struct_SC6 _postUnifyInfo;
	Target* _targets;
	unsigned long long _targetCount;
	NSArray* _originalTargets;
	id<MTLComputePipelineState> _copyCPS;
	id<MTLComputePipelineState> _blendCPS;
	id<MTLComputePipelineState> _blendSparseCPS;
	id<MTLComputePipelineState> _splatCPS;

}
-(void)dealloc;
-(void)_writeSources:(const _C3DMeshSource*)arg1 dstTypes:(short*)arg2 sourcesCount:(unsigned)arg3 inBuffer:(void*)arg4 stride:(unsigned)arg5 length:(unsigned long long)arg6 sparse:(BOOL)arg7 positionScale:(float)arg8 ;
-(unsigned)sparseIndexSize;
-(void)_prepareTargetDataForIndex:(long long)arg1 morph:(C3DMorphRef)arg2 baseMesh:(C3DMeshRef)arg3 ;
-(id)initWithMorph:(C3DMorphRef)arg1 baseGeometry:(_C3DGeometry*)arg2 resourceManager:(id)arg3 ;
-(BOOL)isCompatibleWithMorph:(C3DMorphRef)arg1 ;
-(void)morphMesh:(id)arg1 morph:(C3DMorphRef)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4 ;
-(void)morphOptimizedMesh:(id)arg1 morph:(C3DMorphRef)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4 ;
-(void)morphIncrementalMesh:(id)arg1 morpher:(_C3DMorpher*)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4 ;
-(void)unifyMesh:(id)arg1 computeEncoder:(id)arg2 resourceManager:(id)arg3 ;
-(void)morphSparseMesh:(id)arg1 morpher:(_C3DMorpher*)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4 ;
@end
