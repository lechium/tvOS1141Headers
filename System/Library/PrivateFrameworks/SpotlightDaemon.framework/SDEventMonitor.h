/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SDEventMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _eventHandlers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventHandlers;              //@synthesize eventHandlers=_eventHandlers - In the implementation block
+(id)sharedInstance;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableDictionary *)eventHandlers;
-(void)_startMonitoringEventsForStream:(unsigned long long)arg1 ;
-(void)startMonitoringEvents;
-(void)registerHandler:(/*^block*/id)arg1 forEventName:(id)arg2 ;
-(void)unregisterHandler:(/*^block*/id)arg1 forEventName:(id)arg2 ;
-(void)setEventHandlers:(NSMutableDictionary *)arg1 ;
@end

