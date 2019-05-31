/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject, NSError, SBKTaskAssertion, NSMutableArray;

@interface SBKAsynchronousTask : NSObject {

	NSString* _debugDescription;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	BOOL _taskInvalidationDisabled;
	double _timeout;
	int _cancelType;
	id _result;
	NSError* _error;
	/*^block*/id _expirationHandler;
	/*^block*/id _finishedHandler;
	SBKTaskAssertion* _taskAssertion;
	NSMutableArray* _completions;

}

@property (retain) id result;                                     //@synthesize result=_result - In the implementation block
@property (retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (retain) SBKTaskAssertion * taskAssertion;              //@synthesize taskAssertion=_taskAssertion - In the implementation block
@property (retain) NSMutableArray * completions;                  //@synthesize completions=_completions - In the implementation block
@property (copy) id finishedHandler;                              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (copy) id expirationHandler;                            //@synthesize expirationHandler=_expirationHandler - In the implementation block
@property (assign) int cancelType;                                //@synthesize cancelType=_cancelType - In the implementation block
-(void)_invalidateAssertion:(BOOL)arg1 ;
-(void)setResult:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setFinishedHandler:(id)arg1 ;
-(id)finishedHandler;
-(void)invalidate;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)result;
-(void)addTaskCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3 ;
-(void)invokeTaskCompletionBlocksWithBlock:(/*^block*/id)arg1 ;
-(void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2 ;
-(void)beginTaskOperation;
-(int)cancelType;
-(void)setCancelType:(int)arg1 ;
-(void)_onQueueFireExpirationHandlerIfNecesary;
-(void)setTaskAssertion:(SBKTaskAssertion *)arg1 ;
-(void)endTaskOperation;
-(SBKTaskAssertion *)taskAssertion;
-(id)expirationHandler;
-(void)setExpirationHandler:(id)arg1 ;
-(void)_invalidateTimer;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
@end

