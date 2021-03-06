/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSMutableArray, _OSLogTracepointBuffer, _OSLogIndex;

@interface _OSLogIndexEnumerator : NSObject {

	NSMutableArray* _subchunkStartQ;
	NSMutableArray* _subchunkEndQ;
	NSMutableArray* _catalogStartQ;
	NSMutableArray* _fileStartQ;
	NSMutableArray* _fileEndQ;
	NSMutableArray* _fileBootQ;
	NSMutableArray* _oversizeChunks;
	os_timesync_range_s* _bounds[6];
	os_timesync_range_s* _live_bound;
	_OSLogTracepointBuffer* _tracepoints;
	_OSLogIndex* _index;

}

@property (nonatomic,readonly) NSMutableArray * oversizeChunks;              //@synthesize oversizeChunks=_oversizeChunks - In the implementation block
-(void)dealloc;
-(id)initWithIndex:(id)arg1 metadata:(SCD_Struct_OS21*)arg2 fileBootList:(id)arg3 ;
-(void)_initTimesyncBounds:(SCD_Struct_OS21*)arg1 ;
-(void)enumerateTracepointsInRange:(os_timesync_range_s*)arg1 timesync:(os_timesync_db_sRef)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(NSMutableArray *)oversizeChunks;
@end

