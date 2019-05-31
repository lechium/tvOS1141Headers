/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationServiceConnectionObserver.h>

@protocol UNUserNotificationCenterDelegate;
@class NSString, NSMutableArray;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver> {

	id<UNUserNotificationCenterDelegate> _delegate;
	NSString* _bundleIdentifier;
	NSMutableArray* _observers;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) id<UNUserNotificationCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsContentExtensions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentNotificationCenter;
+(BOOL)supportsContentExtensions;
-(void)setNotificationRequests:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeSimilarNotificationRequests:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)addNotificationRequest:(id)arg1 ;
-(void)addNotificationRequests:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 ;
-(void)getDeliveredNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 ;
-(void)removeAllDeliveredNotifications;
-(id)init;
-(id<UNUserNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id<UNUserNotificationCenterDelegate>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getBadgeNumberWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setNotificationCategories:(id)arg1 ;
-(void)getNotificationCategoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getNotificationSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeSimilarNotificationRequests:(id)arg1 ;
-(void)removeAllPendingNotificationRequests;
-(void)setNotificationRequests:(id)arg1 ;
-(void)getPendingNotificationRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithBundleProxy:(id)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(BOOL)supportsContentExtensions;
-(void)didChangePendingNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)didDeliverNotifications:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

