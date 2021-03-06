//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZKeyValueStoreDeserializeOperationDelegate.h"
#import "MZKeyValueStoreOperationDelegate.h"

@class IMKeyValueStoreAuthenticationController, IMKeyValueStoreDeserializer, IMKeyValueStoreTransaction, IMTaskAssertion, NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL;

@interface IMKeyValueStoreController : NSObject <MZKeyValueStoreOperationDelegate, MZKeyValueStoreDeserializeOperationDelegate>
{
    id <MZKeyValueStoreControllerDelegate> _delegate;	// 8 = 0x8
    NSURL *_defaultGetURL;	// 16 = 0x10
    NSURL *_defaultSetURL;	// 24 = 0x18
    NSString *_defaultDomain;	// 32 = 0x20
    _Bool _enabled;	// 40 = 0x28
    IMKeyValueStoreAuthenticationController *_authenticationController;	// 48 = 0x30
    _Bool _canRequestStoreSignIn;	// 56 = 0x38
    _Bool _resolvingError;	// 57 = 0x39
    NSMutableArray *_pendingTransactions;	// 64 = 0x40
    IMKeyValueStoreTransaction *_currentTransaction;	// 72 = 0x48
    NSOperationQueue *_operationQueue;	// 80 = 0x50
    IMKeyValueStoreDeserializer *_currentDeserializer;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 96 = 0x60
    IMTaskAssertion *_backgroundTaskAssertion;	// 104 = 0x68
    id _networkTypeObserver;	// 112 = 0x70
}

@property(nonatomic) id networkTypeObserver; // @synthesize networkTypeObserver=_networkTypeObserver;
@property(retain, nonatomic) IMTaskAssertion *backgroundTaskAssertion; // @synthesize backgroundTaskAssertion=_backgroundTaskAssertion;
@property(nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) IMKeyValueStoreDeserializer *currentDeserializer; // @synthesize currentDeserializer=_currentDeserializer;
@property(nonatomic, getter=isResolvingError) _Bool resolvingError; // @synthesize resolvingError=_resolvingError;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) IMKeyValueStoreTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) NSMutableArray *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property _Bool canRequestStoreSignIn; // @synthesize canRequestStoreSignIn=_canRequestStoreSignIn;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain) IMKeyValueStoreAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(copy) NSString *defaultDomain; // @synthesize defaultDomain=_defaultDomain;
@property(retain) NSURL *defaultSetURL; // @synthesize defaultSetURL=_defaultSetURL;
@property(retain) NSURL *defaultGetURL; // @synthesize defaultGetURL=_defaultGetURL;
@property id <MZKeyValueStoreControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deserializeOperationDidFinish:(id)arg1 shouldReschedule:(_Bool)arg2;	// IMP=0x000000010006a80c
- (void)keyValueStoreOperationOperationDidFinish:(id)arg1;	// IMP=0x000000010006a800
- (void)keyValueStoreOperation:(id)arg1 scheduleURLOperation:(id)arg2;	// IMP=0x000000010006a79c
- (void)operation:(id)arg1 failedWithError:(id)arg2;	// IMP=0x000000010006a570
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x000000010006a428
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;	// IMP=0x000000010006a304
- (void)_endBackgroundTask;	// IMP=0x000000010006a218
- (void)_beginBackgroundTask;	// IMP=0x0000000100069fd8
- (void)_delegateTransactionDidFinish:(id)arg1;	// IMP=0x0000000100069ea4
- (void)_delegateTransactionDidCancel:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100069e14
- (_Bool)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100069d84
- (_Bool)_delegateShouldScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100069cd0
- (void)_errorResolutionDefault:(id)arg1;	// IMP=0x0000000100069c44
- (void)_errorResolutionCancel:(id)arg1;	// IMP=0x0000000100069bd0
- (void)_errorResolutionRetry:(id)arg1;	// IMP=0x0000000100069ac0
- (void)_resolveError:(id)arg1 resolution:(int)arg2;	// IMP=0x00000001000699c0
- (void)_processOperationOutput:(id)arg1 operationAuthenticated:(_Bool)arg2;	// IMP=0x00000001000695e8
- (void)_transactionDidCancel:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100069498
- (void)_transactionDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x000000010006930c
- (void)_currentTransactionDidFinish;	// IMP=0x000000010006922c
- (id)_scheduleTransactionWithType:(int)arg1 sinceDomainVersion:(id)arg2 URL:(id)arg3 keys:(id)arg4 processor:(id)arg5;	// IMP=0x0000000100069154
- (_Bool)_authenticationCanProcessTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006908c
- (_Bool)_clampsCanScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100069050
- (_Bool)_isTransactionValid:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100068fb4
- (_Bool)_isEnabledForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100068f48
- (_Bool)_canScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100068ec8
- (void)_addPendingTransaction:(id)arg1;	// IMP=0x0000000100068e24
- (void)_scheduleTransaction:(id)arg1;	// IMP=0x0000000100068db4
- (id)_requestForTransaction:(id)arg1;	// IMP=0x0000000100068cd8
- (void)_processCurrentTransaction;	// IMP=0x0000000100068bfc
- (void)_processPendingTransactions;	// IMP=0x0000000100068b1c
- (void)_cancelTransaction:(id)arg1 error:(id)arg2;	// IMP=0x00000001000689c0
- (void)_cancelAllTransactions:(id)arg1;	// IMP=0x00000001000687f0
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x00000001000687c4
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100068798
- (_Bool)isIdle;	// IMP=0x0000000100068700
- (void)reset;	// IMP=0x0000000100068664
- (void)resolveError:(id)arg1 resolution:(int)arg2;	// IMP=0x0000000100068580
- (void)cancelAllTransactionsCancelCode:(long long)arg1;	// IMP=0x00000001000682e8
- (void)cancelAllTransactions;	// IMP=0x0000000100068054
- (void)cancelScheduledTransaction:(id)arg1;	// IMP=0x0000000100067f44
- (void)scheduleTransaction:(id)arg1;	// IMP=0x0000000100067e24
- (id)scheduleSetTransactionWithKeys:(id)arg1 processor:(id)arg2;	// IMP=0x0000000100067dcc
- (id)scheduleGetTransactionWithKeys:(id)arg1 processor:(id)arg2;	// IMP=0x0000000100067d74
- (id)scheduleGetAllTransactionWithSinceDomainVersion:(id)arg1 processor:(id)arg2;	// IMP=0x0000000100067d1c
- (id)clampsController;	// IMP=0x0000000100067d08
- (void)operationQueue:(id)arg1 willRemoveOperation:(id)arg2;	// IMP=0x0000000100067cf8
- (void)operationQueue:(id)arg1 willAddOperation:(id)arg2;	// IMP=0x0000000100067c90
- (void)clearWeakReferencesInOperation:(id)arg1;	// IMP=0x0000000100067c2c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000677d4
- (void)dealloc;	// IMP=0x00000001000674f0
- (id)initWithDomain:(id)arg1 baseURLForGETAll:(id)arg2 baseURLForPUTAll:(id)arg3;	// IMP=0x00000001000670e4
- (id)scheduleApnSubscriptionTransactionWithDictionary:(id)arg1;	// IMP=0x0000000100127300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

