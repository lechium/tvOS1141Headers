/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class HMDHomeManager, NSObject, HMDSyncOperationQueue, NSMutableArray, NSMutableDictionary, HMFExponentialBackoffTimer, NSString;

@interface HMDSyncOperationManager : HMFObject <HMFTimerDelegate> {

	BOOL _pauseQueue;
	BOOL _syncLoopDialogDisplayed;
	HMDHomeManager* _homeManager;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMDSyncOperationQueue* _cloudPushOperations;
	NSMutableArray* _cloudVerifyAccountOperations;
	HMDSyncOperationQueue* _cloudFetchOperations;
	NSMutableArray* _cloudZonePushOperations;
	NSMutableDictionary* _cloudZonePushOperationsMap;
	NSMutableArray* _cloudZoneFetchOperations;
	NSMutableDictionary* _cloudZoneFetchOperationsMap;
	NSMutableArray* _cloudCancelPauseOperations;
	long long _pauseCloudPushLevel;
	HMFExponentialBackoffTimer* _cloudPushDelayTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                    //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                                //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                                  //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) HMDSyncOperationQueue * cloudPushOperations;                                 //@synthesize cloudPushOperations=_cloudPushOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * cloudVerifyAccountOperations;                               //@synthesize cloudVerifyAccountOperations=_cloudVerifyAccountOperations - In the implementation block
@property (nonatomic,retain) HMDSyncOperationQueue * cloudFetchOperations;                                //@synthesize cloudFetchOperations=_cloudFetchOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * cloudZonePushOperations;                                    //@synthesize cloudZonePushOperations=_cloudZonePushOperations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cloudZonePushOperationsMap;                            //@synthesize cloudZonePushOperationsMap=_cloudZonePushOperationsMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * cloudZoneFetchOperations;                                   //@synthesize cloudZoneFetchOperations=_cloudZoneFetchOperations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cloudZoneFetchOperationsMap;                           //@synthesize cloudZoneFetchOperationsMap=_cloudZoneFetchOperationsMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * cloudCancelPauseOperations;                                 //@synthesize cloudCancelPauseOperations=_cloudCancelPauseOperations - In the implementation block
@property (assign,nonatomic) BOOL pauseQueue;                                                             //@synthesize pauseQueue=_pauseQueue - In the implementation block
@property (assign,nonatomic) long long pauseCloudPushLevel;                                               //@synthesize pauseCloudPushLevel=_pauseCloudPushLevel - In the implementation block
@property (nonatomic,retain) HMFExponentialBackoffTimer * cloudPushDelayTimer;                            //@synthesize cloudPushDelayTimer=_cloudPushDelayTimer - In the implementation block
@property (assign,getter=wasSyncLoopDialogDisplayed,nonatomic) BOOL syncLoopDialogDisplayed;              //@synthesize syncLoopDialogDisplayed=_syncLoopDialogDisplayed - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                                         //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)description;
-(void)resume;
-(void)addOperation:(id)arg1 ;
-(void)pause;
-(HMDHomeManager *)homeManager;
-(id)dumpState;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)kick;
-(void)killCloudPushAndResume;
-(void)resumeCloudPush;
-(void)pauseCloudPush;
-(void)resetCloudPushTimer:(id)arg1 ;
-(void)addOperation:(id)arg1 withDelay:(double)arg2 ;
-(HMDSyncOperationQueue *)cloudPushOperations;
-(NSMutableArray *)cloudVerifyAccountOperations;
-(HMDSyncOperationQueue *)cloudFetchOperations;
-(NSMutableArray *)cloudZonePushOperations;
-(NSMutableArray *)cloudZoneFetchOperations;
-(NSMutableArray *)cloudCancelPauseOperations;
-(BOOL)wasSyncLoopDialogDisplayed;
-(void)setSyncLoopDialogDisplayed:(BOOL)arg1 ;
-(void)_reportPossibleSyncLoop;
-(NSMutableDictionary *)cloudZonePushOperationsMap;
-(NSMutableDictionary *)cloudZoneFetchOperationsMap;
-(void)_handleNextOperation;
-(long long)_cloudZonePushOperationsCountTotal;
-(long long)_cloudZoneFetchOperationsCountTotal;
-(HMFExponentialBackoffTimer *)cloudPushDelayTimer;
-(void)setCloudPushDelayTimer:(HMFExponentialBackoffTimer *)arg1 ;
-(void)setPauseCloudPushLevel:(long long)arg1 ;
-(void)_handleCancelledOperations:(id)arg1 ;
-(long long)pauseCloudPushLevel;
-(BOOL)pauseQueue;
-(id)dequeueNextOperation;
-(void)setPauseQueue:(BOOL)arg1 ;
-(id)initWithClientQueue:(id)arg1 homeManager:(id)arg2 ;
-(void)pauseAndWaitForCurrentOperationCompletion:(/*^block*/id)arg1 ;
-(void)cancelOperations;
-(void)setCloudPushOperations:(HMDSyncOperationQueue *)arg1 ;
-(void)setCloudVerifyAccountOperations:(NSMutableArray *)arg1 ;
-(void)setCloudFetchOperations:(HMDSyncOperationQueue *)arg1 ;
-(void)setCloudZonePushOperations:(NSMutableArray *)arg1 ;
-(void)setCloudZonePushOperationsMap:(NSMutableDictionary *)arg1 ;
-(void)setCloudZoneFetchOperations:(NSMutableArray *)arg1 ;
-(void)setCloudZoneFetchOperationsMap:(NSMutableDictionary *)arg1 ;
-(void)setCloudCancelPauseOperations:(NSMutableArray *)arg1 ;
@end
