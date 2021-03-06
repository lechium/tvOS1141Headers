/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSQueryPerformerProtocol, OS_dispatch_source, OS_dispatch_queue, OS_os_log;
@class NSObject, PGGeoServiceThread;

@interface CLSQueryHandler : NSObject {

	id<CLSQueryPerformerProtocol> _query;
	double _internalProgressTimeInterval;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _retryLevel;
	double _nextRetryTime;
	BOOL _alreadyLaunched;
	BOOL _didQueryFinish;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_os_log> _loggingConnection;
	BOOL _simulatesTimeout;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	PGGeoServiceThread* _geoServiceThread;
	double _timeoutInterval;
	double _numberOfRetries;

}

@property (assign,getter=isSimulatingTimeout,nonatomic) BOOL simulatesTimeout;              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
@property (nonatomic,copy) id progressBlock;                                                //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) PGGeoServiceThread * geoServiceThread;                         //@synthesize geoServiceThread=_geoServiceThread - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) double numberOfRetries;                                        //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
-(double)timeoutInterval;
-(void)_handleError:(id)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)cancel;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)_cancel;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)_heartBeat;
-(void)_startQuery;
-(unsigned long long)_cacheMapItems:(id)arg1 ;
-(BOOL)isSimulatingTimeout;
-(void)_handleQueryResultsForQuery:(id)arg1 items:(id)arg2 error:(id)arg3 ;
-(void)_forwardToGeoThread;
-(id)initWithQueryPerformer:(id)arg1 geoServiceThread:(id)arg2 loggingConnection:(id)arg3 ;
-(void)cacheItems;
-(PGGeoServiceThread *)geoServiceThread;
-(void)setGeoServiceThread:(PGGeoServiceThread *)arg1 ;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
-(double)numberOfRetries;
-(void)setNumberOfRetries:(double)arg1 ;
@end

