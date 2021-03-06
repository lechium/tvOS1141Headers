/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, UNSNotificationRepositoryDelegate;
@class FBSSystemService, UNSKeyedDataStoreRepository, UNSKeyedObservable, NSObject;

@interface UNSNotificationRepository : NSObject {

	FBSSystemService* _systemService;
	UNSKeyedDataStoreRepository* _repository;
	UNSKeyedObservable* _observable;
	NSObject*<OS_dispatch_queue> _queue;
	id<UNSNotificationRepositoryDelegate> _delegate;

}

@property (assign,nonatomic) id<UNSNotificationRepositoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)performMigration;
-(id<UNSNotificationRepositoryDelegate>)delegate;
-(void)setDelegate:(id<UNSNotificationRepositoryDelegate>)arg1 ;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)notificationRecordsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)saveNotificationRecord:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithSystemService:(id)arg1 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeStoreForBundleIdentifier:(id)arg1 ;
-(void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_directory;
-(id)_pathExtension;
-(long long)_maxObjectsPerKey;
-(id)initWithSystemService:(id)arg1 dataStoreRepository:(id)arg2 observable:(id)arg3 ;
-(id)_queue_notificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_saveNotificationRecord:(id)arg1 withOptions:(unsigned long long)arg2 forBundleIdentifier:(id)arg3 ;
-(void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeNotificationRecordsPassingTest:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_performMigration;
-(id)_notificationsForObjects:(id)arg1 ;
-(void)_logNotification:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 replacementNotifications:(id)arg3 removedNotifications:(id)arg4 forBundleIdentifier:(id)arg5 ;
-(void)_queue_getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_queue_setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_setBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(void)removeNotificationRepository;
@end

