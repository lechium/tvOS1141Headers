/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncStateObserverInterface.h>

@protocol OS_dispatch_queue, PSYInitialSyncStateObserverDelegate;
@class NSMutableDictionary, NSObject, NSXPCConnection, NSString;

@interface PSYInitialSyncStateObserver : NSObject <PSYSyncStateObserverInterface> {

	NSMutableDictionary* _syncStateCache;
	NSMutableDictionary* _initialSyncStateCache;
	NSMutableDictionary* _syncStateEntryCache;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	BOOL _init;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	int _daemonStartedNotifyToken;
	int _syncSwitchNotifyToken;
	NSMutableDictionary* _nrDevices;
	id<PSYInitialSyncStateObserverDelegate> _delegate;

}

@property (__weak) id<PSYInitialSyncStateObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PSYInitialSyncStateObserverDelegate>)delegate;
-(void)setDelegate:(id<PSYInitialSyncStateObserverDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)_queue_querySyncState;
-(void)_queue_notifyCanRetryFailedRequests;
-(void)_registerMonitorAllNRDevicesForMigrationChanges:(/*^block*/id)arg1 ;
-(void)_queue_initializeIfNotInitialized;
-(void)_registerMonitorNRDevice:(id)arg1 forMigrationChanges:(/*^block*/id)arg2 ;
-(id)syncProviderWithErrorHandler:(/*^block*/id)arg1 ;
-(void)requestSyncStateForPairingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unregisterNRDeviceMonitors;
-(void)_queue_updateSyncStates:(id)arg1 notifyDelegateOfChanges:(BOOL)arg2 ;
-(void)_handleConnectionInvalidated;
-(oneway void)didUpdateSyncForPairingID:(id)arg1 ;
-(void)requestInitialNonMigrationSyncStateForPairingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestInitialSyncStateForPairingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

