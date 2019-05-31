/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMapTable;

@interface CKOperationCallbackManager : NSObject {

	NSMutableDictionary* _progressCallbacks;
	NSMutableDictionary* _statisticsCallbacks;
	NSMutableDictionary* _commandCallbacks;
	NSMutableDictionary* _completionCallbacks;
	NSMutableDictionary* _checkpointCallbacks;
	NSMapTable* _operationsByID;

}

@property (retain) NSMutableDictionary * progressCallbacks;                //@synthesize progressCallbacks=_progressCallbacks - In the implementation block
@property (retain) NSMutableDictionary * statisticsCallbacks;              //@synthesize statisticsCallbacks=_statisticsCallbacks - In the implementation block
@property (retain) NSMutableDictionary * commandCallbacks;                 //@synthesize commandCallbacks=_commandCallbacks - In the implementation block
@property (retain) NSMutableDictionary * completionCallbacks;              //@synthesize completionCallbacks=_completionCallbacks - In the implementation block
@property (retain) NSMutableDictionary * checkpointCallbacks;              //@synthesize checkpointCallbacks=_checkpointCallbacks - In the implementation block
@property (retain) NSMapTable * operationsByID;                            //@synthesize operationsByID=_operationsByID - In the implementation block
-(id)init;
-(void)removeAllCallbacks;
-(void)registerProgressCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerStatisticsCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerCompletionCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerCheckpointCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)unregisterAllCallbacksForOperation:(id)arg1 ;
-(NSMapTable *)operationsByID;
-(NSMutableDictionary *)progressCallbacks;
-(NSMutableDictionary *)statisticsCallbacks;
-(NSMutableDictionary *)commandCallbacks;
-(NSMutableDictionary *)completionCallbacks;
-(NSMutableDictionary *)checkpointCallbacks;
-(void)_performCallbackForOperation:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)registerCommandCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)setProgressCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setStatisticsCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCommandCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCompletionCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCheckpointCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setOperationsByID:(NSMapTable *)arg1 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2 ;
@end
