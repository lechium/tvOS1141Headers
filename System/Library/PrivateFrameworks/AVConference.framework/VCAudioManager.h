/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOControllerControl.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>
#import <libobjc.A.dylib/VCAudioIOSource.h>
#import <libobjc.A.dylib/VCAudioSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, VCAudioSessionMediaProperties, VCAudioUnitProperties, NSDictionary, NSMutableArray, NSMutableSet, AVAudioDevice, NSString;

@interface VCAudioManager : NSObject <VCAudioIOControllerControl, VCAudioIOSink, VCAudioIOSource, VCAudioSessionDelegate> {

	tagHANDLE* _hAUIO;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AudioEventQueue_tRef _sourceEventQueue;
	AudioEventQueue_tRef _sinkEventQueue;
	unsigned _state;
	VCAudioSessionMediaProperties* _currentAudioSessionMediaProperties;
	VCAudioUnitProperties* _currentAudioUnitProperties;
	NSDictionary* _vpOperatingModeToAudioSessionMediaFormatMapping;
	AudioEventQueue_tRef _eventQueue;
	NSMutableArray* _allClients;
	NSMutableArray* _suspendedClients;
	NSMutableArray* _startingIOClients;
	NSMutableSet* _sourceClients;
	NSMutableSet* _sinkClients;
	AVAudioDevice* _inputDevice;
	AVAudioDevice* _outputDevice;
	opaqueVCAudioBufferListRef _sourceBuffer;
	BOOL _isGKVoiceChat;
	BOOL _isMicrophoneMuted;
	BOOL _isInDaemon;
	BOOL _isInputMeteringEnabled;
	BOOL _isOutputMeteringEnabled;
	BOOL _isSpeakerPhoneEnabled;
	BOOL _isSuspended;

}

@property (nonatomic,retain) VCAudioSessionMediaProperties * currentAudioSessionMediaProperties;              //@synthesize currentAudioSessionMediaProperties=_currentAudioSessionMediaProperties - In the implementation block
@property (nonatomic,retain) VCAudioUnitProperties * currentAudioUnitProperties;                              //@synthesize currentAudioUnitProperties=_currentAudioUnitProperties - In the implementation block
@property (nonatomic,retain) AVAudioDevice * currentInputDevice;                                              //@synthesize inputDevice=_inputDevice - In the implementation block
@property (nonatomic,retain) AVAudioDevice * currentOutputDevice;                                             //@synthesize outputDevice=_outputDevice - In the implementation block
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted;                                   //@synthesize isMicrophoneMuted=_isMicrophoneMuted - In the implementation block
@property (assign,nonatomic) BOOL isInDaemon;                                                                 //@synthesize isInDaemon=_isInDaemon - In the implementation block
@property (assign,nonatomic) BOOL isGKVoiceChat;                                                              //@synthesize isGKVoiceChat=_isGKVoiceChat - In the implementation block
@property (assign,getter=isSpeakerPhoneEnabled,nonatomic) BOOL speakerPhoneEnabled;                           //@synthesize isSpeakerPhoneEnabled=_isSpeakerPhoneEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * vpOperatingModeToAudioSessionMediaFormatMapping; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)addClient:(id)arg1 ;
-(BOOL)removeClient:(id)arg1 ;
-(unsigned)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2 ;
-(NSDictionary *)vpOperatingModeToAudioSessionMediaFormatMapping;
-(BOOL)getAudioSessionMediaProperties:(id)arg1 forVPOperatingMode:(unsigned)arg2 ;
-(void)removeSinkClient:(id)arg1 ;
-(void)removeSourceClient:(id)arg1 ;
-(void)setupIODevicesForAUIO:(tagHANDLE*)arg1 ;
-(void)setInputMetering;
-(void)setOutputMetering;
-(BOOL)startAudioSessionWithProperties:(id)arg1 ;
-(void)_resumeSuspendedClients;
-(void)stopAudioSession;
-(void)_suspendAllClients;
-(BOOL)shouldResetAudioSessionWithProperties:(id)arg1 ;
-(void)resetAudioSessionWithProperties:(id)arg1 ;
-(void)setCurrentAudioUnitProperties:(VCAudioUnitProperties *)arg1 ;
-(void)addSinkClient:(id)arg1 ;
-(void)addSourceClient:(id)arg1 ;
-(BOOL)startAUIOWithProperties:(id)arg1 ;
-(void)stopAUIO;
-(void)flushEventQueue:(AudioEventQueue_tRef)arg1 ;
-(void)stateRunningToSessionStarted;
-(BOOL)shouldResetAudioUnitWithProperties:(id)arg1 ;
-(void)resetAUIOWithProperties:(id)arg1 ;
-(void)_cleanupDeadClients;
-(id)newAudioUnitPropertiesWithClient:(id)arg1 ;
-(id)newAudioSessionMediaPropertiesWithClient:(id)arg1 ;
-(BOOL)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(BOOL)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(BOOL)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(BOOL)updateStateWithAudioIOClient:(id)arg1 ;
-(void)setCurrentAudioSessionMediaProperties:(VCAudioSessionMediaProperties *)arg1 ;
-(void)stopClient:(id)arg1 ;
-(void)processEventQueue:(AudioEventQueue_tRef)arg1 clientList:(id)arg2 ;
-(void)pullAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(VCAudioSessionMediaProperties *)currentAudioSessionMediaProperties;
-(void)didSessionPause;
-(void)didSessionResume;
-(void)startClient:(id)arg1 ;
-(void)updateClient:(id)arg1 ;
-(void)refreshInputMetering;
-(void)refreshOutputMetering;
-(void)didSessionStop;
-(void)didSessionEnd;
-(void)getPreferredFormat:(AudioStreamBasicDescription*)arg1 blockSize:(double*)arg2 vpOperatingMode:(unsigned*)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(AudioStreamBasicDescription*)arg6 ;
-(void)setCurrentInputDevice:(AVAudioDevice *)arg1 ;
-(void)setCurrentOutputDevice:(AVAudioDevice *)arg1 ;
-(BOOL)isGKVoiceChat;
-(void)setIsGKVoiceChat:(BOOL)arg1 ;
-(AVAudioDevice *)currentInputDevice;
-(AVAudioDevice *)currentOutputDevice;
-(BOOL)isSpeakerPhoneEnabled;
-(void)setSpeakerPhoneEnabled:(BOOL)arg1 ;
-(VCAudioUnitProperties *)currentAudioUnitProperties;
-(BOOL)isInDaemon;
-(void)setIsInDaemon:(BOOL)arg1 ;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(BOOL)isMicrophoneMuted;
@end

