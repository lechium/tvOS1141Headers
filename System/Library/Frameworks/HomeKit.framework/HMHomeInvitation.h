/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class HMHome, NSURL, HMHomeInvitationData, NSObject, HMDelegateCaller, NSUUID, NSDate, NSString;

@interface HMHomeInvitation : NSObject <HMObjectMerge, NSSecureCoding> {

	HMHome* _home;
	NSURL* _homeObjectURL;
	HMHomeInvitationData* _invitationData;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDelegateCaller* _delegateCaller;

}

@property (nonatomic,retain) HMHomeInvitationData * invitationData;                   //@synthesize invitationData=_invitationData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                       //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                    //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long invitationState; 
@property (nonatomic,readonly) NSURL * homeObjectURL;                                 //@synthesize homeObjectURL=_homeObjectURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(NSUUID *)uniqueIdentifier;
-(HMDelegateCaller *)delegateCaller;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_updateInvitationState:(long long)arg1 ;
-(id)initWithInvitationData:(id)arg1 home:(id)arg2 ;
-(NSURL *)homeObjectURL;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 invitationData:(id)arg2 ;
-(HMHomeInvitationData *)invitationData;
-(long long)invitationState;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setInvitationData:(HMHomeInvitationData *)arg1 ;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

