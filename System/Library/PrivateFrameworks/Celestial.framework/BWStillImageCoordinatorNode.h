/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWFigVideoCaptureStreamStillImageCaptureDelegate.h>
#import <libobjc.A.dylib/BWStillImageProcessingStatusDelegate.h>

@protocol BWStillImageCaptureStatusDelegate, OS_dispatch_queue, OS_dispatch_group;
@class BWFigVideoCaptureDevice, BWNodeInput, NSDictionary, BWNodeOutput, NSMutableArray, NSObject, FigStateMachine, NSMutableDictionary, FigCaptureStillImageSettings, BWStillImageCaptureSettings, NSArray, NSString;

@interface BWStillImageCoordinatorNode : BWNode <BWFigVideoCaptureStreamStillImageCaptureDelegate, BWStillImageProcessingStatusDelegate> {

	BOOL _active;
	BWFigVideoCaptureDevice* _captureDevice;
	BWNodeInput* _defaultInput;
	BWNodeInput* _telephotoInput;
	BWNodeInput* _infraredInput;
	NSDictionary* _portTypeToInput;
	NSDictionary* _inputIndexToPortType;
	BWNodeOutput* _defaultOutput;
	BWNodeOutput* _hdrOutput;
	BWNodeOutput* _sisOutput;
	BWNodeOutput* _defaultTelephotoOutput;
	BWNodeOutput* _infraredOutput;
	BOOL _hdrSupported;
	BOOL _sisSupported;
	BOOL _oisSupported;
	id<BWStillImageCaptureStatusDelegate> _stillImageCaptureStatusDelegate;
	BOOL _stillImageGraphSupportsMultipleInflightCaptures;
	BOOL _alwaysRequestsPreBracketedEV0;
	BOOL _usesHDRPreBracketFrameForErrorRecovery;
	NSMutableArray* _requestQueue;
	os_unfair_lock_s _requestQueueLock;
	int _captureRequestCount;
	int _prepareRequestCount;
	NSObject*<OS_dispatch_queue> _stillImageDispatchQueue;
	NSObject*<OS_dispatch_group> _stillImageDispatchGroup;
	FigStateMachine* _stateMachine;
	NSMutableDictionary* _receivedImagesOrErrorsForRequestByPortType;
	int _clientExpectedImagesOrErrorsForRequest;
	int _clientReceivedImagesOrErrorsForRequest;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	int _captureType;
	unsigned long long _captureFlags;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	NSArray* _currentResolvedPhotoManifest;
	unsigned _firedDelegateCallbackFlags;
	BOOL _receivedQuadraHighResError;

}

