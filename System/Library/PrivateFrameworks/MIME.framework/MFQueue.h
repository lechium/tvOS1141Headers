/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFQueueingStrategy;
@class NSMutableArray, NSArray;

@interface MFQueue : NSObject {

	NSMutableArray* _buffer;
	id<MFQueueingStrategy> _strategy;

}

@property (nonatomic,readonly) NSMutableArray * buffer;                      //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) id<MFQueueingStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allObjects; 
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
-(id)peek;
-(id)dequeue;
-(void)dequeueObject:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSArray *)allObjects;
-(id)drain;
-(NSMutableArray *)buffer;
-(id<MFQueueingStrategy>)strategy;
-(void)enqueue:(id)arg1 ;
-(id)initWithStrategy:(id)arg1 ;
@end

