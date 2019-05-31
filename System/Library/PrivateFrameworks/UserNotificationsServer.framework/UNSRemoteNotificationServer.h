/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol _DASActivityScheduler, OS_dispatch_queue, UNSRemoteNotificationServerObserver;
@class UNSNotificationRepository, UNSNotificationSettingsService, UNSAttachmentsService, NSObject, NSMutableSet, NSSet, NSMutableDictionary, NSString;

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate> {

	UNSNotificationRepository* _notificationRepository;
	UNSNotificationSettingsService* _notificationSettingsService;
	UNSAttachmentsService* _attachmentsService;
	id<_DASActivityScheduler> _duetActivityScheduler;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _extensionQueue;
	NSObject*<OS_dispatch_queue> _apsQueue;
	NSMutableSet* _foregroundBundleIdentifiers;
	NSMutableSet* _runningBundleIdentifiers;
	NSMutableSet* _userNotificationEnabledBundleIdentifiers;
	NSSet* _backgroundAppRefreshBlackList;
	NSMutableDictionary* _bundleIdentifiersToClients;
	NSMutableDictionary* _bundleIdentifiersToAppDescriptions;
	NSMutableDictionary* _environmentsToConnections;
	NSMutableSet* _bundleIdentifiersNeedingToken;
	id<UNSRemoteNotificationServerObserver> _observer;

}

@property (assign,nonatomic) id<UNSRemoteNotificationServerObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_environmentFromAuditToken:(SCD_Struct_UN1*)arg1 ;
+(id)_newPushServiceConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3 ;
+(id)environmentFromAuditToken:(SCD_Struct_UN1*)arg1 ;
-(void)dealloc;
-(void)setObserver:(id<UNSRemoteNotificationServerObserver>)arg1 ;
-(id<UNSRemoteNotificationServerObserver>)observer;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)_initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 queue:(id)arg4 extensionQueue:(id)arg5 apsQueue:(id)arg6 duetActivityScheduler:(id)arg7 ;
-(void)_queue_reloadBackgroundAppRefreshBlackList;
-(void)_queue_calculateTopics;
-(void)_queue_applicationsDidAuthorizeNotificationSettings:(id)arg1 ;
-(void)_queue_applicationsDidDenyNotificationSettings:(id)arg1 ;
-(void)_queue_didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)_queue_appDescriptionForBundleIdentifier:(id)arg1 ;
-(BOOL)_queue_isPushedEnabledForApplication:(id)arg1 ;
-(void)_queue_didReceiveIncomingMessage:(id)arg1 ;
-(BOOL)_queue_canDeliverMessageToBundle:(id)arg1 ;
-(void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 ;
-(void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 ;
-(void)_queue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extension:(id)arg4 ;
-(void)_scheduleContentAvailablePushActivityForMessage:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_queue_addApplicationDescriptions:(id)arg1 ;
-(void)_queue_invalidateTokenForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeClientForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeAppDescriptionForBundleIdentifier:(id)arg1 ;
-(void)_queue_setBackgroundAppRefreshAllowed:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_queue_allTopicsForApplication:(id)arg1 ;
-(BOOL)_queue_isApplicationForeground:(id)arg1 ;
-(void)_queue_applicationDidBecomeForeground:(id)arg1 ;
-(void)_queue_applicationDidBecomeBackground:(id)arg1 ;
-(BOOL)_queue_isApplicationRunning:(id)arg1 ;
-(void)_queue_applicationDidLaunch:(id)arg1 ;
-(void)_queue_applicationDidTerminate:(id)arg1 ;
-(void)_queue_moveTopicsForApplication:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3 ;
-(BOOL)_queue_isContentAvailableRemoteNotificationSupportedForBundleIdentifier:(id)arg1 ;
-(BOOL)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1 ;
-(BOOL)_queue_isUserNotificationEnabledForApplication:(id)arg1 ;
-(void)_queue_userNotificationsChangedStateForBundleIdentifier:(id)arg1 becameEnabled:(BOOL)arg2 ;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2 appWantsPush:(BOOL)arg3 ;
-(void)_queue_requestTokenForClient:(id)arg1 withBundleIdentifier:(id)arg2 ;
-(void)_queue_backgroundRefreshApplicationsDidChange;
-(id)initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 ;
-(void)applicationsDidAuthorizeNotificationSettings:(id)arg1 ;
-(void)applicationsDidDenyNotificationSettings:(id)arg1 ;
-(void)didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)_queue_isUserNotificationEnabled:(id)arg1 ;
-(void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)backgroundRefreshApplicationsDidChange;
-(void)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
@end

