/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataXPCSessionTaskQueueTask.h>
#import <libobjc.A.dylib/GEOStateCapturing.h>
#import <libobjc.A.dylib/GEODataSessionTask.h>
#import <libobjc.A.dylib/GEODataSessionUpdatableTask.h>

@protocol GEODataSessionTaskDelegate, OS_dispatch_queue, OS_os_activity, OS_voucher, NSObject;
@class NSError, GEODataXPCSession, NSObject, GEODataRequest, NSData, NSString, GEOClientMetrics;

@interface GEODataXPCSessionTask : NSObject <GEODataXPCSessionTaskQueueTask, GEOStateCapturing, GEODataSessionTask, GEODataSessionUpdatableTask> {

	GEODataXPCSession* _session;
	id<GEODataSessionTaskDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _sessionIsolation;
	GEODataRequest* _request;
	NSData* _receivedData;
	NSError* _error;
	unsigned long long _stateCaptureHandle;
	double _startTime;
	double _endTime;
	unsigned _taskIdentifier;
	NSObject*<OS_os_activity> _activity;
	NSObject*<OS_voucher> _voucher;
	float _priority;
	BOOL _canceled;
	BOOL _didNotifyDelegate;
	id<NSObject> _parsedResponse;

}

@property (nonatomic,readonly) unsigned taskQueue; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcRequest; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionIsolation; 
@property (nonatomic,readonly) BOOL isCancelled; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity; 
@property (nonatomic,readonly) float taskQueuePriority; 
@property (nonatomic,readonly) double timeoutInterval; 
@property (readonly) double elapsedTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;                            //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionIsolation;                 //@synthesize sessionIsolation=_sessionIsolation - In the implementation block
@property (nonatomic,__weak,readonly) GEODataXPCSession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,__weak,readonly) id<GEODataSessionTaskDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic) BOOL didNotifyDelegate;                                          //@synthesize didNotifyDelegate=_didNotifyDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long xpcRequestIdentifier; 
@property (nonatomic,readonly) NSData * receivedData;                                         //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,readonly) BOOL failedDueToCancel; 
@property (nonatomic,readonly) GEODataRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL protocolBufferHasPreamble; 
@property (nonatomic,readonly) unsigned taskIdentifier;                                       //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign) float priority; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) id<NSObject> parsedResponse; 
-(NSObject*<OS_xpc_object>)xpcRequest;
-(GEOClientMetrics *)clientMetrics;
-(unsigned long long)outgoingPayloadSize;
-(NSData *)receivedData;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(NSError *)error;
-(NSString *)remoteAddressAndPort;
-(BOOL)protocolBufferHasPreamble;
-(unsigned long long)incomingPayloadSize;
-(unsigned)taskIdentifier;
-(BOOL)failedDueToCancel;
-(id<NSObject>)parsedResponse;
-(GEODataXPCSession *)session;
-(double)timeoutInterval;
-(id)initWithSession:(id)arg1 request:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(void)setError:(NSError *)arg1 ;
-(void)setParsedResponse:(id<NSObject>)arg1 ;
-(unsigned long long)xpcRequestIdentifier;
-(unsigned long long)updateXPCRequestIdentifier;
-(BOOL)didNotifyDelegate;
-(void)setDidNotifyDelegate:(BOOL)arg1 ;
-(void)notifyDelegate;
-(void)willSendTask:(/*^block*/id)arg1 ;
-(void)processResult:(int)arg1 xpcReply:(id)arg2 error:(id)arg3 ;
-(float)taskQueuePriority;
-(void)processXPCReply:(id)arg1 error:(id)arg2 ;
-(void)processTaskCancelled;
-(void)processTaskTimeout;
-(BOOL)processReplyXPCDictionary:(id)arg1 ;
-(void)_finishAndNotifyDelegate;
-(BOOL)processFailedReplyXPCDictionary:(id)arg1 ;
-(id)captureStateWithHints:(os_state_hints_s*)arg1 ;
-(id)init;
-(unsigned)taskQueue;
-(void)cancel;
-(id<GEODataSessionTaskDelegate>)delegate;
-(void)dealloc;
-(GEODataRequest *)request;
-(void)setPriority:(float)arg1 ;
-(float)priority;
-(void)start;
-(BOOL)isCancelled;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSObject*<OS_os_activity>)activity;
-(double)elapsedTime;
@end
