/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;
@class NSObject;

@interface GEOZilchDecoder : GEOMapRequestManager {

	NSObject*<OS_dispatch_queue> _decoderQueue;
	NSObject*<OS_dispatch_queue> _requestQueue;
	mutex _lock;
	id<GEOMapAccessRestrictions> _mapAccessRestrictions;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> decoderQueue;                            //@synthesize decoderQueue=_decoderQueue - In the implementation block
@property (assign,nonatomic,__weak) id<GEOMapAccessRestrictions> mapAccessRestrictions;              //@synthesize mapAccessRestrictions=_mapAccessRestrictions - In the implementation block
+(BOOL)decodingSupported;
-(void)requestComplete:(id)arg1 ;
-(void)trackRequest:(id)arg1 ;
-(void)setMapAccessRestrictions:(id<GEOMapAccessRestrictions>)arg1 ;
-(id<GEOMapAccessRestrictions>)mapAccessRestrictions;
-(id)requestQueue;
-(void)setRequestQueue:(id)arg1 ;
-(id)decodeZilchMessage:(shared_ptr<zilch::Message>*)arg1 pathHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)decoderQueue;
-(id)init;
@end

