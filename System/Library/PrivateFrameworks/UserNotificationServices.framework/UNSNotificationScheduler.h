/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationCenterObserver.h>

@protocol UNSNotificationSchedulerDelegate;
@class NSString, UNUserNotificationCenter;

@interface UNSNotificationScheduler : NSObject <UNUserNotificationCenterObserver> {

	NSString* _bundleIdentifier;
	id<UNSNotificationSchedulerDelegate> _delegate;
	UNUserNotificationCenter* _userNotificationCenter;

}

@property (nonatomic,retain) UNUserNotificationCenter * userNotificationCenter;                 //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<UNSNotificationSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userNotificationCenter:(id)arg1 didDeliverNotifications:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didChangePendingNotificationRequests:(id)arg2 ;
-(id)init;
-(id<UNSNotificationSchedulerDelegate>)delegate;
-(void)setDelegate:(id<UNSNotificationSchedulerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)setScheduledLocalNotifications:(id)arg1 ;
-(id)scheduledLocalNotifications;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)scheduledLocalNotificationsWithResult:(/*^block*/id)arg1 ;
-(void)addScheduledLocalNotifications:(id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)_addScheduledLocalNotifications:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)snoozeScheduledLocalNotifications:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cancelScheduledLocalNotifications:(id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)_cancelScheduledLocalNotifications:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addScheduledLocalNotifications:(id)arg1 ;
-(void)snoozeScheduledLocalNotifications:(id)arg1 ;
-(void)cancelScheduledLocalNotifications:(id)arg1 ;
-(void)cancelAllScheduledLocalNotifications;
-(void)setUserNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(UNUserNotificationCenter *)userNotificationCenter;
@end

