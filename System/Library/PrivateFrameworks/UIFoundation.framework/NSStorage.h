/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@interface NSStorage : NSObject {

	id _storage;
	long long _hintCapacity;
	unsigned long long _reserved[4];

}
+(void)initialize;
-(void*)elementAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(id)description;
-(unsigned long long)capacity;
-(id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)insertElements:(void*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)removeElementAtIndex:(unsigned long long)arg1 ;
-(void)setHintCapacity:(unsigned long long)arg1 ;
-(unsigned long long)hintCapacity;
-(void)replaceElementAtIndex:(unsigned long long)arg1 withElement:(void*)arg2 ;
-(void)removeElementsInRange:(NSRange)arg1 ;
-(void*)pointerToElement:(unsigned long long)arg1 directlyAccessibleElements:(NSRange*)arg2 ;
-(void)insertElement:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(void)enumerateElementsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)elementSize;
-(void)addElement:(void*)arg1 ;
@end

