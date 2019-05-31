/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class NSString, NSObject, PHACoalescerContext;

@interface PHACoalescer : NSObject {

	long long _sequenceNumber;
	long long _fireSequenceNumber;
	long long _resetSequenceNumber;
	long long _lastUpdateResetSequenceNumber;
	BOOL _usesTarget;
	BOOL _initialDelayTimerIsArmed;
	double _initialDelay;
	long long _mode;
	NSString* _label;
	id _target;
	id _buffer;
	NSObject*<OS_dispatch_queue> _sourceQueue;
	id _targetQueue;
	long long _queueType;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _snapshotAndDrainHandler;
	/*^block*/id _action;
	PHACoalescerContext* _context;
	long long _state;
	NSObject*<OS_os_transaction> _transaction;
	unsigned long long _stateCaptureHandlerHandle;

}

@property (assign) long long mode;                                            //@synthesize mode=_mode - In the implementation block
@property (retain) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (__weak) id target;                                                 //@synthesize target=_target - In the implementation block
@property (assign) BOOL usesTarget;                                           //@synthesize usesTarget=_usesTarget - In the implementation block
@property (retain) id buffer;                                                 //@synthesize buffer=_buffer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sourceQueue;                  //@synthesize sourceQueue=_sourceQueue - In the implementation block
@property (retain) id targetQueue;                                            //@synthesize targetQueue=_targetQueue - In the implementation block
@property (assign) long long queueType;                                       //@synthesize queueType=_queueType - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> isolationQueue;               //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> source;                      //@synthesize source=_source - In the implementation block
@property (copy) id snapshotAndDrainHandler;                                  //@synthesize snapshotAndDrainHandler=_snapshotAndDrainHandler - In the implementation block
@property (copy) id action;                                                   //@synthesize action=_action - In the implementation block
@property (retain) PHACoalescerContext * context;                             //@synthesize context=_context - In the implementation block
@property (assign) BOOL initialDelayTimerIsArmed;                             //@synthesize initialDelayTimerIsArmed=_initialDelayTimerIsArmed - In the implementation block
@property (assign) long long state;                                           //@synthesize state=_state - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;                  //@synthesize transaction=_transaction - In the implementation block
@property (assign) unsigned long long stateCaptureHandlerHandle;              //@synthesize stateCaptureHandlerHandle=_stateCaptureHandlerHandle - In the implementation block
@property (assign) double initialDelay;                                       //@synthesize initialDelay=_initialDelay - In the implementation block
+(id)setCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)setCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)coalescerWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(/*^block*/id)arg5 action:(/*^block*/id)arg6 ;
+(/*^block*/id)mutableCollectionBufferDrainer;
+(id)mutableContainerCoalescerWithLabel:(id)arg1 container:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)mutableContainerCoalescerWithLabel:(id)arg1 target:(id)arg2 container:(id)arg3 queue:(id)arg4 action:(/*^block*/id)arg5 ;
+(id)coalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)coalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)dictionaryCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)dictionaryCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
+(id)arrayCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)arrayCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)action;
-(void)reset;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(PHACoalescerContext *)context;
-(void)setAction:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)update:(/*^block*/id)arg1 ;
-(void)update;
-(void)setContext:(PHACoalescerContext *)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(/*^block*/id)arg5 action:(/*^block*/id)arg6 ;
-(void)setUsesTarget:(BOOL)arg1 ;
-(void)setBuffer:(id)arg1 ;
-(void)setSnapshotAndDrainHandler:(id)arg1 ;
-(void)setSourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)setQueueType:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)sourceQueue;
-(void)setupStateCaptureHandler;
-(BOOL)usesTarget;
-(id)buffer;
-(id)snapshotAndDrainHandler;
-(id)stateInformation;
-(void)setStateCaptureHandlerHandle:(unsigned long long)arg1 ;
-(void)dispatch_after:(unsigned long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(long long)queueType;
-(BOOL)initialDelayTimerIsArmed;
-(void)setInitialDelayTimerIsArmed:(BOOL)arg1 ;
-(unsigned long long)stateCaptureHandlerHandle;
-(id)targetQueue;
-(double)initialDelay;
-(void)setInitialDelay:(double)arg1 ;
@end

