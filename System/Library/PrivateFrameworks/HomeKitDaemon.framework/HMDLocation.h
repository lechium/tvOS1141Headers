/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class HMFMessageDispatcher, NSObject, CLLocationManager, NSHashTable, NSMapTable, NSMutableArray, HMFTimer, NSDate, NSString;

@interface HMDLocation : HMFObject <HMFTimerDelegate, CLLocationManagerDelegate> {

	BOOL _beingConfigured;
	int _locationAuthorized;
	int _authStatus;
	HMFMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	CLLocationManager* _locationManager;
	NSHashTable* _locationCallbacks;
	NSMapTable* _regionStateCallbacks;
	NSMapTable* _pendingRegionMonitoringRequests;
	NSMapTable* _pendingRegionCallbacks;
	unsigned long long _extractStatus;
	NSMutableArray* _batchLocations;
	HMFTimer* _extractBatchLocationsTimer;
	NSDate* _lastFetchBatchLocationsTime;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;                 //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                       //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) int authStatus;                                            //@synthesize authStatus=_authStatus - In the implementation block
@property (assign,nonatomic) int locationAuthorized;                                    //@synthesize locationAuthorized=_locationAuthorized - In the implementation block
@property (nonatomic,retain) NSHashTable * locationCallbacks;                           //@synthesize locationCallbacks=_locationCallbacks - In the implementation block
@property (nonatomic,retain) NSMapTable * regionStateCallbacks;                         //@synthesize regionStateCallbacks=_regionStateCallbacks - In the implementation block
@property (nonatomic,retain) NSMapTable * pendingRegionMonitoringRequests;              //@synthesize pendingRegionMonitoringRequests=_pendingRegionMonitoringRequests - In the implementation block
@property (nonatomic,retain) NSMapTable * pendingRegionCallbacks;                       //@synthesize pendingRegionCallbacks=_pendingRegionCallbacks - In the implementation block
@property (assign,nonatomic) BOOL beingConfigured;                                      //@synthesize beingConfigured=_beingConfigured - In the implementation block
@property (assign,nonatomic) unsigned long long extractStatus;                          //@synthesize extractStatus=_extractStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * batchLocations;                           //@synthesize batchLocations=_batchLocations - In the implementation block
@property (nonatomic,retain) HMFTimer * extractBatchLocationsTimer;                     //@synthesize extractBatchLocationsTimer=_extractBatchLocationsTimer - In the implementation block
@property (nonatomic,retain) NSDate * lastFetchBatchLocationsTime;                      //@synthesize lastFetchBatchLocationsTime=_lastFetchBatchLocationsTime - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                      //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)sunriseTimeForLocation:(id)arg1 ;
+(id)sunsetTimeForLocation:(id)arg1 ;
+(id)nextSunriseTimeForLocation:(id)arg1 date:(id)arg2 ;
+(id)nextSunsetTimeForLocation:(id)arg1 date:(id)arg2 ;
+(BOOL)isValidLocation:(id)arg1 ;
+(id)_getAlmanacWithLocation:(id)arg1 ;
+(id)findEvent:(id)arg1 withGeo:(id)arg2 ;
+(id)_getAlmanacWithLocation:(id)arg1 date:(id)arg2 ;
+(void)timeZoneForCLLocationAsync:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(int)authStatus;
-(void)setAuthStatus:(int)arg1 ;
-(void)registerForRegionUpdate:(id)arg1 withDelegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deregisterForRegionUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)locationAuthorized;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(CLLocationManager *)locationManager;
-(NSDate *)lastFetchBatchLocationsTime;
-(void)_extractLocationWithDelegate:(id)arg1 extractStatus:(unsigned long long)arg2 ;
-(unsigned long long)extractStatus;
-(NSHashTable *)locationCallbacks;
-(void)setExtractBatchLocationsTimer:(HMFTimer *)arg1 ;
-(void)setExtractStatus:(unsigned long long)arg1 ;
-(NSMutableArray *)batchLocations;
-(void)_updateWithLocation:(id)arg1 ;
-(void)_callDelegate:(id)arg1 withLocation:(id)arg2 ;
-(HMFTimer *)extractBatchLocationsTimer;
-(void)setLastFetchBatchLocationsTime:(NSDate *)arg1 ;
-(BOOL)beingConfigured;
-(NSMapTable *)pendingRegionMonitoringRequests;
-(NSMapTable *)regionStateCallbacks;
-(void)stopExtractingBatchLocations;
-(void)setLocationAuthorized:(int)arg1 ;
-(id)_delegateforRegion:(id)arg1 ;
-(NSMapTable *)pendingRegionCallbacks;
-(void)_updateRegionState:(long long)arg1 forRegion:(id)arg2 ;
-(void)setBeingConfigured:(BOOL)arg1 ;
-(void)_updateExitForRegion:(id)arg1 ;
-(void)_updateEntryForRegion:(id)arg1 ;
-(void)_updateWithLocationAutorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)startExtractingBatchLocationsWithDelegate:(id)arg1 ;
-(void)startExtractingSingleLocationWithDelegate:(id)arg1 ;
-(void)beingConfigured:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)setLocationCallbacks:(NSHashTable *)arg1 ;
-(void)setRegionStateCallbacks:(NSMapTable *)arg1 ;
-(void)setPendingRegionMonitoringRequests:(NSMapTable *)arg1 ;
-(void)setPendingRegionCallbacks:(NSMapTable *)arg1 ;
-(void)setBatchLocations:(NSMutableArray *)arg1 ;
@end

