/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/GEODataSession.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class GEODataURLSessionList, NSObject, NSOperationQueue, NSMutableDictionary, GEODataURLSessionTaskQueue, NSString;

@interface GEODataURLSession : NSObject <NSURLSessionDataDelegate, GEODataSession> {

	GEODataURLSessionList* _urlSessions;
	NSObject*<OS_dispatch_queue> _sessionIsolation;
	NSOperationQueue* _sessionIsolationOperationQueue;
	NSMutableDictionary* _sessionTasks;
	GEODataURLSessionTaskQueue* _tileTaskQueue;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	unsigned _nextSessionIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEODataURLSessionList * urlSessions;                            //@synthesize urlSessions=_urlSessions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionIsolation;                  //@synthesize sessionIsolation=_sessionIsolation - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * sessionIsolationOperationQueue;              //@synthesize sessionIsolationOperationQueue=_sessionIsolationOperationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sessionTasks;                             //@synthesize sessionTasks=_sessionTasks - In the implementation block
@property (nonatomic,readonly) GEODataURLSessionTaskQueue * tileTaskQueue; 
@property (assign,nonatomic) unsigned nextSessionIdentifier;                                   //@synthesize nextSessionIdentifier=_nextSessionIdentifier - In the implementation block
-(void)tearDown;
-(id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
-(id)urlSessionForRequest:(id)arg1 ;
-(GEODataURLSessionList *)urlSessions;
-(NSOperationQueue *)sessionIsolationOperationQueue;
-(unsigned)nextSessionIdentifier;
-(void)setNextSessionIdentifier:(unsigned)arg1 ;
-(id)activeSessionIdentifiers;
-(NSMutableDictionary *)sessionTasks;
-(void)pruneInactiveSessions;
-(id)createNewURLSessionWithRequest:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)didReceiveMemmoryPressureWarning;
-(GEODataURLSessionTaskQueue *)tileTaskQueue;
-(void)configureTask:(id)arg1 withRequest:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(void)_configureTask:(id)arg1 withRequest:(id)arg2 ;
-(id)taskForURLSession:(id)arg1 task:(id)arg2 ;
-(id)removeTaskForURLSession:(id)arg1 task:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(NSString *)description;
@end

