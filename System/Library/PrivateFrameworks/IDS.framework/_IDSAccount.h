/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class NSDictionary, NSString, NSMutableArray, NSMapTable, NSArray, NSData, NSDate, NSSet;

@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol> {

	NSDictionary* _accountConfig;
	NSString* _serviceToken;
	NSString* _uniqueID;
	NSString* _service;
	NSMutableArray* _devices;
	NSMutableArray* _suppressedDevices;
	id _delegateContext;
	NSMapTable* _delegateToInfo;
	NSMapTable* _registrationDelegateToInfo;
	BOOL _devicesLoaded;
	BOOL _isEnabled;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,retain) NSString * loginID; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) NSString * primaryServiceName; 
@property (nonatomic,readonly) NSString * pushTopic; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,readonly) BOOL isInTransientRegistrationState; 
@property (nonatomic,readonly) BOOL isTransientCloudPairingAccount; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isUserDisabled; 
@property (nonatomic,readonly) BOOL canSend; 
@property (nonatomic,readonly) BOOL isUsableForOuterMessaging; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * nearbyDevices; 
@property (nonatomic,readonly) NSArray * suppressedDevices; 
@property (nonatomic,readonly) NSDictionary * profileInfo; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * aliasStrings; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int registrationStatus; 
@property (assign,setter=_setIsEnabled:,nonatomic) BOOL _isEnabled; 
@property (nonatomic,__weak,readonly) NSArray * registeredURIs; 
@property (nonatomic,__weak,readonly) NSData * registrationCertificate; 
@property (nonatomic,__weak,readonly) NSDate * dateRegistered; 
@property (nonatomic,__weak,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,__weak,readonly) NSData * pushToken; 
@property (nonatomic,__weak,readonly) NSString * regionID; 
@property (nonatomic,__weak,readonly) NSString * regionBasePhoneNumber; 
@property (nonatomic,__weak,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,__weak,readonly) NSString * profileID; 
@property (nonatomic,readonly) NSSet * activeAliases; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUserDisabled;
-(int)registrationStatus;
-(NSString *)uniqueID;
-(void)setAuthToken:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isActive;
-(BOOL)_isEnabled;
-(NSArray *)handles;
-(NSString *)serviceName;
-(NSString *)displayName;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_connect;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2 ;
-(void)account:(id)arg1 dependentDevicesUpdatedUponReconnect:(id)arg2 ;
-(void)account:(id)arg1 localDeviceAdded:(id)arg2 ;
-(void)account:(id)arg1 localDeviceRemoved:(id)arg2 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(NSArray *)suppressedDevices;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(void)_setIsEnabled:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4 ;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4 ;
-(void)setLoginID:(NSString *)arg1 ;
-(BOOL)canSend;
-(NSArray *)nearbyDevices;
-(BOOL)isUsableForOuterMessaging;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(NSString *)regionBasePhoneNumber;
-(NSDictionary *)regionServerContext;
-(NSString *)profileID;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(void)_reloadCachedDevices;
-(NSSet *)activeAliases;
-(void)activateAlias:(id)arg1 ;
-(void)deactivateAlias:(id)arg1 ;
-(void)_loadCachedDevices;
-(BOOL)_isiCloudPairingService;
-(BOOL)isInTransientRegistrationState;
-(BOOL)_isInvisibleAlias:(id)arg1 ;
-(id)registrationInfo;
-(void)_updateDependentDevicesWithDevicesInfo:(id)arg1 ;
-(void)_callDevicesChanged;
-(id)_keychainRegistration;
-(id)_registeredURIs;
-(void)_callRegistrationDelegatesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isTransientCloudPairingAccount;
-(void)_callConnectedDevicesChanged;
-(void)_callCloudConnectedDevicesChanged;
-(NSString *)regionID;
-(NSString *)pushTopic;
-(NSDictionary *)profileInfo;
-(NSArray *)vettedAliases;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)accountInfo;
-(NSArray *)aliases;
-(NSArray *)aliasStrings;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(NSArray *)registeredURIs;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 profileChanged:(id)arg2 ;
-(void)account:(id)arg1 loginChanged:(id)arg2 ;
-(void)account:(id)arg1 displayNameChanged:(id)arg2 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(void)passwordUpdated;
-(NSData *)registrationCertificate;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
-(NSString *)primaryServiceName;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSArray *)devices;
-(void)removeDelegate:(id)arg1 ;
-(NSString *)loginID;
-(int)accountType;
-(NSData *)pushToken;
-(void)setPassword:(id)arg1 ;
-(id)_objectForKey:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)connectedDevices;
@end
