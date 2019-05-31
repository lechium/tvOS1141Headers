/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOPlaceDataCacheRegister : NSObject {

	NSMutableDictionary* _caches;
	NSMutableDictionary* _freeable;
	BOOL _hasLoadedAllCaches;

}
+(id)diskCachePath;
+(void)setDiskCachePath:(id)arg1 ;
-(void)deletePhoneNumberMapping;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(void)shrinkBySize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)evictAllEntries;
-(id)cacheForProviderID:(int)arg1 ;
-(id)allCacheEntries;
-(id)allCaches;
-(id)_allExistingProviderIDs;
-(void)_loadAllCachesIfNecessary;
-(id)_cacheKeysPerSize;
-(id)init;
@end

