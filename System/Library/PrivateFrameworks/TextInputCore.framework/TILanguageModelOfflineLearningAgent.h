/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, TILanguageModelOfflineLearningTask;

@interface TILanguageModelOfflineLearningAgent : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TILanguageModelOfflineLearningTask* _currentLearningTask;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                          //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) TILanguageModelOfflineLearningTask * currentLearningTask;              //@synthesize currentLearningTask=_currentLearningTask - In the implementation block
+(void)didFinishLearningWithAgent:(id)arg1 task:(id)arg2 ;
+(id)contactRecordsForRecipients:(id)arg1 ;
+(id)sharedLearningAgent;
-(id)init;
-(void)dealloc;
-(BOOL)continueLearningTaskWithStrategy:(id)arg1 ;
-(void)performLearningIfNecessaryWithStrategy:(id)arg1 lastAdaptationTime:(double)arg2 ;
-(void)performTaskInBackground:(/*^block*/id)arg1 ;
-(void)handleRemovalOfLearnedModels;
-(TILanguageModelOfflineLearningTask *)currentLearningTask;
-(void)setCurrentLearningTask:(TILanguageModelOfflineLearningTask *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

