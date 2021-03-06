/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOSource.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>
#import <libobjc.A.dylib/VCAudioIOControllerDelegate.h>

@protocol VCAudioIOControllerControl;
@class VCAudioIOControllerClient, NSString;

@interface VCAudioIO : NSObject <VCAudioIOSource, VCAudioIOSink, VCAudioIOControllerDelegate> {

	id<VCAudioIOControllerControl> _audioIOController;
	VCAudioIOControllerClient* _controllerClient;
	id _delegate;
	AudioStreamBasicDescription _clientFormat;
	unsigned _clientSamplesPerFrame;
	BOOL _isMuted;
	BOOL _isGKVoiceChat;
	AudioStreamBasicDescription _controllerFormat;
	unsigned _controllerSamplesPerFrame;
	BOOL _isControllerAudioFormatValid;
	BOOL _isControllerReset;
	BOOL _isConverterNeeded;
	opaque_pthread_mutex_t _stateMutex;
	unsigned _state;
	/*^block*/id _startCompletionBlock;
	/*^block*/id _stopCompletionBlock;
	VCAudioEndpointData* _sourceData;
	VCAudioEndpointData* _sinkData;

}

@property (nonatomic,readonly) AudioStreamBasicDescription clientAudioFormat;                        //@synthesize clientFormat=_clientFormat - In the implementation block
@property (nonatomic,readonly) unsigned samplesPerFrame;                                             //@synthesize clientSamplesPerFrame=_clientSamplesPerFrame - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                              //@synthesize isMuted=_isMuted - In the implementation block
@property (assign,getter=isInputMeteringEnabled,nonatomic) BOOL inputMeteringEnabled; 
@property (assign,getter=isOutputMeteringEnabled,nonatomic) BOOL outputMeteringEnabled; 
@property (assign,nonatomic) BOOL isGKVoiceChat;                                                     //@synthesize isGKVoiceChat=_isGKVoiceChat - In the implementation block
@property (assign,nonatomic) unsigned char direction; 
@property (nonatomic,readonly) unsigned state;                                                       //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerForDeviceRole:(int)arg1 ;
-(id)delegate;
-(void)dealloc;
-(unsigned)state;
-(void)setDirection:(unsigned char)arg1 ;
-(unsigned char)direction;
-(void)setMuted:(BOOL)arg1 ;
-(void)forceCleanup;
-(BOOL)isInputMeteringEnabled;
-(void)setFarEndVersionInfo:(VoiceIOFarEndVersionInfo*)arg1 ;
-(unsigned)samplesPerFrame;
-(void)didSuspend;
-(void)didResume;
-(void)didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)controllerFormatChanged:(AudioStreamBasicDescription)arg1 ;
-(void)didStop:(BOOL)arg1 error:(id)arg2 ;
-(void)pullAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(BOOL)isGKVoiceChat;
-(void)setIsGKVoiceChat:(BOOL)arg1 ;
-(BOOL)isOutputMeteringEnabled;
-(void)setOutputMeteringEnabled:(BOOL)arg1 ;
-(void)setInputMeteringEnabled:(BOOL)arg1 ;
-(void)setRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2 ;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithOperatingMode:(int)arg1 deviceRole:(int)arg2 direction:(unsigned char)arg3 allowAudioRecording:(BOOL)arg4 delegate:(id)arg5 clientPid:(int)arg6 ;
-(BOOL)reconfigureWithOperatingMode:(int)arg1 deviceRole:(int)arg2 direction:(unsigned char)arg3 allowAudioRecording:(BOOL)arg4 ;
-(void)setClientFormat:(AudioStreamBasicDescription)arg1 ;
-(AudioStreamBasicDescription)clientAudioFormat;
-(void)releaseConverters;
-(BOOL)createConverterForSource:(BOOL)arg1 error:(id*)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMute:(BOOL)arg1 ;
-(BOOL)isMuted;
@end

