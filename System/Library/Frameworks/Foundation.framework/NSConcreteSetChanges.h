/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSetChanges.h>

@class NSSet, NSMutableArray;

@interface NSConcreteSetChanges : NSSetChanges {

	NSSet* _backing;
	NSMutableArray* _changes;
	BOOL _backingIsMutable;

}
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addChange:(id)arg1 ;
-(void)filterObjectsWithTest:(/*^block*/id)arg1 ;
-(void)transformObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)_fault;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)removeAllObjects;
-(id)description;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)changeCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectEnumerator;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)minusSet:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(void)_willChange;
-(void)setSet:(id)arg1 ;
@end

