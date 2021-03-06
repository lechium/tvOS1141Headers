/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, RTFingerprintManager, RTLocationManager, RTMapServiceManager, RTWiFiManager, NSMutableArray;

@interface RTCurrentMapItemProvider : NSObject {

	BOOL _registeredForNotifications;
	NSObject*<OS_dispatch_queue> _queue;
	RTFingerprintManager* _fingerprintManager;
	RTLocationManager* _locationManager;
	RTMapServiceManager* _mapServiceManager;
	RTWiFiManager* _wifiManager;
	NSMutableArray* _futureLocations;
	NSMutableArray* _futureAccessPoints;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RTFingerprintManager * fingerprintManager;              //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,readonly) RTLocationManager * locationManager;                    //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) RTMapServiceManager * mapServiceManager;                //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,readonly) RTWiFiManager * wifiManager;                            //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * futureLocations;                       //@synthesize futureLocations=_futureLocations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * futureAccessPoints;                    //@synthesize futureAccessPoints=_futureAccessPoints - In the implementation block
@property (assign,nonatomic) BOOL registeredForNotifications;                          //@synthesize registeredForNotifications=_registeredForNotifications - In the implementation block
+(id)convertMapItemsToPredictedLocationsOfInterest:(id)arg1 ;
+(void)logMapItems:(id)arg1 prestring:(id)arg2 ;
+(void)logPredictedLocationsOfInterest:(id)arg1 prestring:(id)arg2 ;
-(id)init;
-(BOOL)registeredForNotifications;
-(void)setRegisteredForNotifications:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(RTLocationManager *)locationManager;
-(void)shutdown;
-(void)_shutdown;
-(RTFingerprintManager *)fingerprintManager;
-(RTMapServiceManager *)mapServiceManager;
-(RTWiFiManager *)wifiManager;
-(void)onLocationNotification:(id)arg1 ;
-(id)initWithFingerprintManager:(id)arg1 locationManager:(id)arg2 mapServiceManager:(id)arg3 wifiManager:(id)arg4 ;
-(id)_filterLocations:(id)arg1 ;
-(id)_filterWiFiAccessPoints:(id)arg1 ;
-(id)_pickMinimumHorizontalUncertainty:(id)arg1 ;
-(void)_fetchCurrentMapItemsLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchCurrentMapItemsLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)_performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)onWiFiScanNotification:(id)arg1 ;
-(NSMutableArray *)futureLocations;
-(NSMutableArray *)futureAccessPoints;
@end

