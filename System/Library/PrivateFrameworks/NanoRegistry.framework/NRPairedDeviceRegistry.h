/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/NRFrameworkDeviceDelegate.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NRPairedDeviceRegistryXPCFrameworkDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject, NSMutableArray, NRMutableDeviceCollection, NSString;

@interface NRPairedDeviceRegistry : NSObject <NSXPCConnectionDelegate, NRFrameworkDeviceDelegate, NRMutableStateParentDelegate, NRPairedDeviceRegistryXPCFrameworkDelegate> {

	BOOL _xpcConnectionInvalidated;
	BOOL _hasSomeEntitlements;
	BOOL _hasSecurePropertyEntitlement;
	BOOL _isDeviceCollectionDiffRequested;
	BOOL _areSecurePropertiesRequested;
	BOOL _initialLastCompatibilityStateHasBeenSent;
	BOOL _initialStatusHasBeenSent;
	BOOL _isInitialized;
	BOOL _secureDataIsAvailable;
	BOOL _needToFetchSecureProperties;
	unsigned short _lastCompatibilityStateSent;
	int _devicesUpdateCounterNotifyToken;
	int _securePropertiesUnlockedNotifyToken;
	int _demoModeNotifyToken;
	int _idleNotifyToken;
	NSXPCConnection* _xpcConnection;
	NSMutableDictionary* _mutableDeviceDictionary;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableArray* _finishedPairingSemaphores;
	long long _pairingCompatibilityVersion;
	long long _maxPairingCompatibilityVersion;
	long long _minPairingCompatibilityVersion;
	unsigned long long _devicesUpdateCounter;
	NRMutableDeviceCollection* _deviceCollection;
	NSMutableArray* _deviceCollectionUpdateBlocks;
	NSMutableArray* _securePropertiesUpdateBlocks;
	NSMutableArray* _waitForDeviceCollectionBlocks;
	unsigned long long _lastStatusSent;
	NSObject*<OS_dispatch_queue> _pairingOrSwitchCompleteQueue;

}

