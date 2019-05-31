/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSMetricsConfiguration, NSObject, NSTimer;

@interface SSMetricsController : NSObject {

	SSXPCConnection* _connection;
	SSMetricsConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _flushSerialQueue;
	BOOL _flushTimerEnabled;
	BOOL _flushOnForeground;
	NSTimer* _flushEventsTimer;

}

@property (assign,getter=isFlushTimerEnabled,nonatomic) BOOL flushTimerEnabled;              //@synthesize flushTimerEnabled=_flushTimerEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(id)configuration;
-(id)pingURLs;
-(void)recordAnalyticsForMetricsDialogEvent:(id)arg1 withTopic:(id)arg2 ;
-(void)_applicationWillEnterForeground;
-(id)_userType;
-(id)_cookieValuesForConfiguration:(id)arg1 ;
-(void)_flushUnreportedEventsIfEnabled;
-(void)_handleFlushTimer;
-(void)_setupFlushTimer;
-(void)insertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_enumerateFieldValuesWithMap:(id)arg1 fieldData:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)_valueForField:(id)arg1 withFieldData:(id)arg2 ;
-(id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3 ;
-(BOOL)isFlushTimerEnabled;
-(void)setPageConfiguration:(id)arg1 ;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setFlushTimerEnabled:(BOOL)arg1 ;
-(void)setGlobalConfiguration:(id)arg1 ;
-(id)_connection;
-(BOOL)isDisabled;
-(id)serialQueue;
@end
