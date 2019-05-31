/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTAuthorizationManager.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface RTAuthorizationManager_Embedded : RTAuthorizationManager <CLLocationManagerDelegate> {

	CLLocationManager* _magicalMomentsLocationManager;
	BOOL _magicalMomentsLocationEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLocationServicesEnabled;
-(void)_setup;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithMetricManager:(id)arg1 platform:(id)arg2 userSessionMonitor:(id)arg3 ;
-(void)_fetchMagicalMomentsLocationUsageEnabled:(/*^block*/id)arg1 ;
-(void)_handleMagicalMomentsLocationAuthChange:(int)arg1 ;
@end
