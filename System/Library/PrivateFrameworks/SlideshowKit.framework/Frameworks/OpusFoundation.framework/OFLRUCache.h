/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSMutableDictionary, NSRecursiveLock;

@interface OFLRUCache : NSObject {

	unsigned long long _numberOfSlots;
	NSMutableDictionary* _cacheDictionary;
	NSRecursiveLock* _recursiveLock;
	OFLRUCacheList* _leastRecentUsedList;
	NSMutableDictionary* _leastRecentUsedDictionary;

}

@property (assign,nonatomic) unsigned long long numberOfSlots;                   //@synthesize numberOfSlots=_numberOfSlots - In the implementation block
@property (nonatomic,readonly) unsigned long long currentUsedSlots; 
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(void)setNumberOfSlots:(unsigned long long)arg1 ;
-(void)_removeListElement:(OFLRUCacheListElement*)arg1 ;
-(void)_promoteListElement:(OFLRUCacheListElement*)arg1 ;
-(unsigned long long)currentUsedSlots;
-(void)evictSlots:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSlots;
-(BOOL)writeToURL:(id)arg1 ;
-(BOOL)loadFromURL:(id)arg1 ;
@end

