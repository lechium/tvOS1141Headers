/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, PSSSSubscriptionManagerInternal;

@interface WLKAppLibraryCore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	PSSSSubscriptionManagerInternal* _subscriptionManager;

}
+(id)sharedInstance;
-(id)init;
-(id)_connection;
-(void)_fetchApplicationsInProcess:(/*^block*/id)arg1 ;
-(void)fetchApplications:(/*^block*/id)arg1 ;
@end

