/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/CKDURLRequestMetricsDelegate.h>
#import <libobjc.A.dylib/CKDURLRequestAuthRetryDelegate.h>
#import <libobjc.A.dylib/CKDFlowControllable.h>

@protocol OS_os_activity, OS_dispatch_queue, OS_dispatch_group, NSObject;
@class NSString, NSObject, CKDURLRequest, CKTimeLogger, NSDate, CKDClientContext, CKDClientProxy, NSError, CKDOperationMetrics, CKOperationInfo, NSMutableArray, CKOperationResult, CKOperationMMCSRequestOptions, NSNumber;

@interface CKDOperation : NSOperation <CKDURLRequestMetricsDelegate, CKDURLRequestAuthRetryDelegate, CKDFlowControllable> {

	unsigned long long _state;
	NSObject*<OS_os_activity> _osActivity;
	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _useEncryption;
	BOOL _useClearAssetEncryption;
	BOOL _isProxyOperation;
	BOOL _shouldPipelineFetchAllChangesRequests;
	Ai _pcsWaitCount;
	CKDURLRequest* _request;
	CKTimeLogger* _timeLogger;
	NSDate* _startDate;
	CKDOperation* _parentOperation;
	CKDClientContext* _context;
	CKDClientProxy* _proxy;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSError* _error;
	CKDOperationMetrics* _cloudKitMetrics;
	CKDOperationMetrics* _MMCSMetrics;
	NSDate* _metricExecuteStartDate;
	/*^block*/id _requestCompletedBlock;
	CKOperationInfo* _operationInfo;
	NSObject*<OS_dispatch_group> _stateTransitionGroup;
	NSMutableArray* _requestUUIDs;
	NSMutableArray* _childOperations;
	NSMutableArray* _finishedChildOperationIDs;
	id<NSObject> _powerAssertion;
	NSObject*<OS_dispatch_group> _childOperationsGroup;
	NSString* _clientSuppliedDeviceIdentifier;

}

