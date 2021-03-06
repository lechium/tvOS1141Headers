/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, HMAccessoryCategory, NSObject, HMFMessageDispatcher;

@interface HMDUnassociatedAccessory : HMFObject <HMFLogging, HMFMessageReceiver, NSSecureCoding> {

	NSUUID* _uuid;
	NSString* _name;
	HMAccessoryCategory* _category;
	NSString* _identifier;
	long long _associationOptions;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _messageDispatcher;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                    //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;                      //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (retain) HMAccessoryCategory * category;                                            //@synthesize category=_category - In the implementation block
@property (setter=setUUID:,copy) NSUUID * uuid;                                               //@synthesize uuid=_uuid - In the implementation block
@property (copy,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable; 
@property (readonly) long long associationOptions;                                            //@synthesize associationOptions=_associationOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(id)otherAccessoryCategory;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(HMAccessoryCategory *)category;
-(NSString *)identifier;
-(id)shortDescription;
-(NSUUID *)uuid;
-(void)setUUID:(id)arg1 ;
-(void)_registerForMessages;
-(BOOL)isReachable;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)messageDestination;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2 ;
-(id)dumpDescription;
-(void)_handleIdentify:(id)arg1 ;
-(long long)associationOptions;
-(void)notifyClientOfUpdatedName:(id)arg1 ;
-(void)notifyClientOfUpdatedCategory:(id)arg1 ;
-(void)identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateCategoryWithCategoryIdentifier:(id)arg1 ;
@end

