/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, NSArray, NSDate, HMService, HMCharacteristicMetadata, NSNumber, NSObject, HMDelegateCaller;

@interface HMCharacteristic : NSObject <NSSecureCoding, HMObjectMerge> {

	BOOL _notificationEnabled;
	BOOL _requiresDeviceUnlock;
	BOOL _hasAuthorizationData;
	BOOL _notificationEnabledByThisClient;
	NSUUID* _uniqueIdentifier;
	NSString* _characteristicType;
	NSArray* _properties;
	id _value;
	NSDate* _valueUpdatedTime;
	NSDate* _notificationEnabledTime;
	HMService* _service;
	HMCharacteristicMetadata* _metadata;
	NSNumber* _instanceID;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDelegateCaller* _delegateCaller;

}

@property (nonatomic,readonly) NSNumber * instanceID;                                            //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                           //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                         //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                                  //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (assign,nonatomic,__weak) HMService * service;                                         //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * characteristicType;                                        //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,copy) NSArray * properties;                                                 //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL requiresDeviceUnlock;                                          //@synthesize requiresDeviceUnlock=_requiresDeviceUnlock - In the implementation block
@property (nonatomic,copy) id value;                                                             //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL notificationEnabledByThisClient;                               //@synthesize notificationEnabledByThisClient=_notificationEnabledByThisClient - In the implementation block
@property (assign,getter=isNotificationEnabled,nonatomic) BOOL notificationEnabled;              //@synthesize notificationEnabled=_notificationEnabled - In the implementation block
@property (nonatomic,copy) NSDate * valueUpdatedTime;                                            //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
@property (nonatomic,copy) NSDate * notificationEnabledTime;                                     //@synthesize notificationEnabledTime=_notificationEnabledTime - In the implementation block
@property (assign) BOOL hasAuthorizationData;                                                    //@synthesize hasAuthorizationData=_hasAuthorizationData - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) HMCharacteristicMetadata * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_characteristicTypeAsString:(id)arg1 ;
+(id)__localizedDescriptionForCharacteristicType:(id)arg1 ;
+(id)localizedDescriptionForCharacteristicType:(id)arg1 ;
-(HMCharacteristicMetadata *)metadata;
-(HMService *)service;
-(void)setService:(HMService *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)localizedDescription;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setProperties:(NSArray *)arg1 ;
-(NSArray *)properties;
-(NSUUID *)uniqueIdentifier;
-(HMDelegateCaller *)delegateCaller;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)mapHAPProperties:(long long)arg1 ;
-(BOOL)notificationEnabledByThisClient;
-(void)setNotificationEnabledByThisClient:(BOOL)arg1 ;
-(void)setRequiresDeviceUnlock:(BOOL)arg1 ;
-(void)setHasAuthorizationData:(BOOL)arg1 ;
-(void)setValueUpdatedTime:(NSDate *)arg1 ;
-(void)setNotificationEnabled:(BOOL)arg1 ;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_writeValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_readValueWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enableNotification:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAuthorizationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setValueUpdateTime:(id)arg1 ;
-(void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 ;
-(void)_updateValue:(id)arg1 updateTime:(id)arg2 ;
-(void)writeValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readValueWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableNotification:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAuthorizationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_characteristicTypeDescription;
-(BOOL)requiresDeviceUnlock;
-(BOOL)hasAuthorizationData;
-(NSNumber *)instanceID;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)characteristicType;
-(BOOL)isNotificationEnabled;
-(void)setCharacteristicType:(NSString *)arg1 ;
-(void)setNotificationEnabledTime:(NSDate *)arg1 ;
-(NSDate *)notificationEnabledTime;
-(NSDate *)valueUpdatedTime;
@end

