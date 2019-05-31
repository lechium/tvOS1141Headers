/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLMeshBufferZone.h>

@protocol MDLMeshBufferAllocator;
@class NSString;

@interface MDLMeshBufferZoneDefault : NSObject <MDLMeshBufferZone> {

	unsigned long long _usedCapacity;
	unsigned long long _capacity;
	id<MDLMeshBufferAllocator> _allocator;

}

@property (nonatomic,readonly) unsigned long long capacity;                              //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)capacity;
-(id<MDLMeshBufferAllocator>)allocator;
-(id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2 ;
-(BOOL)reserveMemory:(unsigned long long)arg1 allocator:(id)arg2 ;
-(void)cancelMemory:(unsigned long long)arg1 ;
@end

