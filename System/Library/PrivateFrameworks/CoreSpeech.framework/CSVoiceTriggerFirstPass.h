/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSKeywordAnalyzerNDAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSSpeechManagerDelegate.h>

@protocol CSVoiceTriggerFirstPassDelegate, OS_dispatch_queue;
@class CSSpeechManager, CSPolicy, NSObject, CSAsset, NSMutableArray, NSDictionary, NSString;

@interface CSVoiceTriggerFirstPass : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeechManagerDelegate> {

	BOOL _voiceTriggerEnabled;
	BOOL _hasTriggerPending;
	float _firstPassThreshold;
	float _bestScore;
	float _masterChannelScoreBoost;
	id<CSVoiceTriggerFirstPassDelegate> _delegate;
	CSSpeechManager* _speechManager;
	CSPolicy* _voiceTriggerStartPolicy;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	NSMutableArray* _keywordAnalyzersNDAPI;
	unsigned long long _bestChannel;
	NSDictionary* _onsetResult;
	unsigned long long _onsetChannel;
	unsigned long long _channelSelectionDelay;
	unsigned long long _delayInSamplesRequiredForChannelSelection;
	NSDictionary* _channelSelectionScores;
	unsigned long long _processingChunkSamples;
	unsigned long long _processingChannelsBitset;

}

@property (nonatomic,retain) CSPolicy * voiceTriggerStartPolicy;                                        //@synthesize voiceTriggerStartPolicy=_voiceTriggerStartPolicy - In the implementation block
@property (assign,nonatomic) BOOL voiceTriggerEnabled;                                                  //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                                    //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) NSMutableArray * keywordAnalyzersNDAPI;                                    //@synthesize keywordAnalyzersNDAPI=_keywordAnalyzersNDAPI - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerPending;                                                    //@synthesize hasTriggerPending=_hasTriggerPending - In the implementation block
@property (assign,nonatomic) float firstPassThreshold;                                                  //@synthesize firstPassThreshold=_firstPassThreshold - In the implementation block
@property (assign,nonatomic) float bestScore;                                                           //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) unsigned long long bestChannel;                                            //@synthesize bestChannel=_bestChannel - In the implementation block
@property (nonatomic,retain) NSDictionary * onsetResult;                                                //@synthesize onsetResult=_onsetResult - In the implementation block
@property (assign,nonatomic) unsigned long long onsetChannel;                                           //@synthesize onsetChannel=_onsetChannel - In the implementation block
@property (assign,nonatomic) unsigned long long channelSelectionDelay;                                  //@synthesize channelSelectionDelay=_channelSelectionDelay - In the implementation block
@property (assign,nonatomic) unsigned long long delayInSamplesRequiredForChannelSelection;              //@synthesize delayInSamplesRequiredForChannelSelection=_delayInSamplesRequiredForChannelSelection - In the implementation block
@property (assign,nonatomic) float masterChannelScoreBoost;                                             //@synthesize masterChannelScoreBoost=_masterChannelScoreBoost - In the implementation block
@property (nonatomic,retain) NSDictionary * channelSelectionScores;                                     //@synthesize channelSelectionScores=_channelSelectionScores - In the implementation block
@property (assign,nonatomic) unsigned long long processingChunkSamples;                                 //@synthesize processingChunkSamples=_processingChunkSamples - In the implementation block
@property (assign,nonatomic) unsigned long long processingChannelsBitset;                               //@synthesize processingChannelsBitset=_processingChannelsBitset - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerFirstPassDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) CSSpeechManager * speechManager;                                    //@synthesize speechManager=_speechManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setAsset:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CSVoiceTriggerFirstPassDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerFirstPassDelegate>)arg1 ;
-(void)_reset;
-(void)reset;
-(void)start;
-(void)setAsset:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setBestScore:(float)arg1 ;
-(float)bestScore;
-(BOOL)voiceTriggerEnabled;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(CSAsset *)currentAsset;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2 ;
-(void)speechManagerDidStartForwarding:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2 ;
-(void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(id)initWithManager:(id)arg1 asset:(id)arg2 ;
-(CSSpeechManager *)speechManager;
-(void)setSpeechManager:(CSSpeechManager *)arg1 ;
-(void)_transitVoiceTriggerStatus:(BOOL)arg1 ;
-(void)_startVoiceTrigger;
-(void)_stopVoiceTrigger;
-(void)_reportVoiceTriggerFirstPassFire;
-(CSPolicy *)voiceTriggerStartPolicy;
-(void)setVoiceTriggerStartPolicy:(CSPolicy *)arg1 ;
-(NSMutableArray *)keywordAnalyzersNDAPI;
-(void)setKeywordAnalyzersNDAPI:(NSMutableArray *)arg1 ;
-(BOOL)hasTriggerPending;
-(void)setHasTriggerPending:(BOOL)arg1 ;
-(float)firstPassThreshold;
-(void)setFirstPassThreshold:(float)arg1 ;
-(unsigned long long)bestChannel;
-(void)setBestChannel:(unsigned long long)arg1 ;
-(NSDictionary *)onsetResult;
-(void)setOnsetResult:(NSDictionary *)arg1 ;
-(unsigned long long)onsetChannel;
-(void)setOnsetChannel:(unsigned long long)arg1 ;
-(unsigned long long)channelSelectionDelay;
-(void)setChannelSelectionDelay:(unsigned long long)arg1 ;
-(unsigned long long)delayInSamplesRequiredForChannelSelection;
-(void)setDelayInSamplesRequiredForChannelSelection:(unsigned long long)arg1 ;
-(float)masterChannelScoreBoost;
-(void)setMasterChannelScoreBoost:(float)arg1 ;
-(NSDictionary *)channelSelectionScores;
-(void)setChannelSelectionScores:(NSDictionary *)arg1 ;
-(unsigned long long)processingChunkSamples;
-(void)setProcessingChunkSamples:(unsigned long long)arg1 ;
-(unsigned long long)processingChannelsBitset;
-(void)setProcessingChannelsBitset:(unsigned long long)arg1 ;
@end