@property (nonatomic,retain) NSMutableArray * requestUUIDs;                                     //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (assign,nonatomic,__weak) CKDOperation * parentOperation;                             //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,retain) NSMutableArray * childOperations;                                  //@synthesize childOperations=_childOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedChildOperationIDs;                        //@synthesize finishedChildOperationIDs=_finishedChildOperationIDs - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) id<NSObject> powerAssertion;                                       //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> childOperationsGroup;                 //@synthesize childOperationsGroup=_childOperationsGroup - In the implementation block
@property (nonatomic,retain) NSString * clientSuppliedDeviceIdentifier;                         //@synthesize clientSuppliedDeviceIdentifier=_clientSuppliedDeviceIdentifier - In the implementation block
@property (nonatomic,retain) CKOperationInfo * operationInfo;                                   //@synthesize operationInfo=_operationInfo - In the implementation block
@property (assign,nonatomic) Ai pcsWaitCount;                                                   //@synthesize pcsWaitCount=_pcsWaitCount - In the implementation block
@property (nonatomic,retain) CKTimeLogger * timeLogger;                                         //@synthesize timeLogger=_timeLogger - In the implementation block
@property (nonatomic,__weak,readonly) CKDOperation * topmostParentOperation; 
@property (nonatomic,retain) CKDClientContext * context;                                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) CKDClientProxy * proxy;                                     //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic) BOOL useEncryption;                                                //@synthesize useEncryption=_useEncryption - In the implementation block
@property (assign,nonatomic) BOOL useClearAssetEncryption;                                      //@synthesize useClearAssetEncryption=_useClearAssetEncryption - In the implementation block
@property (nonatomic,readonly) BOOL isProxyOperation;                                           //@synthesize isProxyOperation=_isProxyOperation - In the implementation block
@property (nonatomic,readonly) BOOL shouldCheckAppVersion; 
@property (nonatomic,readonly) BOOL usesBackgroundSession; 
@property (nonatomic,readonly) BOOL allowsPowerNapScheduling; 
@property (assign,nonatomic) BOOL shouldPipelineFetchAllChangesRequests;                        //@synthesize shouldPipelineFetchAllChangesRequests=_shouldPipelineFetchAllChangesRequests - In the implementation block
@property (nonatomic,readonly) unsigned QOSClass; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                        //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                                  //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                   //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSError * error;                                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) CKDURLRequest * request;                                           //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CKOperationResult * operationResult; 
@property (nonatomic,retain) CKDOperationMetrics * cloudKitMetrics;                             //@synthesize cloudKitMetrics=_cloudKitMetrics - In the implementation block
@property (nonatomic,retain) CKDOperationMetrics * MMCSMetrics;                                 //@synthesize MMCSMetrics=_MMCSMetrics - In the implementation block
@property (nonatomic,retain) NSDate * metricExecuteStartDate;                                   //@synthesize metricExecuteStartDate=_metricExecuteStartDate - In the implementation block
@property (nonatomic,copy) id requestCompletedBlock;                                            //@synthesize requestCompletedBlock=_requestCompletedBlock - In the implementation block
@property (nonatomic,readonly) NSString * operationID; 
@property (nonatomic,readonly) BOOL isLongLived; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@property (nonatomic,readonly) CKOperationMMCSRequestOptions * MMCSRequestOptions; 
@property (nonatomic,readonly) BOOL allowsCellularAccess; 
@property (nonatomic,readonly) NSString * sourceApplicationBundleIdentifier; 
@property (nonatomic,readonly) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,readonly) NSString * authPromptReason; 
@property (nonatomic,readonly) BOOL preferAnonymousRequests; 
@property (nonatomic,readonly) BOOL allowsBackgroundNetworking; 
@property (nonatomic,readonly) double timeoutIntervalForRequest; 
@property (nonatomic,readonly) double timeoutIntervalForResource; 
@property (nonatomic,readonly) NSString * operationGroupID; 
@property (nonatomic,readonly) NSString * operationGroupName; 
@property (nonatomic,readonly) NSNumber * operationGroupQuantityNumber; 
@property (nonatomic,readonly) BOOL shouldSkipZonePCSUpdate; 
@property (nonatomic,readonly) unsigned long long networkServiceType; 
@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> stateTransitionGroup;                 //@synthesize stateTransitionGroup=_stateTransitionGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * flowControlKey; 
+(id)_globalOperationCallbackQueueForQOS:(long long)arg1 ;
+(long long)isPredominatelyDownload;
-(BOOL)allowsPowerNapScheduling;
-(unsigned long long)networkServiceType;
-(NSDate *)startDate;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSError *)error;
-(BOOL)allowsCellularAccess;
-(void)setError:(NSError *)arg1 ;
-(void)setRequest:(CKDURLRequest *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)cancel;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(CKDURLRequest *)request;
-(CKDClientContext *)context;
-(void)start;
-(void)main;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientProxy *)proxy;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(BOOL)isConcurrent;
-(double)timeoutIntervalForResource;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(double)timeoutIntervalForRequest;
-(CKDOperation *)parentOperation;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 operationConfigurationBlock:(/*^block*/id)arg3 ;
-(CKOperationInfo *)operationInfo;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(void)_setIsFinished:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setRequestCompletedBlock:(id)arg1 ;
-(BOOL)isLongLived;
-(BOOL)usesBackgroundSession;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(CKOperationResult *)operationResult;
-(id)statusReportWithIndent:(unsigned long long)arg1 ;
-(CKTimeLogger *)timeLogger;
-(BOOL)useEncryption;
-(void)setTimeLogger:(CKTimeLogger *)arg1 ;
-(void)_ensureOperationGroup;
-(void)setCloudKitMetrics:(CKDOperationMetrics *)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(CKDOperation *)topmostParentOperation;
-(NSObject*<OS_dispatch_group>)stateTransitionGroup;
-(unsigned)QOSClass;
-(NSString *)clientSuppliedDeviceIdentifier;
-(CKOperationMMCSRequestOptions *)MMCSRequestOptions;
-(NSString *)authPromptReason;
-(BOOL)preferAnonymousRequests;
-(BOOL)allowsBackgroundNetworking;
-(id)additionalRequestHTTPHeaders;
-(BOOL)shouldSkipZonePCSUpdate;
-(NSString *)operationGroupID;
-(BOOL)isWaitingOnPCS;
-(NSMutableArray *)requestUUIDs;
-(NSMutableArray *)finishedChildOperationIDs;
-(NSMutableArray *)childOperations;
-(NSString *)operationGroupName;
-(NSNumber *)operationGroupQuantityNumber;
-(CKDOperationMetrics *)MMCSMetrics;
-(id)_stateFlags;
-(void)setMMCSMetrics:(CKDOperationMetrics *)arg1 ;
-(CKDOperationMetrics *)cloudKitMetrics;
-(void)setParentOperation:(CKDOperation *)arg1 ;
-(void)setUseEncryption:(BOOL)arg1 ;
-(id)requestCompletedBlock;
-(void)combineMetricsWithOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)childOperationsGroup;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 clientContext:(id)arg4 operationConfigurationBlock:(/*^block*/id)arg5 ;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(/*^block*/id)arg4 ;
-(void)_acquirePowerAssertion;
-(void)_registerAttemptForOperation;
-(BOOL)isProxyOperation;
-(void)_determineNetworkServiceType;
-(void)_continueOperationStart;
-(id)activityCreate;
-(void)setMetricExecuteStartDate:(NSDate *)arg1 ;
-(NSDate *)metricExecuteStartDate;
-(void)_reallyStart;
-(BOOL)operationShouldBeFlowControlled;
-(BOOL)shouldCheckAppVersion;
-(BOOL)_checkAppVersion;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg1 ;
-(void)_dropPowerAssertion;
-(BOOL)_errorShouldImpactFlowControl:(id)arg1 ;
-(BOOL)makeStateTransition;
-(void)makeStateTransition:(BOOL)arg1 ;
-(void)_dropPowerAssertionsForSelfAndParent;
-(void)_acquirePowerAssertionsForSelfAndParent;
-(NSString *)flowControlKey;
-(id)ckShortDescription;
-(void)configureRequest:(id)arg1 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(id)_runDurationString;
-(id)_startDateString;
-(id)CKStatusReportProperties;
-(id)CKStatusReportLogGroups;
-(void)request:(id)arg1 didFinishWithMetrics:(id)arg2 w3cNavigationTiming:(id)arg3 ;
-(void)requestDidBeginWaitingForUserAuth:(id)arg1 ;
-(void)requestDidEndWaitingForUserAuth:(id)arg1 ;
-(id)createSerialQueue;
-(id)createInactiveSerialQueue;
-(id)createConcurrentQueue;
-(id)createInactiveConcurrentQueue;
-(void)noteOperationWillWaitOnPCS;
-(void)noteOperationDidFinishWaitingOnPCS;
-(BOOL)useClearAssetEncryption;
-(void)setUseClearAssetEncryption:(BOOL)arg1 ;
-(BOOL)shouldPipelineFetchAllChangesRequests;
-(void)setShouldPipelineFetchAllChangesRequests:(BOOL)arg1 ;
-(void)setOperationInfo:(CKOperationInfo *)arg1 ;
-(void)setStateTransitionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRequestUUIDs:(NSMutableArray *)arg1 ;
-(void)setChildOperations:(NSMutableArray *)arg1 ;
-(void)setFinishedChildOperationIDs:(NSMutableArray *)arg1 ;
-(void)setChildOperationsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setClientSuppliedDeviceIdentifier:(NSString *)arg1 ;
-(Ai)pcsWaitCount;
-(void)setPcsWaitCount:(Ai)arg1 ;
-(NSString *)operationID;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(id<NSObject>)powerAssertion;
-(void)setPowerAssertion:(id<NSObject>)arg1 ;
@end

