/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHAJobCoalescerDelegate.h>
#import <libobjc.A.dylib/PHAJobConstraintsObserverDelegate.h>
#import <libobjc.A.dylib/PHAWorkerJobDelegate.h>
#import <libobjc.A.dylib/PHAAnalysisStateObserverDelegate.h>
#import <libobjc.A.dylib/PHADirtyChangeCoalescerDelegate.h>
#import <libobjc.A.dylib/PHAActivityGovernorDelegate.h>
#import <libobjc.A.dylib/PLPhotoAnalysisJobServiceProtocol.h>

@protocol OS_voucher, PHAJobCoordinatorDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class NSObject, PHAJobCoalescer, PHADirtyChangeCoalescer, PHAJobConstraintsObserver, PHAAnalysisStateObserver, NSDictionary, PHAWorkerHealthMonitor, PHAActivityGovernor, PHAJobGenerator, PHAWorkerWarmer, PHAManager, PHAJobConstraints, PHAWorkerJob, NSMutableArray, NSMutableSet, NSString;

@interface PHAJobCoordinator : NSObject <PHAJobCoalescerDelegate, PHAJobConstraintsObserverDelegate, PHAWorkerJobDelegate, PHAAnalysisStateObserverDelegate, PHADirtyChangeCoalescerDelegate, PHAActivityGovernorDelegate, PLPhotoAnalysisJobServiceProtocol> {

	Ai _pendingAsyncTasksCount;
	NSObject*<OS_voucher> _turboModeBoostVoucher;
	BOOL _turboMode;
	BOOL _newConstraintsPending;
	BOOL _shouldIgnoreConstraintChanges;
	PHAJobCoalescer* _jobCoalescer;
	PHADirtyChangeCoalescer* _dirtyCoalescer;
	PHAJobConstraintsObserver* _constraintsObserver;
	double _maxIntervalSinceLastJobReport;
	PHAAnalysisStateObserver* _stateObserver;
	id<PHAJobCoordinatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _maintenanceTimer;
	NSDictionary* _workersByType;
	PHAWorkerHealthMonitor* _healthMonitor;
	PHAActivityGovernor* _activityGovernor;
	PHAJobGenerator* _jobGenerator;
	PHAWorkerWarmer* _warmer;
	PHAManager* _manager;
	PHAJobConstraints* _currentConstraints;
	PHAWorkerJob* _currentForegroundJob;
	NSMutableArray* _waitingForegroundJobs;
	PHAWorkerJob* _currentBackgroundJob;
	NSObject*<OS_os_transaction> _runningJobTransaction;
	NSMutableSet* _workerTypesServicedForUserFG;

}

