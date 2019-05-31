/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMDHomeRemoteNotificationHandler : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _logID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                    //@synthesize logID=_logID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(id)initWithHome:(id)arg1 ;
-(void)sendNotifications:(id)arg1 notificationUpdateIdentifier:(id)arg2 ;
-(NSString *)logID;
-(void)_sendNotifications:(id)arg1 notificationUpdateIdentifier:(id)arg2 ;
-(void)sendConfigureBulletinNotification:(id)arg1 ;
@end

