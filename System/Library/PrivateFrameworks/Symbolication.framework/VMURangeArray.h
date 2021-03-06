/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMURangeArray : NSObject <NSCopying> {

	unsigned _count;
	VMURange* _ranges;
	unsigned _max;
	BOOL _sorted;

}
-(void)sort;
-(id)init;
-(unsigned)count;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCapacity:(unsigned)arg1 ;
-(VMURange)range;
-(VMURange)rangeAtIndex:(unsigned)arg1 ;
-(BOOL)intersectsRange:(VMURange)arg1 ;
-(unsigned long long)indexForLocation:(unsigned long long)arg1 ;
-(void)removeRangeAtIndex:(unsigned)arg1 ;
-(void)removeAllRanges;
-(id)initWithRanges:(const VMURange*)arg1 count:(unsigned)arg2 ;
-(VMURange)rangeForLocation:(unsigned long long)arg1 ;
-(void)insertRange:(VMURange)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)intersectsLocation:(unsigned long long)arg1 ;
-(VMURange)subrangeNotExcludedBySelfForRange:(VMURange)arg1 ;
-(VMURange)largestRange;
-(unsigned long long)sumLengths;
-(void)addRange:(VMURange)arg1 ;
-(VMURange*)ranges;
-(void)addRanges:(id)arg1 ;
@end

