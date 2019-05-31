/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@interface _OSLogChunkBuffer : NSObject {

	BOOL _allocated;
	const char* _data;
	unsigned long long _sz;

}

@property (nonatomic,readonly) const char* data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long size;              //@synthesize sz=_sz - In the implementation block
-(unsigned long long)size;
-(void)dealloc;
-(const char*)data;
-(id)initWithChunk:(tracev3_chunk_s*)arg1 subchunk:(catalog_subchunk_s*)arg2 ;
@end
