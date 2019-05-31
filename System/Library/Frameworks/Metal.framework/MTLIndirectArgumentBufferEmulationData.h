/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
#import <Metal/Metal-Structs.h>
@class NSObject;

@interface MTLIndirectArgumentBufferEmulationData : NSObject {

	NSObject*<OS_dispatch_data> _dataMap;
	char* _bufferIndices;
	char* _textureIndices;
	char* _samplerIndices;
	const void* _dataPtr;
	unsigned long long _dataSize;

}
-(void)bindIndirectArgumentsWithFunctions:(SCD_Struct_MT3)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end
