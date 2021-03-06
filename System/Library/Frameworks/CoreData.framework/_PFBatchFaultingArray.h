/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSArray.h>

@class _PFArray, NSManagedObjectContext, NSCachingFetchRequest;

@interface _PFBatchFaultingArray : NSArray {

	int _cd_rc;
	unsigned _count;
	_PFArray* _array;
	unsigned* _entryFlags;
	NSManagedObjectContext* _moc;
	NSCachingFetchRequest* _request;
	unsigned _batchSize;
	unsigned* _LRUBatches;
	struct {
		unsigned _LRUIndex : 8;
		unsigned _uniformEntity : 1;
		unsigned _RESERVED : 23;
	}  _flags;

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(void)getObjects:(id*)arg1 ;
-(id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)_newSubArrayInRange:(NSRange)arg1 asMutable:(BOOL)arg2 ;
-(void)_internalDealloc;
-(id)retainedObjectAtIndex:(unsigned long long)arg1 ;
-(void)_turnAllBatchesIntoObjects;
-(void)_turnAllBatchesIntoFaults;
-(id)_pinnedObjectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(oneway void)release;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)retain;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)description;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(BOOL)_isDeallocating;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(BOOL)_tryRetain;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
@end