@property (nonatomic,retain) NSMutableDictionary * mutableDeviceDictionary;                          //@synthesize mutableDeviceDictionary=_mutableDeviceDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                               //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                             //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) BOOL xpcConnectionInvalidated;                                          //@synthesize xpcConnectionInvalidated=_xpcConnectionInvalidated - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedPairingSemaphores;                             //@synthesize finishedPairingSemaphores=_finishedPairingSemaphores - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                        //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL hasSomeEntitlements;                                               //@synthesize hasSomeEntitlements=_hasSomeEntitlements - In the implementation block
@property (assign,nonatomic) long long pairingCompatibilityVersion;                                  //@synthesize pairingCompatibilityVersion=_pairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long maxPairingCompatibilityVersion;                               //@synthesize maxPairingCompatibilityVersion=_maxPairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long minPairingCompatibilityVersion;                               //@synthesize minPairingCompatibilityVersion=_minPairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) int devicesUpdateCounterNotifyToken;                                    //@synthesize devicesUpdateCounterNotifyToken=_devicesUpdateCounterNotifyToken - In the implementation block
@property (assign,nonatomic) int securePropertiesUnlockedNotifyToken;                                //@synthesize securePropertiesUnlockedNotifyToken=_securePropertiesUnlockedNotifyToken - In the implementation block
@property (assign,nonatomic) int demoModeNotifyToken;                                                //@synthesize demoModeNotifyToken=_demoModeNotifyToken - In the implementation block
@property (assign,nonatomic) int idleNotifyToken;                                                    //@synthesize idleNotifyToken=_idleNotifyToken - In the implementation block
@property (assign,nonatomic) unsigned long long devicesUpdateCounter;                                //@synthesize devicesUpdateCounter=_devicesUpdateCounter - In the implementation block
@property (assign,nonatomic) BOOL hasSecurePropertyEntitlement;                                      //@synthesize hasSecurePropertyEntitlement=_hasSecurePropertyEntitlement - In the implementation block
@property (nonatomic,retain) NRMutableDeviceCollection * deviceCollection;                           //@synthesize deviceCollection=_deviceCollection - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceCollectionUpdateBlocks;                          //@synthesize deviceCollectionUpdateBlocks=_deviceCollectionUpdateBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * securePropertiesUpdateBlocks;                          //@synthesize securePropertiesUpdateBlocks=_securePropertiesUpdateBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * waitForDeviceCollectionBlocks;                         //@synthesize waitForDeviceCollectionBlocks=_waitForDeviceCollectionBlocks - In the implementation block
@property (assign,nonatomic) BOOL isDeviceCollectionDiffRequested;                                   //@synthesize isDeviceCollectionDiffRequested=_isDeviceCollectionDiffRequested - In the implementation block
@property (assign,nonatomic) BOOL areSecurePropertiesRequested;                                      //@synthesize areSecurePropertiesRequested=_areSecurePropertiesRequested - In the implementation block
@property (assign,nonatomic) unsigned long long lastStatusSent;                                      //@synthesize lastStatusSent=_lastStatusSent - In the implementation block
@property (assign,nonatomic) unsigned short lastCompatibilityStateSent;                              //@synthesize lastCompatibilityStateSent=_lastCompatibilityStateSent - In the implementation block
@property (assign,nonatomic) BOOL initialLastCompatibilityStateHasBeenSent;                          //@synthesize initialLastCompatibilityStateHasBeenSent=_initialLastCompatibilityStateHasBeenSent - In the implementation block
@property (assign,nonatomic) BOOL initialStatusHasBeenSent;                                          //@synthesize initialStatusHasBeenSent=_initialStatusHasBeenSent - In the implementation block
@property (assign,nonatomic) BOOL isInitialized;                                                     //@synthesize isInitialized=_isInitialized - In the implementation block
@property (assign,nonatomic) BOOL secureDataIsAvailable;                                             //@synthesize secureDataIsAvailable=_secureDataIsAvailable - In the implementation block
@property (assign,nonatomic) BOOL needToFetchSecureProperties;                                       //@synthesize needToFetchSecureProperties=_needToFetchSecureProperties - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pairingOrSwitchCompleteQueue;              //@synthesize pairingOrSwitchCompleteQueue=_pairingOrSwitchCompleteQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(/*^block*/id)pairedDevicesSelectorBlock;
+(BOOL)shouldBoostProcess;
+(/*^block*/id)activePairedDeviceSelectorBlock;
+(/*^block*/id)activeDeviceSelectorBlock;
-(unsigned short)compatibilityState;
-(id)init;
-(void)dealloc;
-(unsigned long long)status;
-(id)queue;
-(id)getDevices;
-(void)endDiscovery;
-(void)beginDiscovery;
-(unsigned)switchIndex;
-(void)applyDiff:(id)arg1 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(NRMutableDeviceCollection *)deviceCollection;
-(id)deviceForPairingID:(id)arg1 ;
-(id)deviceForBluetoothID:(id)arg1 ;
-(void)setDeviceCollection:(NRMutableDeviceCollection *)arg1 ;
-(void)setPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMinPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMaxPairingCompatibilityVersion:(long long)arg1 ;
-(long long)pairingCompatibilityVersion;
-(long long)maxPairingCompatibilityVersion;
-(long long)minPairingCompatibilityVersion;
-(long long)minQuickSwitchCompatibilityVersion;
-(id)getDevicesMatching:(/*^block*/id)arg1 ;
-(id)_xpcInitializeConnection;
-(long long)maxPairedDeviceCount;
-(void)setActivePairedDevice:(id)arg1 isMagicSwitch:(BOOL)arg2 operationHasCompleted:(/*^block*/id)arg3 ;
-(void)blockUntilDeviceCollectionIsInitialized;
-(id)initWithBoost:(BOOL)arg1 ;
-(void)initNotifyTokens;
-(void)requestDeviceCollectionDiffWithForce:(BOOL)arg1 ;
-(int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(unsigned long long)readNotifyToken:(int)arg1 ;
-(int)registerNotifyTokenWithName:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)requestSecureProperties;
-(id)createDevicesFromMutableDevices:(id)arg1 andPropertyStore:(id)arg2 ;
-(void)postNotification:(id)arg1 forDeviceID:(id)arg2 withUserInfo:(id)arg3 ;
-(id)retrieveSecurePropertiesWithIDs:(id)arg1 ;
-(void)sendStatusChangeNotification;
-(void)resumePairingOrSwitchCompleteQueue;
-(void)checkStatusAndCompatibilityState;
-(void)sendDevicesUpdatedNotification;
-(void)sendCompatibilityStateChangeNotification;
-(void)transitionToCompatibilityState:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)hasSecurePropertyEntitlement;
-(void)parseDiffForNRDeviceUpdatesAndPairUnpair:(id)arg1 hasSecurePropertyEntitlement:(BOOL)arg2 shouldBeQuiet:(BOOL)arg3 ;
-(void)fireAllInitialDeviceCollectionBlocksWith:(BOOL)arg1 ;
-(void)setupDeviceCollectionObserver;
-(void)fireAllDeviceCollectionBlocksWithStatus:(BOOL)arg1 ;
-(BOOL)_supportsWatch;
-(void)initializeWithShouldMakeEmptyDeviceCollection:(BOOL)arg1 ;
-(BOOL)isDaemonIdle;
-(void)createDevicesFromMutableDevicesAndPropertyStore:(id)arg1 ;
-(void)fireDeviceCollectionBlocksUpUntilIndex:(unsigned long long)arg1 ;
-(void)updateSecurePropertiesWithQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateDeviceCollectionWithQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)getAllDevices;
-(void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(id)_findActivePairedDevice;
-(void)_pairingStorePathPairingID:(/*^block*/id)arg1 ;
-(id)waitForActivePairedDevice;
-(void)pairingStorePathPairingID:(/*^block*/id)arg1 ;
-(id)blockAndQueryVersions;
-(void)_xpcInvalidationHandler;
-(void)_xpcInterruptionHandler;
-(void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2 ;
-(void)xpcHasNewOOBKey:(id)arg1 ;
-(id)deviceIDForIDSDevice:(id)arg1 ;
-(id)deviceForBTDeviceID:(id)arg1 ;
-(id)deviceIDForNRDevice:(id)arg1 ;
-(id)_deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(void)_getSwitchEventsFromIndex:(unsigned)arg1 toIndex:(unsigned)arg2 inlineCallback:(/*^block*/id)arg3 ;
-(id)_privateDaemonConnection;
-(id)_synchronousPrivateDaemonProxyWithErrorString:(id)arg1 ;
-(id)_privateDaemonProxyWithErrorString:(id)arg1 ;
-(void)setMigrationConsented:(BOOL)arg1 forDevice:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)migrationConsentRequestData;
-(id)devicesFromMigrationConsentRequestData:(id)arg1 ;
-(void)syncDevicesWithDevice:(id)arg1 ;
-(BOOL)isKeychainEnabled;
-(BOOL)pairedDeviceCountIsLessThanMaxPairedDevices;
-(BOOL)pairedDeviceSupportQuickSwitch;
-(void)setActivePairedDevice:(id)arg1 operationHasCompleted:(/*^block*/id)arg2 ;
-(void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(/*^block*/id)arg2 ;
-(void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1 ;
-(id)_getChangeHistory;
-(id)_getClientInfo;
-(void)getDevicesWithBlock:(/*^block*/id)arg1 ;
-(void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(/*^block*/id)arg4 ;
-(void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)notifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2 ;
-(void)notifyPasscode:(id)arg1 forDevice:(id)arg2 ;
-(void)notifyPairingShouldContinue;
-(void)unpairWithDevice:(id)arg1 shouldObliterate:(BOOL)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2 ;
-(void)waitForPairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)abortPairing;
-(void)abortPairingWithReason:(id)arg1 ;
-(void)suspendPairingClientCrashMonitoring;
-(void)resumePairingClientCrashMonitoring;
-(id)pairingStorePath;
-(void)userIsCheckingForUpdate;
-(void)retriggerUnpairInfoDialog;
-(void)overrideSignalStrengthLimit:(long long)arg1 ;
-(id)_recoveryDescription;
-(void)_triggerRecovery;
-(void)_setObliterationEnabled:(BOOL)arg1 ;
-(void)_addRemoveRecoveryStepDisableDaemons:(BOOL)arg1 ;
-(void)_addRemoveRecoveryStepBackup:(BOOL)arg1 withPairingDeviceID:(id)arg2 ;
-(void)_addRemoveRecoveryStepDeleteAccounts:(BOOL)arg1 ;
-(void)_addRemoveRecoveryStepIDSUnpairStart:(BOOL)arg1 ;
-(void)_addRemoveRecoveryStepIDSUnpairStartQS:(BOOL)arg1 withPairedBTDeviceID:(id)arg2 ;
-(void)_addRemoveRecoveryStepRemoteUnpair:(BOOL)arg1 withAdvertisedName:(id)arg2 andPairedDeviceID:(id)arg3 ;
-(void)_addRemoveRecoveryStepDeletePairingStore:(BOOL)arg1 withPairingDeviceID:(id)arg2 ;
-(void)_addRemoveRecoveryStepUnpairBluetooth:(BOOL)arg1 withPairingDeviceID:(id)arg2 ;
-(void)_addRemoveRecoveryStepIDSUnpair:(BOOL)arg1 withPairingDeviceID:(id)arg2 ;
-(void)_addRemoveRecoveryStepStockholmReset:(BOOL)arg1 ;
-(void)_addRemoveRecoveryStepICloudDeletePaymentCards:(BOOL)arg1 ;
-(void)_addRemoveRecoveryStepResetNVRAM:(BOOL)arg1 ;
-(void)_addRemoveRecoveryStepObliterate:(BOOL)arg1 withStatePath:(id)arg2 ;
-(void)_addRemoveRecoveryStepIDSFinalize:(BOOL)arg1 ;
-(void)_addRemoveRecoveryStepIDSFinalizeQS:(BOOL)arg1 withPairedBTDeviceID:(id)arg2 ;
-(void)_qsRecoveryMigrationWithPairedBTDeviceID:(id)arg1 ;
-(void)_submitAlbertPairingReport;
-(id)_getLocalDeviceCollection;
-(id)_getSecureProperties:(id)arg1 ;
-(id)deviceForIDSDevice:(id)arg1 ;
-(id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2 ;
-(void)pairingClientDidEnterPhase:(id)arg1 ;
-(void)getSwitchEventsFromIndex:(unsigned)arg1 inlineCallback:(/*^block*/id)arg2 ;
-(void)_getActiveDeviceAssertionsWithInlineBlock:(/*^block*/id)arg1 ;
-(void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned)arg3 ;
-(id)serverRequestReporterWithType:(id)arg1 ;
-(void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)putMigrationChallengeCharacteristicWriteData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)startWatchSetupPush;
-(BOOL)isWatchSetupPushActive;
-(void)stopWatchSetupPush;
-(void)keepPhoneUnlockedInternalTestSPI:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)mutableDeviceDictionary;
-(void)setMutableDeviceDictionary:(NSMutableDictionary *)arg1 ;
-(BOOL)xpcConnectionInvalidated;
-(void)setXpcConnectionInvalidated:(BOOL)arg1 ;
-(NSMutableArray *)finishedPairingSemaphores;
-(void)setFinishedPairingSemaphores:(NSMutableArray *)arg1 ;
-(BOOL)hasSomeEntitlements;
-(void)setHasSomeEntitlements:(BOOL)arg1 ;
-(int)devicesUpdateCounterNotifyToken;
-(void)setDevicesUpdateCounterNotifyToken:(int)arg1 ;
-(int)securePropertiesUnlockedNotifyToken;
-(void)setSecurePropertiesUnlockedNotifyToken:(int)arg1 ;
-(int)demoModeNotifyToken;
-(void)setDemoModeNotifyToken:(int)arg1 ;
-(int)idleNotifyToken;
-(void)setIdleNotifyToken:(int)arg1 ;
-(unsigned long long)devicesUpdateCounter;
-(void)setDevicesUpdateCounter:(unsigned long long)arg1 ;
-(void)setHasSecurePropertyEntitlement:(BOOL)arg1 ;
-(NSMutableArray *)deviceCollectionUpdateBlocks;
-(void)setDeviceCollectionUpdateBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)securePropertiesUpdateBlocks;
-(void)setSecurePropertiesUpdateBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)waitForDeviceCollectionBlocks;
-(void)setWaitForDeviceCollectionBlocks:(NSMutableArray *)arg1 ;
-(BOOL)isDeviceCollectionDiffRequested;
-(void)setIsDeviceCollectionDiffRequested:(BOOL)arg1 ;
-(BOOL)areSecurePropertiesRequested;
-(void)setAreSecurePropertiesRequested:(BOOL)arg1 ;
-(unsigned long long)lastStatusSent;
-(void)setLastStatusSent:(unsigned long long)arg1 ;
-(unsigned short)lastCompatibilityStateSent;
-(void)setLastCompatibilityStateSent:(unsigned short)arg1 ;
-(BOOL)initialLastCompatibilityStateHasBeenSent;
-(void)setInitialLastCompatibilityStateHasBeenSent:(BOOL)arg1 ;
-(BOOL)initialStatusHasBeenSent;
-(void)setInitialStatusHasBeenSent:(BOOL)arg1 ;
-(void)setIsInitialized:(BOOL)arg1 ;
-(BOOL)secureDataIsAvailable;
-(void)setSecureDataIsAvailable:(BOOL)arg1 ;
-(BOOL)needToFetchSecureProperties;
-(void)setNeedToFetchSecureProperties:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)pairingOrSwitchCompleteQueue;
-(void)setPairingOrSwitchCompleteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isInitialized;
-(id)getActivePairedDevice;
-(id)getPairedDevices;
-(id)pairingID;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)isPaired;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(BOOL)supportsPairedDevice;
@end

