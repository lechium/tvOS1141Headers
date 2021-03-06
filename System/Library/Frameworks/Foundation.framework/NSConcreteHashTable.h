/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>

@interface NSConcreteHashTable : NSHashTable {

	NSSlice* slice;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long options;
	unsigned long long mutations;

}
-(id)pointerFunctions;
-(void*)getItem:(const void*)arg1 ;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2 ;
-(void)insertItem:(const void*)arg1 ;
-(void)raiseCountUnderflowException;
-(unsigned long long)rehashAround:(unsigned long long)arg1 ;
-(void)assign:(unsigned long long)arg1 key:(const void*)arg2 ;
-(void)hashGrow;
-(void)rehash;
-(id)init;
-(id)copy;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(Class)classForCoder;
-(id)allObjects;
-(id)objectEnumerator;
-(void)removeItem:(const void*)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)removeAllItems;
@end

