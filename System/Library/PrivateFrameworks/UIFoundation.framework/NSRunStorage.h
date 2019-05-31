/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSRunStorage : NSObject <NSCopying> {

	unsigned long long _count;
	unsigned long long _elementSize;
	unsigned long long _numBlocks;
	unsigned long long _maxBlocks;
	unsigned long long _indexDeltaStartBlock;
	long long _indexDelta;
	NSRunBlock* _runs;
	unsigned long long _cachedBlock;
	NSRange _cachedBlockRange;
	unsigned long long _gapBlockIndex;

}
+(void)initialize;
+(void)_setConsistencyCheckingEnabled:(BOOL)arg1 superCheckEnabled:(BOOL)arg2 ;
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)insertElement:(void*)arg1 range:(NSRange)arg2 coalesceRuns:(BOOL)arg3 ;
-(void)replaceElementsInRange:(NSRange)arg1 withElement:(void*)arg2 coalesceRuns:(BOOL)arg3 ;
-(void)removeElementsInRange:(NSRange)arg1 coalesceRuns:(BOOL)arg2 ;
-(id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)_allocData:(unsigned long long)arg1 ;
-(void)_deallocData;
-(id)initWithRunStorage:(id)arg1 ;
-(void)_reallocData:(unsigned long long)arg1 ;
-(void*)elementAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)_moveGapToBlockIndex:(unsigned long long)arg1 ;
-(void)_consistencyError:(long long)arg1 startAtZeroError:(BOOL)arg2 cacheError:(BOOL)arg3 inconsistentBlockError:(BOOL)arg4 ;
-(void)_ensureCapacity:(unsigned long long)arg1 ;
-(void)_moveGapAndMergeWithBlockRange:(NSRange)arg1 ;
-(void)_consistencyCheck:(long long)arg1 ;
-(unsigned long long)elementSize;
@end

