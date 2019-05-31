/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, NSObject, FigCaptureAutoFocusPositionSensorCalibrationContext, FigCaptureAutoFocusCalibrationContext, FigCaptureAPSSphereInteractionCalibrationContext, FigCaptureSphereCalibrationContext, FigCaptureSphereEndStopCalibrationContext;

@interface FigCaptureCalibrationMonitor : NSObject {

	NSMutableArray* _streamCalibrationInformation;
	NSObject*<OS_dispatch_queue> _calibrationRunQueue;
	OpaqueFigSimpleMutexRef _calibrationPipelineMutex;
	BOOL _calibrationShouldAbort;
	os_unfair_lock_s _calibrationLock;
	SCD_Struct_Fi61 _coreMotionMagneticField;
	double _coreMotionMagneticFieldMagnitude;
	int _magneticFieldAttempt;
	int _magneticFieldAccuracyAttemptCount;
	SCD_Struct_Fi62 _magneticFieldMagnitudeTiers[1];
	FigCaptureAutoFocusPositionSensorCalibrationContext* _autoFocusPositionSensorCalibrationContext;
	FigCaptureAutoFocusCalibrationContext* _autoFocusCalibrationContext;
	FigCaptureAPSSphereInteractionCalibrationContext* _apsSphereInteractionCalibrationContext;
	FigCaptureSphereCalibrationContext* _sphereCalibrationContext;
	FigCaptureSphereEndStopCalibrationContext* _sphereEndStopCalibrationContext;

}
+(void)initializeSharedInstance;
+(id)sharedInstance;
+(void)initialize;
-(void)_setupDuetTriggersAndScheduling;
-(void)_attemptToRunCalibrationForCalibrationContext:(id)arg1 deviceType:(int)arg2 devicePosition:(int)arg3 disableHistoryChecking:(BOOL)arg4 resultsBlock:(/*^block*/id)arg5 ;
-(void)_setupCalibrationForContext:(id)arg1 ;
-(void)_setupActivityAndTriggers:(const char*)arg1 interval:(int)arg2 batteryLevel:(int)arg3 calibrationBlock:(/*^block*/id)arg4 isRepeating:(BOOL)arg5 ;
-(void)_setCalibrationShouldAbort:(BOOL)arg1 ;
-(void)_notifyOfDeviceMotion;
-(double)_getMagneticThresholdFromAttempt;
-(id)_runAndCreateDictionaryForCalibrationContext:(id)arg1 deviceType:(int)arg2 devicePosition:(int)arg3 errors:(unsigned*)arg4 ;
-(BOOL)_calibrationShouldAbort;
-(void)_setupRepeatingCalibrationScheduling:(id)arg1 withCalibrationBlock:(/*^block*/id)arg2 ;
-(id)runAutoFocusPositionSensorCalibrationAndGetResultsForDeviceType:(int)arg1 devicePosition:(int)arg2 ;
-(id)autoFocusPositionSensorCalibrationData;
-(id)autoFocusCalibrationData;
-(id)apsSphereInteractionCalibrationData;
-(id)sphereCalibrationData;
-(id)sphereEndStopCalibrationData;
-(id)init;
@end

