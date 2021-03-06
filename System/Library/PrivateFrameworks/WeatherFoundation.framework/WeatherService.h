/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <WeatherFoundation/WeatherServiceProtocol.h>
#import <WeatherFoundation/WeatherServicePrivateProtocol.h>

@protocol OS_dispatch_queue;
@class WFTemperatureUnitProvider, NSMutableArray, NSObject, WFWeatherStoreService, WFQueryDispatcher, NSMutableDictionary, NSArray, NSString;

@interface WeatherService : NSObject <WeatherServiceProtocol, WeatherServicePrivateProtocol> {

	WFTemperatureUnitProvider* _temperatureUnitProvider;
	NSMutableArray* _clients;
	NSObject*<OS_dispatch_queue> _clientQueue;
	WFWeatherStoreService* _internalService;
	WFQueryDispatcher* _queryDispatcher;
	NSMutableDictionary* _clientDictionary;

}

@property (retain) WFWeatherStoreService * internalService;                                    //@synthesize internalService=_internalService - In the implementation block
@property (retain) WFQueryDispatcher * queryDispatcher;                                        //@synthesize queryDispatcher=_queryDispatcher - In the implementation block
@property (retain) NSMutableDictionary * clientDictionary;                                     //@synthesize clientDictionary=_clientDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * clients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) WFTemperatureUnitProvider * temperatureUnitProvider;              //@synthesize temperatureUnitProvider=_temperatureUnitProvider - In the implementation block
+(id)sharedService;
-(id)initWithStore:(id)arg1 ;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4 ;
-(void)setInternalService:(WFWeatherStoreService *)arg1 ;
-(void)setQueryDispatcher:(WFQueryDispatcher *)arg1 ;
-(void)setClientDictionary:(NSMutableDictionary *)arg1 ;
-(void)setTemperatureUnitProvider:(WFTemperatureUnitProvider *)arg1 ;
-(WFWeatherStoreService *)internalService;
-(void)queryDispatcherDidReceiveResponse:(id)arg1 identifier:(id)arg2 ;
-(WFQueryDispatcher *)queryDispatcher;
-(WFTemperatureUnitProvider *)temperatureUnitProvider;
-(id)clientForPid:(int)arg1 ;
-(void)forecastForLocation:(id)arg1 atDate:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4 ;
-(void)hourlyForecastForLocation:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)dailyForecastForLocation:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)locationForString:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)locationForCoordinate:(CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2 ;
-(void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)temperatureUnitWithIdentifier:(id)arg1 ;
-(void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2 ;
-(void)reachabilityConfigurationForIdentifier:(id)arg1 ;
-(void)invalidateCache:(id)arg1 ;
-(void)addClient:(id)arg1 forPid:(int)arg2 ;
-(void)performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 ;
-(NSArray *)clients;
-(NSMutableDictionary *)clientDictionary;
@end

