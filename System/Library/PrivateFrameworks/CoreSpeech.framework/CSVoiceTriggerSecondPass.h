/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSKeywordAnalyzerNDAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSSpeakerDetectorNDAPIDelegate.h>
#import <libobjc.A.dylib/CSKeywordAnalyzerQuasarScoreDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSSpeechManagerDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerFirstPassDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;
@class CSSpeechManager, NSObject, CSAsset, CSKeywordAnalyzerNDAPI, CSKeywordAnalyzerQuasar, CSSpeakerDetectorNDAPI, CSSpeakerModel, NSDictionary, NSString;

@interface CSVoiceTriggerSecondPass : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeakerDetectorNDAPIDelegate, CSKeywordAnalyzerQuasarScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSSpeechManagerDelegate, CSVoiceTriggerFirstPassDelegate> {

	BOOL _useSAT;
	BOOL _hasPendingNearMiss;
	BOOL _isRunningRecognizer;
	BOOL _recognizerResultPending;
	BOOL _hasTriggerCandidate;
	float _keywordThreshold;
	float _keywordLoggingThreshold;
	float _lastScore;
	float _recognizerScore;
	float _recognizerScoreScaleFactor;
	float _firstPassChannelSelectionDelaySeconds;
	float _firstPassMasterChannelScoreBoost;
	float _firstPassOnsetScore;
	CSSpeechManager* _speechManager;
	id<CSVoiceTriggerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerNDAPI* _keywordAnalyzerNDAPI;
	CSKeywordAnalyzerQuasar* _keywordAnalyzerQuasar;
	CSSpeakerDetectorNDAPI* _speakerDetector;
	CSSpeakerModel* _speakerModel;
	unsigned long long _secondPassTimeout;
	unsigned long long _numProcessedSamples;
	unsigned long long _extraSamplesAtStart;
	unsigned long long _analyzerPrependingSamples;
	unsigned long long _analyzerTrailingSamples;
	unsigned long long _nearMissDelayTimeout;
	unsigned long long _nearMissCandidateDetectedSamples;
	NSDictionary* _lastAnalyzerResult;
	unsigned long long _recognizerWaitSamples;
	unsigned long long _earlyDetectFiredMachTime;
	unsigned long long _activeChannel;
	NSDictionary* _lastResult;
	unsigned long long _processedSampleCountsInPending;
	unsigned long long _firstPassTriggerStartSampleCount;
	unsigned long long _firstPassTriggerFireSampleCount;
	NSDictionary* _firstPassChannelSelectionScores;
	unsigned long long _firstPassOnsetChannel;
	unsigned long long _secondPassTriggerMachAbsTime;
	NSObject*<OS_dispatch_queue> _stateSerialQueue;
	double _lastAggTime;
	double _cumulativeUptime;
	double _cumulativeDowntime;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                           //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPI * keywordAnalyzerNDAPI;                    //@synthesize keywordAnalyzerNDAPI=_keywordAnalyzerNDAPI - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerQuasar * keywordAnalyzerQuasar;                  //@synthesize keywordAnalyzerQuasar=_keywordAnalyzerQuasar - In the implementation block
@property (nonatomic,retain) CSSpeakerDetectorNDAPI * speakerDetector;                         //@synthesize speakerDetector=_speakerDetector - In the implementation block
@property (nonatomic,retain) CSSpeakerModel * speakerModel;                                    //@synthesize speakerModel=_speakerModel - In the implementation block
@property (assign,nonatomic) unsigned long long secondPassTimeout;                             //@synthesize secondPassTimeout=_secondPassTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long numProcessedSamples;                           //@synthesize numProcessedSamples=_numProcessedSamples - In the implementation block
@property (assign,nonatomic) float keywordThreshold;                                           //@synthesize keywordThreshold=_keywordThreshold - In the implementation block
@property (assign,nonatomic) float keywordLoggingThreshold;                                    //@synthesize keywordLoggingThreshold=_keywordLoggingThreshold - In the implementation block
@property (assign,nonatomic) float lastScore;                                                  //@synthesize lastScore=_lastScore - In the implementation block
@property (assign,nonatomic) unsigned long long extraSamplesAtStart;                           //@synthesize extraSamplesAtStart=_extraSamplesAtStart - In the implementation block
@property (assign,nonatomic) unsigned long long analyzerPrependingSamples;                     //@synthesize analyzerPrependingSamples=_analyzerPrependingSamples - In the implementation block
@property (assign,nonatomic) unsigned long long analyzerTrailingSamples;                       //@synthesize analyzerTrailingSamples=_analyzerTrailingSamples - In the implementation block
@property (assign,nonatomic) BOOL useSAT;                                                      //@synthesize useSAT=_useSAT - In the implementation block
@property (assign,nonatomic) unsigned long long nearMissDelayTimeout;                          //@synthesize nearMissDelayTimeout=_nearMissDelayTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long nearMissCandidateDetectedSamples;              //@synthesize nearMissCandidateDetectedSamples=_nearMissCandidateDetectedSamples - In the implementation block
@property (assign,nonatomic) BOOL hasPendingNearMiss;                                          //@synthesize hasPendingNearMiss=_hasPendingNearMiss - In the implementation block
@property (nonatomic,retain) NSDictionary * lastAnalyzerResult;                                //@synthesize lastAnalyzerResult=_lastAnalyzerResult - In the implementation block
@property (assign,nonatomic) float recognizerScore;                                            //@synthesize recognizerScore=_recognizerScore - In the implementation block
@property (assign,nonatomic) BOOL isRunningRecognizer;                                         //@synthesize isRunningRecognizer=_isRunningRecognizer - In the implementation block
@property (assign,nonatomic) BOOL recognizerResultPending;                                     //@synthesize recognizerResultPending=_recognizerResultPending - In the implementation block
@property (assign,nonatomic) float recognizerScoreScaleFactor;                                 //@synthesize recognizerScoreScaleFactor=_recognizerScoreScaleFactor - In the implementation block
@property (assign,nonatomic) unsigned long long recognizerWaitSamples;                         //@synthesize recognizerWaitSamples=_recognizerWaitSamples - In the implementation block
@property (assign,nonatomic) unsigned long long earlyDetectFiredMachTime;                      //@synthesize earlyDetectFiredMachTime=_earlyDetectFiredMachTime - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                                 //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,retain) NSDictionary * lastResult;                                        //@synthesize lastResult=_lastResult - In the implementation block
@property (assign,nonatomic) unsigned long long processedSampleCountsInPending;                //@synthesize processedSampleCountsInPending=_processedSampleCountsInPending - In the implementation block
@property (assign,nonatomic) unsigned long long firstPassTriggerStartSampleCount;              //@synthesize firstPassTriggerStartSampleCount=_firstPassTriggerStartSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long firstPassTriggerFireSampleCount;               //@synthesize firstPassTriggerFireSampleCount=_firstPassTriggerFireSampleCount - In the implementation block
@property (nonatomic,retain) NSDictionary * firstPassChannelSelectionScores;                   //@synthesize firstPassChannelSelectionScores=_firstPassChannelSelectionScores - In the implementation block
@property (assign,nonatomic) float firstPassChannelSelectionDelaySeconds;                      //@synthesize firstPassChannelSelectionDelaySeconds=_firstPassChannelSelectionDelaySeconds - In the implementation block
@property (assign,nonatomic) float firstPassMasterChannelScoreBoost;                           //@synthesize firstPassMasterChannelScoreBoost=_firstPassMasterChannelScoreBoost - In the implementation block
@property (assign,nonatomic) float firstPassOnsetScore;                                        //@synthesize firstPassOnsetScore=_firstPassOnsetScore - In the implementation block
@property (assign,nonatomic) unsigned long long firstPassOnsetChannel;                         //@synthesize firstPassOnsetChannel=_firstPassOnsetChannel - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerCandidate;                                         //@synthesize hasTriggerCandidate=_hasTriggerCandidate - In the implementation block
@property (assign,nonatomic) unsigned long long secondPassTriggerMachAbsTime;                  //@synthesize secondPassTriggerMachAbsTime=_secondPassTriggerMachAbsTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateSerialQueue;                    //@synthesize stateSerialQueue=_stateSerialQueue - In the implementation block
@property (assign,nonatomic) double lastAggTime;                                               //@synthesize lastAggTime=_lastAggTime - In the implementation block
@property (assign,nonatomic) double cumulativeUptime;                                          //@synthesize cumulativeUptime=_cumulativeUptime - In the implementation block
@property (assign,nonatomic) double cumulativeDowntime;                                        //@synthesize cumulativeDowntime=_cumulativeDowntime - In the implementation block
@property (assign,nonatomic,__weak) CSSpeechManager * speechManager;                           //@synthesize speechManager=_speechManager - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setAsset:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(void)_reset;
-(void)reset;
-(void)start;
-(void)setAsset:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(CSAsset *)currentAsset;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2 ;
-(void)speechManagerDidStartForwarding:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(id)initWithManager:(id)arg1 asset:(id)arg2 ;
-(CSSpeechManager *)speechManager;
-(void)setSpeechManager:(CSSpeechManager *)arg1 ;
-(float)keywordThreshold;
-(void)setKeywordThreshold:(float)arg1 ;
-(unsigned long long)activeChannel;
-(float)lastScore;
-(void)setLastScore:(float)arg1 ;
-(void)voiceTriggerFirstPass:(id)arg1 didDetectKeyword:(id)arg2 ;
-(void)clearTriggerCandidate;
-(unsigned long long)secondPassTriggerMachAbsTime;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)_notifySecondPassReject;
-(void)_logUptimeWithVTSwitchChanged:(BOOL)arg1 VTEnabled:(BOOL)arg2 ;
-(void)_markSecondPassTriggerMachAbsoluteTime:(unsigned long long)arg1 ;
-(void)_resetUpTime;
-(void)_analyzeForKeywordDetection:(id)arg1 result:(id)arg2 forChannel:(unsigned long long)arg3 forceMaximized:(BOOL)arg4 ;
-(void)speakerDetector:(id)arg1 didDetectSpeaker:(id)arg2 ;
-(void)speakerDetector:(id)arg1 didDetectSpeakerReject:(id)arg2 ;
-(void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(CSKeywordAnalyzerNDAPI *)keywordAnalyzerNDAPI;
-(void)setKeywordAnalyzerNDAPI:(CSKeywordAnalyzerNDAPI *)arg1 ;
-(CSKeywordAnalyzerQuasar *)keywordAnalyzerQuasar;
-(void)setKeywordAnalyzerQuasar:(CSKeywordAnalyzerQuasar *)arg1 ;
-(CSSpeakerDetectorNDAPI *)speakerDetector;
-(void)setSpeakerDetector:(CSSpeakerDetectorNDAPI *)arg1 ;
-(CSSpeakerModel *)speakerModel;
-(void)setSpeakerModel:(CSSpeakerModel *)arg1 ;
-(unsigned long long)secondPassTimeout;
-(void)setSecondPassTimeout:(unsigned long long)arg1 ;
-(unsigned long long)numProcessedSamples;
-(void)setNumProcessedSamples:(unsigned long long)arg1 ;
-(float)keywordLoggingThreshold;
-(void)setKeywordLoggingThreshold:(float)arg1 ;
-(unsigned long long)extraSamplesAtStart;
-(void)setExtraSamplesAtStart:(unsigned long long)arg1 ;
-(unsigned long long)analyzerPrependingSamples;
-(void)setAnalyzerPrependingSamples:(unsigned long long)arg1 ;
-(unsigned long long)analyzerTrailingSamples;
-(void)setAnalyzerTrailingSamples:(unsigned long long)arg1 ;
-(BOOL)useSAT;
-(void)setUseSAT:(BOOL)arg1 ;
-(unsigned long long)nearMissDelayTimeout;
-(void)setNearMissDelayTimeout:(unsigned long long)arg1 ;
-(unsigned long long)nearMissCandidateDetectedSamples;
-(void)setNearMissCandidateDetectedSamples:(unsigned long long)arg1 ;
-(BOOL)hasPendingNearMiss;
-(void)setHasPendingNearMiss:(BOOL)arg1 ;
-(NSDictionary *)lastAnalyzerResult;
-(void)setLastAnalyzerResult:(NSDictionary *)arg1 ;
-(float)recognizerScore;
-(void)setRecognizerScore:(float)arg1 ;
-(BOOL)isRunningRecognizer;
-(void)setIsRunningRecognizer:(BOOL)arg1 ;
-(BOOL)recognizerResultPending;
-(void)setRecognizerResultPending:(BOOL)arg1 ;
-(float)recognizerScoreScaleFactor;
-(void)setRecognizerScoreScaleFactor:(float)arg1 ;
-(unsigned long long)recognizerWaitSamples;
-(void)setRecognizerWaitSamples:(unsigned long long)arg1 ;
-(unsigned long long)earlyDetectFiredMachTime;
-(void)setEarlyDetectFiredMachTime:(unsigned long long)arg1 ;
-(NSDictionary *)lastResult;
-(void)setLastResult:(NSDictionary *)arg1 ;
-(unsigned long long)processedSampleCountsInPending;
-(void)setProcessedSampleCountsInPending:(unsigned long long)arg1 ;
-(unsigned long long)firstPassTriggerStartSampleCount;
-(void)setFirstPassTriggerStartSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)firstPassTriggerFireSampleCount;
-(void)setFirstPassTriggerFireSampleCount:(unsigned long long)arg1 ;
-(NSDictionary *)firstPassChannelSelectionScores;
-(void)setFirstPassChannelSelectionScores:(NSDictionary *)arg1 ;
-(float)firstPassChannelSelectionDelaySeconds;
-(void)setFirstPassChannelSelectionDelaySeconds:(float)arg1 ;
-(float)firstPassMasterChannelScoreBoost;
-(void)setFirstPassMasterChannelScoreBoost:(float)arg1 ;
-(float)firstPassOnsetScore;
-(void)setFirstPassOnsetScore:(float)arg1 ;
-(unsigned long long)firstPassOnsetChannel;
-(void)setFirstPassOnsetChannel:(unsigned long long)arg1 ;
-(BOOL)hasTriggerCandidate;
-(void)setHasTriggerCandidate:(BOOL)arg1 ;
-(void)setSecondPassTriggerMachAbsTime:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateSerialQueue;
-(void)setStateSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)lastAggTime;
-(void)setLastAggTime:(double)arg1 ;
-(double)cumulativeUptime;
-(void)setCumulativeUptime:(double)arg1 ;
-(double)cumulativeDowntime;
-(void)setCumulativeDowntime:(double)arg1 ;
@end

