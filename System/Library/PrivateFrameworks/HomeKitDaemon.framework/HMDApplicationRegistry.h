/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDApplicationMonitor, NSObject, NSUUID, HMFMessageDispatcher, LSApplicationWorkspace, NSMutableDictionary, NSString;

@interface HMDApplicationRegistry : HMFObject <HMFMessageReceiver, LSApplicationWorkspaceObserverProtocol, HMFLogging> {

	HMDApplicationMonitor* _monitor;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSUUID* _uuid;
	HMFMessageDispatcher* _messageDispatcher;
	LSApplicationWorkspace* _appWorkspace;
	NSMutableDictionary* _applications;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcQueue;                           //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMFMessageDispatcher * messageDispatcher;                 //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,retain) HMDApplicationMonitor * monitor;                                 //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain) LSApplicationWorkspace * appWorkspace;                           //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applications;                              //@synthesize applications=_applications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(HMDApplicationMonitor *)monitor;
-(id)init;
-(void)dealloc;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)initWithMessageDispatcher:(id)arg1 xpcQueue:(id)arg2 ;
-(void)stopMonitoringConnection:(id)arg1 ;
-(void)startMonitoringConnection:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(void)processTerminated:(id)arg1 ;
-(void)_startObservingAppUninstalls;
-(void)_stopObservingAppUninstalls;
-(id)ignoredForegroundAppBundleIdentifiers;
-(NSMutableDictionary *)applications;
-(LSApplicationWorkspace *)appWorkspace;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)setMonitor:(HMDApplicationMonitor *)arg1 ;
-(void)setXpcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAppWorkspace:(LSApplicationWorkspace *)arg1 ;
-(void)setApplications:(NSMutableDictionary *)arg1 ;
@end

