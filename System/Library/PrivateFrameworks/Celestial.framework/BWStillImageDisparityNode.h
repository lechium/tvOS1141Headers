/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSDictionary, FigDisparityGenerator, BWNodeInput, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWNodeError, BWVisionLandmarkDetector, NSObject;

@interface BWStillImageDisparityNode : BWNode {

	NSDictionary* _telephotoSensorIDDictionary;
	NSDictionary* _cameraInfoByPortType;
	FigDisparityGenerator* _disparityGenerator;
	BWNodeInput* _wideInput;
	BWNodeInput* _telephotoInput;
	BWNodeInput* _bravoHDRInput;
	unsigned long long _disparityMapWidth;
	unsigned long long _disparityMapHeight;
	opaqueCMFormatDescriptionRef _disparityFormatDescription;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	int _expectedDisparityCount;
	int _deliveredDisparityCount;
	int _processingMode;
	opaqueCMSampleBufferRef _teleSbuf;
	opaqueCMSampleBufferRef _wideSbuf;
	opaqueCMSampleBufferRef _teleHDRSbuf;
	BOOL _emitWideFrame;
	BWNodeError* _errorForWide;
	BWNodeError* _errorForTele;
	BOOL _shouldComputeDisparityWhenCalibrationFails;
	BOOL _attachesFaceLandmarksToOutputSampleBuffer;
	BWVisionLandmarkDetector* _landmarkDetector;
	NSObject*<OS_dispatch_queue> _landmarkDetectionQueue;
	NSObject*<OS_dispatch_group> _pendingLandmarkDetectionGroup;

}

@property (assign,nonatomic) BOOL attachesFaceLandmarksToOutputSampleBuffer;              //@synthesize attachesFaceLandmarksToOutputSampleBuffer=_attachesFaceLandmarksToOutputSampleBuffer - In the implementation block
@property (nonatomic,readonly) BWNodeInput * wideInput;                                   //@synthesize wideInput=_wideInput - In the implementation block
@property (nonatomic,readonly) BWNodeInput * telephotoInput;                              //@synthesize telephotoInput=_telephotoInput - In the implementation block
@property (nonatomic,readonly) BWNodeInput * bravoHDRInput;                               //@synthesize bravoHDRInput=_bravoHDRInput - In the implementation block
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(void)prewarmLandmarkDetectorIfNecessary;
-(BWNodeInput *)wideInput;
-(BWNodeInput *)telephotoInput;
-(id)initWithTelephotoSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4 ;
-(void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)arg1 ;
-(void)setAttachesFaceLandmarksToOutputSampleBuffer:(BOOL)arg1 ;
-(BWNodeInput *)bravoHDRInput;
-(void)_finishPendingProcessing;
-(int)_loadAndConfigureDisparityGenerator;
-(BOOL)attachesFaceLandmarksToOutputSampleBuffer;
-(void)_resolveProcessingMode;
-(void)_handleError:(int)arg1 duringProcessingOfSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromInput:(id)arg3 ;
-(void)_processBuffersForDisparityAndLandmarksIfNecessary;
-(id)processorOptionsDictionary;
-(void)_asynchronouslyComputeLandmarksForTeleBuffer:(opaqueCMSampleBufferRef)arg1 attachToOutputBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_computeDisparityForTeleBuffer:(opaqueCMSampleBufferRef)arg1 wideBuffer:(opaqueCMSampleBufferRef)arg2 attachToOutputBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(int)_OSStatusFromDisparityResult:(int)arg1 ;
-(BOOL)shouldComputeDisparityWhenCalibrationFails;
-(void)dealloc;
-(id)nodeType;
@end
