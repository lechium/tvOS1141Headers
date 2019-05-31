/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSMutableDictionary;

@interface PLCache : NSObject {

	NSMutableDictionary* _cacheEntries;
	long long _countLimit;
	long long _currentCount;
	long long _totalCostLimit;
	long long _currentCost;
	opaque_pthread_mutex_t _lock;
	entryList* _lru;

}
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCountLimit:(long long)arg1 totalCostLimit:(long long)arg2 ;
@end

