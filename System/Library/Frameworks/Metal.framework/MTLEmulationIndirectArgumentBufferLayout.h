/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/_MTLIndirectArgumentBufferLayout.h>

@interface MTLEmulationIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout {

	unsigned long long _stride;
	unsigned long long _alignment;
	void* _bufferIndices;
	void* _textureIndices;
	void* _samplerIndices;
	void* _constantIndices;
	void* _constantOffsets;
	unsigned long long _bufferOffset;
	unsigned long long _textureOffset;
	unsigned long long _samplerOffset;

}

@property (nonatomic,readonly) unsigned long long stride;              //@synthesize stride=_stride - In the implementation block
-(void*)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(BOOL)bufferLayoutMatchesFrontEndLayout;
-(unsigned long long)encodedLength;
-(unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)offsetForBuffer:(unsigned long long)arg1 ;
-(unsigned long long)offsetForTexture:(unsigned long long)arg1 ;
-(unsigned long long)offsetForSampler:(unsigned long long)arg1 ;
-(unsigned long long)offsetForConstant:(unsigned long long)arg1 ;
-(id)initWithStructType:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)alignment;
-(unsigned long long)stride;
@end
