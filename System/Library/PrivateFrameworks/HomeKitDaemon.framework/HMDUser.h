/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, HMDHome, NSString, HMUserPresenceAuthorization, HAPPairingIdentity, HMDAssistantAccessControl, NSUUID, NSObject, HMDAccount, NSSet;

@interface HMDUser : HMFObject <HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding> {

	NSMutableArray* _relayAccessTokens;
	BOOL _remoteAccessAllowed;
	BOOL _remoteGateway;
	unsigned long long _privilege;
	HMDHome* _home;
	NSString* _userID;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	NSString* _relayIdentifier;
	HAPPairingIdentity* _pairingIdentity;
	NSString* _displayName;
	HMDAssistantAccessControl* _assistantAccessControl;
	NSUUID* _uuid;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                         //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                       //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * encodingRemoteDisplayName; 
@property (retain) HMDAssistantAccessControl * assistantAccessControl;                           //@synthesize assistantAccessControl=_assistantAccessControl - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                              //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSString * userID;                                                    //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) HMUserPresenceAuthorization * presenceAuthStatus;                     //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (nonatomic,copy) NSString * relayIdentifier;                                           //@synthesize relayIdentifier=_relayIdentifier - In the implementation block
@property (assign,getter=isRemoteAccessAllowed,nonatomic) BOOL remoteAccessAllowed;              //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (assign,getter=isRemoteGateway,nonatomic) BOOL remoteGateway;                          //@synthesize remoteGateway=_remoteGateway - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long privilege;                                       //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) HAPPairingIdentity * pairingIdentity;                               //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (copy,readonly) HMDAccount * account; 
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser; 
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) BOOL requiresMakoSupport; 
@property (nonatomic,readonly) BOOL isAdministrator; 
@property (nonatomic,readonly) BOOL isOwner; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(id)destinationWithUserID:(id)arg1 ;
+(id)currentUserWithPrivilege:(unsigned long long)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 ;
+(id)userWithDictionary:(id)arg1 forHomeIdentifier:(id)arg2 ;
+(id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4 ;
+(id)userWithName:(id)arg1 userID:(id)arg2 uuid:(id)arg3 forHomeIdentifier:(id)arg4 publicKey:(id)arg5 homeManager:(id)arg6 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(BOOL)isValid;
-(NSString *)displayName;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)userID;
-(id)dumpState;
-(BOOL)isCurrentUser;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(HAPPairingIdentity *)pairingIdentity;
-(id)pairingUsername;
-(HMDAccount *)account;
-(id)messageDispatcher;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)refreshDisplayName;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(BOOL)isRemoteGateway;
-(id)residentCopy;
-(id)userCopy;
-(id)dictionaryEncoding;
-(void)configureWithHome:(id)arg1 ;
-(void)registerForMessages;
-(BOOL)isRemoteAccessAllowed;
-(id)relayAccessTokenForAccessory:(id)arg1 ;
-(void)_handleAssistantAccessControlUpdate:(id)arg1 ;
-(id)messageDestination;
-(void)addRelayAccessToken:(id)arg1 accessory:(id)arg2 ;
-(BOOL)isOwner;
-(unsigned long long)privilege;
-(void)setPresenceAuthStatus:(HMUserPresenceAuthorization *)arg1 ;
-(BOOL)isAdministrator;
-(id)publicKey;
-(id)initWithUserID:(id)arg1 displayName:(id)arg2 forHomeIdentifier:(id)arg3 uuid:(id)arg4 pairingIdentity:(id)arg5 privilege:(unsigned long long)arg6 ;
-(void)setRemoteAccessAllowed:(BOOL)arg1 ;
-(void)setPrivilege:(unsigned long long)arg1 ;
-(NSString *)relayIdentifier;
-(void)setRelayIdentifier:(NSString *)arg1 ;
-(void)addRelayAccessToken:(id)arg1 ;
-(void)setUserID:(NSString *)arg1 ;
-(id)initWithModelObject:(id)arg1 ;
-(id)relayAccessTokens;
-(void)updateRelayAccessTokens:(id)arg1 ;
-(void)setPairingIdentity:(HAPPairingIdentity *)arg1 ;
-(BOOL)updateAdministrator:(BOOL)arg1 ;
-(BOOL)requiresMakoSupport;
-(void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)migrateAfterCloudMerge:(/*^block*/id)arg1 ;
-(void)removeRelayAccessTokenForAccessory:(id)arg1 ;
-(HMDAssistantAccessControl *)assistantAccessControl;
-(void)removeRelayAccessToken:(id)arg1 ;
-(id)initWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4 privilege:(unsigned long long)arg5 ;
-(void)setAssistantAccessControl:(HMDAssistantAccessControl *)arg1 ;
-(void)setRemoteGateway:(BOOL)arg1 ;
-(unsigned long long)_compatiblePrivilege;
-(NSString *)encodingRemoteDisplayName;
-(void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_fixupRelayAccessTokens;
-(BOOL)updateRemoteAccessAllowed:(BOOL)arg1 ;
-(BOOL)containsRelayAccessToken:(id)arg1 ;
-(BOOL)mergeFromUser:(id)arg1 dataVersion:(long long)arg2 ;
@end

