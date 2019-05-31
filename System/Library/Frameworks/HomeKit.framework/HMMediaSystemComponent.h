/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_dispatch_queue;
@class HMMediaProfile, HMMediaSystemRole, NSUUID, HMAccessory, NSObject, NSString;

@interface HMMediaSystemComponent : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {

	HMMediaProfile* _mediaProfile;
	HMMediaSystemRole* _role;
	NSUUID* _uniqueIdentifier;
	HMAccessory* _accessory;
	NSUUID* _uuid;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSUUID * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                            //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMMediaProfile * mediaProfile;                    //@synthesize mediaProfile=_mediaProfile - In the implementation block
@property (nonatomic,readonly) HMMediaSystemRole * role;                                //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_invalidate;
-(NSUUID *)uuid;
-(NSUUID *)uniqueIdentifier;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_updateAccessoryReference:(id)arg1 ;
-(id)initWithUUID:(id)arg1 mediaProfile:(id)arg2 role:(id)arg3 ;
-(id)initWithMediaProfile:(id)arg1 role:(id)arg2 ;
-(void)setRole:(HMMediaSystemRole *)arg1 ;
-(HMMediaSystemRole *)role;
-(id)logIdentifier;
-(HMAccessory *)accessory;
-(id)serialize;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMMediaProfile *)mediaProfile;
-(void)setAccessory:(HMAccessory *)arg1 ;
@end

