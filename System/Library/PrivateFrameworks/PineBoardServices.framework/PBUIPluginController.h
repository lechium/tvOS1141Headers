/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBUIPluginHost;
@interface PBUIPluginController : NSObject {

	BOOL _listening;
	id<PBUIPluginHost> _pluginHost;
	long long _mode;

}

@property (assign,getter=isListening,nonatomic) BOOL listening;              //@synthesize listening=_listening - In the implementation block
@property (nonatomic,readonly) id<PBUIPluginHost> pluginHost;                //@synthesize pluginHost=_pluginHost - In the implementation block
@property (nonatomic,readonly) long long mode;                               //@synthesize mode=_mode - In the implementation block
+(void)pbUIPluginDidLoad;
-(long long)mode;
-(BOOL)isListening;
-(void)setNextVoiceRecognitionAudioInputPaths:(id)arg1 ;
-(void)setNextAssistantRecognitionStrings:(id)arg1 ;
-(void)setListening:(BOOL)arg1 ;
-(void)startSiriWithContext:(id)arg1 ;
-(void)stopSiriWithContext:(id)arg1 ;
-(id)initWithPluginHost:(id)arg1 ;
-(void)_startSiriWithContext:(id)arg1 ;
-(void)_stopSiriWithContext:(id)arg1 ;
-(void)prepareViewServices;
-(void)activateSiriWithContext:(id)arg1 ;
-(id<PBUIPluginHost>)pluginHost;
@end

