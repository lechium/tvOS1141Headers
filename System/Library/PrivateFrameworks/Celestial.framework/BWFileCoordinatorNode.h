/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSArray, FigCaptureRecordingSettings, BWNodeInput;

@interface BWFileCoordinatorNode : BWNode {

	NSArray* _stagingQueues;
	FigCaptureRecordingSettings* _settings;
	long long _currSettingsID;
	int _recordingState;
	BWNodeInput* _masterInput;
	SCD_Struct_BW2 _inputOffset;
	SCD_Struct_BW2 _lastMasterPTS;
	SCD_Struct_BW2 _lastMasterDuration;
	SCD_Struct_BW2 _lastMasterEndingPTS;
	SCD_Struct_BW2 _masterStartingPTS;
	SCD_Struct_BW2 _largestStagedSupportingAudioVideoStagedPTS;
	SCD_Struct_BW2 _largestMetadataPTS;
	SCD_Struct_BW2 _masterStoppingPTS;
	SCD_Struct_BW2 _stopRecordingPTS;
	BOOL _sendFlushMarkerWhenStopping;
	BOOL _haveSeenAudioWhenStarting;
	BOOL _lowLatencyCanTransitionEarlyToRecording;
	BOOL _lowLatencyCanTossExtraVideoWhenStopping;
	BOOL _firstAudioHasBeenProcessed;
	int _terminationErrorCode;
	OpaqueCMBlockBufferRef _emptyMetadataSampleData;
	const opaqueCMFormatDescription* _formatDescriptionsForInputs;
	OpaqueFigSimpleMutexRef _stateMutex;
	unsigned long long _numInputs;
	unsigned long long _numOutputs;
	unsigned long long _numVideoInputs;
	unsigned long long _numAudioInputs;
	unsigned long long _numMetadataInputs;
	unsigned long long _numActionOnlyOutputs;
	unsigned long long _masterInputIndex;
	BOOL _lowLatencyModeEnabled;
	BOOL _flagsLastFrameForVideoCompressor;

}
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)recordingTerminated:(long long)arg1 ;
-(BOOL)updateStopPTS:(SCD_Struct_BW2)arg1 previousStopPTS:(SCD_Struct_BW2*)arg2 ;
-(int)startRecordingWithSettings:(id)arg1 stopAtPTS:(SCD_Struct_BW2)arg2 ;
-(void)cancelStartRecordingWithSettings:(id)arg1 ;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 numberOfActionOnlyOutputs:(unsigned long long)arg4 allowLowLatencyWhenPossible:(BOOL)arg5 ;
-(void)setFlagsLastFrameForVideoCompressor:(BOOL)arg1 ;
-(void)stopRecordingWithErrorCode:(int)arg1 ;
-(void)_finishStoppingOrPausing:(BOOL)arg1 withErrorCode:(int)arg2 ;
-(void)_stopRecordingWithErrorCode:(int)arg1 ;
-(void)_doStartingToRecordWithSBuf:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(SCD_Struct_BW2)arg3 ;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 toOutput:(id)arg3 ;
-(opaqueCMSampleBufferRef)_copyFirstValidLowLatencyAudioBuffer:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(SCD_Struct_BW2)arg3 ;
-(void)_doStoppingOrPausingWithSBuf:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(SCD_Struct_BW2)arg3 ;
-(void)_prepareToStartRecordingWithSettings:(id)arg1 ;
-(void)_prepareToPauseOrStopRecording;
-(void)_prepareToResumeRecording;
-(void)_emitMarkerBufferForFileWriterAction:(CFStringRef)arg1 withPTS:(SCD_Struct_BW2)arg2 settings:(id)arg3 errorCode:(int)arg4 ;
-(opaqueCMSampleBufferRef)_createEmptyMetadataSBufWithPTS:(SCD_Struct_BW2)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_emitStagedBufferForIndex:(unsigned long long)arg1 ;
-(BOOL)flagsLastFrameForVideoCompressor;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(void)_printStagingEvent:(opaqueCMSampleBufferRef)arg1 forNodeInputIndex:(unsigned long long)arg2 ;
-(void)pauseRecording;
-(void)resumeRecording;
-(id)init;
-(void)dealloc;
-(id)nodeType;
@end

