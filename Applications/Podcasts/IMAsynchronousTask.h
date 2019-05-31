//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMTaskAssertion, NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface IMAsynchronousTask : NSObject
{
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 24 = 0x18
    _Bool _taskInvalidationDisabled;	// 32 = 0x20
    double _timeout;	// 40 = 0x28
    int _cancelType;	// 48 = 0x30
    CDUnknownBlockType _finishedHandler;	// 56 = 0x38
    CDUnknownBlockType _expirationHandler;	// 64 = 0x40
    id _result;	// 72 = 0x48
    NSError *_error;	// 80 = 0x50
    NSString *_debugDescription;	// 88 = 0x58
    IMTaskAssertion *_taskAssertion;	// 96 = 0x60
    NSMutableArray *_completions;	// 104 = 0x68
}

@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) IMTaskAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
@property(copy, nonatomic) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
- (void)invokeTaskCompletionBlocksWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004f518
- (void)addTaskCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004f4b0
- (void)invalidate;	// IMP=0x000000010004f450
- (void)_invalidateAssertion:(_Bool)arg1;	// IMP=0x000000010004f2b4
- (void)endTaskOperation;	// IMP=0x000000010004f278
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000010004f178
- (void)beginTaskOperation;	// IMP=0x000000010004ef8c
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) int cancelType; // @synthesize cancelType=_cancelType;
- (void)_onQueueFireExpirationHandlerIfNecesary;	// IMP=0x000000010004e758
@property(copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
- (id)description;	// IMP=0x000000010004e15c
- (void)_invalidateTimer;	// IMP=0x000000010004e098
- (void)dealloc;	// IMP=0x000000010004df90
- (id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3;	// IMP=0x000000010004ddb0

@end

