/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DKObjectFromMOCache : NSObject {

	NSMutableDictionary* _cache;

}

@property (retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
-(id)init;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 type:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 type:(id)arg3 ;
-(id)objectForKey:(id)arg1 type:(id)arg2 setIfMissingWithBlock:(/*^block*/id)arg3 ;
-(void)removeObjectForKey:(id)arg1 type:(id)arg2 ;
-(id)deduplicateString:(id)arg1 ;
@end
