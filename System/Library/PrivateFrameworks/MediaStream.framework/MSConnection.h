/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject;

@interface MSConnection : NSObject {

	NSXPCConnection* _center;
	NSXPCConnection* _noWakeCenter;
	NSMutableDictionary* _serverSideConfig;
	NSObject*<OS_dispatch_queue> _serverSideConfigQueue;
	int _serverSideConfigNotificationToken;

}
+(id)sharedConnection;
-(id)init;
-(void)dealloc;
-(BOOL)isBusy;
-(id)pause;
-(void)checkForOutstandingActivities;
-(void)refreshServerSideConfigurationForPersonID:(id)arg1 ;
-(id)_machErrorWithUnderlyingError:(id)arg1 ;
-(void)_waitForMessageToBeSent;
-(void)handleSubscriptionPushForPersonID:(id)arg1 ;
-(void)abortActivitiesForPersonID:(id)arg1 ;
-(BOOL)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(void)pollForSubscriptionUpdatesForPersonID:(id)arg1 ;
-(id)serverSideConfigurationForPersonID:(id)arg1 ;
-(void)forgetPersonID:(id)arg1 ;
-(void)resetServerStateForPersonID:(id)arg1 ;
-(void)resume:(id)arg1 ;
-(void)deleteAssetCollections:(id)arg1 personID:(id)arg2 ;
-(void)isBusyCompletionBlock:(/*^block*/id)arg1 ;
@end

