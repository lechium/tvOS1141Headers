/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTileRequesterDelegate, OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileRequest, NSObject, NSThread, NSString, GEOResourceManifestManager;

@interface GEOTileRequester : NSObject {

	GEOTileRequest* _tileRequest;
	id<GEOTileRequesterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _context;
	NSThread* _thread;
	BOOL _requireWiFi;
	NSString* _deviceCountry;
	NSString* _deviceRegion;

}

@property (nonatomic,readonly) GEOResourceManifestManager * resourceManifestManager; 
@property (nonatomic,readonly) GEOTileRequest * tileRequest;                                      //@synthesize tileRequest=_tileRequest - In the implementation block
@property (nonatomic,__weak,readonly) id<GEOTileRequesterDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                        //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id context;                                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * deviceCountry;                                            //@synthesize deviceCountry=_deviceCountry - In the implementation block
@property (nonatomic,retain) NSString * deviceRegion;                                             //@synthesize deviceRegion=_deviceRegion - In the implementation block
+(unsigned char)tileProviderIdentifier;
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE64*)newExpiringTilesets;
+(BOOL)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(GEOTileRequest *)tileRequest;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(void)tearDown;
-(NSString *)deviceCountry;
-(void)setDeviceCountry:(NSString *)arg1 ;
-(NSString *)deviceRegion;
-(void)setDeviceRegion:(NSString *)arg1 ;
-(GEOResourceManifestManager *)resourceManifestManager;
-(void)cancel;
-(id<GEOTileRequesterDelegate>)delegate;
-(id)context;
-(void)start;
-(void)setContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end
