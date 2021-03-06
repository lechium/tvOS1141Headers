/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>
#import <libobjc.A.dylib/BWPreviewTimeMachineProcessor.h>

@protocol OS_dispatch_queue;
@class BWFigVideoCaptureDevice, NSObject, NSMutableArray, FigStateMachine, FigCaptureImageMotionDetector, NSString;

@interface BWPreviewTimeMachineSinkNode : BWSinkNode <BWPreviewTimeMachineProcessor> {

	BWFigVideoCaptureDevice* _device;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSMutableArray* _timeMachineFrames;
	os_unfair_lock_s _timeMachineLock;
	int _timeMachineCapacity;
	FigStateMachine* _stateMachine;
	SCD_Struct_BW10 _requestedSuspendPTSRange;
	/*^block*/id _suspendCompletionHandler;
	FigCaptureImageMotionDetector* _motionDetector;
	BOOL _faceMotionDetectionEnabled;
	BOOL _haveFrameRotationAndMirror;
	int _frameRotationDegrees;
	BOOL _frameMirrored;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SCD_Struct_BW9 frameDimensions; 
+(void)initialize;
-(void)_setupStateMachine;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(BOOL)_computeMotionDetectionFaceRectForSampleBuffers:(id)arg1 faceMotionRectOut:(CGRect*)arg2 ;
-(SCD_Struct_BW9)frameDimensions;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)suspendWithPTSRange:(SCD_Struct_BW10)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCaptureDevice:(id)arg1 processingQueuePriority:(unsigned)arg2 timeMachineCapacity:(int)arg3 ;
-(void)dealloc;
-(void)resume;
@end

