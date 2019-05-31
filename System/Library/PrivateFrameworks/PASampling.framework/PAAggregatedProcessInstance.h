/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PAAggregatedTask.h>

@class NSMutableArray, NSMutableSet, NSDictionary, NSArray, PAProcessInstanceAggregator, NSString, NSUUID;

@interface PAAggregatedProcessInstance : PAAggregatedTask {

	CFDictionaryRef stacks;
	NSMutableArray* _timestampIndexedTasks;
	unsigned long long _firstTimestampIndex;
	NSMutableSet* _concurrentDispatchQueueIds;
	NSDictionary* _threadsInPreviousSample;
	BOOL _previousThreadsWereUnchanged;
	double _mostRecentTimeSamplingOnlyMainThread;
	unsigned long long _timestampIndexWhenTransitionedToSamplingAllThreads;
	unsigned long long _mainThreadId;
	BOOL _combinedStacks;
	unsigned _countSuspended;
	unsigned _countTerminated;
	unsigned long long _cpuTimeNsCached;
	unsigned long long _cpuCyclesCached;
	unsigned long long _cpuInstructionsCached;

}

@property (readonly) NSArray * timestampIndexedTasks;                                                    //@synthesize timestampIndexedTasks=_timestampIndexedTasks - In the implementation block
@property (__weak,readonly) PAProcessInstanceAggregator * aggregator; 
@property (readonly) NSMutableSet * concurrentDispatchQueueIds;                                          //@synthesize concurrentDispatchQueueIds=_concurrentDispatchQueueIds - In the implementation block
@property (readonly) unsigned long long firstTimestampIndex;                                             //@synthesize firstTimestampIndex=_firstTimestampIndex - In the implementation block
@property (readonly) unsigned long long lastTimestampIndex; 
@property (retain) NSDictionary * threadsInPreviousSample;                                               //@synthesize threadsInPreviousSample=_threadsInPreviousSample - In the implementation block
@property (readonly) unsigned countSuspended;                                                            //@synthesize countSuspended=_countSuspended - In the implementation block
@property (readonly) unsigned countTerminated;                                                           //@synthesize countTerminated=_countTerminated - In the implementation block
@property (readonly) unsigned count; 
@property (readonly) int pid; 
@property (readonly) int ppid; 
@property (readonly) int rpid; 
@property (readonly) unsigned uid; 
@property (readonly) unsigned long long uniquePid; 
@property (__weak,readonly) NSString * name; 
@property (__weak,readonly) NSString * mainBinaryPath; 
@property (__weak,readonly) NSUUID * mainBinaryUuid; 
@property (readonly) unsigned long long mainBinaryOffset; 
@property (readonly) BOOL isUnresponsive; 
@property (readonly) double timeOfLastResponse; 
@property (readonly) BOOL usesSuddenTermination; 
@property (readonly) BOOL allowsIdleExit; 
@property (readonly) BOOL workQueueExceededConstrainedThreadLimit; 
@property (readonly) BOOL workQueueExceededTotalThreadLimit; 
@property (readonly) BOOL isThirdParty; 
@property (readonly) BOOL isTranslocated; 
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllThreads;              //@synthesize timestampIndexWhenTransitionedToSamplingAllThreads=_timestampIndexWhenTransitionedToSamplingAllThreads - In the implementation block
-(unsigned)count;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(unsigned)uid;
-(BOOL)isUnresponsive;
-(unsigned long long)mainBinaryOffset;
-(unsigned long long)uniquePid;
-(unsigned long long)lastTimestampIndex;
-(void)printHeaderToOutputStream:(id)arg1 ;
-(void)printToOutputStream:(id)arg1 ;
-(void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(void)fillGaps;
-(PAProcessInstanceAggregator *)aggregator;
-(id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3 ;
-(NSUUID *)mainBinaryUuid;
-(NSDictionary *)threadsInPreviousSample;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(BOOL)arg3 ;
-(NSMutableSet *)concurrentDispatchQueueIds;
-(void)setThreadsInPreviousSample:(NSDictionary *)arg1 ;
-(void)_combineMainThreadStacks;
-(void)_combineAllStacks;
-(void)_combineStacksByThreadID;
-(void)_combineSerialDispatchQueueStacks;
-(unsigned long long)firstTimestampIndex;
-(int)rpid;
-(NSString *)mainBinaryPath;
-(id)architectureString;
-(double)timeOfLastResponse;
-(BOOL)usesSuddenTermination;
-(BOOL)allowsIdleExit;
-(BOOL)isThirdParty;
-(BOOL)isTranslocated;
-(unsigned long long)cpuTimeNs;
-(unsigned long long)cpuInstructions;
-(unsigned long long)cpuCycles;
-(id)firstTask;
-(unsigned)countSuspended;
-(unsigned)countTerminated;
-(BOOL)_shouldDisplayStacks;
-(BOOL)workQueueExceededConstrainedThreadLimit;
-(BOOL)workQueueExceededTotalThreadLimit;
-(void)combineStacks;
-(id)sortedStacks;
-(void)printStacksToOutputStream:(id)arg1 ;
-(id)initForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(void)calculateTimeIndexes;
-(id)sampleTaskAtTimestampIndex:(unsigned long long)arg1 ;
-(NSArray *)timestampIndexedTasks;
-(unsigned long long)timestampIndexWhenTransitionedToSamplingAllThreads;
-(int)pid;
-(int)ppid;
@end

