/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UNUserNotificationServerProtocol <NSObject>
@required
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)setObservingUserNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2;
-(void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)addNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1;
-(void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1;
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end

