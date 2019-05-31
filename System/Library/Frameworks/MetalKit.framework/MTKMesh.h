/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, MDLVertexDescriptor, NSString, NSArray;

@interface MTKMesh : NSObject {

	NSMutableArray* _submeshes;
	NSMutableArray* _vertexBuffers;
	MDLVertexDescriptor* _vertexDescriptor;
	unsigned long long _vertexCount;
	NSString* _name;

}

@property (nonatomic,readonly) NSArray * vertexBuffers;                             //@synthesize vertexBuffers=_vertexBuffers - In the implementation block
@property (nonatomic,readonly) MDLVertexDescriptor * vertexDescriptor;              //@synthesize vertexDescriptor=_vertexDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * submeshes;                                 //@synthesize submeshes=_submeshes - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount;                      //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
+(void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 device:(id)arg4 error:(id*)arg5 ;
+(id)newMeshesFromAsset:(id)arg1 device:(id)arg2 sourceMeshes:(id*)arg3 error:(id*)arg4 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)vertexCount;
-(MDLVertexDescriptor *)vertexDescriptor;
-(id)initWithMesh:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(NSArray *)submeshes;
-(NSArray *)vertexBuffers;
@end

