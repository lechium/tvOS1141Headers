/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNMapsAppStateMonitorObserver.h>
#import <libobjc.A.dylib/MNNavigationSessionObserver.h>

@class MNMapsAppStateMonitor, MNHybridLocationProvider, NSString;

@interface MNTransitLocationCoordinator : NSObject <MNMapsAppStateMonitorObserver, MNNavigationSessionObserver> {

	MNMapsAppStateMonitor* _appStateMonitor;
	MNHybridLocationProvider* _locationProvider;

}

@property (nonatomic,readonly) MNHybridLocationProvider * locationProvider;              //@synthesize locationProvider=_locationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_start;
-(void)_stop;
-(void)navigationSessionDidStart:(id)arg1 ;
-(void)navigationSessionDidStop:(id)arg1 ;
-(void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 ;
-(void)mapsAppStateMonitor:(id)arg1 didChangeToState:(unsigned)arg2 ;
-(id)initWithHybridLocationProvider:(id)arg1 ;
-(void)_scheduleXPCActivityAfter:(double)arg1 duration:(double)arg2 ;
-(void)_invalidateXPCActivities;
-(MNHybridLocationProvider *)locationProvider;
@end
