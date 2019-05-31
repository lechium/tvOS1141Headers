/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng, GEOMapItemStorage, GEOWaypointTyped;

@interface GEOComposedWaypoint : PBCodable <NSCopying> {

	GEOLatLng* _latLng;
	GEOMapItemStorage* _mapItemStorage;
	GEOWaypointTyped* _waypoint;

}

@property (nonatomic,readonly) BOOL hasWaypoint; 
@property (nonatomic,retain) GEOWaypointTyped * waypoint;                     //@synthesize waypoint=_waypoint - In the implementation block
@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng;                              //@synthesize latLng=_latLng - In the implementation block
+(void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 clientResolvedCompletionHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 networkActivityHandler:(/*^block*/id)arg7 ;
+(id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForID:(unsigned long long)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 networkActivityHandler:(/*^block*/id)arg4 ;
+(id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(SCD_Struct_GE29)arg2 isCurrentLocation:(BOOL)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(/*^block*/id)arg6 networkActivityHandler:(/*^block*/id)arg7 ;
+(id)composedWaypointForWaypointTyped:(id)arg1 completionHandler:(/*^block*/id)arg2 networkActivityHandler:(/*^block*/id)arg3 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOLatLng *)latLng;
-(id)timezone;
-(id)geoMapItem;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(BOOL)hasMapItemStorage;
-(BOOL)hasLatLng;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithLocation:(id)arg1 isCurrentLocation:(BOOL)arg2 ;
-(GEOWaypointTyped *)waypoint;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(BOOL)isCurrentLocation;
-(BOOL)hasWaypoint;
-(void)setWaypoint:(GEOWaypointTyped *)arg1 ;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(BOOL)isLocationWaypointType;
-(double)distanceToWaypoint:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