@property (nonatomic,readonly) PHAJobCoalescer * jobCoalescer;                                //@synthesize jobCoalescer=_jobCoalescer - In the implementation block
@property (nonatomic,readonly) PHADirtyChangeCoalescer * dirtyCoalescer;                      //@synthesize dirtyCoalescer=_dirtyCoalescer - In the implementation block
@property (nonatomic,readonly) PHAJobConstraintsObserver * constraintsObserver;               //@synthesize constraintsObserver=_constraintsObserver - In the implementation block
@property (assign,nonatomic) double maxIntervalSinceLastJobReport;                            //@synthesize maxIntervalSinceLastJobReport=_maxIntervalSinceLastJobReport - In the implementation block
@property (nonatomic,readonly) PHAAnalysisStateObserver * stateObserver;                      //@synthesize stateObserver=_stateObserver - In the implementation block
@property (assign,nonatomic,__weak) id<PHAJobCoordinatorDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> maintenanceTimer;                //@synthesize maintenanceTimer=_maintenanceTimer - In the implementation block
@property (nonatomic,readonly) NSDictionary * workersByType;                                  //@synthesize workersByType=_workersByType - In the implementation block
@property (assign,nonatomic) BOOL newConstraintsPending;                                      //@synthesize newConstraintsPending=_newConstraintsPending - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreConstraintChanges;                              //@synthesize shouldIgnoreConstraintChanges=_shouldIgnoreConstraintChanges - In the implementation block
@property (nonatomic,readonly) PHAWorkerHealthMonitor * healthMonitor;                        //@synthesize healthMonitor=_healthMonitor - In the implementation block
@property (nonatomic,readonly) PHAActivityGovernor * activityGovernor;                        //@synthesize activityGovernor=_activityGovernor - In the implementation block
@property (assign,nonatomic) BOOL activityGovernorOverride; 
@property (nonatomic,readonly) PHAJobGenerator * jobGenerator;                                //@synthesize jobGenerator=_jobGenerator - In the implementation block
@property (nonatomic,readonly) PHAWorkerWarmer * warmer;                                      //@synthesize warmer=_warmer - In the implementation block
@property (assign,nonatomic,__weak) PHAManager * manager;                                     //@synthesize manager=_manager - In the implementation block
@property (assign,getter=isTurboMode,nonatomic) BOOL turboMode;                               //@synthesize turboMode=_turboMode - In the implementation block
@property (copy) PHAJobConstraints * currentConstraints;                                      //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (nonatomic,retain) PHAWorkerJob * currentForegroundJob;                             //@synthesize currentForegroundJob=_currentForegroundJob - In the implementation block
@property (nonatomic,readonly) NSMutableArray * waitingForegroundJobs;                        //@synthesize waitingForegroundJobs=_waitingForegroundJobs - In the implementation block
@property (nonatomic,retain) PHAWorkerJob * currentBackgroundJob;                             //@synthesize currentBackgroundJob=_currentBackgroundJob - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> runningJobTransaction;              //@synthesize runningJobTransaction=_runningJobTransaction - In the implementation block
@property (nonatomic,retain) NSMutableSet * workerTypesServicedForUserFG;                     //@synthesize workerTypesServicedForUserFG=_workerTypesServicedForUserFG - In the implementation block
@property (getter=isQuiescent,nonatomic,readonly) BOOL quiescent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManager:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<PHAJobCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PHAJobCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(PHAManager *)manager;
-(void)setManager:(PHAManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)photoLibrary;
-(void)didFinishJob:(id)arg1 ;
-(PHAWorkerHealthMonitor *)healthMonitor;
-(NSDictionary *)workersByType;
-(BOOL)isTurboMode;
-(void)setTurboMode:(BOOL)arg1 ;
-(id)statusAsDictionary;
-(id)_defaultWorkersByType;
-(void)setActivityGovernorOverride:(BOOL)arg1 ;
-(void)_installMaintenanceTimer;
-(id)initWithManager:(id)arg1 initialConstraints:(id)arg2 additionalWorkersByType:(id)arg3 ;
-(id)_inq_runningJobs;
-(PHAJobConstraints *)currentConstraints;
-(BOOL)isQuiescent;
-(PHAWorkerWarmer *)warmer;
-(PHAActivityGovernor *)activityGovernor;
-(BOOL)_inq_isQuiescent;
-(PHAWorkerJob *)currentBackgroundJob;
-(PHAWorkerJob *)currentForegroundJob;
-(id)_workerForJob:(id)arg1 ;
-(void)_inq_handleJobFinished:(id)arg1 ;
-(double)maxIntervalSinceLastJobReport;
-(void)_inq_timeoutJob:(id)arg1 ;
-(void)enforceTimeouts;
-(void)_scheduleNextJob;
-(id)_inq_nextForegroundJobCanRunAutomatic:(BOOL)arg1 canRunUserFG:(BOOL)arg2 canRunImmediate:(BOOL)arg3 ;
-(PHAJobGenerator *)jobGenerator;
-(id)_nextAdditionalJobForWorkerTypeObj:(id)arg1 scenario:(unsigned long long)arg2 ;
-(void)enqueueForegroundJob:(id)arg1 ;
-(void)_inq_launchJob:(id)arg1 ;
-(void)setRunningJobTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_inq_handleNoMoreJobsExpected;
-(void)_dispatchTransactionAsyncWithName:(const char*)arg1 block:(/*^block*/id)arg2 ;
-(void)setCurrentBackgroundJob:(PHAWorkerJob *)arg1 ;
-(void)setCurrentForegroundJob:(PHAWorkerJob *)arg1 ;
-(NSObject*<OS_os_transaction>)runningJobTransaction;
-(NSMutableArray *)waitingForegroundJobs;
-(void)_cleanupStuckAnalysisState;
-(void)_inq_stopJobDueToConstraintOrActivityChange:(id)arg1 ;
-(void)setNewConstraintsPending:(BOOL)arg1 ;
-(BOOL)shouldIgnoreConstraintChanges;
-(void)setCurrentConstraints:(PHAJobConstraints *)arg1 ;
-(void)_inq_reconsiderWantsFGActivityBasedOnConstraints:(id)arg1 ;
-(void)_inq_stopJobsAfterConstraintOrActivityChange;
-(void)_inq_enqueueForegroundJob:(id)arg1 ;
-(void)_inq_enforceTimeoutForJob:(id)arg1 ;
-(PHAJobConstraintsObserver *)constraintsObserver;
-(void)jobCoalescer:(id)arg1 didProduceJob:(id)arg2 ;
-(void)jobConstraintsObserver:(id)arg1 constraintsDidChange:(id)arg2 mask:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)analysisStateObserver:(id)arg1 didChangeAnalysisStateTo:(int)arg2 from:(int)arg3 assetIdentifier:(id)arg4 workerFlags:(int)arg5 workerType:(short)arg6 ;
-(void)coalescer:(id)arg1 didCoalesce:(id)arg2 ;
-(void)governorDidGrantBackgroundAccess:(id)arg1 ;
-(void)governorDidRevokeBackgroundAccess:(id)arg1 ;
-(void)governorDidGrantForegroundAccess:(id)arg1 ;
-(void)governorDidRevokeForegroundAccess:(id)arg1 ;
-(BOOL)activityGovernorOverride;
-(PHAJobCoalescer *)jobCoalescer;
-(PHADirtyChangeCoalescer *)dirtyCoalescer;
-(void)setMaxIntervalSinceLastJobReport:(double)arg1 ;
-(PHAAnalysisStateObserver *)stateObserver;
-(NSObject*<OS_dispatch_source>)maintenanceTimer;
-(BOOL)newConstraintsPending;
-(void)setShouldIgnoreConstraintChanges:(BOOL)arg1 ;
-(NSMutableSet *)workerTypesServicedForUserFG;
-(void)setWorkerTypesServicedForUserFG:(NSMutableSet *)arg1 ;
-(void)shutdown;
@end

