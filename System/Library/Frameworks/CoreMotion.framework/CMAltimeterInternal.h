/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMAltimeterInternal : NSObject {

	Dispatcher* fFilteredPressureDispatcher;
	/*^block*/id fRelativeAltimeterHandler;
	NSOperationQueue* fRelativeAltimeterQueue;
	Sample fBaseAltimeterSample;
	float fBarometricBaseAltitude;
	BOOL fBaselineReceived;
	float fMostRecentFilteredPressure;
	deque<float, std::__1::allocator<float> >* fPressureSamples;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSObject*<OS_dispatch_queue> fAppQueue;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fHandler;
	/*^block*/id fSignificantElevationSampleHandler;
	double fElevationAscendedOffset;
	double fElevationDescendedOffset;
	BOOL fStopSignificantElevationUpdates;
	double fFilteredElevationOffset;
	BOOL fStopRelativeAltitudeUpdates;

}
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_startElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopElevationUpdates;
-(void)_startSignificantElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopSignificantElevationUpdates;
-(void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_startRelativeAltitudeUpdates;
-(void)_stopRelativeAltitudeUpdates;
-(id)init;
-(void)dealloc;
-(void)_teardown;
@end

