/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSArray;

@interface BWAudioSourceNode : BWSourceNode {

	opaqueCMSessionRef _CMSession;
	CFStringRef _CMSessionAudioMode;
	BOOL _configuresSession;
	BOOL _doEndInterruption;
	BOOL _useDecoupledIO;
	BOOL _isAppAudioSession;
	BOOL _didBeginInterruption;
	SCD_Struct_BW34 _clientAuditToken;
	BOOL _clientAuditTokenIsValid;
	int _clientPID;
	OpaqueCMClockRef _clock;
	opaqueCMFormatDescriptionRef _formatDescription;
	unsigned _pullDuration;
	OpaqueAudioComponentInstanceRef _audioUnit;
	unsigned _auSubType;
	opaqueCMSimpleQueueRef _renderProcErrorQueue;
	opaqueCMSimpleQueueRef _inactiveBuffersQueue;
	opaqueCMSimpleQueueRef _activeBuffersQueue;
	SCD_Struct_BW2 _nextExpectedSampleTime;
	BOOL _supportsNonStandardAudioSourceSampleRates;
	NSObject*<OS_dispatch_queue> _generateSamplesDispatchQueue;
	BOOL _streamStarted;
	BOOL _streamInterrupted;
	BOOL _levelMeteringEnabled;
	int _audioLevelUnits;
	SCD_Struct_BW2 _latencyOffset;
	BOOL _selectsMicForFrontCamera;
	NSObject*<OS_dispatch_source> _silenceTimer;
	long long _auRenderCount;
	long long _silenceFramesGeneratedSinceLastAURenderProc;
	TimestampedAudioBufferList* _currentSilenceBuffer;

}

@property (nonatomic,readonly) NSArray * audioLevels; 
@property (nonatomic,readonly) BOOL didBeginInterruption;              //@synthesize didBeginInterruption=_didBeginInterruption - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                         //@synthesize streamInterrupted=_streamInterrupted - In the implementation block
+(id)audioSourceNodeWithAttributes:(id)arg1 clock:(OpaqueCMClockRef)arg2 CMSession:(opaqueCMSessionRef)arg3 configureSession:(BOOL)arg4 doEndInterruption:(BOOL)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned)arg8 ;
+(double)_desiredSampleRate;
+(void)initialize;
-(id)nodeSubType;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(BOOL)didBeginInterruption;
-(void)setLevelMeteringEnabled:(BOOL)arg1 ;
-(void)setCMSessionAudioMode:(CFStringRef)arg1 ;
-(void)setSelectsMicForFrontCamera:(BOOL)arg1 ;
-(NSArray *)audioLevels;
-(int)_setCMSessionAudioModeAndSelectMic:(BOOL*)arg1 ;
-(BOOL)_cmSessionBooleanPropertyIsTrue:(CFStringRef)arg1 ;
-(int)_updatePullFormatDescription;
-(int)_setCMSessionPropertyWithKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)_generateSilenceIfNeeded;
-(id)_initWithAttributes:(id)arg1 clock:(OpaqueCMClockRef)arg2 CMSession:(opaqueCMSessionRef)arg3 configureSession:(BOOL)arg4 doEndInterruption:(BOOL)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned)arg8 ;
-(int)_setupAudioUnit;
-(int)_deactivateCMSessionIfNecessary:(BOOL*)arg1 ;
-(int)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1 didCallDoNotNotifyOtherSessionsOnNextInactive:(BOOL*)arg2 ;
-(int)_selectMicForAudioRoute:(id)arg1 ;
-(int)_getAudioDevicePullFrames:(unsigned*)arg1 ;
-(int)_generatePullBuffers;
-(unsigned)_audioCombinedLatency;
-(opaqueCMSampleBufferRef)_createSampleBufferForTimestampedAudioBufferList:(TimestampedAudioBufferList*)arg1 ;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(BOOL)levelMeteringEnabled;
-(BOOL)selectsMicForFrontCamera;
-(CFStringRef)CMSessionAudioMode;
-(void)_generateSamples;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(OpaqueCMClockRef)clock;
-(void)dealloc;
@end

