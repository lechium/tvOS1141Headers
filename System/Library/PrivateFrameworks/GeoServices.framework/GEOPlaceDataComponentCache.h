/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOPlaceDataDBWriter, GEOPlaceDataDBReader, NSObject;

@interface GEOPlaceDataComponentCache : NSObject {

	GEOPlaceDataDBWriter* _writer;
	GEOPlaceDataDBReader* _reader;
	NSObject*<OS_dispatch_queue> _queue;
	int _resultProviderID;

}

@property (nonatomic,readonly) int resultProviderID;              //@synthesize resultProviderID=_resultProviderID - In the implementation block
-(int)resultProviderID;
-(void)deletePhoneNumberMapping;
-(void)flushPendingWritesSynchronously;
-(void)shrinkBySize:(unsigned long long)arg1 callback:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)evictAllEntries;
-(void)evictPlaceDataForKey:(GEOTileKey)arg1 ;
-(void)setPlaceData:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(id)placeDataForKey:(GEOTileKey)arg1 ;
-(id)allCacheEntries;
-(unsigned long long)muidForPhoneNumber:(unsigned long long)arg1 ;
-(void)evictPlaceDataForMUID:(unsigned long long)arg1 ;
-(id)placeDataForMUID:(unsigned long long)arg1 ;
-(id)initWithPath:(id)arg1 resultProviderID:(int)arg2 ;
-(id)componentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(void)rememberComponent:(id)arg1 forKey:(_GEOPlaceDataComponentKey)arg2 ;
-(void)forgetComponentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(void)componentsForKeys:(id)arg1 finished:(/*^block*/id)arg2 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(id)placeDataForPhoneNumber:(unsigned long long)arg1 ;
-(void)rememberPlaceData:(id)arg1 ;
-(void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2 ;
-(id)init;
@end

