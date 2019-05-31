/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessory.h>
#import <libobjc.A.dylib/HAPRelayAccessoryDelegate.h>
#import <libobjc.A.dylib/HMDTimeInformationMonitorDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDAccessoryIdentify.h>

@class NSMutableArray, NSString, HMDCharacteristic, NSNumber, NSData, NSDate, HMFTimer, NSMutableSet, NSSet, NSMapTable, NSArray, HAPPairingIdentity;

@interface HMDHAPAccessory : HMDAccessory <HAPRelayAccessoryDelegate, HMDTimeInformationMonitorDelegate, HMFTimerDelegate, HMDAccessoryIdentify> {

	NSMutableArray* _transportInformationInstances;
	BOOL _relayEnabled;
	BOOL _timeInformationServiceExists;
	BOOL _keyGenerationInProgress;
	BOOL _supportsRelay;
	unsigned char _keyGenerationType;
	BOOL _systemTimeNeedsUpdate;
	NSString* _relayIdentifier;
	unsigned long long _currentRelayAccessoryState;
	HMDCharacteristic* _currentTimeCharacteristic;
	HMDCharacteristic* _timeUpdateCharacteristic;
	HMDCharacteristic* _dayOfTheWeekCharacteristic;
	NSNumber* _accessoryFlags;
	NSData* _setupHash;
	NSData* _broadcastKey;
	NSNumber* _keyUpdatedStateNumber;
	NSDate* _keyUpdatedTime;
	NSString* _uniqueIdentifier;
	long long _certificationStatus;
	unsigned long long _activationAttempts;
	unsigned long long _pairingAttempts;
	NSNumber* _backedOffStateNumber;
	HMFTimer* _accessoryDiscoveryBackoffTimer;
	HMFTimer* _accessoryKeyRefreshTimer;
	NSMutableArray* _discoveredServices;
	HMDHAPAccessory* _bridge;
	NSMutableSet* _identifiersForBridgedAccessories;
	NSData* _publicKey;
	NSString* _pairingUsername;
	HMFTimer* _timeInformationTimer;
	HMFTimer* _systemTimeInformationTimer;
	NSSet* _cameraProfiles;
	NSMapTable* _serverIDToHAPAccessoryTable;

}

