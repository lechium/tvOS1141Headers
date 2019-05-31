/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileCacheReserved, NSObject;

@interface GEOTileCache : NSObject {

	GEOTileCacheReserved* _reserved;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;

}

@property (readonly) unsigned long long currentCount; 
@property (readonly) unsigned long long currentCost; 
@property (assign) unsigned long long maxCapacity; 
@property (assign) unsigned long long maxCost; 
-(id)tileForKey:(const GEOTileKey*)arg1 ;
-(void)setTile:(id)arg1 forKey:(const GEOTileKey*)arg2 cost:(unsigned long long)arg3 ;
-(void)removeTilesMatchingPredicate:(/*^block*/id)arg1 ;
-(BOOL)containsKey:(const GEOTileKey*)arg1 cost:(unsigned long long*)arg2 ;
-(void)setMaxCost:(unsigned long long)arg1 ;
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(void)_evictWithMaxCost:(unsigned long long)arg1 maxCapacity:(unsigned long long)arg2 ;
-(unsigned long long)maxCapacity;
-(unsigned long long)maxCost;
-(void)setNullForKey:(const GEOTileKey*)arg1 ;
-(void)_removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTilesWithKeys:(id)arg1 ;
-(void)enumerate:(/*^block*/id)arg1 ;
-(void)_enteredBackground:(id)arg1 ;
-(unsigned long long)currentCount;
-(unsigned long long)currentCost;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)description;
-(void)_receivedMemoryNotification;
-(id)_description;
@end
