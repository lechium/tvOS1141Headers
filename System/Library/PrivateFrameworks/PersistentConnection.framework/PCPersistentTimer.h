/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTPowerMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSString, PCSimpleTimer, NSObject;

@interface PCPersistentTimer : NSObject <CUTPowerMonitorDelegate> {

	double _fireTime;
	double _startTime;
	unsigned long long _guidancePriority;
	double _minimumEarlyFireProportion;
	BOOL _triggerOnGMTChange;
	BOOL _disableSystemWaking;
	BOOL _userVisible;
	NSString* _serviceIdentifier;
	id _target;
	SEL _selector;
	id _userInfo;
	PCSimpleTimer* _simpleTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_log> _logObject;
	double _earlyFireConstantInterval;

}

@property (assign,nonatomic) double minimumEarlyFireProportion;                  //@synthesize minimumEarlyFireProportion=_minimumEarlyFireProportion - In the implementation block
@property (assign,nonatomic) double earlyFireConstantInterval;                   //@synthesize earlyFireConstantInterval=_earlyFireConstantInterval - In the implementation block
@property (assign,nonatomic) BOOL disableSystemWaking;                           //@synthesize disableSystemWaking=_disableSystemWaking - In the implementation block
@property (assign,getter=isUserVisible,nonatomic) BOOL userVisible; 
@property (nonatomic,readonly) double fireTime; 
@property (nonatomic,readonly) double startTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundUpdateQueue;
+(void)_updateTime:(double)arg1 forGuidancePriority:(unsigned long long)arg2 ;
+(double)currentMachTimeInterval;
+(double)_currentGuidanceTime;
+(id)lastSystemWakeDate;
-(double)fireTime;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg1 ;
-(void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1 ;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1 ;
-(id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 triggerOnGMTChange:(BOOL)arg7 ;
-(void)_updateTimers;
-(void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2 ;
-(void)_fireTimerFired;
-(BOOL)firingIsImminent;
-(double)_nextForcedAlignmentAbsoluteTime;
-(double)_earlyFireTime;
-(void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 ;
-(void)setEarlyFireConstantInterval:(double)arg1 ;
-(double)minimumEarlyFireProportion;
-(double)earlyFireConstantInterval;
-(BOOL)disableSystemWaking;
-(void)invalidate;
-(void)dealloc;
-(NSString *)debugDescription;
-(BOOL)isValid;
-(id)userInfo;
-(double)startTime;
-(BOOL)isUserVisible;
-(void)setDisableSystemWaking:(BOOL)arg1 ;
-(id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)setUserVisible:(BOOL)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 ;
-(void)scheduleInQueue:(id)arg1 ;
-(void)setMinimumEarlyFireProportion:(double)arg1 ;
-(id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
@end

