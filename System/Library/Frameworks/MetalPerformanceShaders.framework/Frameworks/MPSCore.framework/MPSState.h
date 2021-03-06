/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSCore/MPSCore-Structs.h>
@class NSString;

@interface MPSState : NSObject {

	MPSStateResource* _resources;
	unsigned long long _resourceCount;
	unsigned long long _readCount;
	NSString* _label;
	unsigned short _flags;
	BOOL _updatedAlready;

}

@property (nonatomic,readonly) unsigned long long resourceCount;              //@synthesize resourceCount=_resourceCount - In the implementation block
@property (assign,nonatomic) unsigned long long readCount;                    //@synthesize readCount=_readCount - In the implementation block
@property (nonatomic,readonly) BOOL isTemporary; 
@property (copy) NSString * label; 
@property (nonatomic,retain,readonly) id<MTLResource> resource; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(unsigned long long)resourceTypeAtIndex:(unsigned long long)arg1 ;
-(MPSStateTextureInfo)textureInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bufferSizeAtIndex:(unsigned long long)arg1 ;
-(id)resourceAtIndex:(unsigned long long)arg1 allocateMemory:(BOOL)arg2 ;
-(id)initWithDevice:(id)arg1 textureDescriptor:(id)arg2 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(unsigned long long)readCount;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 ;
-(unsigned long long)resourceCount;
-(id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id<MTLResource>)resource;
-(id)initWithResource:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)resourceSize;
-(id)initWithResources:(id)arg1 ;
-(BOOL)isTemporary;
@end

