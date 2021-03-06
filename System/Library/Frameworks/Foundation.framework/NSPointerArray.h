/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (assign) unsigned long long count; 
+(id)pointerArrayWithPointerFunctions:(id)arg1 ;
+(id)pointerArrayWithStrongObjects;
+(id)pointerArrayWithWeakObjects;
+(id)strongObjectsPointerArray;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)pointerArrayWithOptions:(unsigned long long)arg1 ;
+(id)weakObjectsPointerArray;
-(id)initWithPointerFunctions:(id)arg1 ;
-(NSPointerFunctions *)pointerFunctions;
-(void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2 ;
-(id)mutableArray;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)compact;
-(id)allObjects;
-(void)setCount:(unsigned long long)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
@end

