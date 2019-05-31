/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, AFBulletin, NSDictionary, SAGuidanceCheckForGuideUpdateContext, SASPronunciationContext, NSURL, NSNumber, AFRequestInfo, AFSpeechRequestOptions;

@interface AFUIRequestOptions : NSObject <NSCopying, NSSecureCoding> {

	long long _requestSource;
	BOOL _pronunciationRequest;
	BOOL _initialBringUp;
	BOOL _useAutomaticEndpointing;
	BOOL _useStreamingDictation;
	BOOL _acousticIdEnabled;
	BOOL _releaseAudioSessionOnRecordingCompletion;
	NSString* _activationDeviceIdentifier;
	AFBulletin* _bulletin;
	NSString* _appBundleIdentifier;
	NSDictionary* _messagesDirectActionContext;
	SAGuidanceCheckForGuideUpdateContext* _checkForGuideUpdateContext;
	long long _directActionEvent;
	NSString* _serverCommandId;
	SASPronunciationContext* _pronunciationContext;
	NSString* _text;
	NSURL* _speechFileURL;
	double _expectedTimestamp;
	double _timestamp;
	double _buttonDownTimestamp;
	NSNumber* _homeButtonUpFromBeep;
	NSDictionary* _continuityInfo;
	AFRequestInfo* _requestInfo;
	AFSpeechRequestOptions* _speechRequestOptions;

}

@property (assign,nonatomic) long long requestSource; 
@property (nonatomic,copy) NSString * activationDeviceIdentifier;                                          //@synthesize activationDeviceIdentifier=_activationDeviceIdentifier - In the implementation block
@property (nonatomic,retain) AFBulletin * bulletin;                                                        //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                                                 //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * messagesDirectActionContext;                                     //@synthesize messagesDirectActionContext=_messagesDirectActionContext - In the implementation block
@property (nonatomic,copy) SAGuidanceCheckForGuideUpdateContext * checkForGuideUpdateContext;              //@synthesize checkForGuideUpdateContext=_checkForGuideUpdateContext - In the implementation block
@property (assign,nonatomic) long long directActionEvent;                                                  //@synthesize directActionEvent=_directActionEvent - In the implementation block
@property (nonatomic,copy) NSString * serverCommandId;                                                     //@synthesize serverCommandId=_serverCommandId - In the implementation block
@property (assign,getter=isPronunciationRequest,nonatomic) BOOL pronunciationRequest;                      //@synthesize pronunciationRequest=_pronunciationRequest - In the implementation block
@property (nonatomic,retain) SASPronunciationContext * pronunciationContext;                               //@synthesize pronunciationContext=_pronunciationContext - In the implementation block
@property (nonatomic,copy) NSString * text;                                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSURL * speechFileURL;                                                          //@synthesize speechFileURL=_speechFileURL - In the implementation block
@property (assign,nonatomic) double expectedTimestamp;                                                     //@synthesize expectedTimestamp=_expectedTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double buttonDownTimestamp;                                                   //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
@property (getter=isForStark,nonatomic,readonly) BOOL forStark; 
@property (getter=isForSpeechRequest,nonatomic,readonly) BOOL forSpeechRequest; 
@property (assign,getter=isInitialBringUp,nonatomic) BOOL initialBringUp;                                  //@synthesize initialBringUp=_initialBringUp - In the implementation block
@property (assign,nonatomic) BOOL useAutomaticEndpointing;                                                 //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) BOOL useStreamingDictation;                                                   //@synthesize useStreamingDictation=_useStreamingDictation - In the implementation block
@property (nonatomic,retain) NSNumber * homeButtonUpFromBeep;                                              //@synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep - In the implementation block
@property (nonatomic,copy) NSDictionary * continuityInfo;                                                  //@synthesize continuityInfo=_continuityInfo - In the implementation block
@property (nonatomic,retain) AFRequestInfo * requestInfo;                                                  //@synthesize requestInfo=_requestInfo - In the implementation block
@property (nonatomic,retain) AFSpeechRequestOptions * speechRequestOptions;                                //@synthesize speechRequestOptions=_speechRequestOptions - In the implementation block
@property (assign,nonatomic) BOOL acousticIdEnabled;                                                       //@synthesize acousticIdEnabled=_acousticIdEnabled - In the implementation block
@property (assign,nonatomic) BOOL releaseAudioSessionOnRecordingCompletion;                                //@synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(long long)requestSource;
-(void)setRequestSource:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
-(void)setReleaseAudioSessionOnRecordingCompletion:(BOOL)arg1 ;
-(void)setUseStreamingDictation:(BOOL)arg1 ;
-(BOOL)useAutomaticEndpointing;
-(void)setActivationDeviceIdentifier:(NSString *)arg1 ;
-(SASPronunciationContext *)pronunciationContext;
-(SAGuidanceCheckForGuideUpdateContext *)checkForGuideUpdateContext;
-(NSString *)serverCommandId;
-(BOOL)releaseAudioSessionOnRecordingCompletion;
-(NSString *)activationDeviceIdentifier;
-(void)setServerCommandId:(NSString *)arg1 ;
-(void)setHomeButtonUpFromBeep:(NSNumber *)arg1 ;
-(void)setAcousticIdEnabled:(BOOL)arg1 ;
-(BOOL)useStreamingDictation;
-(BOOL)isInitialBringUp;
-(NSNumber *)homeButtonUpFromBeep;
-(BOOL)acousticIdEnabled;
-(void)setBulletin:(AFBulletin *)arg1 ;
-(AFBulletin *)bulletin;
-(NSDictionary *)messagesDirectActionContext;
-(AFRequestInfo *)requestInfo;
-(AFSpeechRequestOptions *)speechRequestOptions;
-(NSDictionary *)continuityInfo;
-(BOOL)isPronunciationRequest;
-(NSURL *)speechFileURL;
-(BOOL)isForSpeechRequest;
-(double)buttonDownTimestamp;
-(double)expectedTimestamp;
-(long long)directActionEvent;
-(id)initWithRequestSource:(long long)arg1 ;
-(void)setInitialBringUp:(BOOL)arg1 ;
-(void)_configureStreamingDictationForSource:(long long)arg1 ;
-(void)setDirectActionEvent:(long long)arg1 ;
-(void)setMessagesDirectActionContext:(NSDictionary *)arg1 ;
-(void)setCheckForGuideUpdateContext:(SAGuidanceCheckForGuideUpdateContext *)arg1 ;
-(void)setPronunciationRequest:(BOOL)arg1 ;
-(void)setPronunciationContext:(SASPronunciationContext *)arg1 ;
-(void)setSpeechFileURL:(NSURL *)arg1 ;
-(void)setExpectedTimestamp:(double)arg1 ;
-(void)setButtonDownTimestamp:(double)arg1 ;
-(void)setContinuityInfo:(NSDictionary *)arg1 ;
-(void)setRequestInfo:(AFRequestInfo *)arg1 ;
-(void)setSpeechRequestOptions:(AFSpeechRequestOptions *)arg1 ;
-(BOOL)isForStark;
@end