@property (nonatomic,copy) NSString * uniqueIdentifier;                                                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsRelay;                                                                   //@synthesize supportsRelay=_supportsRelay - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (assign,nonatomic) unsigned long long activationAttempts;                                                //@synthesize activationAttempts=_activationAttempts - In the implementation block
@property (assign,nonatomic) unsigned long long pairingAttempts;                                                   //@synthesize pairingAttempts=_pairingAttempts - In the implementation block
@property (nonatomic,copy) NSNumber * accessoryFlags;                                                              //@synthesize accessoryFlags=_accessoryFlags - In the implementation block
@property (assign,nonatomic) long long certificationStatus;                                                        //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (nonatomic,copy) NSNumber * backedOffStateNumber;                                                        //@synthesize backedOffStateNumber=_backedOffStateNumber - In the implementation block
@property (nonatomic,retain) HMFTimer * accessoryDiscoveryBackoffTimer;                                            //@synthesize accessoryDiscoveryBackoffTimer=_accessoryDiscoveryBackoffTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * accessoryKeyRefreshTimer;                                                  //@synthesize accessoryKeyRefreshTimer=_accessoryKeyRefreshTimer - In the implementation block
@property (nonatomic,copy) NSData * broadcastKey;                                                                  //@synthesize broadcastKey=_broadcastKey - In the implementation block
@property (nonatomic,copy) NSNumber * keyUpdatedStateNumber;                                                       //@synthesize keyUpdatedStateNumber=_keyUpdatedStateNumber - In the implementation block
@property (nonatomic,copy) NSDate * keyUpdatedTime;                                                                //@synthesize keyUpdatedTime=_keyUpdatedTime - In the implementation block
@property (assign) unsigned char keyGenerationType;                                                                //@synthesize keyGenerationType=_keyGenerationType - In the implementation block
@property (assign) BOOL keyGenerationInProgress;                                                                   //@synthesize keyGenerationInProgress=_keyGenerationInProgress - In the implementation block
@property (nonatomic,readonly) NSString * serializedIdentifier; 
@property (nonatomic,retain) NSMutableArray * discoveredServices;                                                  //@synthesize discoveredServices=_discoveredServices - In the implementation block
@property (assign,nonatomic,__weak) HMDHAPAccessory * bridge;                                                      //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersForBridgedAccessories;                                      //@synthesize identifiersForBridgedAccessories=_identifiersForBridgedAccessories - In the implementation block
@property (nonatomic,retain) NSData * publicKey;                                                                   //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,retain) NSString * pairingUsername;                                                           //@synthesize pairingUsername=_pairingUsername - In the implementation block
@property (nonatomic,readonly) BOOL timeInformationServiceExists;                                                  //@synthesize timeInformationServiceExists=_timeInformationServiceExists - In the implementation block
@property (nonatomic,__weak,readonly) HMDCharacteristic * timeUpdateCharacteristic;                                //@synthesize timeUpdateCharacteristic=_timeUpdateCharacteristic - In the implementation block
@property (nonatomic,__weak,readonly) HMDCharacteristic * currentTimeCharacteristic;                               //@synthesize currentTimeCharacteristic=_currentTimeCharacteristic - In the implementation block
@property (nonatomic,__weak,readonly) HMDCharacteristic * dayOfTheWeekCharacteristic;                              //@synthesize dayOfTheWeekCharacteristic=_dayOfTheWeekCharacteristic - In the implementation block
@property (nonatomic,retain) HMFTimer * timeInformationTimer;                                                      //@synthesize timeInformationTimer=_timeInformationTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * systemTimeInformationTimer;                                                //@synthesize systemTimeInformationTimer=_systemTimeInformationTimer - In the implementation block
@property (assign,nonatomic) BOOL systemTimeNeedsUpdate;                                                           //@synthesize systemTimeNeedsUpdate=_systemTimeNeedsUpdate - In the implementation block
@property (nonatomic,retain) NSString * relayIdentifier;                                                           //@synthesize relayIdentifier=_relayIdentifier - In the implementation block
@property (nonatomic,retain) NSSet * cameraProfiles;                                                               //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,copy) NSData * setupHash;                                                                     //@synthesize setupHash=_setupHash - In the implementation block
@property (nonatomic,retain) NSMapTable * serverIDToHAPAccessoryTable;                                             //@synthesize serverIDToHAPAccessoryTable=_serverIDToHAPAccessoryTable - In the implementation block
@property (assign,getter=isRelayEnabled,nonatomic) BOOL relayEnabled;                                              //@synthesize relayEnabled=_relayEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long currentRelayAccessoryState;                                      //@synthesize currentRelayAccessoryState=_currentRelayAccessoryState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * services; 
@property (getter=isClientRegisteredForNotifications,readonly) BOOL clientRegisteredForNotifications; 
@property (nonatomic,copy,readonly) HAPPairingIdentity * pairingIdentity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL supportsIdentify; 
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
+(Class)transactionClass;
+(unsigned long long)getAWDTransportTypeWithLinkType:(long long)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)uniqueIdentifier;
-(id)dumpState;
-(void)_registerForMessages;
-(id)messageReceiverChildren;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(NSData *)setupHash;
-(void)setSetupHash:(NSData *)arg1 ;
-(HAPPairingIdentity *)pairingIdentity;
-(NSString *)pairingUsername;
-(void)timerDidFire:(id)arg1 ;
-(NSSet *)cameraProfiles;
-(NSArray *)services;
-(void)configureBulletinNotification:(/*^block*/id)arg1 ;
-(void)setCameraProfiles:(NSSet *)arg1 ;
-(void)disableNotificationsForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDHAPAccessory *)bridge;
-(NSMutableSet *)identifiersForBridgedAccessories;
-(void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3 ;
-(BOOL)isPrimary;
-(BOOL)hasBTLELink;
-(void)handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(BOOL)arg2 enableTime:(id)arg3 ;
-(void)enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4 ;
-(void)updateNotificationEnabled:(BOOL)arg1 forCharacteristics:(id)arg2 onBehalfOf:(id)arg3 ;
-(id)characteristicsPassingTest:(/*^block*/id)arg1 ;
-(void)enableNotification:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 clientIdentifier:(id)arg3 forCharacteristics:(id)arg4 ;
-(BOOL)isNotificationEnabled;
-(long long)reachableTransports;
-(BOOL)matchesHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long*)arg2 ;
-(id)namesOfServicesShowingTilesInHomeApp;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(void)setPairingUsername:(NSString *)arg1 ;
-(void)setPublicKey:(NSData *)arg1 ;
-(BOOL)supportsRelay;
-(void)setSupportsRelay:(BOOL)arg1 ;
-(id)retrieveUpdatedTransportInfoArray:(id)arg1 ;
-(BOOL)shouldEnableDaemonRelaunch;
-(void)unconfigure;
-(id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(BOOL)isNonClientNotificationEnabled;
-(id)preferredHAPAccessoryForOperation:(long long)arg1 linkType:(long long*)arg2 ;
-(void)writeTimeInformationCharacteristicsForAccessory:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 home:(id)arg2 ;
-(NSMapTable *)serverIDToHAPAccessoryTable;
-(void)configureWithAccessory:(id)arg1 homeNotificationsEnabled:(BOOL)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)savePublicKeyToKeychain;
-(void)removeBridgedAccessory:(id)arg1 ;
-(id)matchingHAPAccessoryWithLinkType:(long long)arg1 ;
-(id)getPrimaryHAPAccessories;
-(void)removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(id)tunneledHAPAccessories;
-(BOOL)isPaired;
-(id)serviceWithUUID:(id)arg1 ;
-(void)performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)setCertificationStatus:(long long)arg1 ;
-(long long)certificationStatus;
-(void)readInitialRequiredCharacteristicsForBTLEAccessory:(/*^block*/id)arg1 ;
-(NSData *)publicKey;
-(BOOL)supportsUserManagement;
-(NSString *)relayIdentifier;
-(void)setRelayIdentifier:(NSString *)arg1 ;
-(void)handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2 ;
-(void)writeCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findCharacteristic:(id)arg1 forService:(id)arg2 ;
-(long long)linkSpeed;
-(void)readCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findService:(id)arg1 ;
-(id)findCharacteristic:(id)arg1 ;
-(void)enableNotification:(BOOL)arg1 forCharacteristicIDs:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4 ;
-(id)matchingHAPAccessoryServerIdentifierWithLinkType:(long long)arg1 ;
-(BOOL)isClientRegisteredForNotifications;
-(void)backOffAccessoryForStateNumber:(id)arg1 ;
-(void)setReachability:(BOOL)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3 ;
-(BOOL)matchesHAPAccessory:(id)arg1 ;
-(id)hmdCharacteristicForInstanceId:(id)arg1 ;
-(NSNumber *)accessoryFlags;
-(void)setAccessoryFlags:(NSNumber *)arg1 ;
-(BOOL)matchesHMDAccessoryTransportInformationWithServerIdentifier:(id)arg1 instanceID:(id)arg2 ;
-(void)unconfigureAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 updateReachability:(BOOL)arg3 ;
-(BOOL)containsCameraService;
-(void)takeOwnershipOfAppData:(id)arg1 ;
-(NSString *)serializedIdentifier;
-(void)identifyAccessory:(id)arg1 ;
-(void)pairingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)populateModelObject:(id)arg1 version:(long long)arg2 ;
-(id)dumpSimpleState;
-(BOOL)supportsIdentify;
-(void)reachabilityDidChange:(id)arg1 ;
-(NSData *)broadcastKey;
-(NSDate *)keyUpdatedTime;
-(NSNumber *)keyUpdatedStateNumber;
-(void)_updateBridge:(id)arg1 ;
-(BOOL)updateTransportInformation:(id)arg1 ;
-(void)_handleCharacteristicWrite:(id)arg1 ;
-(void)_handleCharacteristicRead:(id)arg1 ;
-(void)_handleRenameService:(id)arg1 ;
-(void)_handleUpdateAssociatedServiceType:(id)arg1 ;
-(void)_handleUpdateAuthorizationData:(id)arg1 ;
-(void)_handleCharacteristicsChangedNotification:(id)arg1 ;
-(void)updateAccessoryFlags:(id)arg1 ;
-(void)setBroadcastKey:(NSData *)arg1 ;
-(void)setKeyUpdatedStateNumber:(NSNumber *)arg1 ;
-(void)setKeyUpdatedTime:(NSDate *)arg1 ;
-(void)setAccessoryKeyRefreshTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)accessoryKeyRefreshTimer;
-(void)setKeyGenerationType:(unsigned char)arg1 ;
-(id)_currentTimeCharacteristic;
-(void)_setCurrentTimeCharacteristic:(id)arg1 ;
-(id)hmdCharacteristicFromHapCharacteristic:(id)arg1 ;
-(id)_dayOfTheWeekCharacteristic;
-(void)_setDayOfTheWeekCharacteristic:(id)arg1 ;
-(id)_timeUpdateCharacteristic;
-(void)_setTimeUpdateCharacteristic:(id)arg1 ;
-(BOOL)_timeInformationServiceExists;
-(void)_setTimeInformationServiceExists:(BOOL)arg1 ;
-(void)_setSystemTimeNeedsUpdate:(BOOL)arg1 ;
-(void)_startWriteTimeInformationTimer;
-(void)_stopWriteTimeInformationTimer;
-(BOOL)updateAccessoryInformation:(id)arg1 ;
-(id)getOrCreateServiceUpdateTransactionForKey:(id)arg1 fromDictionary:(id)arg2 ;
-(HMFTimer *)timeInformationTimer;
-(void)setTimeInformationTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)systemTimeInformationTimer;
-(void)setSystemTimeInformationTimer:(HMFTimer *)arg1 ;
-(BOOL)systemTimeNeedsUpdate;
-(void)_writeTimeInformationCharacteristicsForAccessory;
-(void)_stopSystemTimeWriteTimeInformationTimer;
-(void)_readAndWriteTimeInformationCharacteristic:(id)arg1 ;
-(HMFTimer *)accessoryDiscoveryBackoffTimer;
-(void)_handleDiscoveryBackoffTimerFired;
-(void)_handleKeyRefreshTimerFired;
-(void)_readCharacteristicValues:(id)arg1 localOperationRequired:(BOOL)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 errorBlock:(/*^block*/id)arg6 ;
-(void)_readandWriteToCurrentTime:(id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)_writeCharacteristicValues:(id)arg1 localOperationRequired:(BOOL)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 errorBlock:(/*^block*/id)arg6 ;
-(void)setTimeUpdateCharacteristic:(HMDCharacteristic *)arg1 ;
-(void)setCurrentTimeCharacteristic:(HMDCharacteristic *)arg1 ;
-(void)setDayOfTheWeekCharacteristic:(HMDCharacteristic *)arg1 ;
-(void)deRegisterForTimeMonitor;
-(void)registerForTimeMonitor;
-(BOOL)timeInformationServiceExists;
-(void)setTimeInformationServiceExists:(BOOL)arg1 ;
-(void)_startSystemTimeWriteTimeInformationTimer;
-(BOOL)updateTimeInformationCharacteristicsForAccessory:(id)arg1 ;
-(void)_deRegisterForTimeMonitor;
-(void)_registerForTimeMonitor;
-(id)findCharacteristicType:(id)arg1 forServiceType:(id)arg2 ;
-(void)_performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(id)transportInformationInstances;
-(BOOL)isSecuritySessionOpen;
-(NSMutableArray *)discoveredServices;
-(void)addTransportInformationInstances:(id)arg1 ;
-(void)resetNotificationEnabledTime;
-(void)_setRelayEnabled:(BOOL)arg1 ;
-(id)relayAccessory;
-(void)setRelayEnabled:(BOOL)arg1 ;
-(unsigned long long)_currentRelayAccessoryState;
-(unsigned long long)activationAttempts;
-(void)startRelayActivationWithActivationClient:(id)arg1 ;
-(void)setActivationAttempts:(unsigned long long)arg1 ;
-(void)_setCurrentRelayAccessoryState:(unsigned long long)arg1 ;
-(unsigned long long)pairingAttempts;
-(void)startRelayPairingWithPairingClient:(id)arg1 ;
-(void)setPairingAttempts:(unsigned long long)arg1 ;
-(void)_removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)removeTransportInformationInstance:(id)arg1 ;
-(id)matchingTransportInformation:(id)arg1 ;
-(void)_updateReachability;
-(BOOL)isRelayEnabled;
-(void)_updateRelayEnabled:(BOOL)arg1 notifyRelayManager:(BOOL)arg2 ;
-(void)_addHAPAccessory:(id)arg1 ;
-(void)_enableNotification:(BOOL)arg1 matchingHAPAccessory:(id)arg2 ignoreDeviceUnlockRequirement:(BOOL)arg3 clientIdentifier:(id)arg4 forCharacteristics:(id)arg5 ;
-(void)_updateAccessoryTracking;
-(id)matchingTransportInformationWithServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(id)matchingTransportInformationWithServerIdentifier:(id)arg1 ;
-(void)_writeCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_retrieveStateForTrackedAccessory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)autoUpdateCachedCountDownCharacteristics:(id)arg1 ;
-(void)_readCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)hapCharacteristicWriteRequests:(id)arg1 hapAccessory:(id)arg2 hmdResponses:(id*)arg3 mapping:(id*)arg4 ;
-(void)populateHMDCharacteristicResponses:(id)arg1 hapResponses:(id)arg2 mapping:(id)arg3 overallError:(id)arg4 requests:(id)arg5 ;
-(void)notifyValue:(id)arg1 previousValue:(id)arg2 error:(id)arg3 forCharacteristic:(id)arg4 requestMessage:(id)arg5 ;
-(void)_logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2 ;
-(void)_relayReadFromCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3 ;
-(void)_relayWriteToCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3 ;
-(void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 authorizationData:(id)arg4 message:(id)arg5 ;
-(void)_handleCharacteristicError:(id)arg1 characteristic:(id)arg2 message:(id)arg3 read:(BOOL)arg4 ;
-(id)_prepareMessagePayloadForCharacteristicRemoteWrite:(id)arg1 ;
-(void)_parseResponseFromRemotePeer:(id)arg1 message:(id)arg2 forCharacteristic:(id)arg3 ;
-(void)_readValueForCharacteristic:(id)arg1 hapAccessory:(id)arg2 requestMessage:(id)arg3 ;
-(void)_notifyNotificationChangesForCharacteristics:(id)arg1 errors:(id)arg2 enableNotification:(BOOL)arg3 message:(id)arg4 ;
-(void)_disableNotificationsForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enableBroadcastNotifications:(BOOL)arg1 hapAccessory:(id)arg2 forCharacteristics:(id)arg3 ;
-(void)_notifyCharacteristicNotificationChanges:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3 clientIdentifier:(id)arg4 ;
-(BOOL)isNotificationEnabledForClientIdentifier:(id)arg1 ;
-(void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4 ;
-(void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 hapAccessory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_enableNotificationOnResident:(BOOL)arg1 characteristic:(id)arg2 clientIdentifier:(id)arg3 ignoreDeviceUnlockRequirement:(BOOL)arg4 ;
-(BOOL)keyGenerationInProgress;
-(void)setKeyGenerationInProgress:(BOOL)arg1 ;
-(unsigned char)keyGenerationType;
-(void)_updateBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(double)arg3 ;
-(void)_reenableNotificationsOnWatch;
-(BOOL)_shouldTrackAccessoryWithPriority:(BOOL*)arg1 ;
-(BOOL)_containsSecureCharacteristic;
-(NSNumber *)backedOffStateNumber;
-(void)setAccessoryDiscoveryBackoffTimer:(HMFTimer *)arg1 ;
-(void)setBackedOffStateNumber:(NSNumber *)arg1 ;
-(void)_handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_updateStateForTrackedAccessory:(id)arg1 stateNumber:(id)arg2 ;
-(void)_removeBackedoffAccessoryForStateNumber:(id)arg1 ;
-(void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleAddServiceTransaction:(id)arg1 message:(id)arg2 ;
-(void)addTransportInformationInstance:(id)arg1 ;
-(void)_handleServiceRemovedTransaction:(id)arg1 message:(id)arg2 ;
-(void)setBridge:(HMDHAPAccessory *)arg1 ;
-(void)addBridgedAccessory:(id)arg1 ;
-(unsigned long long)currentRelayAccessoryState;
-(id)getTransportInformationArray;
-(void)accessoryDidBecomeReachable:(id)arg1 ;
-(void)accessoryDidBecomeUnreachable:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateRelayEnabled:(BOOL)arg2 ;
-(void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2 ;
-(void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2 ;
-(void)accessory:(id)arg1 didPairRelayWithError:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2 ;
-(void)timeInformationMonitorDidChangeTime;
-(void)setBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(id)arg3 ;
-(HMDCharacteristic *)currentTimeCharacteristic;
-(HMDCharacteristic *)dayOfTheWeekCharacteristic;
-(HMDCharacteristic *)timeUpdateCharacteristic;
-(void)setSystemTimeNeedsUpdate:(BOOL)arg1 ;
-(BOOL)isReadingRequiredForBTLEAccessoryCharacteristic:(id)arg1 forceReadFWVersion:(BOOL)arg2 ;
-(id)updateAccessoryFlagsAndNotifyClients:(id)arg1 ;
-(void)handlePairedStateChange:(BOOL)arg1 ;
-(void)setPairingUsername:(id)arg1 publicKey:(id)arg2 ;
-(void)verifyPairingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setSupportsRelay:(BOOL)arg1 ;
-(void)_setRelayIdentifier:(id)arg1 ;
-(void)addRelayUser:(id)arg1 accessToken:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeRelayUser:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasIPLink;
-(id)configureService:(id)arg1 ;
-(void)mergeTransportInformationInstances:(id)arg1 ;
-(id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 ;
-(void)_notifyCharacteristicNotificationChangedForCharacteristic:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3 ;
-(void)setDiscoveredServices:(NSMutableArray *)arg1 ;
-(void)setIdentifiersForBridgedAccessories:(NSMutableSet *)arg1 ;
-(void)setServerIDToHAPAccessoryTable:(NSMapTable *)arg1 ;
@end
