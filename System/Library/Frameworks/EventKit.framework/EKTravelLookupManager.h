/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKTravelLookupManager : NSObject
+(id)defaultManager;
+(void)geocodeAddress:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(void)estimateGeolocationFromHistoricDevicePositionAtLocation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_travelTimeWithStartCoordinate:(id)arg1 endCoordinate:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)findCoordinatesForLocation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteTypes:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)_updateLocation:(id)arg1 withMapItem:(id)arg2 forRoute:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
@end

