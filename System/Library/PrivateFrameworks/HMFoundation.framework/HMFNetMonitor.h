/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol HMFNetMonitorDelegate, OS_dispatch_queue;
@class HMFNetAddress, NSObject;

@interface HMFNetMonitor : HMFObject {

	BOOL _reachable;
	BOOL _monitoring;
	unsigned _currentNetworkFlags;
	id<HMFNetMonitorDelegate> _delegate;
	HMFNetAddress* _netAddress;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	SCNetworkReachabilityRef _networkReachabilityRef;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                     //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                   //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) SCNetworkReachabilityRef networkReachabilityRef;              //@synthesize networkReachabilityRef=_networkReachabilityRef - In the implementation block
@property (assign,getter=isMonitoring,nonatomic) BOOL monitoring;                            //@synthesize monitoring=_monitoring - In the implementation block
@property (assign,nonatomic) unsigned currentNetworkFlags;                                   //@synthesize currentNetworkFlags=_currentNetworkFlags - In the implementation block
@property (__weak) id<HMFNetMonitorDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) HMFNetAddress * netAddress;                              //@synthesize netAddress=_netAddress - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;                                      //@synthesize reachable=_reachable - In the implementation block
@property (readonly) unsigned long long reachabilityPath; 
+(id)shortDescription;
-(id)init;
-(id<HMFNetMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMFNetMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)start;
-(void)stop;
-(id)shortDescription;
-(void)_stop;
-(HMFNetAddress *)netAddress;
-(SCNetworkReachabilityRef)networkReachabilityRef;
-(void)handleNetworkReachabilityChange:(unsigned)arg1 ;
-(unsigned)currentNetworkFlags;
-(void)setCurrentNetworkFlags:(unsigned)arg1 ;
-(BOOL)isReachable;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)isMonitoring;
-(void)setMonitoring:(BOOL)arg1 ;
-(unsigned long long)reachabilityPath;
-(id)initWithNetAddress:(id)arg1 ;
@end

