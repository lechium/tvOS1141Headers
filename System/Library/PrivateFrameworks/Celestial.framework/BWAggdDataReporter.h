/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSObject;

@interface BWAggdDataReporter : NSObject {

	NSObject*<OS_dispatch_queue> _aggdDispatchQueue;

}
+(id)sharedInstance;
+(void)initialize;
-(void)reportCalibrationStatisticsWithTime:(id)arg1 timeValue:(double)arg2 attemptsField:(id)arg3 attemptsValue:(long long)arg4 successField:(id)arg5 successValue:(long long)arg6 magneticFieldMagnitudeField:(id)arg7 magneticFieldMagnitudeValue:(double)arg8 ;
-(void)reportAPSSphereInteractionCalibrationForPosition:(int)arg1 residualErrorNeutral:(float)arg2 calibrationZHeightNeutral:(float)arg3 residualErrorMacro:(float)arg4 calibrationZHeightMacro:(float)arg5 calibrationStatus:(unsigned)arg6 isValid:(BOOL)arg7 ;
-(void)reportAutoFocusPositionSensorCalibrationForPosition:(int)arg1 iStopZEstimate:(int)arg2 eSensorOutput:(short)arg3 wSensorOutput:(short)arg4 gravityZ:(int)arg5 calibrationStatus:(unsigned)arg6 sensorTemp:(short)arg7 factoryCalibrationOffset:(int)arg8 successfulInfinityEndStopDelta:(int)arg9 currentInfinityEndStopDelta:(int)arg10 previousInfinityEndStopDelta:(int)arg11 currentAngleDelta:(int)arg12 previousAngleDelta:(int)arg13 deltaNeutralZFromNVM:(int)arg14 estimateSagZ:(int)arg15 combinedSensorOutput:(int)arg16 isValid:(BOOL)arg17 dataWasRejectedByHistory:(BOOL)arg18 ;
-(void)reportSphereCalibrationForPosition:(int)arg1 freqX:(float)arg2 deltaFreqX:(float)arg3 qX:(float)arg4 deltaQX:(float)arg5 gainX:(float)arg6 freqY:(float)arg7 deltaFreqY:(float)arg8 qY:(float)arg9 deltaQY:(float)arg10 gainY:(float)arg11 calibrationStatus:(unsigned)arg12 isValid:(BOOL)arg13 ;
-(void)reportCameraLaunchIconTouch:(int)arg1 ;
-(void)reportCameraLaunchWithoutPrewarm:(int)arg1 ;
-(void)reportCameraStreamingTimeInMilliseconds:(unsigned long long)arg1 deviceType:(int)arg2 devicePosition:(int)arg3 ;
-(void)reportPearlInfraredProjectorUptime:(unsigned long long)arg1 current:(int)arg2 pattern:(int)arg3 applicationID:(id)arg4 ;
-(void)reportAutoFocusPositionSensorMode:(int)arg1 portType:(id)arg2 ;
-(void)reportAutoFocusCalibrationForPosition:(int)arg1 freqZ:(float)arg2 deltaFreqZ:(float)arg3 qZ:(float)arg4 deltaQZ:(float)arg5 gainZ:(float)arg6 calibrationStatus:(unsigned)arg7 isValid:(BOOL)arg8 ;
-(id)_aggdCameraStreamingTimeStringFromDeviceType:(int)arg1 devicePosition:(int)arg2 ;
-(void)_incrementAggdScalarKey:(id)arg1 withValue:(long long)arg2 ;
-(id)_aggdPearlInfraredProjectorUptimeStringFromCurrent:(int)arg1 pattern:(int)arg2 applicationID:(id)arg3 ;
-(id)_aggdGNRProcessingStatusStringFromProcessingStatus:(int)arg1 ;
-(id)_aggdStereoFusionProcessingTypeStringForCaptureType:(int)arg1 isStereoFusionCapture:(BOOL)arg2 wideSubCaptureType:(int)arg3 teleSubCaptureType:(int)arg4 isOriginalImage:(BOOL)arg5 ;
-(id)_aggdStereoFusionProcessingStatusStringFromProcessingStatus:(int)arg1 ;
-(id)_aggdSDOFProcessingStatusStringFromProcessingStatus:(int)arg1 ;
-(id)_aggdStringForPrefix:(id)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 stillDuringVideo:(BOOL)arg5 frontCamera:(BOOL)arg6 ;
-(void)_pushValue:(double)arg1 aggdDistributionKey:(id)arg2 ;
-(void)_reportInitFailure;
-(void)_setAggdScalarKey:(id)arg1 withValue:(long long)arg2 ;
-(id)_captureTypeStringWithPrimaryCaptureType:(int)arg1 secondaryCaptureType:(int)arg2 ;
-(void)reportGNRSampleBufferProcessorProcessingStatus:(int)arg1 ;
-(void)reportStereoFusionProcessingTypeForCaptureType:(int)arg1 isStereoFusionCapture:(BOOL)arg2 wideSubCaptureType:(int)arg3 teleSubCaptureType:(int)arg4 isOriginalImage:(BOOL)arg5 ;
-(void)reportStereoFusionSampleBufferProcessorProcessingStatus:(int)arg1 ;
-(void)reportSDOFSampleBufferProcessorProcessingStatus:(int)arg1 ;
-(void)reportLuxLevel:(unsigned)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 stillDuringVideo:(BOOL)arg5 frontCamera:(BOOL)arg6 ;
-(void)reportZoomFactor:(float)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 stillDuringVideo:(BOOL)arg5 frontCamera:(BOOL)arg6 ;
-(void)reportNonCameraAppCaptureWithPrimaryCaptureType:(int)arg1 secondaryCaptureType:(int)arg2 captureFlags:(unsigned long long)arg3 stillDuringVideo:(BOOL)arg4 frontCamera:(BOOL)arg5 ;
-(void)reportCameraAppCaptureForNonCameraAppLoggingWithFrontCamera:(BOOL)arg1 ;
-(void)reportShutterLag:(SCD_Struct_BW2)arg1 primaryCaptureType:(int)arg2 secondaryCaptureType:(int)arg3 captureFlags:(unsigned long long)arg4 stillDuringVideo:(BOOL)arg5 frontCamera:(BOOL)arg6 ;
-(void)reportZeroShutterLagFirmwareTimeMachineInitFailure;
-(void)reportZeroShutterLagPreviewTimeMachineInitFailure;
-(void)reportZeroShutterLagSphereInitFailure;
-(void)reportZeroShutterLagMetadataInitFailureWithReasons:(unsigned)arg1 ;
-(void)reportZeroShutterLagInitSuccess;
-(void)reportZeroShutterLagReferenceFrameSelectionFailureForCaptureType:(int)arg1 ;
-(void)reportZeroShutterLagSuccess;
-(void)reportSphereEndStopCalibrationForPosition:(int)arg1 oisPositiveX:(int)arg2 oisNegativeX:(int)arg3 oisPositiveY:(int)arg4 oisNegativeY:(int)arg5 maxPositiveXDriftFromNVM:(int)arg6 maxNegativeXDriftFromNVM:(int)arg7 maxPositiveYDriftFromNVM:(int)arg8 maxNegativeYDriftFromNVM:(int)arg9 sphereStrokeX:(int)arg10 sphereStrokeY:(int)arg11 calibrationStatus:(unsigned)arg12 isValid:(BOOL)arg13 ;
-(id)init;
-(void)dealloc;
@end

