/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMEventNotificationQueueDelegate.h>

@class IMAutomaticEventNotificationQueue, IMEventListenerList, NSMutableArray, NSString;

@interface IMEventNotificationManager : NSObject <IMEventNotificationQueueDelegate> {

	IMAutomaticEventNotificationQueue* _notificationQueue;
	double _eventTimeout;
	IMEventListenerList* _eventListeners;
	NSMutableArray* _registeredNotificationQueues;
	long long _busyCount;

}

@property (nonatomic,readonly) IMAutomaticEventNotificationQueue * notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) IMEventListenerList * eventListeners;                               //@synthesize eventListeners=_eventListeners - In the implementation block
@property (nonatomic,readonly) NSMutableArray * registeredNotificationQueues;                      //@synthesize registeredNotificationQueues=_registeredNotificationQueues - In the implementation block
@property (assign) long long busyCount;                                                            //@synthesize busyCount=_busyCount - In the implementation block
@property (assign) double eventTimeout;                                                            //@synthesize eventTimeout=_eventTimeout - In the implementation block
@property (getter=isBusy,readonly) BOOL busy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isBusy;
-(long long)busyCount;
-(void)setBusyCount:(long long)arg1 ;
-(void)registerEventListener:(id)arg1 ;
-(void)registerNotificationQueue:(id)arg1 ;
-(void)eventListenerDidFinish:(id)arg1 ;
-(void)cancelAllEventNotifications;
-(void)eventNotificationQueue:(id)arg1 didChangeBusyState:(BOOL)arg2 ;
-(void)cancelEventNotificationsForEventHandler:(id)arg1 ;
-(void)pauseEventNotifications:(BOOL)arg1 ;
-(void)pushNotificationForEventHandler:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)appendNotificationForEventHandler:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)pushNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(void)appendNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(double)eventTimeout;
-(void)setEventTimeout:(double)arg1 ;
-(IMEventListenerList *)eventListeners;
-(NSMutableArray *)registeredNotificationQueues;
-(id)createEventListenerForNotificationName:(id)arg1 object:(id)arg2 ;
-(IMAutomaticEventNotificationQueue *)notificationQueue;
@end

