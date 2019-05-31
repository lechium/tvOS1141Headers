/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueMutableSet.h>

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {

	NSKeyValueGetter* _valueGetter;
	NSKeyValueSetter* _valueSetter;
	BOOL _treatNilValuesLikeEmptySets;
	char _padding[3];

}
+(SCD_Struct_NS30*)_proxyNonGCPoolPointer;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(void)_raiseNilValueExceptionWithSelector:(SEL)arg1 ;
-(id)_setValueWithSelector:(SEL)arg1 ;
-(id)_createMutableSetValueWithSelector:(SEL)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(id)objectEnumerator;
-(void)minusSet:(id)arg1 ;
-(id)member:(id)arg1 ;
-(void)setSet:(id)arg1 ;
@end
