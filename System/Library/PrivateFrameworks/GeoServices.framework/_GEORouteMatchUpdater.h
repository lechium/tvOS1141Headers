/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTransitRouteMatcher, GEOComposedRoute, GEOMapFeatureAccess, GEOMotionContext;

@interface _GEORouteMatchUpdater : NSObject {

	GEOTransitRouteMatcher* _routeMatcher;
	GEOComposedRoute* _route;
	GEOMapFeatureAccess* _mapFeatureAccess;
	GEOMotionContext* _motionContext;
	double _stationRadius;

}
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(id)initWithTransitRouteMatcher:(id)arg1 ;
-(BOOL)_isLocation:(id)arg1 nearStop:(id)arg2 ;
-(BOOL)_isLocation:(id)arg1 nearStation:(id)arg2 ;
-(BOOL)_isLocation:(id)arg1 nearTransitPoint:(SCD_Struct_GE29)arg2 transitID:(unsigned long long)arg3 featureSize:(double)arg4 ;
-(double)_stationRadiusForStation:(id)arg1 accessPoint:(id)arg2 adjacentWalkingLegCoordinate:(SCD_Struct_GE29)arg3 ;
-(unsigned long long)priority;
@end

