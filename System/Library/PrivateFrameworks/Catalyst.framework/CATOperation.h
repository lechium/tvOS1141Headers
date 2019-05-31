/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, NSLock, _CATObserverManager, NSUUID, NSDate, NSError, NSDictionary;

@interface CATOperation : NSOperation {

	NSArray* mCallStackSymbols;
	Ai mState;
	NSLock* mLock;
	_CATObserverManager* mObserverManager;
	BOOL _canCancel;
	NSUUID* _UUID;
	NSDate* _createdDate;
	NSDate* _enqueuedDate;
	NSDate* _startedDate;
	NSDate* _finishedDate;
	unsigned long long _phase;
	NSError* _error;
	id _resultObject;
	NSDictionary* _userInfo;
	long long _completedUnitCount;
	long long _totalUnitCount;

}

@property (retain) NSUUID * UUID;                             //@synthesize UUID=_UUID - In the implementation block
@property (assign) unsigned long long phase;                  //@synthesize phase=_phase - In the implementation block
@property (retain) NSDate * createdDate;                      //@synthesize createdDate=_createdDate - In the implementation block
@property (retain) NSDate * enqueuedDate;                     //@synthesize enqueuedDate=_enqueuedDate - In the implementation block
@property (retain) NSDate * startedDate;                      //@synthesize startedDate=_startedDate - In the implementation block
@property (retain) NSDate * finishedDate;                     //@synthesize finishedDate=_finishedDate - In the implementation block
@property (retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (retain) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) id resultObject;                           //@synthesize resultObject=_resultObject - In the implementation block
@property (assign) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
@property (readonly) BOOL isCanceled; 
@property (readonly) BOOL canCancel;                          //@synthesize canCancel=_canCancel - In the implementation block
+(id)callStackSymbols;
+(BOOL)isCancelable;
+(BOOL)automaticallyNotifiesObserversOfUUID;
+(BOOL)automaticallyNotifiesObserversOfCreatedDate;
+(BOOL)automaticallyNotifiesObserversOfEnqueuedDate;
+(BOOL)automaticallyNotifiesObserversOfStartedDate;
+(BOOL)automaticallyNotifiesObserversOfFinishedDate;
+(id)keyPathsForValuesAffectingIsCanceled;
-(void)removeDependency:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(id)init;
-(unsigned long long)phase;
-(void)cancel;
-(id)description;
-(void)addObserver:(id)arg1 ;
-(NSDictionary *)userInfo;
-(void)setPhase:(unsigned long long)arg1 ;
-(NSUUID *)UUID;
-(void)start;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(BOOL)isCanceled;
-(id)stateDescription;
-(BOOL)isAsynchronous;
-(BOOL)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2 ;
-(void)endOperationWithResultObject:(id)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 ;
-(void)setEnqueuedDate:(NSDate *)arg1 ;
-(void)operationWillStart;
-(void)setStartedDate:(NSDate *)arg1 ;
-(void)endOperationWithError:(id)arg1 ;
-(void)endOperationSuccessfullyIfNeeded;
-(void)finalizeOperation;
-(void)setResultObject:(id)arg1 ;
-(void)operationWillFinish;
-(void)setFinishedDate:(NSDate *)arg1 ;
-(void)operationDidFinish;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5 ;
-(void)operationWillEnqueueOntoOperationQueue:(id)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 delegateQueue:(id)arg4 ;
-(NSDate *)enqueuedDate;
-(NSDate *)startedDate;
-(NSDate *)finishedDate;
-(id)resultObject;
-(BOOL)canCancel;
-(void)addDependency:(id)arg1 ;
-(BOOL)isReady;
-(void)waitUntilFinished;
@end

