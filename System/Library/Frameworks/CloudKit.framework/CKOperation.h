/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_os_transaction, OS_voucher, OS_os_activity, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, CKOperationConfiguration, CKOperationGroup, NSString, NSError, NSMutableArray, NSMutableDictionary, CKPlaceholderOperation, CKTimeLogger, CKOperationMetrics, CKOperationMMCSRequestOptions, CKOperationInfo, NSDictionary, NSArray;

@interface CKOperation : NSOperation {

	NSObject*<OS_os_transaction> _isExecuting;
	NSObject*<OS_voucher> _clientVoucher;
	NSObject*<OS_os_activity> _osActivity;
	BOOL _isOutstandingOperation;
	BOOL _isFinished;
	BOOL _clouddConnectionInterrupted;
	BOOL _queueHasStarted;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CKOperationConfiguration* _resolvedConfiguration;
	/*^block*/id _longLivedOperationWasPersistedBlock;
	/*^block*/id _requestCompletedBlock;
	CKOperationConfiguration* _configuration;
	CKOperationGroup* _group;
	NSString* _operationID;
	NSObject*<OS_dispatch_source> _timeoutSource;
	long long _usesBackgroundSessionOverride;
	NSError* _cancelError;
	NSMutableArray* _savedRequestUUIDs;
	NSMutableDictionary* _savedResponseHTTPHeadersByRequestUUID;
	NSMutableDictionary* _savedW3CNavigationTimingByRequestUUID;
	CKPlaceholderOperation* _placeholderOperation;
	NSError* _error;
	NSString* _sectionID;
	NSString* _parentSectionID;
	id _context;
	CKTimeLogger* _timeLogger;
	CKOperationMetrics* _metrics;
	NSString* _deviceIdentifier;
	CKOperationMMCSRequestOptions* _MMCSRequestOptions;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutSource;                              //@synthesize timeoutSource=_timeoutSource - In the implementation block
@property (assign,nonatomic) long long usesBackgroundSessionOverride;                                  //@synthesize usesBackgroundSessionOverride=_usesBackgroundSessionOverride - In the implementation block
@property (assign,nonatomic) BOOL isOutstandingOperation;                                              //@synthesize isOutstandingOperation=_isOutstandingOperation - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundSession; 
@property (nonatomic,retain) NSError * cancelError;                                                    //@synthesize cancelError=_cancelError - In the implementation block
@property (nonatomic,retain) NSMutableArray * savedRequestUUIDs;                                       //@synthesize savedRequestUUIDs=_savedRequestUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * savedResponseHTTPHeadersByRequestUUID;              //@synthesize savedResponseHTTPHeadersByRequestUUID=_savedResponseHTTPHeadersByRequestUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * savedW3CNavigationTimingByRequestUUID;              //@synthesize savedW3CNavigationTimingByRequestUUID=_savedW3CNavigationTimingByRequestUUID - In the implementation block
@property (nonatomic,readonly) CKOperationConfiguration * resolvedConfiguration;                       //@synthesize resolvedConfiguration=_resolvedConfiguration - In the implementation block
@property (retain) CKPlaceholderOperation * placeholderOperation;                                      //@synthesize placeholderOperation=_placeholderOperation - In the implementation block
@property (nonatomic,copy) NSString * operationID;                                                     //@synthesize operationID=_operationID - In the implementation block
@property (assign,nonatomic) BOOL isExecuting; 
@property (assign,nonatomic) BOOL isFinished;                                                          //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL clouddConnectionInterrupted;                                         //@synthesize clouddConnectionInterrupted=_clouddConnectionInterrupted - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                                                     //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) NSString * parentSectionID;                                             //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (nonatomic,readonly) id context;                                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CKTimeLogger * timeLogger;                                                //@synthesize timeLogger=_timeLogger - In the implementation block
@property (nonatomic,readonly) CKOperationInfo * operationInfo; 
@property (nonatomic,retain) CKOperationMetrics * metrics;                                             //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,copy) id requestCompletedBlock;                                                   //@synthesize requestCompletedBlock=_requestCompletedBlock - In the implementation block
@property (assign) BOOL queueHasStarted;                                                               //@synthesize queueHasStarted=_queueHasStarted - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier; 
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier; 
@property (assign,nonatomic) BOOL preferAnonymousRequests; 
@property (assign,nonatomic) BOOL allowsBackgroundNetworking; 
@property (nonatomic,retain) NSDictionary * additionalRequestHTTPHeaders; 
@property (nonatomic,readonly) NSArray * requestUUIDs; 
@property (nonatomic,readonly) NSDictionary * responseHTTPHeadersByRequestUUID; 
@property (nonatomic,readonly) NSDictionary * w3cNavigationTimingByRequestUUID; 
@property (nonatomic,retain) NSString * deviceIdentifier;                                              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) CKOperationMMCSRequestOptions * MMCSRequestOptions;                       //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> osActivity;                                     //@synthesize osActivity=_osActivity - In the implementation block
@property (nonatomic,retain) id clientVoucher;                                                         //@synthesize clientVoucher=_clientVoucher - In the implementation block
@property (nonatomic,copy) CKOperationConfiguration * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) CKOperationGroup * group;                                                 //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) id longLivedOperationWasPersistedBlock;                                     //@synthesize longLivedOperationWasPersistedBlock=_longLivedOperationWasPersistedBlock - In the implementation block
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSError *)error;
-(BOOL)allowsCellularAccess;
-(void)setError:(NSError *)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSError *)cancelError;
-(id)daemon;
-(NSString *)deviceIdentifier;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)setMetrics:(CKOperationMetrics *)arg1 ;
-(id)context;
-(void)_start;
-(id)container;
-(void)setContainer:(id)arg1 ;
-(void)start;
-(void)setConfiguration:(CKOperationConfiguration *)arg1 ;
-(NSString *)sectionID;
-(void)main;
-(CKOperationConfiguration *)configuration;
-(void)setGroup:(CKOperationGroup *)arg1 ;
-(CKOperationGroup *)group;
-(void)setSectionID:(NSString *)arg1 ;
-(CKOperationMetrics *)metrics;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)queueHasStarted;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(CKOperationConfiguration *)resolvedConfiguration;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
-(void)setQueueHasStarted:(BOOL)arg1 ;
-(NSObject*<OS_os_activity>)osActivity;
-(BOOL)_wantsFlowControl;
-(void)setSavedRequestUUIDs:(NSMutableArray *)arg1 ;
-(void)setSavedResponseHTTPHeadersByRequestUUID:(NSMutableDictionary *)arg1 ;
-(void)setSavedW3CNavigationTimingByRequestUUID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)savedRequestUUIDs;
-(NSMutableDictionary *)savedResponseHTTPHeadersByRequestUUID;
-(NSMutableDictionary *)savedW3CNavigationTimingByRequestUUID;
-(void)_handleStatisticsCallback:(id)arg1 ;
-(void)_handleCheckpointCallback:(id)arg1 ;
-(void)setPlaceholderOperation:(CKPlaceholderOperation *)arg1 ;
-(CKPlaceholderOperation *)placeholderOperation;
-(void)setIsOutstandingOperation:(BOOL)arg1 ;
-(void)setLongLived:(BOOL)arg1 ;
-(NSString *)parentSectionID;
-(Class)operationInfoClass;
-(void)setCancelError:(NSError *)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutSource;
-(void)setTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_uninstallTimeoutSource;
-(id)_findBestThrottleError:(id)arg1 ;
-(void)_installTimeoutSource;
-(void)_handleRemoteProxyFailureWithError:(id)arg1 ;
-(long long)usesBackgroundSessionOverride;
-(void)setUsesBackgroundSessionOverride:(long long)arg1 ;
-(id)longLivedOperationWasPersistedBlock;
-(void)setClouddConnectionInterrupted:(BOOL)arg1 ;
-(void)processOperationResult:(id)arg1 ;
-(void)setLongLivedOperationWasPersistedBlock:(id)arg1 ;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)responseHTTPHeadersByRequestUUID;
-(NSDictionary *)w3cNavigationTimingByRequestUUID;
-(BOOL)clouddConnectionInterrupted;
-(void)setOsActivity:(NSObject*<OS_os_activity>)arg1 ;
-(id)clientVoucher;
-(void)setClientVoucher:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(BOOL)isConcurrent;
-(double)timeoutIntervalForResource;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(double)timeoutIntervalForRequest;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)cancelWithUnderlyingError:(id)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(CKOperationInfo *)operationInfo;
-(Class)operationClass;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(void)_setIsFinished:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setRequestCompletedBlock:(id)arg1 ;
-(BOOL)isLongLived;
-(BOOL)isOutstandingOperation;
-(BOOL)usesBackgroundSession;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setOperationID:(NSString *)arg1 ;
-(CKTimeLogger *)timeLogger;
-(void)setTimeLogger:(CKTimeLogger *)arg1 ;
-(CKOperationMMCSRequestOptions *)MMCSRequestOptions;
-(BOOL)preferAnonymousRequests;
-(BOOL)allowsBackgroundNetworking;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(NSArray *)requestUUIDs;
-(void)setMMCSRequestOptions:(CKOperationMMCSRequestOptions *)arg1 ;
-(id)requestCompletedBlock;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg1 ;
-(void)setUsesBackgroundSession:(BOOL)arg1 ;
-(long long)qualityOfService;
-(NSString *)operationID;
@end

