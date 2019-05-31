/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYInitialSyncStateObserverDelegate.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATSessionObserver.h>

@protocol OS_dispatch_queue;
@class PSYInitialSyncStateObserver, ATDeviceService, NSObject, NSString;

@interface ATDevicePairedSyncManager : NSObject <PSYInitialSyncStateObserverDelegate, ATMessageLinkObserver, ATSessionObserver> {

	PSYInitialSyncStateObserver* _initialSyncStateObserver;
	ATDeviceService* _deviceService;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activePairedDevicePairingId;
+(id)devicePairingId;
+(id)sharedPairedSyncManager;
-(id)init;
-(void)start;
-(void)stop;
-(void)deviceBecameActive:(id)arg1 ;
-(void)_cleanupSyncState;
-(void)_triggerInitialSync;
-(void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2 ;
-(void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2 ;
-(void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2 ;
-(BOOL)hasRestriction;
-(void)handleDevicePairedNotification;
-(void)handleDeviceUnPairedNotification;
-(void)_attemptNanoRadioPrelaunchIfAllowed;
@end

