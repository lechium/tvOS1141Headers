/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue, CalLogWriter;
@class NSMutableArray, NSObject, CalLogFilter;

@interface CalLogNode : NSObject {

	NSMutableArray* _subnodes;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CalLogFilter* _filter;
	id<CalLogWriter> _writer;
	NSMutableArray* _accumulator;
	unsigned long long _accumulatorBufferSize;

}

@property (nonatomic,retain) NSMutableArray * subnodes;                             //@synthesize subnodes=_subnodes - In the implementation block
@property (nonatomic,retain) NSMutableArray * accumulator;                          //@synthesize accumulator=_accumulator - In the implementation block
@property (nonatomic,retain) CalLogFilter * filter;                                 //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) unsigned long long accumulatorBufferSize;              //@synthesize accumulatorBufferSize=_accumulatorBufferSize - In the implementation block
@property (nonatomic,retain) id<CalLogWriter> writer;                               //@synthesize writer=_writer - In the implementation block
-(id)init;
-(BOOL)flush;
-(CalLogFilter *)filter;
-(void)setFilter:(CalLogFilter *)arg1 ;
-(void)addSubnode:(id)arg1 ;
-(int)minimumLevelOfNodeTree;
-(void)processEnvelope:(id)arg1 ;
-(NSMutableArray *)accumulator;
-(NSMutableArray *)subnodes;
-(void)flushAccumulator;
-(unsigned long long)accumulatorBufferSize;
-(void)setAccumulator:(NSMutableArray *)arg1 ;
-(void)clearAccumulator;
-(void)removeSubnode:(id)arg1 ;
-(id)allSubnodes;
-(void)setSubnodes:(NSMutableArray *)arg1 ;
-(void)setAccumulatorBufferSize:(unsigned long long)arg1 ;
-(id<CalLogWriter>)writer;
-(void)setWriter:(id<CalLogWriter>)arg1 ;
@end
