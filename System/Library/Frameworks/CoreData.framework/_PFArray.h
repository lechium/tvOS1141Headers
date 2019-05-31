/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSArray.h>

@class _PFWeakReference;

@interface _PFArray : NSArray {

	int _cd_rc;
	unsigned _count;
	id* _array;
	_PFWeakReference* _weakContext;
	struct {
		unsigned shouldRetain : 1;
		unsigned shouldRelease : 1;
		unsigned useExtendedRelease : 1;
		unsigned freeBackingArray : 1;
		unsigned copyBackingArray : 1;
		unsigned managedObjects : 1;
		unsigned _RESERVED : 27;
	}  _flags;

}
+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
-(void)getObjects:(id*)arg1 ;
-(id)initWithObjects:(id*)arg1 count:(unsigned)arg2 andFlags:(unsigned)arg3 andContext:(id)arg4 ;
-(id)initWithObjects:(id*)arg1 count:(unsigned)arg2 andFlags:(unsigned)arg3 ;
-(unsigned)_flags;
-(id)newArrayFromObjectIDs;
-(id*)_objectsPointer;
-(id)arrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(void)_setShouldRelease:(BOOL)arg1 ;
-(void)_setShouldUseExtendedRelease:(BOOL)arg1 ;
-(unsigned long long)count;
-(oneway void)release;
-(id)retain;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(BOOL)_isDeallocating;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
@end

