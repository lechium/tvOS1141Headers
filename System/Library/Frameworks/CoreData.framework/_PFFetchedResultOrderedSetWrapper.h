/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>

@class NSArray, _PFWeakReference;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {

	int _cd_rc;
	NSArray* _underlyingArray;
	_PFWeakReference* _weakmoc;

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(Class)classForArchiver;
-(void)getObjects:(id*)arg1 ;
-(void)willRead;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)initWithArray:(id)arg1 andContext:(id)arg2 ;
-(unsigned long long)count;
-(oneway void)release;
-(id)retain;
-(BOOL)containsObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)description;
-(id)array;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)allObjects;
-(id)objectEnumerator;
-(BOOL)_isDeallocating;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
@end

