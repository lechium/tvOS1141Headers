/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorProtocol.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CUTWeakReference, NSString, PCInterfaceUsabilityMonitor;

@interface PCWWANUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _monitorDelegateQueue;
	CUTWeakReference* _delegateReference;
	BOOL _isInCall;
	BOOL _isInHighPowerState;
	BOOL _trackUsability;
	unsigned long long _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSString* _interfaceName;
	PCInterfaceUsabilityMonitor* _interfaceMonitor;
	CFStringRef _currentRAT;
	int _powerlogCDRXToken;
	CTServerConnectionRef _telephonyServer;
	int _wwanContextID;
	NSObject*<OS_dispatch_queue> _ctServerQueue;

}

@property (nonatomic,readonly) CFStringRef currentRAT;                                      //@synthesize currentRAT=_currentRAT - In the implementation block
@property (nonatomic,readonly) BOOL isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) BOOL isInterfaceUsable; 
@property (nonatomic,readonly) BOOL isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) BOOL isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) BOOL isPoorLinkQuality; 
@property (nonatomic,readonly) BOOL isBadLinkQuality; 
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (nonatomic,readonly) BOOL isNetworkingPowerExpensiveToUse; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
-(BOOL)isInterfaceUsable;
-(NSString *)linkQualityString;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(BOOL)isBadLinkQuality;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isRadioHot;
-(CFStringRef)currentRAT;
-(BOOL)isLTEWithCDRX;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1 ;
-(void)setTrackUsability:(BOOL)arg1 ;
-(void)_forwardConfigurationOnIvarQueue;
-(id)initWithDelegateQueue:(id)arg1 ;
-(void)_setupWWANMonitor;
-(void)_adjustInterfaceNameForWWANContextID:(int)arg1 ;
-(int)linkQuality;
-(long long)interfaceIdentifier;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(void)dealloc;
-(CFStringRef)wwanInterfaceName;
-(void)_handleTelephonyNotificationWithName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 ;
-(BOOL)isInternetReachable;
@end

