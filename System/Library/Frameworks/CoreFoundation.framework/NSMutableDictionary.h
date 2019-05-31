/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@interface NSMutableDictionary : NSDictionary
+(id)dictionaryWithSharedKeySet:(id)arg1 ;
+(id)dictionaryWithCapacity:(unsigned long long)arg1 ;
-(void)_web_setInt:(int)arg1 forKey:(id)arg2 ;
-(void)_web_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)__addObject:(id)arg1 forKey:(id)arg2 ;
-(void)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(void)__setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_mutate;
-(void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)addObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)removeEntriesInDictionary:(id)arg1 ;
-(void)removeEntriesPassingTest:(/*^block*/id)arg1 ;
-(void)removeKeysForObject:(id)arg1 ;
-(void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)replaceObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)setEntriesFromDictionary:(id)arg1 ;
-(void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)setObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)invert;
@end

