/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLMeshBuffer.h>

@protocol MDLMeshBufferAllocator;
@class MDLMeshBufferZoneDefault, NSMutableData, NSString, NSData;

@interface MDLMeshBufferData : NSObject <MDLMeshBuffer> {

	MDLMeshBufferZoneDefault* _zone;
	MDLMeshBufferZoneDefault* _zoneDefault;
	NSMutableData* _data;
	unsigned long long _length;
	id<MDLMeshBufferAllocator> _allocator;
	unsigned long long _type;
	NSString* _name;

}

@property (nonatomic,retain,readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone; 
@property (nonatomic,readonly) unsigned long long type; 
-(id)map;
-(void)dealloc;
-(id<MDLMeshBufferZone>)zone;
-(void)setName:(id)arg1 ;
-(id)name;
-(unsigned long long)length;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id<MDLMeshBufferAllocator>)allocator;
-(id)initWithType:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLength:(unsigned long long)arg1 data:(id)arg2 allocator:(id)arg3 zone:(id)arg4 ;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)initWithType:(unsigned long long)arg1 data:(id)arg2 ;
@end

