/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_source;
@class NSObject, PIGroup, NSString, NSError, NSMutableArray, PIPipeline, NSArray;

@interface PIOperation : NSObject {

	NSObject*<OS_dispatch_group> _operationGroup;
	double _executionRateLimit;
	PIGroup* _group;
	NSString* _identifier;
	id _key;
	NSString* _information;
	id _context;
	long long _priority;
	long long _qualityOfService;
	long long _concurrencyLimit;
	unsigned long long _state;
	BOOL _cancelled;
	NSError* _error;
	float _progress;
	unsigned long long _waitingTimeout;
	unsigned long long _executionTimeout;
	unsigned long long _wallTimeout;
	NSObject*<OS_dispatch_source> _waitingTimeoutTimer;
	NSObject*<OS_dispatch_source> _executionTimeoutTimer;
	NSObject*<OS_dispatch_source> _wallTimeoutTimer;
	/*^block*/id _executionBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _cancellationBlock;
	/*^block*/id _completionBlock;
	NSMutableArray* _dependencies;
	NSMutableArray* _subOperations;
	PIOperation* _mainOperation;
	PIPipeline* _subPipeline;
	double _timestampStart;
	double _timestampReady;
	double _timestampCancelling;
	double _timestampExecuting;
	double _timestampFinish;
	BOOL _needsToRetry;
	unsigned long long _retryCount;

}

@property (assign) unsigned long long state;                            //@synthesize state=_state - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                          //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic,__weak) PIGroup * group;                    //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * information;                      //@synthesize information=_information - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id key;                                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id context;                                //@synthesize context=_context - In the implementation block
@property (assign) long long priority;                                  //@synthesize priority=_priority - In the implementation block
@property (assign) long long qualityOfService;                          //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign) long long concurrencyLimit;                          //@synthesize concurrencyLimit=_concurrencyLimit - In the implementation block
@property (assign) double executionRateLimit;                           //@synthesize executionRateLimit=_executionRateLimit - In the implementation block
@property (nonatomic,copy) id executionBlock;                           //@synthesize executionBlock=_executionBlock - In the implementation block
@property (nonatomic,copy) id progressBlock;                            //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id cancellationBlock;                        //@synthesize cancellationBlock=_cancellationBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isFinished,readonly) BOOL finished; 
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (assign) float progress;                                      //@synthesize progress=_progress - In the implementation block
@property (assign) unsigned long long waitingTimeout;                   //@synthesize waitingTimeout=_waitingTimeout - In the implementation block
@property (assign) unsigned long long executionTimeout;                 //@synthesize executionTimeout=_executionTimeout - In the implementation block
@property (assign) unsigned long long wallTimeout;                      //@synthesize wallTimeout=_wallTimeout - In the implementation block
@property (assign) BOOL needsToRetry;                                   //@synthesize needsToRetry=_needsToRetry - In the implementation block
@property (readonly) unsigned long long retryCount;                     //@synthesize retryCount=_retryCount - In the implementation block
@property (copy,readonly) NSArray * dependencies;                       //@synthesize dependencies=_dependencies - In the implementation block
+(id)operation;
+(id)_stringForQualityOfService:(long long)arg1 ;
+(id)_stringForPriority:(long long)arg1 ;
+(id)operationWithExecutionBlock:(/*^block*/id)arg1 ;
+(id)_stringForState:(unsigned long long)arg1 ;
-(void)cancel:(/*^block*/id)arg1 ;
-(unsigned long long)retryCount;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)updateProgress;
-(void)setInformation:(NSString *)arg1 ;
-(id)init;
-(id)key;
-(void)dealloc;
-(id)description;
-(unsigned long long)state;
-(BOOL)isActive;
-(void)setState:(unsigned long long)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)identifier;
-(void)setPriority:(long long)arg1 ;
-(id)context;
-(long long)priority;
-(void)setProgress:(float)arg1 ;
-(void)_cleanup;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setContext:(id)arg1 ;
-(float)progress;
-(void)setGroup:(PIGroup *)arg1 ;
-(PIGroup *)group;
-(void)setKey:(id)arg1 ;
-(void)_prepare;
-(void)setQualityOfService:(long long)arg1 ;
-(void)_cancel;
-(BOOL)isFinished;
-(id)cancellationBlock;
-(id)progressBlock;
-(double)executionTime;
-(void)setProgressBlock:(id)arg1 ;
-(id)mainOperation;
-(long long)concurrencyLimit;
-(void)_willFinish;
-(void)_willRetry;
-(void)_willExecute;
-(double)executionRateLimit;
-(long long)executionQualityOfService;
-(id)executingQueue;
-(void)_finishSynchronousOperation:(id)arg1 ;
-(void)_performOperationSynchronously;
-(id)subPipeline;
-(double)waitingTime;
-(double)cancellationTime;
-(void)setExecutionRateLimit:(double)arg1 ;
-(unsigned long long)waitingTimeout;
-(void)setWaitingTimeout:(unsigned long long)arg1 ;
-(unsigned long long)executionTimeout;
-(void)setExecutionTimeout:(unsigned long long)arg1 ;
-(unsigned long long)wallTimeout;
-(void)setWallTimeout:(unsigned long long)arg1 ;
-(void)removeDependencies:(id)arg1 ;
-(void)performSubOperationsAsynchronously:(id)arg1 waitUntilFinishedUsingBlock:(/*^block*/id)arg2 ;
-(void)addDependencies:(id)arg1 ;
-(void)setConcurrencyLimit:(long long)arg1 ;
-(double)wallTime;
-(void)setExecutionBlock:(id)arg1 ;
-(id)executionBlock;
-(id)subOperations;
-(BOOL)needsToRetry;
-(void)setNeedsToRetry:(BOOL)arg1 ;
-(id)performSubOperationSynchronously:(id)arg1 error:(id*)arg2 ;
-(void)setCancellationBlock:(id)arg1 ;
-(void)waitUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(id)performSynchronously:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)hasSucceeded;
-(BOOL)shouldContinue;
-(id)performSynchronously;
-(long long)qualityOfService;
-(NSArray *)dependencies;
-(NSString *)information;
-(void)_didFinish;
@end