@property (nonatomic,readonly) BWNodeOutput * defaultOutput;                                                     //@synthesize defaultOutput=_defaultOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * hdrOutput;                                                         //@synthesize hdrOutput=_hdrOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sisOutput;                                                         //@synthesize sisOutput=_sisOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * defaultTelephotoOutput;                                            //@synthesize defaultTelephotoOutput=_defaultTelephotoOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * infraredOutput;                                                    //@synthesize infraredOutput=_infraredOutput - In the implementation block
@property (assign,nonatomic) id<BWStillImageCaptureStatusDelegate> stillImageCaptureStatusDelegate;              //@synthesize stillImageCaptureStatusDelegate=_stillImageCaptureStatusDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)_stateMachine;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)nodeDidCaptureStillImage:(id)arg1 ;
-(void)node:(id)arg1 didSelectReferenceFrameBracketedCaptureSequenceNumber:(id)arg2 pts:(SCD_Struct_BW2)arg3 ;
-(id)inputForPortType:(id)arg1 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(int)captureStillImageNowWithSettings:(id)arg1 ;
-(void)clientReceivedPayloadForSettings:(id)arg1 status:(int)arg2 clientIsMidStillImageGraph:(BOOL)arg3 ;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1 ;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(int)worstCaseMaxBracketedCaptureBufferCountForPreparedSettings:(id)arg1 ;
-(void)setStillImageCaptureStatusDelegate:(id<BWStillImageCaptureStatusDelegate>)arg1 ;
-(void)willStopGraph:(BOOL)arg1 ;
-(id)initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 hdrSupported:(BOOL)arg3 sisSupported:(BOOL)arg4 oisSupported:(BOOL)arg5 shareOutputForSingleStillSISAndOIS:(BOOL)arg6 shareOutputsForSingleStillsAndHDR:(BOOL)arg7 ;
-(void)setStillImageGraphSupportsMultipleInflightCaptures:(BOOL)arg1 ;
-(void)setUsesHDRPreBracketFrameForErrorRecovery:(BOOL)arg1 ;
-(BWNodeOutput *)defaultOutput;
-(BWNodeOutput *)defaultTelephotoOutput;
-(BWNodeOutput *)infraredOutput;
-(BWNodeOutput *)hdrOutput;
-(BWNodeOutput *)sisOutput;
-(int)initiateStillImageCaptureNowWithSettings:(id)arg1 ;
-(int)prepareStillImageCaptureNowWithSettings:(id)arg1 ;
-(void)captureStreamWillBeginStillImageCapture:(id)arg1 ;
-(void)captureStream:(id)arg1 stillImageCaptureError:(int)arg2 ;
-(void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW2)arg2 ;
-(void)captureStream:(id)arg1 didCompleteStillImageCaptureWithPTS:(SCD_Struct_BW2)arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3 ;
-(id)_initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 hdrSupported:(BOOL)arg3 sisSupported:(BOOL)arg4 oisSupported:(BOOL)arg5 shareOutputForSingleStillSISAndOIS:(BOOL)arg6 shareOutputsForSingleStillsAndHDR:(BOOL)arg7 allStateTransitionsHandler:(/*^block*/id)arg8 ;
-(void)_setupStateMachineWithAllStateTransitionsHandler:(/*^block*/id)arg1 ;
-(int)_enqueueRequestWithSettings:(id)arg1 serviceRequestsIfNecessary:(BOOL)arg2 ;
-(id)_outputForNodeInput:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 metadataDictionary:(id)arg3 ;
-(void)_flushStillImageRequestWithError:(int)arg1 ;
-(void)_addExifOrientationToSampleBufferMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_completeRequestWithStatus:(int)arg1 ;
-(void)_willCaptureStillImage;
-(void)_didResolveStillImagePTS:(SCD_Struct_BW2)arg1 isPreBracketedEV0:(BOOL)arg2 ;
-(void)_didCaptureStillImage;
-(void)_didResolveReferenceFrameBracketedCaptureSequenceNumber:(id)arg1 ;
-(void)_serviceNextRequest;
-(void)_beginPreparingCapture;
-(void)_beginInitiatingCapture;
-(void)_beginResolvingCapture;
-(void)_beginCapture;
-(void)_unpackNextRequest;
-(void)_configureCurrentCaptureRequestStateForFigCaptureStillImageSettings;
-(int)_captureTypeForSettings:(id)arg1 frameStatistics:(SCD_Struct_BW26*)arg2 captureFlags:(unsigned long long*)arg3 ;
-(id)_clientBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW26*)arg1 stillImageSettings:(id)arg2 ;
-(id)_resolvePhotoManifest;
-(void)_willBeginCapture;
-(id)_outputForMultiframeStereoFusionCaptureWithNodeInput:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 metadataDictionary:(id)arg3 ;
-(BOOL)stillImageGraphSupportsMultipleInflightCaptures;
-(BOOL)usesHDRPreBracketFrameForErrorRecovery;
-(id)_stillImageDispatchQueue;
-(id<BWStillImageCaptureStatusDelegate>)stillImageCaptureStatusDelegate;
-(void)dealloc;
-(id)nodeType;
@end
