/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SFSearchRequest, NSDictionary, NSURL, NSArray, NSString;

@interface SFSpeechRecognitionRequest : NSObject {

	BOOL _forceOfflineRecognition;
	BOOL _shouldReportPartialResults;
	BOOL _detectMultipleUtterances;
	double _maxiumRecognitionDuration;
	_SFSearchRequest* _searchRequest;
	NSDictionary* _voiceTriggerEventInfo;
	NSDictionary* _recognitionOverrides;
	NSURL* _modelOverrideURL;
	long long _taskHint;
	NSArray* _contextualStrings;
	NSString* _interactionIdentifier;

}

@property (setter=_setSearchRequest:,getter=_searchRequest,nonatomic,retain) _SFSearchRequest * _searchRequest;                                        //@synthesize searchRequest=_searchRequest - In the implementation block
@property (assign,nonatomic) BOOL detectMultipleUtterances;                                                                                            //@synthesize detectMultipleUtterances=_detectMultipleUtterances - In the implementation block
@property (assign,setter=_setForceOfflineRecognition:,getter=_forceOfflineRecognition,nonatomic) BOOL _forceOfflineRecognition;                        //@synthesize forceOfflineRecognition=_forceOfflineRecognition - In the implementation block
@property (setter=_setVoiceTriggerEventInfo:,getter=_voiceTriggerEventInfo,nonatomic,retain) NSDictionary * _voiceTriggerEventInfo;                    //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (assign,setter=_setMaximumRecognitionDuration:,getter=_maximumRecognitionDuration,nonatomic) double _maxiumRecognitionDuration;              //@synthesize maxiumRecognitionDuration=_maxiumRecognitionDuration - In the implementation block
@property (setter=_setRecognitionOverrides:,getter=_recognitionOverrides,nonatomic,retain) NSDictionary * _recognitionOverrides;                       //@synthesize recognitionOverrides=_recognitionOverrides - In the implementation block
@property (setter=_setModelOverrideURL:,getter=_modelOverrideURL,nonatomic,retain) NSURL * _modelOverrideURL;                                          //@synthesize modelOverrideURL=_modelOverrideURL - In the implementation block
@property (assign,nonatomic) long long taskHint;                                                                                                       //@synthesize taskHint=_taskHint - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPartialResults;                                                                                          //@synthesize shouldReportPartialResults=_shouldReportPartialResults - In the implementation block
@property (nonatomic,copy) NSArray * contextualStrings;                                                                                                //@synthesize contextualStrings=_contextualStrings - In the implementation block
@property (nonatomic,copy) NSString * interactionIdentifier;                                                                                           //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
-(id)init;
-(NSString *)interactionIdentifier;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(long long)taskHint;
-(void)setTaskHint:(long long)arg1 ;
-(id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 ;
-(BOOL)shouldReportPartialResults;
-(_SFSearchRequest *)_searchRequest;
-(BOOL)automaticallyEndpoint;
-(void)_setSearchRequests:(id)arg1 ;
-(id)_searchRequests;
-(BOOL)_powerMeteringAvailable;
-(id)_dictationOptionsWithTaskHint:(long long)arg1 requestIdentifier:(id)arg2 ;
-(id)_speechRequestOptions;
-(double)_maximumRecognitionDuration;
-(void)_setMaximumRecognitionDuration:(double)arg1 ;
-(BOOL)_forceOfflineRecognition;
-(void)_setForceOfflineRecognition:(BOOL)arg1 ;
-(void)_setSearchRequest:(id)arg1 ;
-(NSDictionary *)_voiceTriggerEventInfo;
-(void)_setVoiceTriggerEventInfo:(id)arg1 ;
-(NSDictionary *)_recognitionOverrides;
-(void)_setRecognitionOverrides:(id)arg1 ;
-(NSURL *)_modelOverrideURL;
-(void)_setModelOverrideURL:(id)arg1 ;
-(void)setShouldReportPartialResults:(BOOL)arg1 ;
-(NSArray *)contextualStrings;
-(void)setContextualStrings:(NSArray *)arg1 ;
-(BOOL)detectMultipleUtterances;
-(void)setDetectMultipleUtterances:(BOOL)arg1 ;
@end

