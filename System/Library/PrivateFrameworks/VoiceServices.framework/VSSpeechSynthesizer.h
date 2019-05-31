/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/VSSpeechConnectionDelegate.h>

@protocol OS_dispatch_queue, VSSpeechSynthesizerDelegate;
@class VSKeepAlive, NSString, NSObject, VSSpeechConnection;

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate> {

	VSKeepAlive* _keepAlive;
	VSKeepAlive* _inactiveKeepAlive;
	NSString* _clientBundleIdentifier;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	VSSpeechConnection* _xpcConnection;
	NSString* _identifier;
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned delegateStartWithRequest : 1;
		unsigned delegateFinishWithRequest : 1;
		unsigned delegateFinishWithPhonemesSpokenWithRequest : 1;
		unsigned delegateSuccessWithInstrumentMetrics : 1;
		unsigned delegatePauseWithRequest : 1;
		unsigned delegateContinueWithRequest : 1;
		unsigned delegateWillSpeakWithRequest : 1;
		unsigned willUseInput : 1;
	}  _synthesizerFlags;
	BOOL _useCustomVoice;
	float _rate;
	float _pitch;
	float _volume;
	id<VSSpeechSynthesizerDelegate> _delegate;
	NSString* _voice;
	NSString* _language;
	long long _footprint;
	long long _voiceType;
	long long _gender;

}

@property (nonatomic,copy) NSString * language;                                            //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) long long footprint;                                          //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) BOOL useCustomVoice;                                          //@synthesize useCustomVoice=_useCustomVoice - In the implementation block
@property (assign,nonatomic) long long voiceType;                                          //@synthesize voiceType=_voiceType - In the implementation block
@property (assign,nonatomic) long long gender;                                             //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechSynthesizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float rate;                                                   //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                                  //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) float volume;                                                 //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSString * voice;                                             //@synthesize voice=_voice - In the implementation block
+(id)sharedInstance;
+(id)errorWithReason:(id)arg1 ;
+(void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
+(BOOL)isSystemSpeaking;
+(id)validateRequest:(id)arg1 ;
+(id)validatePresynthesizedAudioRequest:(id)arg1 ;
+(void)setLogToFile:(BOOL)arg1 ;
+(void)getLogToFile:(/*^block*/id)arg1 ;
+(id)availableVoicesForLanguageCode:(id)arg1 ;
+(id)availableLanguageCodes;
+(id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2 ;
+(void)getLocalVoiceAssets:(/*^block*/id)arg1 ;
+(void)getLocalVoiceResources:(/*^block*/id)arg1 ;
+(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
+(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
+(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5 ;
+(BOOL)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2 ;
+(void)getAllVoiceAssets:(/*^block*/id)arg1 ;
+(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
+(id)availableVoices;
-(id)speechString;
-(void)setPitch:(float)arg1 ;
-(float)pitch;
-(id)init;
-(id<VSSpeechSynthesizerDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechSynthesizerDelegate>)arg1 ;
-(void)dealloc;
-(void)_setDelegate:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)voice;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(long long)voiceType;
-(void)setVoiceType:(long long)arg1 ;
-(BOOL)stopSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2 ;
-(id)initForInputFeedback;
-(BOOL)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4 ;
-(BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id*)arg3 ;
-(BOOL)useCustomVoice;
-(void)setUseCustomVoice:(BOOL)arg1 ;
-(void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)isSystemSpeaking;
-(BOOL)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_stopSpeakingPresynthesizedAudioRequest:(id)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5 ;
-(void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 error:(id)arg4 ;
-(BOOL)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(void)setLogToFile:(BOOL)arg1 ;
-(void)getLogToFile:(/*^block*/id)arg1 ;
-(BOOL)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id*)arg5 error:(id*)arg6 ;
-(BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_continueSpeakingRequest:(id)arg1 withError:(id*)arg2 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4 ;
-(id)availableVoicesForLanguageCode:(id)arg1 ;
-(id)availableLanguageCodes;
-(id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2 ;
-(void)getTTSServerVoicesWithFilter:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)beginAudioPowerUpdateWithReply:(/*^block*/id)arg1 ;
-(void)endAudioPowerUpdate;
-(void)cleanUnusedAssets:(/*^block*/id)arg1 ;
-(void)getLocalVoiceAssets:(/*^block*/id)arg1 ;
-(void)getLocalVoiceResources:(/*^block*/id)arg1 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
-(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)connection:(id)arg1 speechRequestDidStart:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidPause:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidContinue:(id)arg2 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(NSRange)arg4 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didReceiveTimingInfo:(id)arg3 ;
-(void)connection:(id)arg1 synthesisRequest:(id)arg2 didFinishWithInstrumentMetrics:(id)arg3 error:(id)arg4 ;
-(void)connection:(id)arg1 presynthesizedAudioRequestDidStart:(id)arg2 ;
-(void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3 error:(id)arg4 ;
-(float)minimumRate;
-(BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)startSpeakingString:(id)arg1 request:(id*)arg2 error:(id*)arg3 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id*)arg3 error:(id*)arg4 ;
-(BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4 ;
-(BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3 ;
-(BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3 ;
-(BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2 ;
-(BOOL)continueSpeakingRequest:(id)arg1 withError:(id*)arg2 ;
-(void)useSharedAudioSession:(BOOL)arg1 ;
-(void)useAudioQueueFlags:(unsigned)arg1 ;
-(id)startSynthesizingString:(id)arg1 toFileURL:(id)arg2 shouldCache:(BOOL)arg3 request:(id*)arg4 ;
-(BOOL)startSpeakingString:(id)arg1 error:(id*)arg2 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)continueSpeakingWithError:(id*)arg1 ;
-(void)setFootprint:(long long)arg1 ;
-(BOOL)isSpeaking;
-(BOOL)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(void)setMaintainInactivePersistentConnection:(BOOL)arg1 ;
-(void)setMaintainPersistentConnection:(BOOL)arg1 ;
-(id)startSpeakingRequest:(id)arg1 ;
-(id)prewarmIfNeededWithRequest:(id)arg1 ;
-(void)setVoice:(NSString *)arg1 ;
-(long long)footprint;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(id)startSynthesizingRequest:(id)arg1 ;
-(float)maximumRate;
-(BOOL)prewarmIfNeeded;
-(void)useSpecificAudioSession:(unsigned)arg1 ;
-(BOOL)stopSpeakingPresynthesizedAudioSynchronously:(BOOL)arg1 error:(id*)arg2 ;
-(id)startSpeakingPresynthesizedAudioRequest:(id)arg1 ;
@end
